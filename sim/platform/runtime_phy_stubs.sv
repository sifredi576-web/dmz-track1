module dmz_p2_pll(input refclk,reset,output clk0_out,clk1_out,mem_clk,sdram_clk,locked);
assign clk0_out=refclk;assign clk1_out=refclk;assign mem_clk=refclk;assign sdram_clk=refclk;assign locked=!reset;
endmodule
module EG_PHY_SDRAM_2M_32(input clk,ras_n,cas_n,we_n,cs_n,cke,dm0,dm1,dm2,dm3,input [10:0] addr,input [1:0] ba,inout [31:0] dq);endmodule
