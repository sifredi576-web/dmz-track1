`timescale 1ns/1ps
module tb_status_uart;
reg clk=0,reset=1;always #20 clk=~clk;
reg [511:0] status64;reg [767:0] status96;
wire tx64,tx96,v64,v96;wire [7:0] b64,b96;integer seen64=0,seen96=0;
dmz_status_uart #(.PERIOD(40000),.DIVISOR(32)) t64(.clk(clk),.reset(reset),.status(status64),.tx(tx64));
dmz_status_uart #(.PERIOD(40000),.DIVISOR(32),.BYTES(96)) t96(.clk(clk),.reset(reset),.status(status96),.tx(tx96));
dmz_uart_rx #(.DIVISOR(32)) r64(.clk(clk),.reset(reset),.rx(tx64),.valid(v64),.data(b64));
dmz_uart_rx #(.DIVISOR(32)) r96(.clk(clk),.reset(reset),.rx(tx96),.valid(v96),.data(b96));
always @(posedge clk) if(!reset) begin
 if(v64) begin
  if(b64!==8'((seen64%64)^(seen64<64?8'ha5:8'h3c))) $fatal(1,"64-byte UART snapshot mismatch byte=%0d got=%h",seen64,b64);
  seen64=seen64+1;
 end
 if(v96) begin
  if(b96!==8'((seen96%96)^(seen96<96?8'ha5:8'h3c))) $fatal(1,"96-byte UART snapshot mismatch byte=%0d got=%h",seen96,b96);
  seen96=seen96+1;
 end
end
initial begin
 for(integer i=0;i<64;i=i+1) status64[8*i+:8]=8'(i)^8'ha5;
 for(integer i=0;i<96;i=i+1) status96[8*i+:8]=8'(i)^8'ha5;
 #200;@(negedge clk);reset=0;
 repeat(1000) @(negedge clk);
 for(integer i=0;i<64;i=i+1) status64[8*i+:8]=8'(i)^8'h3c;
 for(integer i=0;i<96;i=i+1) status96[8*i+:8]=8'(i)^8'h3c;
 wait(seen96==192);if(seen64!=128) $fatal(1,"UART frame lengths incorrect");
 $display("PASS 64/96-byte diagnostic UART, exact bytes and coherent snapshots while live status changes");$finish;
end
initial begin #6000000;$fatal(1,"UART snapshot timeout %0d/%0d",seen64,seen96);end
endmodule
