// 25 MHz / 115200 8N1 receive; sample near the center of each bit.
module dmz_uart_rx #(parameter DIVISOR=217)(input clk,reset,rx,output reg valid,output reg [7:0] data);
(* ASYNC_REG="TRUE" *) reg r1,r2;
reg [1:0] state;reg [15:0] count;reg [2:0] bitno;reg [7:0] shift;
always @(posedge clk) begin
 if(reset) begin r1<=1;r2<=1;state<=0;count<=0;bitno<=0;shift<=0;data<=0;valid<=0;end
 else begin
  r1<=rx;r2<=r1;valid<=0;
  case(state)
  0:if(!r2) begin count<=DIVISOR/2-1;state<=1;end
  1:if(count!=0) count<=count-1'b1;else if(r2) state<=0;else begin state<=2;count<=DIVISOR-1;bitno<=0;end
  2:if(count!=0) count<=count-1'b1;else begin shift[bitno]<=r2;count<=DIVISOR-1;if(bitno==7) state<=3;else bitno<=bitno+1'b1;end
  3:if(count!=0) count<=count-1'b1;else begin if(r2) begin data<=shift;valid<=1;end state<=0;end
  endcase
 end
end
endmodule
