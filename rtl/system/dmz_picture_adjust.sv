// Centered contrast and brightness with unsigned magnitude arithmetic.
// floor((p-128)*c/4)+128+(b-4)*16 equals floor(p*c/4)+64+16*b-32*c.
// Keep the subtraction explicit so negative channels clamp instead of wrapping.
module dmz_picture_adjust(input [23:0] rgb,input [3:0] brightness,contrast,output wire [23:0] adjusted);
function automatic [7:0] channel(input [7:0] p,input [3:0] b,c);
 reg [11:0] product,sum,bias,difference;
 begin
  product={4'd0,p}*{8'd0,c};
  sum=(product>>2)+12'd64+{4'd0,b,4'd0};
  bias={3'd0,c,5'd0};
  difference=sum-bias;
  if(sum<bias)channel=8'd0;
  else if(difference>12'd255)channel=8'd255;
  else channel=difference[7:0];
 end
endfunction
// Neutral settings are a bit-exact RGB bypass, including dark gradient pixels.
assign adjusted=(brightness==4'd4&&contrast==4'd4)?rgb:
 {channel(rgb[23:16],brightness,contrast),channel(rgb[15:8],brightness,contrast),channel(rgb[7:0],brightness,contrast)};
endmodule
