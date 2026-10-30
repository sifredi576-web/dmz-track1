// Unsigned restoring divider, setup only; no combinational variable division.
module dmz_udiv32(input clk,reset,start,input [31:0] numerator,denominator,
 output reg busy,done,output reg [31:0] quotient);
reg [31:0] shift,divisor;reg [32:0] rem;reg [5:0] count;
wire [32:0] trial={rem[31:0],shift[31]};
wire take=trial>={1'b0,divisor};
wire [31:0] next_shift={shift[30:0],take};
always @(posedge clk) begin
 if(reset) begin busy<=0;done<=0;quotient<=0;shift<=0;divisor<=1;rem<=0;count<=0;end
 else begin done<=0;
  if(start&&!busy) begin busy<=1;shift<=numerator;divisor<=denominator;rem<=0;count<=0;end
  else if(busy) begin
   shift<=next_shift;rem<=take?trial-{1'b0,divisor}:trial;
   if(count==31) begin quotient<=next_shift;busy<=0;done<=1;end else count<=count+1'b1;
  end
 end
end
endmodule
