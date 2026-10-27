// FAT16/FAT32 root-directory first BMP loader. Hardware-only 24/32-bit BI_RGB.
// Initial display subset: exactly 640x480, either BMP row orientation.
module dmz_bmp_loader #(parameter integer GALLERY=0)(input clk,reset,enable,
 input select_request,input [4:0] requested_index,
 output reg catalog_ready,output reg [5:0] file_count,output reg [4:0] selected_index,output wire busy,
 output reg sd_start,output reg [31:0] sd_lba,input sd_ready,sd_done,
 input sd_byte_valid,input [8:0] sd_byte_index,input [7:0] sd_byte_data,input [7:0] sd_error,
 output wire load_valid,output wire [17:0] load_addr,output reg [255:0] load_data,
 output reg load_last,input load_ready,load_ack,
 output reg done,output reg [7:0] error,output wire [7:0] status,
 output reg [31:0] pixels_loaded,output reg [63:0] filename);
localparam START=0,WAIT_SD=1,SECTOR0=2,BOOT=3,DIR=4,NEXT_DIR=5,FAT_VALUE=6,FILE_HEADER=7,BYTES=8,NEXT_FILE=9,EMIT=10,ACK=11,FINISH=12,DIR_FILL=13,SELECT_FILE=14,OPEN_FILE=15,CATALOG_DONE=16,DIR_ADVANCE=17,FAIL=63;
reg [31:0] catalog_cluster[0:31],catalog_size[0:31];
reg [63:0] catalog_name[0:31];
wire [31:0] entry_cluster=fat16?{16'd0,d16(26)}:({16'd0,d16(26)}|({16'd0,d16(20)}<<16));
assign busy=state!=FINISH&&state!=FAIL;
reg [5:0] state,after_read;
reg [7:0] cache[0:511];
reg [7:0] header[0:63],entry[0:31];
reg [15:0] signature;
reg [31:0] partition_start,fat_cached;
reg [4:0] entry_index;
wire [8:0] cache_address=(state==DIR_FILL)?dir_pos+{4'd0,entry_index}:byte_pos[8:0];
wire [7:0] cache_byte=cache[cache_address];
reg [31:0] volume_base,fat_base,data_base,root_base,root_sectors;
reg [7:0] spc,cluster_sector;
reg [31:0] cluster,file_size,file_offset,bmp_offset;
reg fat16,dir_is_fixed,top_down,rgba,fat_for_file;
reg [8:0] dir_pos;
reg [9:0] byte_pos;
reg [31:0] fixed_root_index;
reg [15:0] directory_sectors;
reg [1:0] channel;
reg [7:0] blue,green;
reg [3:0] burst_pixel;
reg [15:0] low_pixel;
reg [5:0] burst_x;
reg [8:0] source_y;
reg [17:0] pending_addr;
function automatic [15:0] le16(input integer i);begin le16={header[i+1],header[i]};end endfunction
function automatic [31:0] le32(input integer i);begin le32={header[i+3],header[i+2],header[i+1],header[i]};end endfunction
function automatic [15:0] d16(input integer i);begin d16={entry[i+1],entry[i]};end endfunction
function automatic [31:0] d32(input integer i);begin d32={entry[i+3],entry[i+2],entry[i+1],entry[i]};end endfunction
function automatic [7:0] upper(input [7:0] c);begin upper=(c>=97&&c<=122)?c-32:c;end endfunction
wire [15:0] color={cache_byte[7:3],green[7:2],blue[7:3]};
wire [8:0] target_y=top_down?source_y:9'd479-source_y;
wire [17:0] target_addr=({9'd0,target_y}<<8)+({9'd0,target_y}<<6)+{9'd0,burst_x,3'b000};
// Precompute while the SD sector is arriving; FILE_HEADER runs only after
// the CRC/gap, so these header fields have been stable for many clocks.
reg [31:0] required_file_end;
always @(posedge clk) begin
 if(reset) required_file_end<=0;
 else required_file_end<=le32(10)+(le16(28)==24?32'd921600:32'd1228800);
end
wire [31:0] fat_entry=fat16?{16'd0,fat_cached[15:0]}:fat_cached&32'h0fffffff;
wire [8:0] fat_byte_offset=fat16?{cluster[7:0],1'b0}:{cluster[6:0],2'b00};
assign status={2'd0,state};
assign load_valid=state==EMIT;
assign load_addr=pending_addr;
task sector(input [31:0] lba,input [5:0] next_state);
 begin sd_lba<=lba;sd_start<=1;after_read<=next_state;state<=WAIT_SD;end
endtask
integer i;
always @(posedge clk) begin
 if(sd_byte_valid) begin
  cache[sd_byte_index]<=sd_byte_data;
  if(sd_byte_index<64) header[sd_byte_index[5:0]]<=sd_byte_data;
  if(sd_byte_index==510) signature[7:0]<=sd_byte_data;
  if(sd_byte_index==511) signature[15:8]<=sd_byte_data;
  if(sd_byte_index>=454&&sd_byte_index<=457) partition_start[(sd_byte_index-454)*8+:8]<=sd_byte_data;
  if(sd_byte_index==fat_byte_offset) fat_cached[7:0]<=sd_byte_data;
  if(sd_byte_index==fat_byte_offset+1) fat_cached[15:8]<=sd_byte_data;
  if(sd_byte_index==fat_byte_offset+2) fat_cached[23:16]<=sd_byte_data;
  if(sd_byte_index==fat_byte_offset+3) fat_cached[31:24]<=sd_byte_data;
 end
 if(reset) begin
  state<=START;after_read<=0;entry_index<=0;sd_start<=0;sd_lba<=0;volume_base<=0;fat_base<=0;data_base<=0;root_base<=0;root_sectors<=0;
  spc<=0;cluster_sector<=0;cluster<=0;file_size<=0;file_offset<=0;bmp_offset<=0;fat16<=0;dir_is_fixed<=0;top_down<=0;rgba<=0;fat_for_file<=0;
  dir_pos<=0;byte_pos<=0;fixed_root_index<=0;directory_sectors<=0;channel<=0;blue<=0;green<=0;burst_pixel<=0;low_pixel<=0;burst_x<=0;source_y<=0;pending_addr<=0;
  done<=0;error<=0;pixels_loaded<=0;filename<=0;load_data<=0;load_last<=0;
  catalog_ready<=0;file_count<=0;selected_index<=0;
 end else begin
  sd_start<=0;
  if(sd_error!=0) begin error<=8'h80|sd_error;state<=FAIL;end
  else case(state)
  START:if(enable&&sd_ready) sector(0,SECTOR0);
  WAIT_SD:if(sd_done) state<=after_read;
  SECTOR0:begin
   if(signature!=16'haa55) begin error<=1;state<=FAIL;end
   else if(le16(11)==512 && header[13]!=0) begin volume_base<=0;state<=BOOT;end
   else if(partition_start!=0) begin volume_base<=partition_start;sector(partition_start,BOOT);end
   else begin error<=2;state<=FAIL;end
  end
  BOOT:begin
   if(signature!=16'haa55||le16(11)!=512||header[13]==0||(header[13]&(header[13]-1'b1))!=0||le16(14)==0||header[16]==0) begin error<=3;state<=FAIL;end
   else begin
    spc<=header[13];fat16<=le16(22)!=0;
    fat_base<=volume_base+{16'd0,le16(14)};
    root_sectors<=({16'd0,le16(17)}+15)>>4;
    root_base<=volume_base+{16'd0,le16(14)}+header[16]*(le16(22)!=0?{16'd0,le16(22)}:le32(36));
    data_base<=volume_base+{16'd0,le16(14)}+header[16]*(le16(22)!=0?{16'd0,le16(22)}:le32(36))+(({16'd0,le16(17)}+15)>>4);
    cluster<=le16(22)!=0?0:(le32(44)&32'h0fffffff);dir_is_fixed<=le16(22)!=0;fixed_root_index<=0;cluster_sector<=0;state<=NEXT_DIR;
   end
  end
  NEXT_DIR:begin
   dir_pos<=0;entry_index<=0;directory_sectors<=directory_sectors+1'b1;
   if(directory_sectors==4095) begin if(GALLERY&&file_count!=0) state<=CATALOG_DONE;else begin error<=4;state<=FAIL;end end
   else if(dir_is_fixed) begin
    if(fixed_root_index>=root_sectors) begin if(GALLERY) state<=CATALOG_DONE;else begin error<=5;state<=FAIL;end end
    else sector(root_base+fixed_root_index,DIR_FILL);
   end else if(cluster<2) begin error<=6;state<=FAIL;end
   else sector(data_base+(cluster-2)*spc+cluster_sector,DIR_FILL);
  end
  DIR_FILL:begin
   entry[entry_index]<=cache_byte;
   if(entry_index==31) begin state<=DIR;entry_index<=0;end else entry_index<=entry_index+1'b1;
  end
  DIR:begin
   if(entry[0]==0) begin if(GALLERY) state<=CATALOG_DONE;else begin error<=5;state<=FAIL;end end
   else if(entry[0]!=8'he5 && (entry[11]&8'h18)==0 && entry[11]!=8'h0f &&
    upper(entry[8])=="B" && upper(entry[9])=="M" && upper(entry[10])=="P") begin
    if(GALLERY) begin
     catalog_cluster[file_count[4:0]]<=entry_cluster;
     catalog_size[file_count[4:0]]<=d32(28);
     for(i=0;i<8;i=i+1) catalog_name[file_count[4:0]][i*8+:8]<=entry[i];
     file_count<=file_count+1'b1;
     state<=file_count==31?CATALOG_DONE:DIR_ADVANCE;
    end else begin
    cluster<=fat16?{16'd0,d16(26)}:({16'd0,d16(26)}|({16'd0,d16(20)}<<16));
    file_size<=d32(28);cluster_sector<=0;
    for(i=0;i<8;i=i+1) filename[i*8+:8]<=entry[i];
    sector(data_base+((fat16?{16'd0,d16(26)}:({16'd0,d16(26)}|({16'd0,d16(20)}<<16)))-2)*spc,FILE_HEADER);
    end
   end else state<=DIR_ADVANCE;
  end
  DIR_ADVANCE:begin
   if(dir_pos==480) begin
    if(dir_is_fixed) begin fixed_root_index<=fixed_root_index+1'b1;state<=NEXT_DIR;end
    else if(cluster_sector+1<spc) begin cluster_sector<=cluster_sector+1'b1;state<=NEXT_DIR;end
    else begin fat_for_file<=0;sector(fat_base+(fat16?(cluster>>8):(cluster>>7)),FAT_VALUE);end
   end else begin dir_pos<=dir_pos+32;entry_index<=0;state<=DIR_FILL;end
  end
  FAT_VALUE:begin
   if(fat_entry<2 || (fat16?fat_entry>=65528:fat_entry>=32'h0ffffff8)) begin
    if(GALLERY&&!fat_for_file) state<=CATALOG_DONE;
    else begin error<=fat_for_file?8'd7:8'd5;state<=FAIL;end
   end
   else begin
    cluster<=fat_entry;cluster_sector<=0;
    if(fat_for_file) sector(data_base+(fat_entry-2)*spc,BYTES);else state<=NEXT_DIR;
   end
  end
  FILE_HEADER:begin
   if(le16(0)!=16'h4d42 || le32(14)<40 || le16(26)!=1 || le32(30)!=0) begin error<=8;state<=FAIL;end
   else if(le32(18)!=640 || (le32(22)!=480 && le32(22)!=32'hfffffe20) || (le16(28)!=24 && le16(28)!=32)) begin error<=9;state<=FAIL;end
   else if(le32(10)<54 || le32(10)>1048576 || file_size<required_file_end) begin error<=10;state<=FAIL;end
   else begin
    bmp_offset<=le32(10);top_down<=header[25][7];rgba<=le16(28)==32;
    file_offset<=0;byte_pos<=0;channel<=0;burst_pixel<=0;burst_x<=0;source_y<=0;state<=BYTES;
   end
  end
  BYTES:begin
   if(byte_pos==512) state<=NEXT_FILE;
   else if(file_offset>=file_size) begin error<=7;state<=FAIL;end
   else begin
    byte_pos<=byte_pos+1'b1;file_offset<=file_offset+1'b1;
    if(file_offset>=bmp_offset) begin
     case(channel)
     0:begin blue<=cache_byte;channel<=1;end
     1:begin green<=cache_byte;channel<=2;end
     2:begin
      channel<=rgba?3:0;pixels_loaded<=pixels_loaded+1'b1;
      if(!burst_pixel[0]) low_pixel<=color;
      else load_data[(burst_pixel>>1)*32+:32]<={color,low_pixel};
      if(burst_pixel==15) begin
       burst_pixel<=0;pending_addr<=target_addr;load_last<=pixels_loaded==307199;state<=EMIT;
       if(burst_x==39) begin burst_x<=0;source_y<=source_y+1'b1;end else burst_x<=burst_x+1'b1;
      end else burst_pixel<=burst_pixel+1'b1;
     end
     3:channel<=0;
     endcase
    end
   end
  end
  NEXT_FILE:begin
   byte_pos<=0;
   if(cluster_sector+1<spc) begin cluster_sector<=cluster_sector+1'b1;sector(data_base+(cluster-2)*spc+cluster_sector+1,BYTES);end
   else begin fat_for_file<=1;sector(fat_base+(fat16?(cluster>>8):(cluster>>7)),FAT_VALUE);end
  end
  EMIT:if(load_ready) state<=ACK;
  ACK:if(load_ack) begin if(load_last) begin done<=1;state<=FINISH;end else state<=BYTES;end
  CATALOG_DONE:begin
   if(file_count==0) begin error<=5;state<=FAIL;end
   else begin catalog_ready<=1;selected_index<=0;state<=SELECT_FILE;end
  end
  SELECT_FILE:begin
   cluster<=catalog_cluster[selected_index];file_size<=catalog_size[selected_index];filename<=catalog_name[selected_index];
   cluster_sector<=0;pixels_loaded<=0;file_offset<=0;byte_pos<=0;channel<=0;burst_pixel<=0;burst_x<=0;source_y<=0;
   load_last<=0;done<=0;error<=0;fat_for_file<=0;state<=OPEN_FILE;
  end
  OPEN_FILE:begin
   if(cluster<2) begin error<=7;state<=FAIL;end
   else sector(data_base+(cluster-2)*spc,FILE_HEADER);
  end
  FINISH,FAIL:if(GALLERY&&catalog_ready&&select_request&&requested_index<file_count&&sd_ready) begin
   selected_index<=requested_index;state<=SELECT_FILE;
  end
  default:begin error<=255;state<=FAIL;end
  endcase
 end
end
endmodule
