`timescale 1ns/1ps
module tb_overlay;
reg [9:0] x=0,y=0; reg [159:0] s=0;wire ink;wire [23:0] color;
dmz_ui_overlay dut(.x(x),.y(y),.status(s),.blocked(1'b0),.ink(ink),.color(color));
initial begin
 s[0]=1;s[4]=1;s[5]=1;
 s[39:30]=10;s[48:40]=20;s[57:49]=100;s[64:58]=40;
 s[74:65]=10;s[83:75]=20;s[92:84]=100;s[99:93]=40;
 x=10;y=30;#1;if(!ink||color!=24'hffe56d)$fatal(1,"focus edge");
 x=14;y=30;#1;if(!ink||color!=24'h40e8ff)$fatal(1,"selected inset under focus");
 s[39:30]=200;x=10;y=30;#1;if(ink)$fatal(1,"selected outer edge");
 x=14;y=30;#1;if(!ink||color!=24'h40e8ff)$fatal(1,"selected persists");
 x=200;y=30;#1;if(!ink||color!=24'hffe56d)$fatal(1,"new focus");
 s[6]=1;s[7]=1;x=14;#1;if(!ink||color!=24'h40ff80)$fatal(1,"correct answer");
 s[7]=0;#1;if(!ink||color!=24'hff6060)$fatal(1,"incorrect answer");
 $display("PASS distinct focus and selected borders; selection persists on navigation; answer feedback");$finish;
end
endmodule
