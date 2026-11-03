// 1280x720 canvas: a 960x720 aspect-preserving view of the 640x480 scene.
// Three output pixels consume one packed pair. No additional frame/line RAM.
module dmz_wide_mapper(input clk,reset,input [10:0] x,input [9:0] y,
 output wire inside_course,pair_pop,output reg [9:0] sx,sy,
 output wire [9:0] ahead1_x,ahead2_x,ahead3_x);
reg [1:0] hx,vy;
assign inside_course=x>=160&&x<1120&&y<720;
assign pair_pop=inside_course&&hx==2;
assign ahead1_x=sx+(hx==0?10'd0:10'd1);
assign ahead2_x=sx+(hx==1?10'd2:10'd1);
assign ahead3_x=sx+10'd2;
always @(posedge clk)begin
 if(reset)begin sx<=0;sy<=0;hx<=0;vy<=0;end
 else begin
  if(x<160||x>=1119)begin sx<=0;hx<=0;end
  else if(hx==0)hx<=1;
  else begin hx<=hx==1?2:0;sx<=sx+1'b1;end
  if(y>=720)begin sy<=0;vy<=0;end
  else if(x==1649)begin
   if(vy==0)vy<=1;
   else begin vy<=vy==1?2:0;sy<=sy+1'b1;end
  end
 end
end
endmodule
