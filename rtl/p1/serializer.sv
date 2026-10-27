// EG4-specific PHY adapter; upstream HDMI core provides LSB-first 10-bit symbols.
module serializer #(parameter integer NUM_CHANNELS=3, parameter real VIDEO_RATE=25000000.0)(
 input wire clk_pixel, clk_pixel_x5, reset,
 input wire [9:0] tmds_internal [NUM_CHANNELS-1:0],
 output wire [2:0] tmds, output wire tmds_clock);
reg toggle;
reg meta, sync;
wire [9:0] words [3:0];
assign words[0]=tmds_internal[0];
assign words[1]=tmds_internal[1];
assign words[2]=tmds_internal[2];
assign words[3]=10'b0000011111;
always @(posedge clk_pixel or posedge reset)
 if(reset) toggle<=0; else toggle<=~toggle;
always @(posedge clk_pixel_x5 or posedge reset)
 if(reset) begin meta<=0; sync<=0; end
 else begin meta<=toggle; sync<=meta; end
wire [3:0] serial;
assign tmds=serial[2:0];
assign tmds_clock=serial[3];
genvar ch;
generate for(ch=0;ch<4;ch=ch+1) begin: lane
 reg [9:0] shift;
 always @(posedge clk_pixel_x5 or posedge reset)
  if(reset) shift<=0;
  else if(meta ^ sync) shift<=words[ch];
  else shift<={2'b00,shift[9:2]};
 EG_LOGIC_ODDR ddr(.clk(clk_pixel_x5),.rst(reset),.d0(shift[0]),.d1(shift[1]),.q(serial[ch]));
end endgenerate
endmodule
