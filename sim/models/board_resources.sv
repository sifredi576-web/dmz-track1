`timescale 1ns/1ps
// Functional clock model and inert SDRAM pads for topology comparison only.
// Storage protocol correctness is covered by the independent SDRAM tests.
module dmz_p2_pll(input refclk,reset,output reg clk0_out=0,clk1_out=0,
 output wire mem_clk,sdram_clk,output reg locked=0);
 always #20 clk0_out=~clk0_out;
 always #4 clk1_out=~clk1_out;
 assign mem_clk=refclk;assign sdram_clk=~refclk;
 always @(posedge refclk) locked<=!reset;
endmodule
module EG_PHY_SDRAM_2M_32(input clk,ras_n,cas_n,we_n,input [10:0] addr,input [1:0] ba,
 inout wire [31:0] dq,input cs_n,cke,dm0,dm1,dm2,dm3);
 assign dq=32'd0;
endmodule
