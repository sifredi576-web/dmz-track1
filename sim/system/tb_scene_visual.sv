`timescale 1ns/1ps
module tb_scene_visual #(parameter PIPELINED=0);
reg clk=0;always #5 clk=~clk;
reg reset=1,frame=0,es=0,hide=0,cv=0,ce=0,en=1;reg [7:0] cmd=0;
reg [15:0] left=0,right=0;reg [9:0] x=70,y=264;
wire emergency,visible,alarm,ink,shade;wire [23:0] color;wire [4:0] ll,rr,pl,pr;
integer reference_tick=0;
always @(posedge clk)begin
 if(reset||!emergency||reference_tick==7)reference_tick<=0;
 else reference_tick<=reference_tick+1;
end
always @(negedge clk)if(!reset&&alarm!==(emergency&&(reference_tick<4)))
 $fatal(1,"alert phase differs from original timer comparison");
dmz_scene_control #(.HALF_SECOND(4)) scene(.clk(clk),.reset(reset),.frame_tick(frame),.emergency_switch(es),.visual_hide_switch(hide),
 .command_valid(cv),.command_byte(cmd),.emergency(emergency),.visual_enabled(visible),.alert_on(alarm));
dmz_audio_visual #(.PIPELINED(PIPELINED)) visual(.clk(clk),.reset(reset),.sample_ce(ce),.frame_tick(frame),.enabled(en),.left(left),.right(right),.x(x),.y(y),
 .ink(ink),.shade(shade),.color(color),.level_l(ll),.level_r(rr),.peak_l(pl),.peak_r(pr));
task cycles(input integer n);repeat(n) @(negedge clk);endtask
task tick;begin frame=1;cycles(1);frame=0;cycles(2);end endtask
task send(input [7:0] b);begin cv=1;cmd=b;cycles(1);cv=0;cycles(2);end endtask
reg [15:0] tone_samples[0:127];
integer highs=0,lows=0;
integer column,row,index,phase,ya,yb,ys,ye,lo,hi;reg expected_line;
function integer reference_y(input integer n);
 begin case(n%4)0:reference_y=0;1:reference_y=4095;2:reference_y=2048;default:reference_y=2560;endcase end
endfunction
function [15:0] test_sample(input integer n);
 begin case(n%4)0:test_sample=16'h8000;1:test_sample=16'h7fff;2:test_sample=0;default:test_sample=16'h2000;endcase end
endfunction
initial begin
 cycles(4);reset=0;cycles(4);tick();if(emergency||!visible) $fatal(1,"Default scene");
 send("Q");if(emergency) $fatal(1,"Scene changed outside frame");tick();if(!emergency) $fatal(1,"Soft alert enter");
 repeat(16) begin if(alarm) highs=highs+1;else lows=lows+1;cycles(1);end
 if(highs!=8||lows!=8) $fatal(1,"Alert duty cycle %0d/%0d",highs,lows);
 es=1;cycles(4);send("X");tick();if(!emergency) $fatal(1,"Hardware alert priority");
 es=0;cycles(4);tick();if(emergency) $fatal(1,"Hardware alert exit");
 hide=1;cycles(4);tick();if(visible) $fatal(1,"Physical visualization hide");hide=0;cycles(4);tick();
 send("Z");tick();if(visible) $fatal(1,"Soft visualization hide");send("Z");tick();if(!visible) $fatal(1,"Soft visualization show");
 left=16'h8000;right=16'h4000;ce=1;cycles(2050);ce=0;tick();
 if(ll!=31||rr!=16||pl!=31||pr!=16) $fatal(1,"Signed -32768 / stereo peaks %0d/%0d",ll,rr);
 cycles(5);if(!ink||color!=24'h50ffff) $fatal(1,"Captured PCM waveform not rendered");
 // Silence is actual zero PCM; levels clear and peak hold decays to zero.
 left=0;right=0;ce=1;cycles(2050);ce=0;tick();tick();
 if(ll!=0||rr!=0) $fatal(1,"Silence levels did not clear");
 repeat(32) tick();if(pl!=0||pr!=0) $fatal(1,"Peak decay did not finish");
 // Full panel raster oracle: alternating clipped slopes, flat points and ramps.
 reset=1;cycles(2);reset=0;ce=1;
 for(integer n=0;n<128;n++)begin left=test_sample(n);cycles(8);end
 ce=0;tick();cycles(5);
 for(column=0;column<512;column++)begin
  index=column/4;phase=column%4;
  ya=reference_y(index==0?0:index-1);yb=reference_y(index);
  ys=264-(ya*(4-phase)+yb*phase)/128;
  ye=264-(ya*(3-phase)+yb*(phase+1))/128;
  lo=ys<ye?ys:ye;hi=ys>ye?ys:ye;
  for(row=128;row<272;row++)begin
   x=10'(column+62);y=10'(row);cycles(4);
   expected_line=ys==ye?row==ys:ys<ye?(row>=ys&&row<ye):(row<=ys&&row>ye);
   if((ink&&color==24'h50ffff)!==expected_line)$fatal(1,"Continuous raster mismatch x=%0d y=%0d",column+64,row);
  end
 end
 $display("PASS 73728-pixel continuous thin-line raster, clipped alternating slopes and sample boundaries");
 // Actual TONE01 PCM at 6 kHz, using an independent integer raster oracle.
 $readmemh("../../sim/system/tone_wave_6khz.hex",tone_samples);
 ce=1;for(integer n=0;n<128;n++)begin left=tone_samples[n];cycles(8);end
 ce=0;tick();cycles(5);
 for(column=0;column<512;column++)begin
  index=column/4;phase=column%4;
  ya=(tone_samples[index==0?0:index-1]>>4)^2048;
  yb=(tone_samples[index]>>4)^2048;
  ys=264-(ya*(4-phase)+yb*phase)/128;ye=264-(ya*(3-phase)+yb*(phase+1))/128;
  for(row=128;row<272;row++)begin
   x=10'(column+62);y=10'(row);cycles(4);
   expected_line=ys==ye?row==ys:ys<ye?(row>=ys&&row<ye):(row<=ys&&row>ye);
   if((ink&&color==24'h50ffff)!==expected_line)$fatal(1,"Real pure-tone raster mismatch x=%0d y=%0d",column+64,row);
  end
 end
 $display("PASS 73728 actual TONE01 raster pixels, 12-bit amplitude and 6 kHz capture");
 en=0;cycles(5);if(ink||shade) $fatal(1,"Disabled overlay affected pixels");
 $display("PASS frame-latched scene/physical priority, 50 percent alert, stereo signed peaks, real PCM page, silence/decay and overlay disable");$finish;
end
initial begin #10000000;$fatal(1,"Scene/visual timeout");end
endmodule


