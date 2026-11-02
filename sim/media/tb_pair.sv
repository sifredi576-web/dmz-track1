module tb_pair;
reg clk=0;always #5 clk=~clk;
reg reset=1,enable=0,found=0;reg [31:0] swaps=0;reg [3:0] pi=0;
wire request;wire [3:0] idx;integer n=0;
dmz_pair_control dut(clk,reset,enable,swaps,found,pi,request,idx);
always @(posedge clk) if(request) n<=n+1;
task ticks(input integer count);repeat(count) begin @(posedge clk);#1;end endtask
initial begin
 ticks(3);reset=0;found=1;pi=7;ticks(40);if(n!=0)$fatal(1,"background changed");
 enable=1;ticks(40);if(n!=1||idx!=7)$fatal(1,"entry mismatch");
 pi=2;ticks(40);if(n!=1)$fatal(1,"loading triggered early");
 swaps=1;ticks(40);if(n!=2||idx!=2)$fatal(1,"commit mismatch");
 swaps=2;ticks(40);if(n!=3)$fatal(1,"same track did not restart");
 found=0;swaps=3;ticks(40);if(n!=3)$fatal(1,"missing match changed track");
 found=1;swaps=4;ticks(5);enable=0;ticks(40);if(n!=3)$fatal(1,"cancel failed");
 $display("PASS pair entry, commit-only, same track restart, no-match, cancellation");$finish;
end
endmodule
