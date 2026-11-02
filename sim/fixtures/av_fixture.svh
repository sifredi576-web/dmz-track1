`include "sim/fixtures/gallery_fixture.svh"
function automatic [7:0] disk(input integer l,input integer i);
 integer e,slot,j,shifted,c,ofs,root_lba,base_lba,part,k,entry_bytes,second_start,first_end,second_end,wav_start,second_delta,wav_delta,bmp_bytes;reg [31:0] value;
 begin
 disk=basic_disk(l,i);part=$test$plusargs("mbr")?2048:0;
 if(l==0&&part!=0) begin end else begin
 l=l-part;root_lba=$test$plusargs("fat16")?5:17;base_lba=$test$plusargs("fat16")?14:25;
 entry_bytes=$test$plusargs("fat16")?2:4;
 second_start=$test$plusargs("rgba")?703:503;first_end=$test$plusargs("rgba")?603:453;
 second_end=second_start+first_end-3;wav_start=$test$plusargs("rgba")?1503:1003;
 second_delta=(second_start-3)*8;wav_delta=(wav_start-3)*8;bmp_bytes=$test$plusargs("rgba")?1228854:921654;
 if(l>=1&&l<=($test$plusargs("fat16")?4:16)) begin
  e=(l-1)*(512/entry_bytes)+i/entry_bytes;value=0;
  if(e==2) value=32'h0fffffff;
  if(e>=3&&e<=first_end&&e[0]) value=e==first_end?32'h0fffffff:32'(e+2);
  if(e>=second_start&&e<=second_end&&e[0]) value=e==second_end?32'h0fffffff:32'(e+2);
  if(e==wav_start) value=$test$plusargs("shortchain")?32'h0fffffff:32'(wav_start+4);
  if(e==wav_start+4) value=32'(wav_start+2);if(e==wav_start+2) value=32'(wav_start+8);
  if(e==wav_start+8) value=32'(wav_start+6);if(e==wav_start+6) value=32'h0fffffff;
  if($test$plusargs("multiwav")) begin
   if(e==wav_start+16) value=32'(wav_start+20);if(e==wav_start+20) value=32'(wav_start+18);
   if(e==wav_start+18) value=32'(wav_start+24);if(e==wav_start+24) value=32'(wav_start+22);
   if(e==wav_start+22) value=32'h0fffffff;
  end
  disk=value[(i%entry_bytes)*8+:8];
 end
 if(l==root_lba) begin
  disk=0;slot=i/32;j=i%32;
  if(slot<3) begin
   if(j<8) disk=(slot==0?64'h2020202020414349:slot==1?64'h2020202020444142:64'h2020202020424349)>>(j*8);
   if($test$plusargs("paired")&&slot==1&&j<8) disk=64'h2020202020414349>>(j*8);
   if(j==8) disk=slot==1?"W":"B";if(j==9) disk=slot==1?"A":"M";if(j==10) disk=slot==1?"V":"P";if(j==11) disk=32;
   if(slot==1&&j==8&&$test$plusargs("nowav")) disk="T";
   if(j==26) disk=8'(slot==0?3:slot==1?wav_start:second_start);
   if(j==27) disk=8'((slot==0?3:slot==1?wav_start:second_start)>>8);
   if(j>=28) disk=(slot==1?32'd16428:32'(bmp_bytes))>>((j-28)*8);
  end
  if(slot==3&&$test$plusargs("multiwav")) begin
   if(j<8) disk=($test$plusargs("paired")?64'h2020202020424349:64'h202020324f4d4544)>>(j*8);
   if(j==8) disk="W";if(j==9) disk="A";if(j==10) disk="V";if(j==11) disk=32;
   if(j==26) disk=8'(wav_start+16);if(j==27) disk=8'((wav_start+16)>>8);
   if(j>=28) disk=32'd16428>>((j-28)*8);
  end
 end
 if($test$plusargs("platform")&&l==root_lba&&i/32==3) begin
  j=i%32;disk=0;
  if(j<11)disk=88'h4e4942202020454e454353>>(j*8);
  if(j==11)disk=32;
  if(j==26)disk=8'(2003);if(j==27)disk=8'(2003>>8);
  if(j>=28)disk=32'd3424>>((j-28)*8);
 end
 if(l>=base_lba+second_delta&&l<base_lba+wav_delta) begin
  shifted=l-second_delta;disk=basic_disk(shifted+part,i);c=(shifted-base_lba)/8;ofs=(c/2)*4096+((shifted-base_lba)%8)*512+i;
  if(c%2==0&&ofs>=54) disk=disk^8'hff;
 end
 if(l>=base_lba+wav_delta) begin
  c=3+(l-base_lba)/8;k=-1;
  if(c==wav_start) k=0;if(c==wav_start+4) k=1;if(c==wav_start+2) k=2;if(c==wav_start+8) k=3;if(c==wav_start+6) k=4;
  if($test$plusargs("multiwav")) begin
   if(c==wav_start+16) k=0;if(c==wav_start+20) k=1;if(c==wav_start+18) k=2;if(c==wav_start+24) k=3;if(c==wav_start+22) k=4;
  end
  if(k>=0) begin
   ofs=k*4096+((l-base_lba)%8)*512+i;disk=0;
   case(ofs)
    0:disk="R";1:disk="I";2:disk="F";3:disk="F";
    8:disk="W";9:disk="A";10:disk="V";11:disk="E";
    12:disk="f";13:disk="m";14:disk="t";15:disk=32;16:disk=16;20:disk=1;22:disk=2;
    24:disk=8'h80;25:disk=8'hbb;28:disk=0;29:disk=8'hee;30:disk=2;32:disk=4;34:disk=16;
    36:disk="d";37:disk="a";38:disk="t";39:disk="a";
   endcase
   if(ofs>=4&&ofs<8) disk=32'd16420>>((ofs-4)*8);
   if(ofs>=40&&ofs<44) disk=32'd16384>>((ofs-40)*8);
   if(ofs==22&&$test$plusargs("wavinvalid")) disk=1;
   if(ofs>=44) begin value=audio_expected((ofs-44)/4);if(c>=wav_start+16) value=value^32'h00ff00ff;disk=value[((ofs-44)%4)*8+:8];end
  end
 end
 end
 if($test$plusargs("platform")&&l>=base_lba+(2003-3)*8&&l<base_lba+(2003-3)*8+7) begin
  ofs=(l-base_lba-(2003-3)*8)*512+i;
  disk=ofs<3424?config_image[ofs]:0;
  if($test$plusargs("configcrcerror")&&ofs==100) disk=disk^1;
 end
 end
endfunction
