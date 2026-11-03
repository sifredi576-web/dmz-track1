// Three registered stages; arithmetic equals dmz_picture_adjust for b/c 0..8.
module dmz_picture_pipe(input clk,reset,input [23:0] rgb,input [3:0] brightness,contrast,output [23:0] adjusted);
genvar k;generate for(k=0;k<3;k=k+1)begin: channel
 reg [11:0] product;reg [3:0] b,c;reg signed [12:0] value;reg [7:0] result;
 always @(posedge clk)begin
  if(reset)begin product<=0;b<=4;c<=4;value<=0;result<=0;end
  else begin
   product<=rgb[k*8+:8]*contrast;b<=brightness;c<=contrast;
   value<=$signed({1'b0,(product>>2)})+13'sd64+$signed({5'd0,b,4'd0})-$signed({4'd0,c,5'd0});
   result<=value<0?8'd0:value>255?8'd255:value[7:0];
  end
 end
 assign adjusted[k*8+:8]=result;
end endgenerate
endmodule
