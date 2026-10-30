// Centered contrast, signed brightness offset, explicit clamp. Neutral is 4/4.
module dmz_picture_adjust(input [23:0] rgb,input [3:0] brightness,contrast,output wire [23:0] adjusted);
function automatic [7:0] channel(input [7:0] p,input [3:0] b,c);
 reg signed [11:0] centered,product,value;
 begin centered=$signed({1'b0,p})-12'sd128;
 product=centered*$signed({1'b0,c});
 value=(product>>>2)+12'sd128+(($signed({1'b0,b})-12'sd4)<<<4);
 channel=value<0?8'd0:value>255?8'd255:value[7:0];end
endfunction
assign adjusted={channel(rgb[23:16],brightness,contrast),channel(rgb[15:8],brightness,contrast),channel(rgb[7:0],brightness,contrast)};
endmodule

