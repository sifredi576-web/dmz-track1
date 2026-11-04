// Two-cycle look-ahead overlay: top retains its original one-cycle RGB latency.
// Controls/metadata latch in vertical blank; no frame-buffer writes for OSD.
module dmz_osd #(parameter EXTERNAL_COORDS=0)(input clk,reset,input frame_tick,input emergency,visual_enabled,input [23:0] time_bcd,input [3:0] brightness,contrast,input [9:0] x,y,
 input [1:0] menu_section,setting_cursor,input paired_mode,
 input course_mode,input menu_open,input [5:0] query,browse_tag,input [63:0] browse_name,input browse_valid,catalog_ready,
 input [5:0] image_count,input [4:0] displayed_image,input [4:0] wav_count,input [3:0] wav_index,volume,
 input audio_paused,tone_muted,wav_source,autoplay,input [7:0] sd_error,image_error,wav_error,
 output reg text_on,shade_on,output reg [23:0] color);
reg [1:0] section,cursor;reg paired;
reg course;reg opened,valid,ready,paused,muted,source,auto_mode,alert,vis;
reg [5:0] q,tag,ic;reg [4:0] img,wc;reg [3:0] wi,vol;
reg [23:0] tm;reg [3:0] bri,con;
reg [63:0] name;reg [7:0] se,ie,we;
always @(posedge clk) begin
 if(reset) begin course<=0;section<=0;cursor<=0;paired<=0;alert<=0;vis<=1;opened<=0;valid<=0;ready<=0;paused<=0;muted<=0;source<=1;auto_mode<=1;
  tm<=0;bri<=4;con<=4;q<=0;tag<=0;ic<=0;img<=0;wc<=0;wi<=0;vol<=8;name<=0;se<=0;ie<=0;we<=0;end
 else if(EXTERNAL_COORDS?frame_tick:(x==0&&y==480)) begin course<=course_mode;section<=menu_section;cursor<=setting_cursor;paired<=paired_mode;alert<=emergency;vis<=visual_enabled;opened<=menu_open;valid<=browse_valid;ready<=catalog_ready;
  tm<=time_bcd;bri<=brightness;con<=contrast;
  paused<=audio_paused;muted<=tone_muted;source<=wav_source;auto_mode<=autoplay;
  q<=query;tag<=browse_tag;ic<=image_count;img<=displayed_image;wc<=wav_count;wi<=wav_index;vol<=volume;
  name<=browse_name;se<=sd_error;ie<=image_error;we<=wav_error;end
end
wire [9:0] ahead_x=EXTERNAL_COORDS?x:(x>=797?x-797:x+3);
wire [9:0] ahead_y=EXTERNAL_COORDS?y:(x>=797?(y==524?10'd0:y+1'b1):y);
wire [5:0] col=ahead_x[9:4];wire [4:0] row=ahead_y[8:4];
wire [5:0] total=q[5]?{1'b0,wc}:ic;
function automatic [7:0] digit(input [5:0] n);digit=8'd48+8'(n);endfunction
function automatic [7:0] hexchar(input [3:0] n);hexchar=n<10?8'd48+{4'd0,n}:8'd55+{4'd0,n};endfunction
function automatic [63:0] font(input [7:0] c);
begin case(c)
 "A":font=64'h3844447c44444400;
 "B":font=64'h7844447844447800;
 "C":font=64'h3844404040443800;
 "D":font=64'h7844444444447800;
 "E":font=64'h7c40407840407c00;
 "F":font=64'h7c40407840404000;
 "G":font=64'h3844405c44443c00;
 "H":font=64'h4444447c44444400;
 "I":font=64'h3810101010103800;
 "J":font=64'h1c08080848483000;
 "K":font=64'h4448506050484400;
 "L":font=64'h4040404040407c00;
 "M":font=64'h446c545444444400;
 "N":font=64'h4464544c44444400;
 "O":font=64'h3844444444443800;
 "P":font=64'h7844447840404000;
 "Q":font=64'h3844444454483400;
 "R":font=64'h7844447850484400;
 "S":font=64'h3c40403804047800;
 "T":font=64'h7c10101010101000;
 "U":font=64'h4444444444443800;
 "V":font=64'h4444444444281000;
 "W":font=64'h44444454546c4400;
 "X":font=64'h4444281028444400;
 "Y":font=64'h4444281010101000;
 "Z":font=64'h7c04081020407c00;
 "0":font=64'h38444c5464443800;
 "1":font=64'h1030101010103800;
 "2":font=64'h3844040810207c00;
 "3":font=64'h7804043804047800;
 "4":font=64'h081828487c080800;
 "5":font=64'h7c40407804047800;
 "6":font=64'h3840407844443800;
 "7":font=64'h7c04081020202000;
 "8":font=64'h3844443844443800;
 "9":font=64'h3844443c04043800;
 ".":font=64'h0000000000303000;
 ":":font=64'h0030300030300000;
 "/":font=64'h0404081020404000;
 "-":font=64'h0000007c00000000;
 "+":font=64'h0010107c10100000;
 ">":font=64'h4020100810204000;
 "_":font=64'h0000000000007c00;
 "?":font=64'h3844040810001000;
 "=":font=64'h00007c007c000000;
 " ":font=0;default:font=64'h3844040810001000;
endcase end endfunction
reg [5:0] line_id;reg [319:0] dynamic_line;reg [39:0] dynamic_mask;integer j;
always @* begin
 dynamic_line=0;dynamic_mask=0;
 begin line_id=6'd0;dynamic_mask=0;end
 case(row)
  0: begin line_id=6'd1;dynamic_mask=0;end
  1: begin line_id=6'd2;dynamic_mask=0;end
  2: begin line_id=6'd3;dynamic_mask=0;end
  3: begin line_id=6'd4;dynamic_mask=0;end
  7: if(opened) begin line_id=6'd5;dynamic_mask=0;end
  9: if(opened) begin line_id=6'd6;dynamic_mask=0;end
  11: if(opened) begin line_id=6'd7;dynamic_mask=0;end
  13: if(opened) begin line_id=6'd8;dynamic_mask=0;end
  15: if(opened) begin line_id=6'd9;dynamic_mask=0;end
  17: if(opened) begin line_id=6'd10;dynamic_mask=0;end
  19: if(opened) begin line_id=6'd11;dynamic_mask=0;end
  21: if(vis) begin line_id=6'd12;dynamic_mask=0;end
  28: begin line_id=6'd13;dynamic_mask=0;end
  29: begin line_id=6'd14;dynamic_mask=0;end
  default:begin end
 endcase
 if(row==2) begin
  begin dynamic_line[319-7*8-:16]={digit({2'd0,tm[23:20]}),digit({2'd0,tm[19:16]})};dynamic_mask[(319-7*8)/8-:2]=2'b11;end
  begin dynamic_line[319-10*8-:16]={digit({2'd0,tm[15:12]}),digit({2'd0,tm[11:8]})};dynamic_mask[(319-10*8)/8-:2]=2'b11;end
  begin dynamic_line[319-13*8-:16]={digit({2'd0,tm[7:4]}),digit({2'd0,tm[3:0]})};dynamic_mask[(319-13*8)/8-:2]=2'b11;end
 end
 if(row==3) begin begin dynamic_line[319-4*8-:8]=digit({2'd0,bri});dynamic_mask[(319-4*8)/8-:1]=1'b1;end begin dynamic_line[319-12*8-:8]=digit({2'd0,con});dynamic_mask[(319-12*8)/8-:1]=1'b1;end end
 if(row==0) begin
  begin dynamic_line[319-15*8-:16]={digit(({1'b0,img}+1'b1)/10),digit(({1'b0,img}+1'b1)%10)};dynamic_mask[(319-15*8)/8-:2]=2'b11;end
  begin dynamic_line[319-18*8-:16]={digit(ic/10),digit(ic%10)};dynamic_mask[(319-18*8)/8-:2]=2'b11;end begin dynamic_line[319-26*8-:8]=digit({2'd0,vol});dynamic_mask[(319-26*8)/8-:1]=1'b1;end
 end
 if(row==1) begin
  if(!source) begin dynamic_line[319-0*8-:24]="TST";dynamic_mask[(319-0*8)/8-:3]=3'b111;end
  if(paused) begin dynamic_line[319-4*8-:32]="STOP6'd15MUTE";dynamic_mask[(319-4*8)/8-:4]=4'b1111;end
  if(!auto_mode) begin dynamic_line[319-10*8-:32]="HOLD";dynamic_mask[(319-10*8)/8-:4]=4'b1111;end
  begin dynamic_line[319-24*8-:16]={digit(({2'd0,wi}+1'b1)/10),digit(({2'd0,wi}+1'b1)%10)};dynamic_mask[(319-24*8)/8-:2]=2'b11;end
  begin dynamic_line[319-27*8-:16]={digit({1'b0,wc}/10),digit({1'b0,wc}%10)};dynamic_mask[(319-27*8)/8-:2]=2'b11;end
  if(wc==0) begin dynamic_line[319-4*8-:32]="NONE6'd16FAIL";dynamic_mask[(319-4*8)/8-:4]=4'b1111;end
 end
 if(opened&&row==9) begin
  if(q[5]) begin dynamic_line[319-12*8-:24]="WAV";dynamic_mask[(319-12*8)/8-:3]=3'b111;end
  begin dynamic_line[319-24*8-:16]={digit((total==0?6'd0:({1'b0,q[4:0]}+1'b1))/10),digit((total==0?6'd0:({1'b0,q[4:0]}+1'b1))%10)};dynamic_mask[(319-24*8)/8-:2]=2'b11;end
  begin dynamic_line[319-27*8-:16]={digit(total/10),digit(total%10)};dynamic_mask[(319-27*8)/8-:2]=2'b11;end
 end
 if(opened&&row==11) begin
  for(j=0;j<8;j=j+1) begin dynamic_line[319-(12+j)*8-:8]=name[j*8+:8];dynamic_mask[(319-(12+j)*8)/8-:1]=1'b1;end
  if(q[5]) begin dynamic_line[319-21*8-:24]="WAV";dynamic_mask[(319-21*8)/8-:3]=3'b111;end
  if(!ready) begin line_id=6'd17;dynamic_mask=0;end
  else if(total==0) begin line_id=6'd18;dynamic_mask=0;end
  else if(!valid||tag!=q) begin line_id=6'd19;dynamic_mask=0;end
 end
 if(row==1&&paired)begin dynamic_line[319-10*8-:32]="PAIR";dynamic_mask[(319-10*8)/8-:4]=4'b1111;end
 if(opened&&section>=2)begin
  case(row)
   7:begin line_id=section==2?6'd20:6'd21;dynamic_mask=0;end
   9:begin line_id=section==2?6'd22:course?6'd23:6'd24;dynamic_mask=0;end
   11:begin line_id=section==2?6'd25:6'd26;dynamic_mask=0;end
   13:begin line_id=section==2?6'd27:6'd28;dynamic_mask=0;end
   15:begin line_id=6'd29;dynamic_mask=0;end
   17:begin line_id=6'd30;dynamic_mask=0;end
   19:begin line_id=section==2?6'd31:6'd32;dynamic_mask=0;end
   default:begin end
  endcase
  if(row==9+{cursor,1'b0})begin dynamic_line[319-5*8-:8]=">";dynamic_mask[(319-5*8)/8-:1]=1'b1;end
  if(section==2&&row==9)begin dynamic_line[319-25*8-:8]=digit({2'd0,bri});dynamic_mask[(319-25*8)/8-:1]=1'b1;end
  if(section==2&&row==11)begin dynamic_line[319-25*8-:8]=digit({2'd0,con});dynamic_mask[(319-25*8)/8-:1]=1'b1;end
  if(section==3&&row==19&&course)begin line_id=6'd33;dynamic_mask=0;end
  else if(section==3&&row==19&&paired)begin line_id=6'd34;dynamic_mask=0;end
 end
 if(alert) case(row)
  1:begin line_id=6'd35;dynamic_mask=0;end
  7:begin line_id=6'd36;dynamic_mask=0;end
  9:begin line_id=6'd37;dynamic_mask=0;end
  11:begin line_id=6'd38;dynamic_mask=0;end
  13:begin line_id=6'd39;dynamic_mask=0;end
  15:begin line_id=6'd40;dynamic_mask=0;end
  17:begin line_id=6'd41;dynamic_mask=0;end
  19:begin line_id=6'd42;dynamic_mask=0;end
  default:begin end
 endcase
 if(row==28) begin
  begin dynamic_line[319-3*8-:16]={hexchar(se[7:4]),hexchar(se[3:0])};dynamic_mask[(319-3*8)/8-:2]=2'b11;end
  begin dynamic_line[319-11*8-:16]={hexchar(ie[7:4]),hexchar(ie[3:0])};dynamic_mask[(319-11*8)/8-:2]=2'b11;end
  begin dynamic_line[319-19*8-:16]={hexchar(we[7:4]),hexchar(we[3:0])};dynamic_mask[(319-19*8)/8-:2]=2'b11;end
 end
end
// BEGIN GENERATED TEXT ROM
reg [7:0] text_rom[0:4095]; /* fehdl force_ram=1, ram_style="bram" */
integer ti;
initial begin
 for(ti=0;ti<4096;ti=ti+1)text_rom[ti]=32;
 text_rom[64]=68;
 text_rom[65]=77;
 text_rom[66]=90;
 text_rom[68]=77;
 text_rom[69]=69;
 text_rom[70]=68;
 text_rom[71]=73;
 text_rom[72]=65;
 text_rom[75]=73;
 text_rom[76]=77;
 text_rom[77]=71;
 text_rom[79]=48;
 text_rom[80]=48;
 text_rom[81]=47;
 text_rom[82]=48;
 text_rom[83]=48;
 text_rom[86]=86;
 text_rom[87]=79;
 text_rom[88]=76;
 text_rom[90]=56;
 text_rom[91]=47;
 text_rom[92]=56;
 text_rom[128]=87;
 text_rom[129]=65;
 text_rom[130]=86;
 text_rom[132]=80;
 text_rom[133]=76;
 text_rom[134]=65;
 text_rom[135]=89;
 text_rom[138]=65;
 text_rom[139]=85;
 text_rom[140]=84;
 text_rom[141]=79;
 text_rom[148]=87;
 text_rom[149]=65;
 text_rom[150]=86;
 text_rom[152]=48;
 text_rom[153]=48;
 text_rom[154]=47;
 text_rom[155]=48;
 text_rom[156]=48;
 text_rom[192]=85;
 text_rom[193]=80;
 text_rom[194]=84;
 text_rom[195]=73;
 text_rom[196]=77;
 text_rom[197]=69;
 text_rom[199]=48;
 text_rom[200]=48;
 text_rom[201]=58;
 text_rom[202]=48;
 text_rom[203]=48;
 text_rom[204]=58;
 text_rom[205]=48;
 text_rom[206]=48;
 text_rom[256]=0;
 text_rom[257]=66;
 text_rom[258]=82;
 text_rom[259]=73;
 text_rom[261]=52;
 text_rom[262]=47;
 text_rom[263]=56;
 text_rom[265]=67;
 text_rom[266]=79;
 text_rom[267]=78;
 text_rom[269]=52;
 text_rom[270]=47;
 text_rom[271]=56;
 text_rom[274]=75;
 text_rom[275]=69;
 text_rom[276]=89;
 text_rom[277]=49;
 text_rom[278]=50;
 text_rom[280]=83;
 text_rom[281]=69;
 text_rom[282]=84;
 text_rom[283]=84;
 text_rom[284]=73;
 text_rom[285]=78;
 text_rom[286]=71;
 text_rom[287]=83;
 text_rom[326]=84;
 text_rom[327]=70;
 text_rom[329]=70;
 text_rom[330]=73;
 text_rom[331]=76;
 text_rom[332]=69;
 text_rom[334]=83;
 text_rom[335]=69;
 text_rom[336]=76;
 text_rom[337]=69;
 text_rom[338]=67;
 text_rom[339]=84;
 text_rom[390]=84;
 text_rom[391]=89;
 text_rom[392]=80;
 text_rom[393]=69;
 text_rom[394]=58;
 text_rom[396]=66;
 text_rom[397]=77;
 text_rom[398]=80;
 text_rom[403]=70;
 text_rom[404]=73;
 text_rom[405]=76;
 text_rom[406]=69;
 text_rom[408]=48;
 text_rom[409]=48;
 text_rom[410]=47;
 text_rom[411]=48;
 text_rom[412]=48;
 text_rom[454]=78;
 text_rom[455]=65;
 text_rom[456]=77;
 text_rom[457]=69;
 text_rom[458]=58;
 text_rom[468]=46;
 text_rom[469]=66;
 text_rom[470]=77;
 text_rom[471]=80;
 text_rom[512]=0;
 text_rom[519]=75;
 text_rom[520]=69;
 text_rom[521]=89;
 text_rom[522]=49;
 text_rom[523]=52;
 text_rom[525]=85;
 text_rom[526]=80;
 text_rom[532]=75;
 text_rom[533]=69;
 text_rom[534]=89;
 text_rom[535]=54;
 text_rom[537]=68;
 text_rom[538]=79;
 text_rom[539]=87;
 text_rom[540]=78;
 text_rom[582]=75;
 text_rom[583]=69;
 text_rom[584]=89;
 text_rom[585]=49;
 text_rom[586]=50;
 text_rom[588]=84;
 text_rom[589]=65;
 text_rom[590]=66;
 text_rom[595]=75;
 text_rom[596]=69;
 text_rom[597]=89;
 text_rom[598]=49;
 text_rom[599]=48;
 text_rom[601]=83;
 text_rom[602]=69;
 text_rom[603]=76;
 text_rom[604]=69;
 text_rom[605]=67;
 text_rom[606]=84;
 text_rom[645]=75;
 text_rom[646]=69;
 text_rom[647]=89;
 text_rom[648]=56;
 text_rom[650]=66;
 text_rom[651]=65;
 text_rom[652]=67;
 text_rom[653]=75;
 text_rom[658]=75;
 text_rom[659]=69;
 text_rom[660]=89;
 text_rom[661]=49;
 text_rom[662]=53;
 text_rom[664]=72;
 text_rom[665]=79;
 text_rom[666]=77;
 text_rom[667]=69;
 text_rom[710]=66;
 text_rom[711]=82;
 text_rom[712]=79;
 text_rom[713]=87;
 text_rom[714]=83;
 text_rom[715]=69;
 text_rom[717]=84;
 text_rom[718]=72;
 text_rom[719]=69;
 text_rom[720]=78;
 text_rom[722]=83;
 text_rom[723]=69;
 text_rom[724]=76;
 text_rom[725]=69;
 text_rom[726]=67;
 text_rom[727]=84;
 text_rom[729]=84;
 text_rom[730]=79;
 text_rom[732]=80;
 text_rom[733]=76;
 text_rom[734]=65;
 text_rom[735]=89;
 text_rom[772]=80;
 text_rom[773]=67;
 text_rom[774]=77;
 text_rom[776]=87;
 text_rom[777]=65;
 text_rom[778]=86;
 text_rom[779]=69;
 text_rom[780]=70;
 text_rom[781]=79;
 text_rom[782]=82;
 text_rom[783]=77;
 text_rom[785]=47;
 text_rom[787]=76;
 text_rom[788]=69;
 text_rom[789]=70;
 text_rom[790]=84;
 text_rom[792]=43;
 text_rom[794]=82;
 text_rom[795]=73;
 text_rom[796]=71;
 text_rom[797]=72;
 text_rom[798]=84;
 text_rom[800]=76;
 text_rom[801]=69;
 text_rom[802]=86;
 text_rom[803]=69;
 text_rom[804]=76;
 text_rom[832]=83;
 text_rom[833]=68;
 text_rom[834]=58;
 text_rom[835]=48;
 text_rom[836]=48;
 text_rom[839]=66;
 text_rom[840]=77;
 text_rom[841]=80;
 text_rom[842]=58;
 text_rom[843]=48;
 text_rom[844]=48;
 text_rom[847]=87;
 text_rom[848]=65;
 text_rom[849]=86;
 text_rom[850]=58;
 text_rom[851]=48;
 text_rom[852]=48;
 text_rom[896]=75;
 text_rom[897]=69;
 text_rom[898]=89;
 text_rom[899]=49;
 text_rom[900]=50;
 text_rom[902]=77;
 text_rom[903]=69;
 text_rom[904]=78;
 text_rom[905]=85;
 text_rom[908]=75;
 text_rom[909]=69;
 text_rom[910]=89;
 text_rom[911]=50;
 text_rom[913]=80;
 text_rom[914]=65;
 text_rom[915]=85;
 text_rom[916]=83;
 text_rom[917]=69;
 text_rom[920]=75;
 text_rom[921]=69;
 text_rom[922]=89;
 text_rom[923]=51;
 text_rom[925]=77;
 text_rom[926]=85;
 text_rom[927]=84;
 text_rom[928]=69;
 text_rom[960]=0;
 text_rom[961]=0;
 text_rom[962]=0;
 text_rom[963]=0;
 text_rom[964]=0;
 text_rom[965]=0;
 text_rom[966]=59;
 text_rom[967]=101;
 text_rom[968]=108;
 text_rom[969]=115;
 text_rom[970]=101;
 text_rom[972]=105;
 text_rom[973]=102;
 text_rom[974]=40;
 text_rom[975]=109;
 text_rom[976]=117;
 text_rom[977]=116;
 text_rom[978]=101;
 text_rom[979]=100;
 text_rom[980]=41;
 text_rom[982]=108;
 text_rom[983]=105;
 text_rom[984]=110;
 text_rom[985]=101;
 text_rom[986]=91;
 text_rom[987]=51;
 text_rom[988]=49;
 text_rom[989]=57;
 text_rom[990]=45;
 text_rom[991]=52;
 text_rom[992]=42;
 text_rom[993]=56;
 text_rom[994]=45;
 text_rom[995]=58;
 text_rom[996]=51;
 text_rom[997]=50;
 text_rom[998]=93;
 text_rom[999]=61;
 text_rom[1024]=0;
 text_rom[1025]=0;
 text_rom[1026]=0;
 text_rom[1027]=0;
 text_rom[1028]=0;
 text_rom[1029]=0;
 text_rom[1030]=59;
 text_rom[1031]=101;
 text_rom[1032]=108;
 text_rom[1033]=115;
 text_rom[1034]=101;
 text_rom[1036]=105;
 text_rom[1037]=102;
 text_rom[1038]=40;
 text_rom[1039]=119;
 text_rom[1040]=101;
 text_rom[1041]=33;
 text_rom[1042]=61;
 text_rom[1043]=48;
 text_rom[1044]=41;
 text_rom[1046]=108;
 text_rom[1047]=105;
 text_rom[1048]=110;
 text_rom[1049]=101;
 text_rom[1050]=91;
 text_rom[1051]=51;
 text_rom[1052]=49;
 text_rom[1053]=57;
 text_rom[1054]=45;
 text_rom[1055]=52;
 text_rom[1056]=42;
 text_rom[1057]=56;
 text_rom[1058]=45;
 text_rom[1059]=58;
 text_rom[1060]=51;
 text_rom[1061]=50;
 text_rom[1062]=93;
 text_rom[1063]=61;
 text_rom[1094]=83;
 text_rom[1095]=67;
 text_rom[1096]=65;
 text_rom[1097]=78;
 text_rom[1098]=78;
 text_rom[1099]=73;
 text_rom[1100]=78;
 text_rom[1101]=71;
 text_rom[1103]=84;
 text_rom[1104]=70;
 text_rom[1106]=67;
 text_rom[1107]=65;
 text_rom[1108]=82;
 text_rom[1109]=68;
 text_rom[1158]=78;
 text_rom[1159]=79;
 text_rom[1161]=70;
 text_rom[1162]=73;
 text_rom[1163]=76;
 text_rom[1164]=69;
 text_rom[1165]=83;
 text_rom[1167]=79;
 text_rom[1168]=70;
 text_rom[1170]=84;
 text_rom[1171]=72;
 text_rom[1172]=73;
 text_rom[1173]=83;
 text_rom[1175]=84;
 text_rom[1176]=89;
 text_rom[1177]=80;
 text_rom[1178]=69;
 text_rom[1222]=82;
 text_rom[1223]=69;
 text_rom[1224]=65;
 text_rom[1225]=68;
 text_rom[1226]=73;
 text_rom[1227]=78;
 text_rom[1228]=71;
 text_rom[1230]=70;
 text_rom[1231]=73;
 text_rom[1232]=76;
 text_rom[1233]=69;
 text_rom[1235]=78;
 text_rom[1236]=65;
 text_rom[1237]=77;
 text_rom[1238]=69;
 text_rom[1286]=68;
 text_rom[1287]=73;
 text_rom[1288]=83;
 text_rom[1289]=80;
 text_rom[1290]=76;
 text_rom[1291]=65;
 text_rom[1292]=89;
 text_rom[1294]=83;
 text_rom[1295]=69;
 text_rom[1296]=84;
 text_rom[1297]=84;
 text_rom[1298]=73;
 text_rom[1299]=78;
 text_rom[1300]=71;
 text_rom[1301]=83;
 text_rom[1350]=83;
 text_rom[1351]=89;
 text_rom[1352]=83;
 text_rom[1353]=84;
 text_rom[1354]=69;
 text_rom[1355]=77;
 text_rom[1357]=83;
 text_rom[1358]=69;
 text_rom[1359]=84;
 text_rom[1360]=84;
 text_rom[1361]=73;
 text_rom[1362]=78;
 text_rom[1363]=71;
 text_rom[1364]=83;
 text_rom[1414]=66;
 text_rom[1415]=82;
 text_rom[1416]=73;
 text_rom[1417]=71;
 text_rom[1418]=72;
 text_rom[1419]=84;
 text_rom[1420]=78;
 text_rom[1421]=69;
 text_rom[1422]=83;
 text_rom[1423]=83;
 text_rom[1477]=82;
 text_rom[1478]=69;
 text_rom[1479]=80;
 text_rom[1480]=76;
 text_rom[1481]=65;
 text_rom[1482]=89;
 text_rom[1484]=80;
 text_rom[1485]=65;
 text_rom[1486]=71;
 text_rom[1487]=69;
 text_rom[1489]=65;
 text_rom[1490]=85;
 text_rom[1491]=68;
 text_rom[1492]=73;
 text_rom[1493]=79;
 text_rom[1541]=84;
 text_rom[1542]=79;
 text_rom[1543]=71;
 text_rom[1544]=71;
 text_rom[1545]=76;
 text_rom[1546]=69;
 text_rom[1548]=80;
 text_rom[1549]=65;
 text_rom[1550]=73;
 text_rom[1551]=82;
 text_rom[1552]=69;
 text_rom[1553]=68;
 text_rom[1555]=80;
 text_rom[1556]=76;
 text_rom[1557]=65;
 text_rom[1558]=89;
 text_rom[1559]=66;
 text_rom[1560]=65;
 text_rom[1561]=67;
 text_rom[1562]=75;
 text_rom[1606]=67;
 text_rom[1607]=79;
 text_rom[1608]=78;
 text_rom[1609]=84;
 text_rom[1610]=82;
 text_rom[1611]=65;
 text_rom[1612]=83;
 text_rom[1613]=84;
 text_rom[1669]=82;
 text_rom[1670]=69;
 text_rom[1671]=83;
 text_rom[1672]=67;
 text_rom[1673]=65;
 text_rom[1674]=78;
 text_rom[1676]=84;
 text_rom[1677]=70;
 text_rom[1679]=65;
 text_rom[1680]=78;
 text_rom[1681]=68;
 text_rom[1683]=82;
 text_rom[1684]=69;
 text_rom[1685]=83;
 text_rom[1686]=84;
 text_rom[1687]=65;
 text_rom[1688]=82;
 text_rom[1689]=84;
 text_rom[1734]=82;
 text_rom[1735]=69;
 text_rom[1736]=83;
 text_rom[1737]=84;
 text_rom[1738]=79;
 text_rom[1739]=82;
 text_rom[1740]=69;
 text_rom[1742]=68;
 text_rom[1743]=69;
 text_rom[1744]=70;
 text_rom[1745]=65;
 text_rom[1746]=85;
 text_rom[1747]=76;
 text_rom[1748]=84;
 text_rom[1750]=52;
 text_rom[1751]=47;
 text_rom[1752]=52;
 text_rom[1797]=82;
 text_rom[1798]=69;
 text_rom[1799]=83;
 text_rom[1800]=85;
 text_rom[1801]=77;
 text_rom[1802]=69;
 text_rom[1804]=65;
 text_rom[1805]=85;
 text_rom[1806]=84;
 text_rom[1807]=79;
 text_rom[1809]=80;
 text_rom[1810]=76;
 text_rom[1811]=65;
 text_rom[1812]=89;
 text_rom[1813]=66;
 text_rom[1814]=65;
 text_rom[1815]=67;
 text_rom[1816]=75;
 text_rom[1862]=85;
 text_rom[1863]=80;
 text_rom[1865]=68;
 text_rom[1866]=79;
 text_rom[1867]=87;
 text_rom[1868]=78;
 text_rom[1870]=83;
 text_rom[1871]=69;
 text_rom[1872]=76;
 text_rom[1873]=69;
 text_rom[1874]=67;
 text_rom[1875]=84;
 text_rom[1877]=47;
 text_rom[1879]=79;
 text_rom[1880]=75;
 text_rom[1882]=65;
 text_rom[1883]=80;
 text_rom[1884]=80;
 text_rom[1885]=76;
 text_rom[1886]=89;
 text_rom[1925]=75;
 text_rom[1926]=69;
 text_rom[1927]=89;
 text_rom[1928]=49;
 text_rom[1929]=50;
 text_rom[1931]=84;
 text_rom[1932]=65;
 text_rom[1933]=66;
 text_rom[1935]=47;
 text_rom[1937]=75;
 text_rom[1938]=69;
 text_rom[1939]=89;
 text_rom[1940]=56;
 text_rom[1942]=66;
 text_rom[1943]=65;
 text_rom[1944]=67;
 text_rom[1945]=75;
 text_rom[1990]=76;
 text_rom[1991]=69;
 text_rom[1992]=70;
 text_rom[1993]=84;
 text_rom[1995]=82;
 text_rom[1996]=73;
 text_rom[1997]=71;
 text_rom[1998]=72;
 text_rom[1999]=84;
 text_rom[2001]=65;
 text_rom[2002]=68;
 text_rom[2003]=74;
 text_rom[2004]=85;
 text_rom[2005]=83;
 text_rom[2006]=84;
 text_rom[2008]=86;
 text_rom[2009]=65;
 text_rom[2010]=76;
 text_rom[2011]=85;
 text_rom[2012]=69;
 text_rom[2053]=80;
 text_rom[2054]=76;
 text_rom[2055]=65;
 text_rom[2056]=89;
 text_rom[2058]=77;
 text_rom[2059]=79;
 text_rom[2060]=68;
 text_rom[2061]=69;
 text_rom[2062]=58;
 text_rom[2064]=66;
 text_rom[2065]=65;
 text_rom[2066]=67;
 text_rom[2067]=75;
 text_rom[2068]=71;
 text_rom[2069]=82;
 text_rom[2070]=79;
 text_rom[2071]=85;
 text_rom[2072]=78;
 text_rom[2073]=68;
 text_rom[2117]=80;
 text_rom[2118]=76;
 text_rom[2119]=65;
 text_rom[2120]=89;
 text_rom[2122]=77;
 text_rom[2123]=79;
 text_rom[2124]=68;
 text_rom[2125]=69;
 text_rom[2126]=58;
 text_rom[2128]=67;
 text_rom[2129]=79;
 text_rom[2130]=78;
 text_rom[2131]=70;
 text_rom[2132]=73;
 text_rom[2133]=71;
 text_rom[2134]=85;
 text_rom[2135]=82;
 text_rom[2136]=69;
 text_rom[2137]=68;
 text_rom[2139]=83;
 text_rom[2140]=67;
 text_rom[2141]=69;
 text_rom[2142]=78;
 text_rom[2143]=69;
 text_rom[2181]=80;
 text_rom[2182]=76;
 text_rom[2183]=65;
 text_rom[2184]=89;
 text_rom[2186]=77;
 text_rom[2187]=79;
 text_rom[2188]=68;
 text_rom[2189]=69;
 text_rom[2190]=58;
 text_rom[2192]=80;
 text_rom[2193]=65;
 text_rom[2194]=73;
 text_rom[2195]=82;
 text_rom[2196]=69;
 text_rom[2197]=68;
 text_rom[2240]=76;
 text_rom[2241]=79;
 text_rom[2242]=67;
 text_rom[2243]=65;
 text_rom[2244]=76;
 text_rom[2246]=65;
 text_rom[2247]=76;
 text_rom[2248]=69;
 text_rom[2249]=82;
 text_rom[2250]=84;
 text_rom[2252]=84;
 text_rom[2253]=79;
 text_rom[2254]=78;
 text_rom[2255]=69;
 text_rom[2257]=45;
 text_rom[2259]=75;
 text_rom[2260]=69;
 text_rom[2261]=89;
 text_rom[2262]=51;
 text_rom[2264]=77;
 text_rom[2265]=85;
 text_rom[2266]=84;
 text_rom[2267]=69;
 text_rom[2311]=69;
 text_rom[2312]=77;
 text_rom[2313]=69;
 text_rom[2314]=82;
 text_rom[2315]=71;
 text_rom[2316]=69;
 text_rom[2317]=78;
 text_rom[2318]=67;
 text_rom[2319]=89;
 text_rom[2321]=78;
 text_rom[2322]=79;
 text_rom[2323]=84;
 text_rom[2324]=73;
 text_rom[2325]=67;
 text_rom[2326]=69;
 text_rom[2373]=70;
 text_rom[2374]=79;
 text_rom[2375]=76;
 text_rom[2376]=76;
 text_rom[2377]=79;
 text_rom[2378]=87;
 text_rom[2380]=83;
 text_rom[2381]=84;
 text_rom[2382]=65;
 text_rom[2383]=70;
 text_rom[2384]=70;
 text_rom[2386]=73;
 text_rom[2387]=78;
 text_rom[2388]=83;
 text_rom[2389]=84;
 text_rom[2390]=82;
 text_rom[2391]=85;
 text_rom[2392]=67;
 text_rom[2393]=84;
 text_rom[2394]=73;
 text_rom[2395]=79;
 text_rom[2396]=78;
 text_rom[2397]=83;
 text_rom[2442]=75;
 text_rom[2443]=69;
 text_rom[2444]=69;
 text_rom[2445]=80;
 text_rom[2447]=69;
 text_rom[2448]=88;
 text_rom[2449]=73;
 text_rom[2450]=84;
 text_rom[2451]=83;
 text_rom[2453]=67;
 text_rom[2454]=76;
 text_rom[2455]=69;
 text_rom[2456]=65;
 text_rom[2457]=82;
 text_rom[2505]=68;
 text_rom[2506]=79;
 text_rom[2508]=78;
 text_rom[2509]=79;
 text_rom[2510]=84;
 text_rom[2512]=85;
 text_rom[2513]=83;
 text_rom[2514]=69;
 text_rom[2516]=76;
 text_rom[2517]=73;
 text_rom[2518]=70;
 text_rom[2519]=84;
 text_rom[2520]=83;
 text_rom[2563]=65;
 text_rom[2564]=49;
 text_rom[2565]=49;
 text_rom[2567]=68;
 text_rom[2568]=79;
 text_rom[2569]=87;
 text_rom[2570]=78;
 text_rom[2572]=47;
 text_rom[2574]=75;
 text_rom[2575]=69;
 text_rom[2576]=89;
 text_rom[2577]=52;
 text_rom[2579]=84;
 text_rom[2580]=79;
 text_rom[2582]=82;
 text_rom[2583]=69;
 text_rom[2584]=84;
 text_rom[2585]=85;
 text_rom[2586]=82;
 text_rom[2587]=78;
 text_rom[2628]=75;
 text_rom[2629]=69;
 text_rom[2630]=89;
 text_rom[2631]=51;
 text_rom[2633]=77;
 text_rom[2634]=85;
 text_rom[2635]=84;
 text_rom[2636]=69;
 text_rom[2638]=47;
 text_rom[2640]=75;
 text_rom[2641]=69;
 text_rom[2642]=89;
 text_rom[2643]=49;
 text_rom[2645]=75;
 text_rom[2646]=69;
 text_rom[2647]=89;
 text_rom[2648]=48;
 text_rom[2650]=86;
 text_rom[2651]=79;
 text_rom[2652]=76;
 text_rom[2653]=85;
 text_rom[2654]=77;
 text_rom[2655]=69;
 text_rom[2694]=70;
 text_rom[2695]=80;
 text_rom[2696]=71;
 text_rom[2697]=65;
 text_rom[2699]=76;
 text_rom[2700]=79;
 text_rom[2701]=67;
 text_rom[2702]=65;
 text_rom[2703]=76;
 text_rom[2705]=69;
 text_rom[2706]=77;
 text_rom[2707]=69;
 text_rom[2708]=82;
 text_rom[2709]=71;
 text_rom[2710]=69;
 text_rom[2711]=78;
 text_rom[2712]=67;
 text_rom[2713]=89;
 text_rom[2715]=77;
 text_rom[2716]=79;
 text_rom[2717]=68;
 text_rom[2718]=69;
end
// END GENERATED TEXT ROM
// Synchronous 1 KiB font row ROM, one BRAM instead of a large combinational mux.
reg [7:0] font_rom[0:1023]; /* fehdl force_ram=1, ram_style="bram" */
integer fi;reg [63:0] init_glyph;
initial begin
 for(fi=0;fi<1024;fi=fi+1)begin
  init_glyph=font(8'(fi>>3));font_rom[fi]=8'(init_glyph>>((7-(fi%8))*8));
 end
end
reg [7:0] text_char,dynamic_char,font_row;reg dynamic_used;
wire [7:0] ch=dynamic_used?dynamic_char:text_char;
always @(posedge clk)text_char<=text_rom[{line_id,col}];
reg [5:0] glyph_pos;reg [2:0] glyph_x;
reg area,shade,selected,area_q,shade_q,selected_q;
always @(posedge clk)font_row<=font_rom[{ch[6:0],glyph_pos[5:3]}];
always @(posedge clk) begin
 if(reset)begin dynamic_used<=1;dynamic_char<=32;glyph_pos<=0;glyph_x<=0;area<=0;shade<=0;selected<=0;area_q<=0;shade_q<=0;selected_q<=0;text_on<=0;shade_on<=0;color<=0;end
 else begin
  dynamic_used<=col>=40||(col<40&&dynamic_mask[39-col]);
  dynamic_char<=col<40?dynamic_line[319-col*8-:8]:8'd32;
  glyph_pos<={ahead_y[3:1],ahead_x[3:1]};
  area<=ahead_x<640&&ahead_y<480;
  shade<=row<4||row>=28||(opened&&ahead_x>=64&&ahead_x<576&&ahead_y>=96&&ahead_y<352);
  selected<=opened&&(row==9||row==11);
  glyph_x<=glyph_pos[2:0];area_q<=area;shade_q<=shade;selected_q<=selected;
  text_on<=area_q&&font_row[7-glyph_x];shade_on<=area_q&&shade_q;
  color<=selected_q?24'h60ffff:24'hffffff;
 end
end
endmodule

