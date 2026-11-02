// Pixel-domain dynamic overlay. Coordinates are configuration-driven.
module dmz_ui_overlay(input [9:0] x,y,input [159:0] status,
 input blocked,output reg ink,output reg [23:0] color);
wire active=status[0]&&!status[1]&&!blocked;
wire [9:0] fx=status[39:30],sx=status[74:65];
wire [8:0] fy=status[48:40],fw=status[57:49],sy=status[83:75],sw=status[92:84];
wire [6:0] fh=status[64:58],sh=status[99:93];
wire [9:0] dx=status[126:117];wire [8:0] dy=status[135:127];
wire [9:0] frx=x-fx,fry=y-{1'b0,fy},srx=x-sx,sry=y-{1'b0,sy};
wire [9:0] dxr=x-dx,dyr=y-{1'b0,dy};
wire [3:0] value=dxr<10'd32 ?status[25:22]:status[29:26];
wire [9:0] local_x=dxr<10'd32 ?dxr:dxr-10'd80;
wire [9:0] local_y=dyr;
wire [5:0] slash=(dxr[5:0]-6'd40)+dyr[5:0];
reg [6:0] segments;
always @* begin
 case(value)
  0:segments=7'b1111110;1:segments=7'b0110000;2:segments=7'b1101101;
  3:segments=7'b1111001;4:segments=7'b0110011;5:segments=7'b1011011;
  6:segments=7'b1011111;7:segments=7'b1110000;8:segments=7'b1111111;default:segments=0;
 endcase
 ink=0;color=24'hffe56d;
 if(active&&x<10'd640&&y<10'd480)begin
  if(status[4]&&status[5]&&sw!=0&&sh!=0&&x>=sx&&y>={1'b0,sy}&&srx<{1'b0,sw}&&sry<{3'd0,sh}&&
    (srx<10'd3||srx>={1'b0,sw}-10'd3||sry<10'd3||sry>={3'd0,sh}-10'd3))begin
   ink=1;color=status[6]?(status[7]?24'h40ff80:24'hff6060):24'h40e8ff;
  end
  if(fw!=0&&fh!=0&&x>=fx&&y>={1'b0,fy}&&frx<{1'b0,fw}&&fry<{3'd0,fh}&&
    (frx<10'd2||frx>={1'b0,fw}-10'd2||fry<10'd2||fry>={3'd0,fh}-10'd2))begin ink=1;color=24'hffe56d;end
  if(status[3]&&x>=dx&&dxr<10'd112&&y>={1'b0,dy}&&dyr<10'd32)begin
   color=24'hffffff;
   if(dxr>=10'd40&&dxr<10'd64)begin if(slash>=6'd28&&slash<6'd32)ink=1;end
   else if((dxr<10'd24||dxr>=10'd80)&&local_x<10'd24)begin
    if((segments[6]&&local_y<10'd3)||(segments[3]&&local_y>=10'd29)||
       (segments[0]&&local_y>=10'd14&&local_y<10'd17)||
       (segments[1]&&local_x<10'd3&&local_y<10'd16)||(segments[2]&&local_x<10'd3&&local_y>=10'd16)||
       (segments[5]&&local_x>=10'd21&&local_y<10'd16)||(segments[4]&&local_x>=10'd21&&local_y>=10'd16))ink=1;
   end
  end
 end
end
endmodule
