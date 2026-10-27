// Periodic 64-byte little-endian diagnostic snapshot, 115200 8N1.
module dmz_status_uart #(parameter integer PERIOD=25000000,DIVISOR=434)(
 input wire clk,reset,input wire [511:0] status,output reg tx);
reg [31:0] interval;
reg [511:0] snapshot;
reg [5:0] index;
reg [3:0] bitnum;
reg [15:0] baud;
reg [9:0] shift;
reg busy;
always @(posedge clk) begin
 if(reset) begin interval<=0;snapshot<=0;index<=0;bitnum<=0;baud<=0;shift<=1023;busy<=0;tx<=1;end
 else if(!busy) begin
  tx<=1;
  if(interval==0) begin snapshot<=status;index<=0;bitnum<=0;shift<={1'b1,status[7:0],1'b0};busy<=1;baud<=0;interval<=PERIOD-1;end
  else interval<=interval-1'b1;
 end else if(baud==0) begin
  baud<=DIVISOR-1;
  tx<=shift[0];shift<={1'b1,shift[9:1]};
  if(bitnum==9) begin
   bitnum<=0;
   if(index==63) begin busy<=0;end
   else begin index<=index+1'b1;shift<={1'b1,snapshot[(index+1'b1)*8+:8],1'b0};end
  end else bitnum<=bitnum+1'b1;
 end else baud<=baud-1'b1;
end
endmodule
