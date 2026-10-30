// Two-cycle look-ahead overlay: top retains its original one-cycle RGB latency.
// Controls/metadata latch in vertical blank; no frame-buffer writes for OSD.
module dmz_osd(input clk,reset,input emergency,visual_enabled,input [23:0] time_bcd,input [3:0] brightness,contrast,input [9:0] x,y,
 input menu_open,input [5:0] query,browse_tag,input [63:0] browse_name,input browse_valid,catalog_ready,
 input [5:0] image_count,input [4:0] displayed_image,input [4:0] wav_count,input [3:0] wav_index,volume,
 input audio_paused,tone_muted,wav_source,autoplay,input [7:0] sd_error,image_error,wav_error,
 output reg text_on,shade_on,output reg [23:0] color);
reg opened,valid,ready,paused,muted,source,auto_mode,alert,vis;
reg [5:0] q,tag,ic;reg [4:0] img,wc;reg [3:0] wi,vol;
reg [23:0] tm;reg [3:0] bri,con;reg [9:0] scroll;
reg [63:0] name;reg [7:0] se,ie,we;
always @(posedge clk) begin
 if(reset) begin alert<=0;vis<=1;opened<=0;valid<=0;ready<=0;paused<=0;muted<=0;source<=1;auto_mode<=1;
  tm<=0;bri<=4;con<=4;scroll<=0;q<=0;tag<=0;ic<=0;img<=0;wc<=0;wi<=0;vol<=8;name<=0;se<=0;ie<=0;we<=0;end
 else if(x==0&&y==480) begin alert<=emergency;vis<=visual_enabled;opened<=menu_open;valid<=browse_valid;ready<=catalog_ready;
  tm<=time_bcd;bri<=brightness;con<=contrast;scroll<=scroll+1'b1;
  paused<=audio_paused;muted<=tone_muted;source<=wav_source;auto_mode<=autoplay;
  q<=query;tag<=browse_tag;ic<=image_count;img<=displayed_image;wc<=wav_count;wi<=wav_index;vol<=volume;
  name<=browse_name;se<=sd_error;ie<=image_error;we<=wav_error;end
end
wire [9:0] ahead_x=x>=798?x-798:x+2;
wire [9:0] ahead_y=x>=798?(y==524?10'd0:y+1'b1):y;
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
wire [9:0] ticker_x=ahead_x+scroll;
wire [511:0] ticker="DMZ FPGA MEDIA - TF CARD AUDIO AND PICTURES - WELCOME           ";
wire [511:0] active_ticker=alert?"EMERGENCY - FOLLOW STAFF INSTRUCTIONS - KEEP EXITS CLEAR        ":ticker;
reg [319:0] line;integer j;
always @* begin
 line="                                        ";
 case(row)
  0: line="DMZ MEDIA  IMG 00/00  VOL 8/8           ";
  1: line="WAV PLAY  AUTO      WAV 00/00           ";
  2: line="UPTIME 00:00:00                         ";
  3: line="BRI 4/8 CON 4/8  TOP KEYS ADJUST        ";
  7: if(opened) line="      TF FILE SELECT                    ";
  9: if(opened) line="      TYPE: BMP    FILE 00/00           ";
  11: if(opened) line="      NAME:         .BMP                ";
  13: if(opened) line="      KEY14 PREV   KEY15 NEXT           ";
  15: if(opened) line="      KEY13 TYPE   KEY12 SELECT         ";
  17: if(opened) line="      KEY11 CLOSE  KEY6 AUTO            ";
  19: if(opened) line="      BROWSE THEN SELECT TO PLAY        ";
  21: if(vis) line="    PCM WAVEFORM / LEFT + RIGHT LEVEL   ";
  28: line="SD:00  BMP:00  WAV:00                   ";
  29: line="KEY11 MENU  KEY2 PAUSE  KEY3 MUTE       ";
  default:begin end
 endcase
 if(row==2) begin
  line[319-7*8-:16]={digit({2'd0,tm[23:20]}),digit({2'd0,tm[19:16]})};
  line[319-10*8-:16]={digit({2'd0,tm[15:12]}),digit({2'd0,tm[11:8]})};
  line[319-13*8-:16]={digit({2'd0,tm[7:4]}),digit({2'd0,tm[3:0]})};
 end
 if(row==3) begin line[319-4*8-:8]=digit({2'd0,bri});line[319-12*8-:8]=digit({2'd0,con});end
 if(row==0) begin
  line[319-15*8-:16]={digit(({1'b0,img}+1'b1)/10),digit(({1'b0,img}+1'b1)%10)};
  line[319-18*8-:16]={digit(ic/10),digit(ic%10)};line[319-26*8-:8]=digit({2'd0,vol});
 end
 if(row==1) begin
  if(!source) line[319-0*8-:24]="TST";
  if(paused) line[319-4*8-:32]="STOP";else if(muted) line[319-4*8-:32]="MUTE";
  if(!auto_mode) line[319-10*8-:32]="HOLD";
  line[319-24*8-:16]={digit(({2'd0,wi}+1'b1)/10),digit(({2'd0,wi}+1'b1)%10)};
  line[319-27*8-:16]={digit({1'b0,wc}/10),digit({1'b0,wc}%10)};
  if(wc==0) line[319-4*8-:32]="NONE";else if(we!=0) line[319-4*8-:32]="FAIL";
 end
 if(opened&&row==9) begin
  if(q[5]) line[319-12*8-:24]="WAV";
  line[319-24*8-:16]={digit((total==0?6'd0:({1'b0,q[4:0]}+1'b1))/10),digit((total==0?6'd0:({1'b0,q[4:0]}+1'b1))%10)};
  line[319-27*8-:16]={digit(total/10),digit(total%10)};
 end
 if(opened&&row==11) begin
  for(j=0;j<8;j=j+1) line[319-(12+j)*8-:8]=name[j*8+:8];
  if(q[5]) line[319-21*8-:24]="WAV";
  if(!ready) line="      SCANNING TF CARD                  ";
  else if(total==0) line="      NO FILES OF THIS TYPE             ";
  else if(!valid||tag!=q) line="      READING FILE NAME                 ";
 end
 if(alert) case(row)
  1:line="LOCAL ALERT TONE - KEY3 MUTE            ";
  7:line="       EMERGENCY NOTICE                 ";
  9:line="     FOLLOW STAFF INSTRUCTIONS          ";
  11:line="          KEEP EXITS CLEAR              ";
  13:line="         DO NOT USE LIFTS               ";
  15:line="      A11 DOWN / X TO RETURN            ";
  17:line="    KEY3 MUTE / KEY4 KEY5 VOLUME        ";
  19:line="      FPGA LOCAL EMERGENCY MODE         ";
  default:begin end
 endcase
 if(row==28) begin
  line[319-3*8-:16]={hexchar(se[7:4]),hexchar(se[3:0])};
  line[319-11*8-:16]={hexchar(ie[7:4]),hexchar(ie[3:0])};
  line[319-19*8-:16]={hexchar(we[7:4]),hexchar(we[3:0])};
 end
end
reg [7:0] ch;reg [5:0] glyph_pos;reg area,shade,selected;wire [63:0] bits=font(ch);
always @(posedge clk) begin
 if(reset) begin ch<=32;glyph_pos<=0;area<=0;shade<=0;selected<=0;text_on<=0;shade_on<=0;color<=0;end
 else begin
  ch<=row==27?active_ticker[511-ticker_x[9:4]*8-:8]:(col<40?line[319-col*8-:8]:8'd32);
  glyph_pos<={ahead_y[3:1],(row==27?ticker_x[3:1]:ahead_x[3:1])};
  area<=ahead_x<640&&ahead_y<480;
  shade<=row<4||row>=27||(opened&&ahead_x>=64&&ahead_x<576&&ahead_y>=96&&ahead_y<352);
  selected<=opened&&(row==9||row==11);
  text_on<=area&&bits[63-glyph_pos];shade_on<=area&&shade;
  color<=selected?24'h60ffff:24'hffffff;
 end
end
endmodule

