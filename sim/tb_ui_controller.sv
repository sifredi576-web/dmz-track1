`timescale 1ns/1ps
module tb_ui_controller;
reg clk=0;always #5 clk=~clk;
reg reset=1,cfg=0,ev=0;reg [3:0] event_code=0;
reg [4:0] entry=0;reg [5:0] page_count=4;reg [6:0] resources=4;
reg [3:0] count=5;reg [7:0] visible=255,enabled=255;
reg [255:0] neighbors=0;reg [3:0] operation=0;reg [7:0] target=0,arg=0,back=0,audio=255;
reg quiz=1;reg [2:0] qid=0;reg [1:0] expected=0;
wire page_req,audio_req,control_req,choice_valid,notice_req,notice_exit,busy;
wire [4:0] page_target,current;wire [5:0] audio_target;
wire [1:0] control_action,choice,priority_value;wire [7:0] control_arg,answered,correct,error;
wire [2:0] focus;wire [3:0] score;
reg page_accept=0,loaded=0,audio_accept=0,control_accept=0;
integer notices=0,exits=0;reg [1:0] last_priority;
dmz_ui_controller dut(clk,reset,cfg,entry,page_count,resources,ev,event_code,8'd0,1'b0,3'd0,count,visible,enabled,neighbors,
 operation,target,arg,back,audio,quiz,qid,expected,page_req,page_target,page_accept,loaded,audio_req,audio_target,audio_accept,
 control_req,control_action,control_arg,control_accept,current,focus,answered,correct,score,choice_valid,choice,
 notice_req,priority_value,notice_exit,error,busy);
always @(posedge clk)begin
 if(notice_req)begin notices<=notices+1;last_priority<=priority_value;end
 if(notice_exit)exits<=exits+1;
end
task ticks(input integer n);repeat(n)@(negedge clk);endtask
task event_send(input [3:0] code);
 begin @(negedge clk);event_code=code;ev=1;@(negedge clk);ev=0;ticks(3);end
endtask
task land(input integer wanted);
 begin
  if(!page_req||page_target!=wanted)$fatal(1,"page request expected %0d got %0d",wanted,page_target);
  ticks(2);if(!page_req)$fatal(1,"request lost without accept");
  page_accept=1;ticks(1);page_accept=0;ticks(2);loaded=1;ticks(1);loaded=0;ticks(2);
  if(current!=wanted)$fatal(1,"page commit mismatch");
 end
endtask
initial begin
 for(integer i=0;i<8;i=i+1)for(integer j=0;j<4;j=j+1)neighbors[i*32+j*8+:8]=8'((i+1)%5);
 ticks(3);reset=0;cfg=1;ticks(3);land(0);
 operation=9;target=1;event_send(5);if(error!=5||page_req||score!=0)$fatal(1,"submit without choice");
 operation=3;arg=0;event_send(5);if(!choice_valid||choice!=0||answered!=0||score!=0)$fatal(1,"provisional choice");
 arg=2;event_send(5);if(choice!=2)$fatal(1,"change provisional choice");
 arg=0;event_send(5);operation=9;target=1;event_send(5);
 if(score!=1||answered!=1||correct!=1)$fatal(1,"first score");
 event_send(11);if(notices!=1||last_priority!=2||page_target!=1)$fatal(1,"busy priority dispatch");
 event_send(7);if(page_target!=1)$fatal(1,"busy event changed pending page");
 quiz=0;land(1);event_send(7);quiz=1;land(0);
 operation=3;arg=3;event_send(5);if(error!=7||choice!=0||score!=1)$fatal(1,"committed answer editable");
 operation=9;target=1;event_send(5);if(score!=1)$fatal(1,"duplicate score");quiz=0;land(1);
 back=0;event_send(6);quiz=1;land(0);
 operation=1;target=2;event_send(5);qid=1;expected=1;land(2);
 operation=3;arg=0;event_send(5);operation=9;target=3;event_send(5);
 if(score!=1||answered!=3||correct!=1)$fatal(1,"wrong answer scoring");quiz=0;land(3);
 operation=5;event_send(5);quiz=1;qid=0;expected=0;land(0);
 if(score!=0||answered!=0||choice_valid)$fatal(1,"restart did not clear");
 // Home/back retain learning records; navigation skips unavailable controls.
 quiz=0;neighbors[0*32+1*8+:8]=1;neighbors[1*32+1*8+:8]=2;
 enabled=8'b00001101;event_send(4);ticks(10);if(focus!=2||busy)$fatal(1,"skip disabled focus");
 enabled=0;event_send(4);ticks(12);if(busy||error!=3)$fatal(1,"disabled cycle did not terminate");
 enabled=255;operation=1;target=99;event_send(5);if(error!=1||page_req)$fatal(1,"invalid jump");
 operation=2;target=64;event_send(5);if(error!=2||audio_req)$fatal(1,"invalid audio");
 operation=2;target=2;event_send(5);if(!audio_req||audio_target!=2)$fatal(1,"audio resource request");
 ticks(3);if(!audio_req)$fatal(1,"audio request lost");audio_accept=1;ticks(1);audio_accept=0;ticks(2);
 operation=6;arg=1;event_send(5);if(!control_req||control_action!=0||control_arg!=1)$fatal(1,"control action");
 control_accept=1;ticks(1);control_accept=0;ticks(2);
 event_send(10);if(notices!=2||last_priority!=1)$fatal(1,"normal notice request");
 event_send(11);if(notices!=3||last_priority!=2)$fatal(1,"priority notice request");
 event_send(12);if(exits!=1)$fatal(1,"notice exit request");
 // Page arrival chooses first available widget and only then starts page audio.
 event_send(7);visible=8'b00010010;audio=3;land(0);
 if(focus!=1||!audio_req||audio_target!=3)$fatal(1,"arrival focus/audio");
 cfg=0;ticks(2);if(page_req||audio_req||control_req||score!=0)$fatal(1,"configuration invalidation");
 $display("PASS generic focus, disabled skip, commit boundary, choice/submit, first-score lock, home/back, restart, bounds, request handshake and notice dispatch");$finish;
end
initial begin #200000;$fatal(1,"timeout");end
endmodule
