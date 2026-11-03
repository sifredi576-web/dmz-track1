// Mount once; index up to 32 BMP files plus the first WAV, in root-directory order.
module dmz_fat_catalog(input clk,reset,enable,
 output reg sd_start,output reg [31:0] sd_lba,input sd_ready,sd_done,
 input sd_byte_valid,input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output reg ready,output reg [7:0] error,output wire [7:0] status,
 output reg fat16,output reg [7:0] spc,output reg [31:0] fat_base,data_base,
 input [4:0] image_index,output reg [5:0] image_count,
 output reg [31:0] image_cluster,image_bytes,output reg [63:0] image_name,
 input [3:0] wav_index,output reg [4:0] wav_count,
 input [5:0] browse_query,output reg [5:0] browse_tag,output reg [63:0] browse_name,output reg browse_valid,output reg [31:0] browse_bytes,
 output reg config_found,output reg [31:0] config_cluster,config_bytes,
 output reg pair_found,output reg [3:0] pair_index,
 output reg wav_found,output reg [31:0] wav_cluster,wav_bytes);
localparam START=0,WAIT_SD=1,SECTOR0=2,BOOT=3,NEXT_DIR=4,FILL=5,ENTRY=6,ADVANCE=7,FAT=8,FINISH=9,DONE=10,CACHE_FETCH=11,FAIL=63;
reg [5:0] state,after_read;
reg [7:0] cache[0:511]; /* fehdl force_ram=1, ram_style="bram" */
reg [7:0] cache_q;reg [7:0] header[0:63],entry[0:31];
reg [31:0] clusters[0:31]; /* fehdl force_ram=1, ram_style="bram" */
reg [31:0] sizes[0:31]; /* fehdl force_ram=1, ram_style="bram" */reg [63:0] names[0:31]; /* fehdl force_ram=1, ram_style="bram" */
reg [31:0] wav_clusters[0:15]; /* fehdl force_ram=1, ram_style="bram" */
reg [31:0] wav_sizes[0:15]; /* fehdl force_ram=1, ram_style="bram" */reg [63:0] wav_names[0:15]; /* fehdl force_ram=1, ram_style="bram" */
// Bijective physical addresses preserve catalogue ordering at the interface.
function automatic [4:0] addr5(input [4:0] a);
 reg [4:0] g;begin g=(a>>1)^a;g[4]=g[4]^g[0];addr5=g;end
endfunction
function automatic [3:0] addr4(input [3:0] a);
 reg [3:0] g;begin g=(a>>1)^a;g[3]=g[3]^g[0];addr4=g;end
endfunction
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
reg [63:0] pair_name,image_name_q,shared_image_name_raw,shared_wav_name_raw;
// Four-bit self-inverse coding: each stored bit is the XOR of the other
// three bits. It preserves all metadata and prevents direct FF-to-BRAM paths.
function automatic [63:0] code64(input [63:0] value);
 integer n;begin
  for(n=0;n<64;n=n+4)begin
   code64[n]=value[n+1]^value[n+2]^value[n+3];
   code64[n+1]=value[n]^value[n+2]^value[n+3];
   code64[n+2]=value[n]^value[n+1]^value[n+3];
   code64[n+3]=value[n]^value[n+1]^value[n+2];
  end
 end
endfunction

function automatic [31:0] code32(input [31:0] v);
 reg [63:0] tmp;begin tmp=code64({32'd0,v});code32=tmp[31:0];end
endfunction
wire [63:0] shared_image_name=code64(shared_image_name_raw);
wire [63:0] shared_wav_name=code64(shared_wav_name_raw);
wire [63:0] pair_lookup_name=shared_wav_name;
reg [5:0] browse_query_q;
reg name_phase,name_phase_q;
reg [31:0] image_cluster_q,image_bytes_q,wav_cluster_q,wav_bytes_q,shared_image_bytes,shared_wav_bytes;
reg [4:0] pair_scan;reg [3:0] pair_lookup_index;reg pair_lookup_valid;
wire pair_issue=ready&&image_name==pair_name&&pair_scan<wav_count&&!pair_found&&!name_phase;
// Time-share name reads: player/pair lookup in phase zero, browser in phase one.
// Explicit registered metadata reads replace large LUT multiplexers with BRAM.
always @(posedge clk) begin
 if(reset)name_phase<=0;else name_phase<=~name_phase;
 name_phase_q<=name_phase;
 shared_image_name_raw<=names[addr5(name_phase?browse_query[4:0]:image_index)];
 shared_wav_name_raw<=wav_names[addr4(name_phase?browse_query[3:0]:pair_scan[3:0])];
 if(!name_phase_q)image_name_q<=shared_image_name;
 browse_query_q<=browse_query;
 image_cluster_q<=clusters[addr5(image_index)];
 wav_cluster_q<=wav_clusters[addr4(wav_index)];
 shared_image_bytes<=sizes[addr5(name_phase?browse_query[4:0]:image_index)];
 shared_wav_bytes<=wav_sizes[addr4(name_phase?browse_query[3:0]:wav_index)];
 if(!name_phase_q)begin image_bytes_q<=code32(shared_image_bytes);wav_bytes_q<=code32(shared_wav_bytes);end
end
always @(posedge clk)cache_q<=cache[cache_addr];
always @(posedge clk) begin
 if(reset) begin pair_name<=0;pair_scan<=0;pair_found<=0;pair_index<=0;pair_lookup_index<=0;pair_lookup_valid<=0;end
 else if(!ready || image_name!=pair_name) begin pair_name<=image_name;pair_scan<=0;pair_found<=0;pair_lookup_valid<=0;end
 else begin
  pair_lookup_valid<=pair_issue;
  if(pair_issue)begin pair_scan<=pair_scan+1'b1;pair_lookup_index<=pair_scan[3:0];end
  if(pair_lookup_valid&&!pair_found&&pair_lookup_name==pair_name)begin pair_found<=1;pair_index<=pair_lookup_index;end
 end
end
integer i;
always @(posedge clk) begin
 if(name_phase_q)begin
  browse_tag<=browse_query_q;
  browse_bytes<=browse_query_q[5]?code32(shared_wav_bytes):code32(shared_image_bytes);
  browse_valid<=ready&&(browse_query_q[5]?({1'b0,browse_query_q[4:0]}<{1'b0,wav_count}):({1'b0,browse_query_q[4:0]}<image_count));
  browse_name<=browse_query_q[5]?shared_wav_name:shared_image_name;
 end
 if(reset) begin wav_cluster<=0;wav_bytes<=0;browse_valid<=0;browse_tag<=0;end
 else if({1'b0,wav_index}<wav_count) begin wav_cluster<=code32(wav_cluster_q);wav_bytes<=wav_bytes_q;end
 if(reset) begin image_cluster<=0;image_bytes<=0;image_name<=0;end
 else if({1'b0,image_index}<image_count) begin image_cluster<=code32(image_cluster_q);image_bytes<=image_bytes_q;image_name<=image_name_q;end
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
  config_found<=0;config_cluster<=0;config_bytes<=0;
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
    else if(fixed_root) begin if(root_index>=root_sectors) state<=FINISH;else sector(root_base+root_index,CACHE_FETCH);end
    else if(cluster<2) begin error<=6;state<=FAIL;end
    else sector(data_base+(cluster-2)*spc+cluster_sector,CACHE_FETCH);
   end
   CACHE_FETCH:state<=FILL;
   FILL:begin entry[entry_pos]<=cache_q;if(entry_pos==31)begin entry_pos<=0;state<=ENTRY;end
    else begin entry_pos<=entry_pos+1'b1;state<=CACHE_FETCH;end end
   ENTRY:if(entry[0]==0) state<=FINISH;
    else begin
     if(regular_file) begin
      if({entry[0],entry[1],entry[2],entry[3],entry[4],entry[5],entry[6],entry[7],entry[8],entry[9],entry[10]}==88'h5343454e4520202042494e) begin
       config_found<=1;config_cluster<=entry_cluster;config_bytes<=e32(28);
      end
      if(upper(entry[8])=="B"&&upper(entry[9])=="M"&&upper(entry[10])=="P"&&image_count<32) begin
       clusters[addr5(image_count[4:0])]<=code32(entry_cluster);sizes[addr5(image_count[4:0])]<=code32(e32(28));
       names[addr5(image_count[4:0])]<=code64({entry[7],entry[6],entry[5],entry[4],entry[3],entry[2],entry[1],entry[0]});
       image_count<=image_count+1'b1;
      end
      if(upper(entry[8])=="W"&&upper(entry[9])=="A"&&upper(entry[10])=="V"&&wav_count<16) begin
       wav_found<=1;wav_count<=wav_count+1'b1;
       wav_clusters[addr4(wav_count[3:0])]<=code32(entry_cluster);wav_sizes[addr4(wav_count[3:0])]<=code32(e32(28));
       wav_names[addr4(wav_count[3:0])]<=code64({entry[7],entry[6],entry[5],entry[4],entry[3],entry[2],entry[1],entry[0]});
      end
     end
     state<=ADVANCE;
    end
   ADVANCE:if(dir_pos!=480) begin dir_pos<=dir_pos+32;entry_pos<=0;state<=CACHE_FETCH;end
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
