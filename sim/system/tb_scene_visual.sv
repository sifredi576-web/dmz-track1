`timescale 1ns/1ps
module tb_scene_visual;
reg clk=0;always #5 clk=~clk;
reg reset=1,frame=0,es=0,hide=0,cv=0,ce=0,en=1;reg [7:0] cmd=0;
reg [15:0] left=0,right=0;reg [9:0] x=70,y=392;
wire emergency,visible,alarm,ink,shade;wire [23:0] color;wire [4:0] ll,rr,pl,pr;
dmz_scene_control #(.HALF_SECOND(4)) scene(.clk(clk),.reset(reset),.frame_tick(frame),.emergency_switch(es),.visual_hide_switch(hide),
 .command_valid(cv),.command_byte(cmd),.emergency(emergency),.visual_enabled(visible),.alert_on(alarm));
dmz_audio_visual visual(.clk(clk),.reset(reset),.sample_ce(ce),.frame_tick(frame),.enabled(en),.left(left),.right(right),.x(x),.y(y),
 .ink(ink),.shade(shade),.color(color),.level_l(ll),.level_r(rr),.peak_l(pl),.peak_r(pr));
task cycles(input integer n);repeat(n) @(negedge clk);endtask
task tick;begin frame=1;cycles(1);frame=0;cycles(2);end endtask
task send(input [7:0] b);begin cv=1;cmd=b;cycles(1);cv=0;cycles(2);end endtask
integer highs=0,lows=0;
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
 en=0;cycles(5);if(ink||shade) $fatal(1,"Disabled overlay affected pixels");
 $display("PASS frame-latched scene/physical priority, 50 percent alert, stereo signed peaks, real PCM page, silence/decay and overlay disable");$finish;
end
initial begin #1000000;$fatal(1,"Scene/visual timeout");end
endmodule
