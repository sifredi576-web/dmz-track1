`timescale 1ns/1ps
module tb_top_ticker;
reg clk=0;always #5 clk=~clk;
reg reset=1,frame_tick=0;
reg [10:0] x=0;reg [9:0] y=100;
wire ink,shade;
dmz_top_ticker dut(.*);
reg [15:0] reference_columns[0:1023];
integer offset=0,frames=0,px,py,n;
reg expected;
task check_pixel(input integer xx,yy);
begin
 @(negedge clk);
 x=11'(xx<2?xx+1648:xx-2);
 y=10'(xx<2?(yy==0?749:yy-1):yy);
 repeat(2)@(posedge clk);#1;
 expected=xx<1280&&yy>=4&&yy<36&&reference_columns[((xx/2)+offset)%1024][((yy-4)/2)%16];
 if(ink!==expected||shade!==(xx<1280&&yy<40))
  $fatal(1,"raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b",xx,yy,offset,ink,expected,shade);
end
endtask
task tick;
begin
 @(negedge clk);x=0;y=720;frame_tick=1;
 @(negedge clk);frame_tick=0;
 frames=frames+1;offset=(frames/2)%1024;
 if(dut.scroll!=10'(offset))$fatal(1,"scroll speed/wrap mismatch");
end
endtask
task raster;
begin
 for(py=0;py<42;py=py+1)for(px=0;px<1282;px=px+1)check_pixel(px,py);
 check_pixel(1649,749);check_pixel(0,720);check_pixel(1279,719);
end
endtask
initial begin
 $readmemh("sim/system/top_ticker_columns.hex",reference_columns);
 for(n=736;n<1024;n=n+1)if(reference_columns[n]!=0)$fatal(1,"trailing spaces not blank");
 repeat(3)@(negedge clk);reset=0;
 raster();tick();raster();tick();raster();
 for(n=0;n<1470;n=n+1)tick();raster();
 for(n=0;n<574;n=n+1)tick();raster();
 tick();tick();raster();
 if(offset!=0)$fatal(1,"full loop did not return to origin");
 // Continuous scan checks actual two-clock look-ahead, including line/frame wrap.
 @(negedge clk);x=1647;y=749;
 repeat(2)@(posedge clk);
 for(n=0;n<1650*42;n=n+1)begin
  @(negedge clk);
  if(x==1649)begin x=0;y=y==749?10'd0:y+1'b1;end else x=x+1'b1;
  @(posedge clk);#1;
  px=x==1649?0:int'(x)+1;py=x==1649?(y==749?0:int'(y)+1):int'(y);
  expected=px<1280&&py>=4&&py<36&&reference_columns[(px/2)%1024][((py-4)/2)%16];
  if(ink!==expected||shade!==(px<1280&&py<40))$fatal(1,"continuous raster pipeline alignment");
 end
 $display("PASS Chinese ticker: full raster, padding, right/left edges, blanking, frame pacing, trailing 18 spaces and complete wrap");
 $finish;
end
endmodule
