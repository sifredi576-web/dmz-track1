// Mount once; index up to 32 BMP files plus the first WAV, in root-directory order.
module dmz_fat_catalog(input clk,reset,enable,
 output reg sd_start,output reg [31:0] sd_lba,input sd_ready,sd_done,
 input sd_byte_valid,input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output reg ready,output reg [7:0] error,output wire [7:0] status,
 output reg fat16,output reg [7:0] spc,output reg [31:0] fat_base,data_base,
 input [4:0] image_index,output reg [5:0] image_count,
 output reg [31:0] image_cluster,image_bytes,output reg [63:0] image_name,
 input [3:0] wav_index,output reg [4:0] wav_count,
 input [5:0] browse_query,output reg [5:0] browse_tag,output reg [63:0] browse_name,output reg browse_valid,
 output reg wav_found,output reg [31:0] wav_cluster,wav_bytes);
localparam START=0,WAIT_SD=1,SECTOR0=2,BOOT=3,NEXT_DIR=4,FILL=5,ENTRY=6,ADVANCE=7,FAT=8,FINISH=9,DONE=10,FAIL=63;
reg [5:0] state,after_read;
reg [7:0] cache[0:511],header[0:63],entry[0:31];
reg [31:0] clusters[0:31],sizes[0:31];reg [63:0] names[0:31];
reg [31:0] wav_clusters[0:15],wav_sizes[0:15];reg [63:0] wav_names[0:15];
reg [15:0] signature;reg [31:0] partition_start,volume_base,root_base,root_sectors,root_index,cluster,fat_cached;
reg fixed_root;reg [7:0] cluster_sector;reg [15:0] directory_sectors;
reg [8:0] dir_pos;reg [4:0] entry_pos;
wire [8:0] cache_addr=dir_pos+{4'd0,entry_pos};
wire [8:0] fat_offset=fat16?{cluster[7:0],1'b0}:{cluster[6:0],2'b00};
wire [31:0] next_cluster=fat16?{16'd0,fat_cached[15:0]}:fat_cached&32'h0fffffff;
function automatic [15:0] h16(input integer i);h16={header[i+1],header[i]};endfunction
function automatic [31:0] h32(input integer i);h32={header[i+3],header[i+2],header[i+1],header[i]};endfunction
function automatic [15:0] e16(input integer i);e16={entry[i+1],entry[i]};endfunction
function automatic [31:0] e32(input integer i);e32={entry[i+3],entry[i+2],entry[i+1],entry[i]};endfunction
function automatic [7:0] upper(input [7:0] c);upper=(c>=97&&c<=122)?c-32:c;endfunction
wire regular_file=entry[0]!=8'he5&&(entry[11]&8'h18)==0&&entry[11]!=8'h0f;
wire [31:0] entry_cluster=fat16?{16'd0,e16(26)}:{e16(20),e16(26)};
assign status={2'd0,state};
task sector(input [31:0] lba,input [5:0] next_state);
 begin sd_lba<=lba;sd_start<=1;after_read<=next_state;state<=WAIT_SD;end
endtask
integer i;
always @(posedge clk) begin
 browse_tag<=browse_query;
 browse_valid<=ready&&(browse_query[5]?({1'b0,browse_query[4:0]}<{1'b0,wav_count}):({1'b0,browse_query[4:0]}<image_count));
 if(browse_query[5]) browse_name<=wav_names[browse_query[3:0]];
 else browse_name<=names[browse_query[4:0]];
 if(reset) begin wav_cluster<=0;wav_bytes<=0;browse_valid<=0;browse_tag<=0;end
 else if({1'b0,wav_index}<wav_count) begin wav_cluster<=wav_clusters[wav_index];wav_bytes<=wav_sizes[wav_index];end
 if(reset) begin image_cluster<=0;image_bytes<=0;image_name<=0;end
 else if({1'b0,image_index}<image_count) begin image_cluster<=clusters[image_index];image_bytes<=sizes[image_index];image_name<=names[image_index];end
 else begin image_cluster<=0;image_bytes<=0;image_name<=0;end
 if(sd_byte_valid) begin
  cache[sd_byte_index]<=sd_byte_data;
  if(sd_byte_index<64) header[sd_byte_index[5:0]]<=sd_byte_data;
  if(sd_byte_index==510) signature[7:0]<=sd_byte_data;
  if(sd_byte_index==511) signature[15:8]<=sd_byte_data;
  if(sd_byte_index>=454&&sd_byte_index<=457) partition_start[(sd_byte_index-454)*8+:8]<=sd_byte_data;
  if(sd_byte_index==fat_offset) fat_cached[7:0]<=sd_byte_data;
  if(sd_byte_index==fat_offset+1) fat_cached[15:8]<=sd_byte_data;
  if(sd_byte_index==fat_offset+2) fat_cached[23:16]<=sd_byte_data;
  if(sd_byte_index==fat_offset+3) fat_cached[31:24]<=sd_byte_data;
 end
 if(reset) begin
  state<=START;after_read<=0;sd_start<=0;sd_lba<=0;ready<=0;error<=0;fat16<=0;spc<=0;fat_base<=0;data_base<=0;
  volume_base<=0;root_base<=0;root_sectors<=0;root_index<=0;cluster<=0;fat_cached<=0;signature<=0;partition_start<=0;
  fixed_root<=0;cluster_sector<=0;directory_sectors<=0;dir_pos<=0;entry_pos<=0;image_count<=0;wav_found<=0;wav_count<=0;
 end else begin
  sd_start<=0;
  if(sd_error!=0&&state!=DONE) begin error<=8'h80|sd_error;state<=FAIL;end
  else case(state)
   START:if(enable&&sd_ready) sector(0,SECTOR0);
   WAIT_SD:if(sd_done) state<=after_read;
   SECTOR0:if(signature!=16'haa55) begin error<=1;state<=FAIL;end
    else if(h16(11)==512&&header[13]!=0) begin volume_base<=0;state<=BOOT;end
    else if(partition_start!=0) begin volume_base<=partition_start;sector(partition_start,BOOT);end
    else begin error<=2;state<=FAIL;end
   BOOT:if(signature!=16'haa55||h16(11)!=512||header[13]==0||(header[13]&(header[13]-1'b1))!=0||h16(14)==0||header[16]==0) begin error<=3;state<=FAIL;end
    else begin
     fat16<=h16(22)!=0;spc<=header[13];fat_base<=volume_base+{16'd0,h16(14)};
     root_sectors<=({16'd0,h16(17)}+15)>>4;
     root_base<=volume_base+{16'd0,h16(14)}+header[16]*(h16(22)!=0?{16'd0,h16(22)}:h32(36));
     data_base<=volume_base+{16'd0,h16(14)}+header[16]*(h16(22)!=0?{16'd0,h16(22)}:h32(36))+(({16'd0,h16(17)}+15)>>4);
     fixed_root<=h16(22)!=0;cluster<=h16(22)!=0?0:(h32(44)&32'h0fffffff);root_index<=0;cluster_sector<=0;state<=NEXT_DIR;
    end
   NEXT_DIR:begin
    dir_pos<=0;entry_pos<=0;directory_sectors<=directory_sectors+1'b1;
    if(directory_sectors==4095) begin error<=4;state<=FAIL;end
    else if(fixed_root) begin if(root_index>=root_sectors) state<=FINISH;else sector(root_base+root_index,FILL);end
    else if(cluster<2) begin error<=6;state<=FAIL;end
    else sector(data_base+(cluster-2)*spc+cluster_sector,FILL);
   end
   FILL:begin entry[entry_pos]<=cache[cache_addr];if(entry_pos==31) begin entry_pos<=0;state<=ENTRY;end else entry_pos<=entry_pos+1'b1;end
   ENTRY:if(entry[0]==0) state<=FINISH;
    else begin
     if(regular_file) begin
      if(upper(entry[8])=="B"&&upper(entry[9])=="M"&&upper(entry[10])=="P"&&image_count<32) begin
       clusters[image_count[4:0]]<=entry_cluster;sizes[image_count[4:0]]<=e32(28);
       for(i=0;i<8;i=i+1) names[image_count[4:0]][i*8+:8]<=entry[i];
       image_count<=image_count+1'b1;
      end
      if(upper(entry[8])=="W"&&upper(entry[9])=="A"&&upper(entry[10])=="V"&&wav_count<16) begin
       wav_found<=1;wav_count<=wav_count+1'b1;
       wav_clusters[wav_count[3:0]]<=entry_cluster;wav_sizes[wav_count[3:0]]<=e32(28);
       for(i=0;i<8;i=i+1) wav_names[wav_count[3:0]][i*8+:8]<=entry[i];
      end
     end
     state<=ADVANCE;
    end
   ADVANCE:if(dir_pos!=480) begin dir_pos<=dir_pos+32;entry_pos<=0;state<=FILL;end
    else if(fixed_root) begin root_index<=root_index+1'b1;state<=NEXT_DIR;end
    else if(cluster_sector+1<spc) begin cluster_sector<=cluster_sector+1'b1;state<=NEXT_DIR;end
    else sector(fat_base+(fat16?(cluster>>8):(cluster>>7)),FAT);
   FAT:if(fat16?next_cluster>=65528:next_cluster>=32'h0ffffff8) state<=FINISH;
    else if(next_cluster<2||(fat16?next_cluster>=65520:next_cluster>=32'h0ffffff0)) begin error<=6;state<=FAIL;end
    else begin cluster<=next_cluster;cluster_sector<=0;state<=NEXT_DIR;end
   FINISH:begin ready<=1;state<=DONE;end
   DONE,FAIL:begin end
   default:begin error<=255;state<=FAIL;end
  endcase
 end
end
endmodule
