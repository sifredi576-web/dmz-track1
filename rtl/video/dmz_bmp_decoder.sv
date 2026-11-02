// Streaming BMP + single source-row cache + aspect-fit nearest-neighbor scaler.
// Output always contains all 640x480 RGB565 pixels, including black letterbox.
module dmz_bmp_decoder(input clk,reset,start,input [31:0] file_bytes,input [7:0] stream_error,
 input byte_valid,output wire byte_ready,input [7:0] byte_data,
 output wire load_valid,output reg [17:0] load_addr,output reg [255:0] load_data,
 output reg load_last,input load_ready,load_ack,
 output reg done,output reg [7:0] error,output wire [7:0] status,output reg [31:0] pixels_loaded);
localparam IDLE=0,HEADER=1,CHECK=2,DIV_START=3,DIV_WAIT=4,INIT=5,PARSE=6,
 LINE_END=7,ROW_START=8,FETCH=9,PACK=10,X_STEP=11,ROW_END=12,Y_STEP=13,
 NEXT_SOURCE=14,EMIT=15,ACK=16,FINISH=17,FAIL=31;
reg [4:0] state,after_ack;reg [7:0] header[0:53];
reg [31:0] position,length,offset;reg [10:0] width,height,source_x,source_y,wanted_y,sample_x;
reg [9:0] draw_w,draw_h,left_pad,first_pad,out_x,dest_row,drawn_rows;
reg [11:0] x_error,y_error;
reg [1:0] channel,padding,pad_left;reg [7:0] blue,green;
reg rgba,top_down,width_limited,blank_row,input_finished;
reg [3:0] burst_pixel;reg [15:0] low_pixel;reg [15:0] row_q;wire [15:0] sample565=inside_x?row_q:16'd0;
reg [15:0] row_cache[0:2047]; /* fehdl force_ram=1, ram_style="bram" */
// Source and scaled reads share this invertible physical row address map.
function automatic [10:0] row_addr(input [10:0] a);
 reg [10:0] g;begin g=(a>>1)^a;g[10]=g[10]^g[0];row_addr=g;end
endfunction
function automatic [15:0] h16(input integer i);h16={header[i+1],header[i]};endfunction
function automatic [31:0] h32(input integer i);h32={header[i+3],header[i+2],header[i+1],header[i]};endfunction
wire [31:0] abs_height=header[25][7]?(~h32(22)+1'b1):h32(22);
wire [10:0] raw_width=11'(h32(18));
wire [12:0] row_bytes=(h16(28)==32)?({2'd0,raw_width}<<2):({2'd0,raw_width}+({2'd0,raw_width}<<1));
wire [12:0] stride=(row_bytes+13'd3)&13'h1ffc;
reg [32:0] required_end;
always @(posedge clk) if(reset) required_end<=0;else required_end<={1'b0,h32(10)}+({20'd0,stride}*{22'd0,abs_height[10:0]});
wire fits_width=({21'd0,raw_width}*32'd480 >= {21'd0,abs_height[10:0]}*32'd640);
wire divider_done;wire [31:0] scaled;
dmz_udiv32 divider(.clk(clk),.reset(reset),.start(state==DIV_START),
 .numerator(width_limited?({21'd0,height}*32'd640):({21'd0,width}*32'd480)),
 .denominator(width_limited?{21'd0,width}:{21'd0,height}),.busy(),.done(divider_done),.quotient(scaled));
wire [9:0] actual_y=top_down?dest_row:10'd479-dest_row;
wire inside_x=!blank_row&&out_x>=left_pad&&out_x<left_pad+draw_w;
wire [15:0] incoming={byte_data[7:3],green[7:2],blue[7:3]};
assign byte_ready=(state==HEADER||state==PARSE)&&!start;
assign load_valid=state==EMIT;assign status={3'd0,state};
always @(posedge clk) begin
 row_q<=row_cache[row_addr(sample_x)];
 if(!reset&&!start&&state==PARSE&&byte_valid&&position>=offset&&pad_left==0&&channel==2)
  row_cache[row_addr(source_x)]<=incoming;
end
always @(posedge clk) begin
 if(reset||start) begin
  state<=start?HEADER:IDLE;after_ack<=0;position<=0;length<=file_bytes;offset<=0;
  width<=0;height<=0;source_x<=0;source_y<=0;wanted_y<=0;sample_x<=0;
  draw_w<=0;draw_h<=0;left_pad<=0;first_pad<=0;out_x<=0;dest_row<=0;drawn_rows<=0;
  x_error<=0;y_error<=0;channel<=0;padding<=0;pad_left<=0;blue<=0;green<=0;
  rgba<=0;top_down<=0;width_limited<=0;blank_row<=0;input_finished<=0;burst_pixel<=0;
  low_pixel<=0;load_addr<=0;load_data<=0;load_last<=0;done<=0;error<=0;pixels_loaded<=0;
  if(start&&file_bytes<54) begin error<=10;state<=FAIL;end
 end else if(stream_error!=0&&state!=IDLE&&state!=FINISH) begin error<=stream_error;state<=FAIL;end
 else case(state)
  IDLE,FINISH,FAIL:begin end
  HEADER:if(byte_valid) begin header[position[5:0]]<=byte_data;position<=position+1'b1;if(position==53) state<=CHECK;end
  CHECK:if(h16(0)!=16'h4d42||h32(14)<40||h16(26)!=1||h32(30)!=0) begin error<=8;state<=FAIL;end
   else if(h32(18)<1||h32(18)>1920||abs_height<1||abs_height>1080||(h16(28)!=24&&h16(28)!=32)) begin error<=9;state<=FAIL;end
   else if(h32(10)<54||h32(10)>1048576||{1'b0,length}<required_end) begin error<=10;state<=FAIL;end
   else begin
    offset<=h32(10);width<=11'(h32(18));height<=11'(abs_height);rgba<=h16(28)==32;top_down<=header[25][7];
    padding<=2'(stride-h32(18)*(h16(28)==32?4:3));width_limited<=fits_width;state<=DIV_START;
   end
  DIV_START:state<=DIV_WAIT;
  DIV_WAIT:if(divider_done) begin draw_w<=width_limited?10'd640:(scaled==0?10'd1:10'(scaled));draw_h<=width_limited?(scaled==0?10'd1:10'(scaled)):10'd480;state<=INIT;end
  INIT:begin
   left_pad<=(640-draw_w)>>1;
   first_pad<=top_down?((480-draw_h)>>1):(480-draw_h-((480-draw_h)>>1));
   if((top_down?((480-draw_h)>>1):(480-draw_h-((480-draw_h)>>1)))!=0) begin blank_row<=1;state<=ROW_START;end else state<=PARSE;
  end
  PARSE:if(byte_valid) begin
   position<=position+1'b1;
   if(position>=length) begin error<=7;state<=FAIL;end
   else if(position>=offset) begin
    if(pad_left!=0) begin pad_left<=pad_left-1'b1;if(pad_left==1) state<=LINE_END;end
    else case(channel)
     0:begin blue<=byte_data;channel<=1;end
     1:begin green<=byte_data;channel<=2;end
     2:begin
      channel<=rgba?3:0;
      if(!rgba) begin
       if(source_x+1==width) begin source_x<=0;pad_left<=padding;if(padding==0) state<=LINE_END;end
       else source_x<=source_x+1'b1;
      end
     end
     3:begin channel<=0;
      if(source_x+1==width) begin source_x<=0;pad_left<=padding;if(padding==0) state<=LINE_END;end
      else source_x<=source_x+1'b1;
     end
    endcase
   end
  end
  LINE_END:if(drawn_rows<draw_h&&source_y==wanted_y) begin blank_row<=0;state<=ROW_START;end else state<=NEXT_SOURCE;
  ROW_START:begin out_x<=0;sample_x<=0;x_error<=0;burst_pixel<=0;load_addr<=18'(({22'd0,actual_y}<<8)+({22'd0,actual_y}<<6));state<=FETCH;end
  FETCH:state<=PACK;
  PACK:begin
   pixels_loaded<=pixels_loaded+1'b1;
   if(!burst_pixel[0]) low_pixel<=sample565;else load_data[{burst_pixel[3:1],5'b00000}+:32]<={sample565,low_pixel};
   out_x<=out_x+1'b1;burst_pixel<=burst_pixel+1'b1;
   if(inside_x) x_error<=x_error+width;
   if(burst_pixel==15) begin
    after_ack<=out_x==639?ROW_END:(inside_x?X_STEP:FETCH);
    // Hold the final burst until the complete source stream has been checked.
    if(dest_row==479&&out_x==639&&!input_finished) begin dest_row<=480;state<=NEXT_SOURCE;end
    else begin load_last<=dest_row==479&&out_x==639;state<=EMIT;end
   end else state<=inside_x?X_STEP:FETCH;
  end
  X_STEP:if(x_error>=draw_w) begin x_error<=x_error-draw_w;sample_x<=sample_x+1'b1;end else state<=FETCH;
  EMIT:if(load_ready) state<=ACK;
  ACK:if(load_ack) begin
   if(load_last) begin done<=1;state<=FINISH;end
   else begin load_addr<=load_addr+8;state<=after_ack;end
  end
  ROW_END:begin
   dest_row<=dest_row+1'b1;
   if(blank_row) begin
    if(input_finished) state<=ROW_START;
    else if(dest_row+1<first_pad) state<=ROW_START;else state<=PARSE;
   end else begin
    drawn_rows<=drawn_rows+1'b1;
    if(drawn_rows+1>=draw_h) state<=NEXT_SOURCE;
    else begin y_error<=y_error+height;state<=Y_STEP;end
   end
  end
  Y_STEP:if(y_error>=draw_h) begin y_error<=y_error-draw_h;wanted_y<=wanted_y+1'b1;end
   else if(wanted_y==source_y) state<=ROW_START;else state<=NEXT_SOURCE;
  NEXT_SOURCE:if(source_y+1<height) begin source_y<=source_y+1'b1;state<=PARSE;end
   else begin
    input_finished<=1;
    if(dest_row==480) begin load_last<=1;state<=EMIT;end
    else begin blank_row<=1;state<=ROW_START;end
   end
  default:begin error<=255;state<=FAIL;end
 endcase
end
endmodule
