`timescale 1ns/1ps
module tb_status_panel;
reg clk=0;always #5 clk=~clk;
reg reset=1,frame=0,en=1,muted=0,paused=0,loading=0,aenabled=1,active=1,ended=0,fault=0;
reg [3:0] volume=8,b=4,c=4;reg [9:0] x=0,y=0;
wire ink,shade;wire [23:0] color;
dmz_status_panel dut(.clk(clk),.reset(reset),.frame_tick(frame),.enabled(en),.muted(muted),.paused(paused),.loading(loading),.audio_enabled(aenabled),.audio_active(active),.ended(ended),.fault(fault),.volume(volume),.brightness(b),.contrast(c),.x(x),.y(y),.ink(ink),.shade(shade),.color(color));
reg [13:0] font_ref[0:511];integer st=0;reg bf=0,cf=0,bu=0,cu=0;
integer xx,yy,g,row,col,lx,ly;reg expected;reg [23:0] expected_color;
function integer dg(input integer n);begin case(n)
 0:dg=20;
1:dg=21;
2:dg=22;
3:dg=23;
4:dg=24;
5:dg=25;
6:dg=26;
7:dg=27;
8:dg=28;
 default:dg=0;endcase end endfunction
function integer label(input integer r,input integer cl);
 begin label=0;case(r)
 0:if(cl==0)label=1;else if(cl==1)label=2;
 1:case(st)
 0:if(cl==0)label=3;else if(cl==1)label=4;
 1:if(cl==0)label=5;else if(cl==1)label=6;
 2:if(cl==0)label=7;else if(cl==1)label=2;
 3:if(cl==0)label=8;else if(cl==1)label=9;
 4:if(cl==0)label=10;else if(cl==1)label=11;
 5:if(cl==0)label=12;else if(cl==1)label=1;
 6:if(cl==0)label=18;else if(cl==1)label=19;
 endcase
 2:if(cl==0)label=2;else if(cl==1)label=13;
 3:if(cl==0)label=dg(volume);else if(cl==1)label=29;else if(cl==2)label=28;
 4:if(cl==0)label=14;else if(cl==1)label=15;
 5:if(cl==0)label=dg(b);else if(cl==1)label=29;else if(cl==2)label=28;else if(bf)label=bu?30:31;
 6:if(cl==0)label=16;else if(cl==1)label=17;
 7:if(cl==0)label=dg(c);else if(cl==1)label=29;else if(cl==2)label=28;else if(cf)label=cu?30:31;
 endcase end
endfunction
task ticks(input integer n);repeat(n)@(negedge clk);endtask
task tick;begin frame=1;ticks(1);frame=0;ticks(3);end endtask
task raster;begin
 for(yy=128;yy<288;yy++)for(xx=576;xx<640;xx++)begin
  x=10'(xx-2);y=10'(yy);ticks(4);
  row=(yy-128)/16;col=(xx-576)/16;lx=xx%16;ly=yy%16;g=label(row,col);
  expected=(lx>=1&&lx<15&&font_ref[g*16+ly][14-lx])||xx==576||xx==639||yy==128||yy==287;
  expected_color=((row==5&&bf)||(row==7&&cf))?24'hffe56d:(row==1?(st==0?24'h50ffb0:st==6?24'hff7070:24'hffcf70):24'hc0eaff);
  if(xx>=584&&xx<632&&((yy>=260&&yy<264)||(yy>=276&&yy<280)))begin
   expected=1;
   if(yy<272)expected_color=(xx-584)<b*6?(bf?24'hffe56d:24'h50cfff):24'h20344c;
   else expected_color=(xx-584)<c*6?(cf?24'hffe56d:24'h50cfff):24'h20344c;
  end
  if(!shade||ink!==expected||(expected&&color!==expected_color))$fatal(1,"Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d",st,xx,yy,g);
 end
end endtask
initial begin
 $readmemh("../../sim/system/status_panel_font.hex",font_ref);
 ticks(3);reset=0;tick();raster();
 paused=1;raster();st=1;tick();raster();muted=1;st=2;tick();raster();
 paused=0;muted=0;ended=1;st=3;tick();raster();
 loading=1;st=4;tick();raster();loading=0;aenabled=0;st=5;tick();raster();
 fault=1;st=6;tick();raster();fault=0;aenabled=1;active=0;st=4;tick();raster();
 active=1;ended=0;st=0;b=5;c=3;volume=0;bf=1;cf=1;bu=1;cu=0;tick();raster();
 repeat(120)tick();bf=0;cf=0;raster();
 b=4;c=4;bf=1;cf=1;bu=0;cu=1;tick();raster();
 x=573;y=200;ticks(5);if(ink||shade)$fatal(1,"Panel leaked left into waveform");
 x=638;y=200;ticks(5);if(ink||shade)$fatal(1,"Panel leaked past screen");
 x=590;y=127;ticks(5);if(ink||shade)$fatal(1,"Panel leaked above");
 x=590;y=288;ticks(5);if(ink||shade)$fatal(1,"Panel leaked below");
 x=590;y=150;ticks(4);
 en=0;ticks(5);if(ink||shade)$fatal(1,"Disabled panel paints");
 $display("PASS 122880 Chinese panel pixels: play/pause/mute/end/load/no-audio/fault, volume, parameter values/arrows/bars, 120-frame highlight expiry, reset defaults, frame coherence, clipping and disable");$finish;
end
initial begin #10000000;$fatal(1,"Panel timeout");end
endmodule
