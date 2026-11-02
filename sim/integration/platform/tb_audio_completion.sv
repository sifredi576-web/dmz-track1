`timescale 1ns/1ps
module tb_audio_completion;
reg clk=0;always #5 clk=~clk;
reg reset=1,flushing=0,pop=0;reg [41:0] params=0;wire [8:0] finished;wire done;
dmz_audio_completion dut(clk,reset,params,flushing,pop,finished,done);
task ticks(input integer n);repeat(n)@(negedge clk);endtask
task flush;begin flushing=1;ticks(5);flushing=0;ticks(2);end endtask
initial begin
 ticks(3);reset=0;params={8'd1,1'b1,1'b0,32'd4};ticks(3);
 if(!done||finished[8])$fatal(1,"must wait for new flush");flush();
 if(done)$fatal(1,"not ready after flush");
 pop=1;ticks(3);pop=0;ticks(4);if(done)$fatal(1,"ended before last consumed pair");
 pop=1;ticks(1);pop=0;ticks(2);if(!done||finished!={1'b1,8'd1})$fatal(1,"missing true EOF");
 params={8'd2,1'b1,1'b1,32'd3};ticks(3);flush();pop=1;ticks(40);pop=0;
 if(done||finished[8])$fatal(1,"loop spuriously completed");
 params={8'd3,1'b0,1'b0,32'd0};ticks(3);flush();if(!done||finished[8])$fatal(1,"stop not silent");
 params={8'd4,1'b1,1'b0,32'd2};flushing=1;ticks(3);flushing=0;ticks(3);pop=1;ticks(2);pop=0;ticks(2);
 if(!finished[8]||finished[7:0]!=4)$fatal(1,"ticket/flush ordering");
 $display("PASS consumed-sample completion, pause gaps, flush/ticket ordering, loops and stop");$finish;
end
endmodule
