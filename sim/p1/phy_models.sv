`timescale 1ns/1ps
// Functional model only: excludes analog PLL lock/jitter and board signal integrity.
module dmz_video_pll(input refclk,reset, output reg clk0_out=0,clk1_out=0, output reg locked=0);
always #20 clk0_out=~clk0_out;
always #4 clk1_out=~clk1_out;
always @(posedge refclk) locked<=!reset;
endmodule
module EG_LOGIC_ODDR(input clk,rst,d0,d1,output wire q);
reg rise_bit,fall_bit;
always @(posedge clk or posedge rst)
 if(rst) begin rise_bit<=0;fall_bit<=0;end
 else begin rise_bit<=d0;fall_bit<=d1;end
assign q=rst?0:(clk?rise_bit:fall_bit);
endmodule
