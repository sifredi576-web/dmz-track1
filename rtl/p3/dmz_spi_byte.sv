// SPI mode 0 byte transfer. divider is half-SCK period in 50 MHz clocks.
module dmz_spi_byte(input clk,reset,start,input [7:0] tx,input [7:0] divider,input miso,
 output reg sck,mosi,output reg busy,done,output reg [7:0] rx);
reg [7:0] count,shift;reg [2:0] bitno;
always @(posedge clk) begin
 if(reset) begin sck<=0;mosi<=1;busy<=0;done<=0;rx<=0;count<=0;shift<=0;bitno<=0;end
 else begin
  done<=0;
  if(!busy) begin
   sck<=0;
   if(start) begin busy<=1;shift<=tx;mosi<=tx[7];count<=divider-1'b1;bitno<=7;end
  end else if(count!=0) count<=count-1'b1;
  else begin
   count<=divider-1'b1;
   if(!sck) begin sck<=1;rx<={rx[6:0],miso};end
   else begin
    sck<=0;
    if(bitno==0) begin busy<=0;done<=1;mosi<=1;end
    else begin bitno<=bitno-1'b1;shift<={shift[6:0],1'b1};mosi<=shift[6];end
   end
  end
 end
end
endmodule
