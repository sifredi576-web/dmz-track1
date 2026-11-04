`timescale 1ns/1ps
module tb_wipe;
reg clk=0;always #5 clk=~clk;reg reset=1,ft=0,lv=0;reg [11:0] used=2040;
wire lr,ack,req,wr,push,fr,display,front,fault;wire [20:0] addr;wire [31:0] swaps;reg rsp=0;
integer response_delay=0;
reg monitor=0;integer step=0,reads=0;reg expected_bank;
dmz_image_framebuffer #(.WIDE_MODE(1),.HD(1)) dut(.clk(clk),.reset(reset),.bist_done(1'b1),.bist_passed(1'b1),.frame_toggle(ft),
 .load_valid(lv),.load_addr(19'd0),.load_data(256'd0),.load_last(1'b1),.load_ready(lr),.load_ack(ack),
 .req_valid(req),.req_write(wr),.req_addr(addr),.req_wdata(),.req_ready(response_delay==0),.rsp_valid(rsp),.rsp_rdata(256'd0),
 .fifo_used(used),.fifo_full(1'b0),.fifo_push(push),.fifo_data(),.fifo_reset(fr),.display_valid(display),.front_bank(front),
 .swaps(swaps),.frames_written(),.dma_reads(),.fault(fault));
always @(posedge clk) begin
 rsp<=response_delay==1;
 if(req&&response_delay==0)response_delay<=12;else if(response_delay>0)response_delay<=response_delay-1;
 if(monitor&&req&&response_delay==0&&!wr) begin
  expected_bank=step==11?0:((step>0&&(addr[18:0]%480)<step*48)?0:1);
  if(addr[19]!==expected_bank) $fatal(1,"Wipe bank mismatch step=%0d addr=%h front=%b swaps=%0d active=%b wipe=%0d",step,addr,front,swaps,dut.transition_active,dut.wipe_words);
  reads=reads+1;
 end
 if(fault) $fatal(1,"Framebuffer fault");
end
task cycles(input integer n);repeat(n) @(negedge clk);endtask
task load;begin used=2040;lv=1;do @(posedge clk);while(!lr);@(negedge clk);lv=0;wait(ack);cycles(3);end endtask
task frame;begin $display("FRAME begin step=%0d t=%0t",step,$time);monitor=0;ft=~ft;cycles(100);monitor=1;reads=0;cycles(10000);if(reads<500) $fatal(1,"Read stream stopped");monitor=0;$display("FRAME end step=%0d t=%0t",step,$time);end endtask
initial begin
 cycles(4);reset=0;load();used=0;frame();if(!display||!front||swaps!=1) $fatal(1,"Initial frame must commit immediately");
 load();used=0;
 for(step=1;step<=10;step=step+1) begin
  frame();if(swaps!=1||!front) $fatal(1,"Premature frame commit");
  lv=1;cycles(10);if(lr) $fatal(1,"Back frame overwritten during transition");lv=0;
 end
 step=11;frame();if(swaps!=2||front) $fatal(1,"Wipe did not finish");
 $display("PASS 10-step frame-boundary wipe, per-burst old/new bank selection, no early commit or back-frame overwrite");$finish;
end
initial begin #10000000;$fatal(1,"Wipe timeout state=%0d back=%0d display=%0d step=%0d lv=%0d used=%0d addr=%0d",dut.state,dut.back_ready,display,step,lv,used,dut.rd_addr);end
endmodule




