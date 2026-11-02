`timescale 1ns/1ps
module tb_ui_keys;
reg clk=0;always #5 clk=~clk;
reg reset=1,kv=0,menu=0,active=1,paused=0,muted=0,uv=0;
reg [3:0] key=0;reg [7:0] ub=0;
wire cv,iv;wire [7:0] cb;wire [3:0] action;
integer commands=0,events=0;reg [7:0] last_command;reg [3:0] last_action;
dmz_ui_keys dut(clk,reset,kv,key,menu,active,paused,muted,uv,ub,cv,cb,iv,action);
always @(posedge clk)if(!reset)begin
 if(cv&&iv)$fatal(1,"physical event dispatched twice");
 if(cv)begin commands<=commands+1;last_command<=cb;end
 if(iv)begin events<=events+1;last_action<=action;end
end
task press(input integer k,input integer command,input integer ui);
 integer c,e;
 begin
  @(negedge clk);c=commands;e=events;key=4'(k);kv=1;
  @(negedge clk);kv=0;repeat(2)@(negedge clk);
  if(commands!=c+(command>=0?1:0)||events!=e+(ui>=0?1:0))$fatal(1,"key %0d destination/count",k);
  if(command>=0&&last_command!=8'(command))$fatal(1,"key %0d wrong command",k);
  if(ui>=0&&last_action!=4'(ui))$fatal(1,"key %0d wrong UI event",k);
 end
endtask
integer before_commands,before_events;
initial begin
 repeat(3)@(negedge clk);reset=0;
 press(0,"+",-1);press(1,"-",-1);press(2,"H",-1);press(3,"M",-1);
 press(4,-1,12);press(5,-1,11);press(6,-1,2);press(7,-1,10);
 press(8,-1,6);press(9,-1,4);press(10,-1,5);press(11,-1,3);
 press(12,"F",-1);press(13,-1,8);press(14,-1,1);press(15,-1,7);
 paused=1;muted=1;press(2,"A",-1);press(3,"U",-1);paused=0;muted=0;
 menu=1;
 press(4,-1,12);press(5,-1,11);press(6,"O",-1);press(7,-1,-1);
 press(8,"F",-1);press(9,"}",-1);press(10,"E",-1);press(11,"{",-1);
 press(12,"V",-1);press(13,"J",-1);press(14,"I",-1);press(15,128,-1);
 menu=0;active=0;press(4,"X",-1);press(5,"Q",-1);press(13,"J",-1);press(15,128,-1);
 active=1;
 // UART wins now; one queued key follows once, with no legacy control leak.
 @(negedge clk);before_commands=commands;before_events=events;uv=1;ub="M";kv=1;key=10;
 @(negedge clk);kv=0;ub="U";
 @(negedge clk);uv=0;
 repeat(4)@(negedge clk);
 if(commands!=before_commands+2||events!=before_events+1||last_action!=5)$fatal(1,"UART arbitration");
 // Development UI injection must dispatch once without leaking to legacy commands.
 @(negedge clk);before_commands=commands;before_events=events;uv=1;ub=8'hd5;
 @(negedge clk);uv=0;repeat(3)@(negedge clk);
 if(commands!=before_commands||events!=before_events+1||last_action!=5)$fatal(1,"UART UI injection isolation");
 // Reset must cancel a queued event.
 @(negedge clk);uv=1;kv=1;key=15;@(negedge clk);reset=1;uv=0;kv=0;
 repeat(3)@(negedge clk);reset=0;before_events=events;repeat(3)@(negedge clk);
 if(events!=before_events)$fatal(1,"reset queued event leak");
 $display("PASS all 16 new keys, resource menu routing, playback state, fallback, exclusive dispatch, UART and reset");$finish;
end
initial begin #100000;$fatal(1,"timeout");end
endmodule
