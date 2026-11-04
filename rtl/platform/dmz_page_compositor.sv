// Compose independent A1R5G5B5 UI planes into the BACK framebuffer during BMP load.
// A one-pixel source cache bounds register cost; aligned BL8 reads still arbitrate below video.
// Dynamic focus/answer/score remains a separate pixel overlay, never baked here.
module dmz_page_compositor #(parameter HD=0, AW=HD?19:18)(input clk,reset,enabled,page_begin,input [3:0] widget_count,
 output reg [2:0] widget_index,input [98:0] widget,
 input in_valid,input [AW-1:0] in_addr,input [255:0] in_data,input in_last,
 output wire in_ready,output reg in_ack,
 output wire out_valid,output wire [AW-1:0] out_addr,output wire [255:0] out_data,output wire out_last,
 input out_ready,out_ack,
 output wire mem_valid,output wire [20:0] mem_addr,input mem_ready,mem_response,input [255:0] mem_data,
 output wire busy);
localparam IDLE=0,SETUP=1,WIDGET_WAIT=2,WIDGET_CHECK=3,PIXEL=4,READ_ACCEPT=5,READ_RESPONSE=6,OUTPUT=7,ACK=8,WIDGET_CAPTURE=9;
reg [98:0] widget_q;
always @(posedge clk)if(state==WIDGET_CAPTURE)widget_q<=widget;
reg [3:0] state;reg [1:0] layer;reg plane;
reg [9:0] x,virtual_x,virtual_pixel;reg [8:0] y;
reg [1:0] burst_phase,pixel_phase,row_phase;reg first;
wire [9:0] first_x=HD?virtual_x:x,last_x=HD?virtual_x+10'd10:x+10'd15;
reg [AW-1:0] address,previous_addr;reg [255:0] buffer;reg final_burst;
reg [15:0] pixel_write_mask,pixel_write_data;
wire pixel_write_pending=|pixel_write_mask;
reg [3:0] p;reg [15:0] row_offset;
reg [9:0] wx;reg [8:0] wy,ww;reg [6:0] wh;reg dim;
reg [19:0] base,label,cache_tag;reg cache_valid;reg [15:0] cache;
wire [9:0] px=HD?virtual_pixel:x+{6'd0,p};
wire pixel_inside=px>=wx&&{1'b0,px}<{1'b0,wx}+{2'd0,ww};
wire [15:0] row_pixel=row_offset+16'(px-wx);
wire [20:0] source_byte={1'b0,(plane?label:base)}+({5'd0,row_pixel}<<1);
wire [19:0] wanted_tag=source_byte[19:0];
wire [15:0] rgba=cache;
wire [15:0] rgb565={rgba[14:10],rgba[9:5],rgba[9],rgba[4:0]};
wire [15:0] shaded={1'b0,rgb565[15:12],1'b0,rgb565[10:6],1'b0,rgb565[4:1]};
assign busy=enabled&&state!=IDLE;
assign in_ready=enabled?(state==IDLE):out_ready;
assign out_valid=enabled?(state==OUTPUT&&!pixel_write_pending):in_valid;
assign out_addr=enabled?address:in_addr;assign out_data=enabled?buffer:in_data;assign out_last=enabled?final_burst:in_last;
assign mem_valid=enabled&&state==READ_ACCEPT;
assign mem_addr=(HD?21'h100000:21'h080000)+{3'd0,wanted_tag[19:5],3'd0};
task advance;
 begin
  if({1'b0,widget_index}+1<widget_count)begin widget_index<=widget_index+1'b1;state<=WIDGET_WAIT;end
  else if(layer!=3)begin widget_index<=0;layer<=layer+1'b1;state<=WIDGET_WAIT;end
  else state<=OUTPUT;
 end
endtask
// Each group of three physical pixels maps to two logical UI pixels.
// Counters replace constant multipliers and preserve the original UI coordinates.
task next_pixel;
 begin
  if(p==15)begin
   if(!plane)begin plane<=1;p<=0;virtual_pixel<=virtual_x;pixel_phase<=burst_phase;end
   else advance();
  end else begin
   p<=p+1'b1;
   pixel_phase<=pixel_phase==2?0:pixel_phase+1'b1;
   if(pixel_phase!=0)virtual_pixel<=virtual_pixel+1'b1;
  end
 end
endtask
// Decode and register the pixel write before driving the 256-bit burst buffer.
// Drain the final write before presenting the burst to the downstream consumer.
always @(posedge clk)begin
 if(reset||page_begin||!enabled)pixel_write_mask<=0;
 else begin
  pixel_write_mask<=0;
  if(state==PIXEL&&pixel_inside&&cache_valid&&cache_tag==wanted_tag&&rgba[15])begin
   pixel_write_mask<=16'h0001<<p;pixel_write_data<=dim?shaded:rgb565;
  end
 end
end
always @(posedge clk)begin
 if(!reset&&!page_begin&&enabled)begin
  if(state==IDLE&&in_valid)buffer<=in_data;
  else for(integer lane=0;lane<16;lane=lane+1)
   if(pixel_write_mask[lane])buffer[lane*16+:16]<=pixel_write_data;
  if(state==READ_RESPONSE&&mem_response)cache<=mem_data[source_byte[4:1]*16+:16];
 end
end
always @(posedge clk)begin
 if(reset||page_begin)begin state<=IDLE;first<=1;x<=0;y<=0;virtual_x<=0;virtual_pixel<=0;burst_phase<=0;pixel_phase<=0;row_phase<=0;address<=0;previous_addr<=0;
  final_burst<=0;widget_index<=0;layer<=0;plane<=0;p<=0;row_offset<=0;in_ack<=0;
  wx<=0;wy<=0;ww<=0;wh<=0;dim<=0;base<=0;label<=0;cache_tag<=0;cache_valid<=0;
 end else begin
  in_ack<=enabled?0:out_ack;
  if(!enabled)state<=IDLE;
  else case(state)
   IDLE:if(in_valid)begin
    address<=in_addr;previous_addr<=in_addr;final_burst<=in_last;
    if(first)begin x<=0;virtual_x<=0;burst_phase<=0;y<=in_addr==0?0:479;row_phase<=in_addr==0?0:2;first<=0;end
    else if(in_addr==previous_addr+8&&x<(HD?944:624))begin x<=x+16;virtual_x<=virtual_x+(burst_phase==0?10:11);burst_phase<=burst_phase==2?0:burst_phase+1'b1;end
    else begin
     x<=0;virtual_x<=0;burst_phase<=0;
     if(!HD)y<=in_addr>previous_addr?y+1'b1:y-1'b1;
     else if(in_addr>previous_addr)begin row_phase<=row_phase==2?0:row_phase+1'b1;if(row_phase!=0)y<=y+1'b1;end
     else begin row_phase<=row_phase==0?2:row_phase-1'b1;if(row_phase!=1)y<=y-1'b1;end
    end
    widget_index<=0;layer<=0;state<=SETUP;
   end
   SETUP:state<=widget_count==0?OUTPUT:WIDGET_WAIT;
   WIDGET_WAIT:state<=WIDGET_CAPTURE;
   WIDGET_CAPTURE:state<=WIDGET_CHECK;
   WIDGET_CHECK:begin
    if(!widget_q[38]||widget_q[36:35]!=layer||y<widget_q[18:10]||
       {1'b0,y}>={1'b0,widget_q[18:10]}+{3'd0,widget_q[34:28]}||
       last_x<widget_q[9:0]||{1'b0,first_x}>={1'b0,widget_q[9:0]}+{2'd0,widget_q[27:19]})advance();
    else begin row_offset<=16'(y-widget_q[18:10])*{7'd0,widget_q[27:19]};
     wx<=widget_q[9:0];wy<=widget_q[18:10];ww<=widget_q[27:19];wh<=widget_q[34:28];
     dim<=!widget_q[37];base<=widget_q[78:59];label<=widget_q[98:79];p<=0;plane<=0;virtual_pixel<=virtual_x;pixel_phase<=burst_phase;state<=PIXEL;end
   end
   PIXEL:if(!pixel_inside)begin
    next_pixel();
   end else if(!cache_valid||cache_tag!=wanted_tag)state<=READ_ACCEPT;
   else begin

    next_pixel();
   end
   READ_ACCEPT:if(mem_ready)state<=READ_RESPONSE;
   READ_RESPONSE:if(mem_response)begin cache_tag<=wanted_tag;cache_valid<=1;state<=PIXEL;end
   OUTPUT:if(out_ready&&!pixel_write_pending)state<=ACK;
   ACK:if(out_ack)begin in_ack<=1;state<=IDLE;end
   default:state<=IDLE;
  endcase
 end
end
endmodule
