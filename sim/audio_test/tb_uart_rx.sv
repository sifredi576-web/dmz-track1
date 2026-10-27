`timescale 1ns/1ps
module tb_uart_rx;
reg clk=0,reset=1,rx=1;
always #20 clk=~clk;
wire valid;wire [7:0] data;
dmz_uart_rx dut(.clk(clk),.reset(reset),.rx(rx),.valid(valid),.data(data));
reg [7:0] seen[4];integer count=0;
always @(posedge clk) if(valid) begin seen[count]=data;count=count+1;end
task send(input [7:0] value,input good_stop);
 begin
  @(negedge clk);rx=0;repeat(217) @(negedge clk);
  for(integer i=0;i<8;i=i+1) begin rx=value[i];repeat(217) @(negedge clk);end
  rx=good_stop;repeat(217) @(negedge clk);rx=1;repeat(300) @(negedge clk);
 end
endtask
initial begin
 #200;reset=0;repeat(10) @(negedge clk);
 rx=0;repeat(40) @(negedge clk);rx=1;repeat(300) @(negedge clk);
 send("U",1);send("M",1);send("B",0);send("S",1);
 repeat(500) @(negedge clk);
 if(count!=3||seen[0]!="U"||seen[1]!="M"||seen[2]!="S") $fatal(1,"RX count=%0d %h %h %h",count,seen[0],seen[1],seen[2]);
 $display("PASS UART RX 115200 8N1, command bytes, short-glitch rejection and invalid-stop rejection");$finish;
end
endmodule
