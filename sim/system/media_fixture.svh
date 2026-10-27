// Synthetic FAT/BMP volume for integration simulation; never written to the user card.
function automatic [7:0] disk(input integer l,input integer i);
 integer c,entry,ofs,pix,x,y,channel,root_lba,file_lba,fat_end,file_bytes;reg [31:0] value;
 bit f16,mbr,rgba,top;
 begin
 disk=0;f16=$test$plusargs("fat16");mbr=$test$plusargs("mbr");rgba=$test$plusargs("rgba");top=$test$plusargs("top");
 root_lba=f16?5:17;file_lba=f16?14:25;fat_end=f16?4:16;file_bytes=rgba?1228854:921654;
 if(mbr&&l==0) begin
  case(i) 450:disk=8'h0c;455:disk=8'h08;510:disk=8'h55;511:disk=8'haa;default:begin end endcase
 end else begin
 if(mbr) l=l-2048;
 if(l==0) begin
  case(i)
  0:disk=8'heb;11:disk=0;12:disk=2;13:disk=8;14:disk=1;16:disk=1;36:disk=16;44:disk=2;510:disk=8'h55;511:disk=8'haa;
  default:begin end
  endcase
  if(f16) begin
   case(i) 17:disk=16;22:disk=4;36:disk=0;44:disk=0;default:begin end endcase
  end
  if($test$plusargs("bpb")&&i==13) disk=3;
  if($test$plusargs("signature")&&i==511) disk=0;
 end else if(l>=1&&l<=fat_end) begin
  entry=(l-1)*(f16?256:128)+i/(f16?2:4);
  if(entry==2) value=32'h0fffffff;
  else if(entry>=3&&entry[0]) value=(entry>=(rgba?603:453))?(f16?32'hffff:32'h0fffffff):32'(entry+2);
  else value=0;
  disk=value[(i%(f16?2:4))*8+:8];
 end else if(l==root_lba) begin
  if(i==0) disk=8'h41;
  if(i==11) disk=15;
  if(i>=32&&i<=39) disk="PICDEMO ">>((i-32)*8);
  if(i>=60&&i<=63) disk=32'(file_bytes)>>((i-60)*8);
  case(i) 40:disk="B";41:disk="M";42:disk="P";43:disk=32;58:disk=3;default:begin end endcase
  if($test$plusargs("nobmp")&&i==40) disk="J";
  if($test$plusargs("shortfile")&&i>=60&&i<=63) disk=32'd100>>((i-60)*8);
 end else if(l>=file_lba) begin
  c=(l-file_lba)/8;
  if(c%2==0) begin
   ofs=(c/2)*4096+((l-file_lba)%8)*512+i;
   if(ofs<54) begin
    case(ofs)
    0:disk="B";1:disk="M";2:disk=8'h36;3:disk=8'h10;4:disk=8'h0e;10:disk=54;14:disk=40;18:disk=8'h80;19:disk=2;22:disk=8'he0;23:disk=1;26:disk=1;28:disk=24;
    default:begin end
    endcase
    if(ofs>=2&&ofs<=5) disk=32'(file_bytes)>>((ofs-2)*8);
    if(ofs==28 && rgba) disk=32;
    if(top && ofs>=22&&ofs<=25) disk=32'hfffffe20>>((ofs-22)*8);
    if($test$plusargs("bad")&&ofs==30) disk=1;
    if($test$plusargs("dimensions")&&ofs==18) disk=0;
    if($test$plusargs("offset")&&ofs>=10&&ofs<=13) disk=32'hffffffff>>((ofs-10)*8);
    if($test$plusargs("bmpmagic")&&ofs==0) disk=0;
   end else begin
    pix=(ofs-54)/(rgba?4:3);x=pix%640;y=top?pix/640:479-pix/640;channel=(ofs-54)%(rgba?4:3);
    case(channel) 0:disk=8'(x);1:disk=8'(y);2:disk=8'(x^y);3:disk=255;endcase
   end
  end
 end
 end
 end
endfunction
