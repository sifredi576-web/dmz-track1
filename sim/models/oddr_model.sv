`timescale 1ns/1ps
// Functional ODDR model; excludes board electrical behavior.
module EG_LOGIC_ODDR(input clk,rst,d0,d1,output wire q);
reg rise_bit,fall_bit;
always @(posedge clk or posedge rst)
 if(rst) begin rise_bit<=0;fall_bit<=0;end
 else begin rise_bit<=d0;fall_bit<=d1;end
assign q=rst?0:(clk?rise_bit:fall_bit);
endmodule
