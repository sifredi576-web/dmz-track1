// Reusable file context: one CRC-verified sector buffer, byte ready/valid,
// independent FAT16/32 cluster-chain walker. Cancel drains any issued SD read.
module dmz_fat_stream(input clk,reset,start,cancel,
 input fat16,input [7:0] spc,input [31:0] fat_base,data_base,first_cluster,file_bytes,
 output reg sd_start,output reg [31:0] sd_lba,input sd_ready,sd_done,
 input sd_byte_valid,input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output wire byte_valid,input byte_ready,output wire [7:0] byte_data,output wire byte_last,
 output wire busy,output reg done,output reg [7:0] error,output reg [31:0] bytes_read);
localparam IDLE=0,PREPARE=1,ISSUE=2,WAIT_DATA=3,STREAM=4,FAT_ISSUE=5,FAT_WAIT=6,FAT_CHECK=7,DRAIN=8,FINISH=9,FAIL=15;
reg [3:0] state;
reg [7:0] cache[0:511];reg [8:0] pos;
reg [31:0] cluster,remaining,cluster_lba,fat_cached;
reg [7:0] sector_index;
wire [8:0] fat_offset=fat16?{cluster[7:0],1'b0}:{cluster[6:0],2'b00};
wire [31:0] next_cluster=fat16?{16'd0,fat_cached[15:0]}:fat_cached&32'h0fffffff;
assign byte_valid=state==STREAM&&remaining!=0&&!cancel;
assign byte_data=cache[pos];assign byte_last=remaining==1;
assign busy=state!=IDLE&&state!=FINISH&&state!=FAIL;
always @(posedge clk) begin
 if(sd_byte_valid) begin
  cache[sd_byte_index]<=sd_byte_data;
  if(sd_byte_index==fat_offset) fat_cached[7:0]<=sd_byte_data;
  if(sd_byte_index==fat_offset+1) fat_cached[15:8]<=sd_byte_data;
  if(sd_byte_index==fat_offset+2) fat_cached[23:16]<=sd_byte_data;
  if(sd_byte_index==fat_offset+3) fat_cached[31:24]<=sd_byte_data;
 end
 if(reset) begin state<=IDLE;sd_start<=0;sd_lba<=0;done<=0;error<=0;bytes_read<=0;pos<=0;cluster<=0;remaining<=0;cluster_lba<=0;fat_cached<=0;sector_index<=0;end
 else begin
  sd_start<=0;
  if(start&&!busy) begin
   cluster<=first_cluster;remaining<=file_bytes;sector_index<=0;pos<=0;done<=0;error<=0;bytes_read<=0;
   if(first_cluster<2||spc==0||file_bytes==0) begin error<=7;state<=FAIL;end else state<=PREPARE;
  end else if(sd_error!=0&&busy) begin error<=8'h80|sd_error;state<=FAIL;end
  else if(cancel&&busy) begin
   if(state==WAIT_DATA||state==FAT_WAIT||sd_start) begin if(sd_done) state<=IDLE;else state<=DRAIN;end
   else if(state!=DRAIN) state<=IDLE;
   else if(sd_done) state<=IDLE;
  end else case(state)
   IDLE,FINISH,FAIL:begin end
   PREPARE:begin cluster_lba<=data_base+(cluster-2)*spc;state<=ISSUE;end
   ISSUE:if(sd_ready) begin sd_lba<=cluster_lba+sector_index;sd_start<=1;state<=WAIT_DATA;end
   WAIT_DATA:if(sd_done) begin pos<=0;state<=STREAM;end
   STREAM:if(byte_valid&&byte_ready) begin
    bytes_read<=bytes_read+1'b1;remaining<=remaining-1'b1;
    if(remaining==1) begin done<=1;state<=FINISH;end
    else if(pos==511) begin
     pos<=0;
     if(sector_index+1<spc) begin sector_index<=sector_index+1'b1;state<=ISSUE;end
     else state<=FAT_ISSUE;
    end else pos<=pos+1'b1;
   end
   FAT_ISSUE:if(sd_ready) begin sd_lba<=fat_base+(fat16?(cluster>>8):(cluster>>7));sd_start<=1;state<=FAT_WAIT;end
   FAT_WAIT:if(sd_done) state<=FAT_CHECK;
   FAT_CHECK:if(next_cluster<2||(fat16?next_cluster>=65520:next_cluster>=32'h0ffffff0)) begin error<=7;state<=FAIL;end
    else begin cluster<=next_cluster;sector_index<=0;state<=PREPARE;end
   DRAIN:if(sd_done) state<=IDLE;
   default:begin error<=255;state<=FAIL;end
  endcase
 end
end
endmodule
