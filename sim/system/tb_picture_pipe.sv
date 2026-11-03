`timescale 1ns/1ps
module tb_picture_pipe;
reg clk=0;always #5 clk=~clk;
reg reset=1;reg [23:0] rgb=0;reg [3:0] b=4,c=4;wire [23:0] actual,expected;
dmz_picture_adjust reference_model(.rgb(rgb),.brightness(b),.contrast(c),.adjusted(expected));
dmz_picture_pipe dut(.clk(clk),.reset(reset),.rgb(rgb),.brightness(b),.contrast(c),.adjusted(actual));
reg [23:0] wanted;integer count=0;
initial begin
 repeat(3)@(negedge clk);reset=0;
 for(integer bi=0;bi<=8;bi++)for(integer ci=0;ci<=8;ci++)for(integer p=0;p<256;p++)begin
  b=4'(bi);c=4'(ci);rgb={8'(p),8'(p*37),8'(255-p)};
  #1;wanted=expected;repeat(3)@(negedge clk);
  if(actual!==wanted)$fatal(1,"Picture pipeline b=%0d c=%0d rgb=%h actual=%h expected=%h",b,c,rgb,actual,wanted);
  count++;
 end
 $display("PASS %0d mixed RGB/brightness/contrast combinations, exact three-cycle pipeline",count);$finish;
end
endmodule
