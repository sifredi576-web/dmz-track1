// Streaming RIFF/WAVE parser. PCM only: stereo, signed 16-bit LE, 48000 Hz.
// Byte stream is supplied by a future shared FAT service; PCM goes to a FIFO.
// No sample clock is generated here. Backpressure holds complete stereo pairs.
module dmz_wav_decoder(
 input clk,reset,start,input [31:0] file_bytes,input [7:0] stream_error,
 input byte_valid,output wire byte_ready,input [7:0] byte_data,
 output reg pcm_valid,input pcm_ready,output reg [31:0] pcm_pair,
 output reg done,output reg [7:0] error,output wire [3:0] status,
 output reg [31:0] sample_pairs,output reg [31:0] declared_pairs);
localparam IDLE=0,RIFF=1,RIFF_CHECK=2,CHUNK=3,CHUNK_CHECK=4,
 FMT=5,FMT_CHECK=6,SKIP=7,PAD=8,DATA=9,DRAIN=10,FINISH=11,FAIL=15;
reg [3:0] state,index;
reg [7:0] header[0:15];
reg [31:0] offset,length,riff_end,remaining;
reg chunk_odd,format_seen;
reg [1:0] channel_byte;
reg [23:0] assembly;
wire consume=byte_valid&&byte_ready;
function automatic [15:0] le16(input integer i);begin le16={header[i+1],header[i]};end endfunction
function automatic [31:0] le32(input integer i);begin le32={header[i+3],header[i+2],header[i+1],header[i]};end endfunction
wire [32:0] riff_length={1'b0,le32(4)}+33'd8;
wire [32:0] chunk_end={1'b0,offset}+{1'b0,le32(4)}+{32'd0,header[4][0]};
assign status=state;
assign byte_ready=(state==RIFF||state==CHUNK||state==FMT||state==SKIP||state==PAD||
 (state==DATA&&(!pcm_valid||pcm_ready))) && error==0 && !start;
always @(posedge clk) begin
 if(reset) begin
  state<=IDLE;index<=0;offset<=0;length<=0;riff_end<=0;remaining<=0;
  chunk_odd<=0;format_seen<=0;channel_byte<=0;assembly<=0;
  pcm_valid<=0;pcm_pair<=0;done<=0;error<=0;sample_pairs<=0;declared_pairs<=0;
 end else if(start) begin
  state<=RIFF;index<=0;offset<=0;length<=file_bytes;riff_end<=0;remaining<=0;
  chunk_odd<=0;format_seen<=0;channel_byte<=0;assembly<=0;
  pcm_valid<=0;pcm_pair<=0;done<=0;error<=0;sample_pairs<=0;declared_pairs<=0;
  if(file_bytes<12) begin state<=FAIL;error<=2;end
 end else begin
  if(pcm_valid&&pcm_ready) pcm_valid<=0;
  if(consume) offset<=offset+1'b1;
  if(stream_error!=0&&state!=IDLE&&state!=FINISH&&state!=FAIL) begin error<=8'h80|stream_error;state<=FAIL;pcm_valid<=0;end
  else case(state)
   IDLE,FINISH,FAIL:begin end
   RIFF:if(consume) begin header[index]<=byte_data;if(index==11) begin index<=0;state<=RIFF_CHECK;end else index<=index+1'b1;end
   RIFF_CHECK:begin
    if(le32(0)!=32'h46464952||le32(8)!=32'h45564157) begin error<=1;state<=FAIL;end
    else if(riff_length<12||riff_length>{1'b0,length}) begin error<=2;state<=FAIL;end
    else begin riff_end<=riff_length[31:0];index<=0;state<=CHUNK;end
   end
   CHUNK:begin
    if(index==0&&({1'b0,offset}+33'd8)>{1'b0,riff_end}) begin error<=4;state<=FAIL;end
    else if(consume) begin header[index]<=byte_data;if(index==7) begin index<=0;state<=CHUNK_CHECK;end else index<=index+1'b1;end
   end
   CHUNK_CHECK:begin
    remaining<=le32(4);chunk_odd<=header[4][0];index<=0;
    if(chunk_end>{1'b0,riff_end}) begin error<=4;state<=FAIL;end
    else if(le32(0)==32'h20746d66) begin
     if(le32(4)<16||format_seen) begin error<=3;state<=FAIL;end
     else state<=FMT;
    end else if(le32(0)==32'h61746164) begin
     if(!format_seen) begin error<=6;state<=FAIL;end
     else if(le32(4)==0||header[4][1:0]!=0) begin error<=7;state<=FAIL;end
     else begin declared_pairs<=le32(4)>>2;channel_byte<=0;state<=DATA;end
    end else if(le32(4)==0) state<=CHUNK;
    else state<=SKIP;
   end
   FMT:if(consume) begin
    header[index]<=byte_data;remaining<=remaining-1'b1;
    if(index==15) begin index<=0;state<=FMT_CHECK;end else index<=index+1'b1;
   end
   FMT_CHECK:begin
    if(le16(0)!=1||le16(2)!=2||le32(4)!=48000||le32(8)!=192000||le16(12)!=4||le16(14)!=16) begin error<=3;state<=FAIL;end
    else begin format_seen<=1;state<=remaining!=0?SKIP:chunk_odd?PAD:CHUNK;end
   end
   SKIP:if(consume) begin remaining<=remaining-1'b1;if(remaining==1) begin index<=0;state<=chunk_odd?PAD:CHUNK;end end
   PAD:if(consume) begin index<=0;state<=CHUNK;end
   DATA:if(consume) begin
    remaining<=remaining-1'b1;channel_byte<=channel_byte+1'b1;
    case(channel_byte)
     0:assembly[7:0]<=byte_data;
     1:assembly[15:8]<=byte_data;
     2:assembly[23:16]<=byte_data;
     3:begin pcm_pair<={byte_data,assembly};pcm_valid<=1;sample_pairs<=sample_pairs+1'b1;end
    endcase
    if(remaining==1) state<=DRAIN;
   end
   DRAIN:if(!pcm_valid||pcm_ready) begin done<=1;state<=FINISH;end
   default:begin error<=255;state<=FAIL;pcm_valid<=0;end
  endcase
 end
end
endmodule
