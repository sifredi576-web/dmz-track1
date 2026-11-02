`timescale 1ns/1ps
module tb_display;
reg clk=0;always #5 clk=~clk;reg reset=1,cv=0,frame=1;reg [7:0] cmd=0;
wire [3:0] b,c;wire [23:0] tm;
dmz_display_control #(.SECOND_CYCLES(2)) ctrl(.clk(clk),.reset(reset),.frame_tick(frame),.command_valid(cv),.command_byte(cmd),.brightness(b),.contrast(c),.time_bcd(tm));
reg [23:0] rgb;reg [3:0] bb,cc;wire [23:0] out;
dmz_picture_adjust dut(.rgb(rgb),.brightness(bb),.contrast(cc),.adjusted(out));
integer i,j,k,expected;
function automatic [7:0] reference_channel(input integer pixel,bv,cv);
 integer v;begin
  v=(((pixel-128)*cv)>>>2)+128+(bv-4)*16;
  reference_channel=v<0?0:v>255?255:8'(v);
 end
endfunction
task send(input [7:0] v);begin @(negedge clk);cv=1;cmd=v;@(negedge clk);cv=0;repeat(2) @(negedge clk);end endtask
initial begin
 for(i=0;i<9;i=i+1) for(j=0;j<9;j=j+1) for(k=0;k<256;k=k+1) begin
  bb=4'(i);cc=4'(j);rgb={8'(k),8'(k),8'(k)};#1;
  expected=(((k-128)*j)>>>2)+128+(i-4)*16;
  if(expected<0) expected=0;if(expected>255) expected=255;
  if(out!=={8'(expected),8'(expected),8'(expected)}) $fatal(1,"Pixel clamp mismatch");
 end
 for(i=0;i<9;i=i+1)for(j=0;j<9;j=j+1)for(k=0;k<256;k=k+1)begin
  bb=4'(i);cc=4'(j);rgb={8'(k),8'(255-k),8'(k^85)};#1;
  if(out!=={reference_channel(k,i,j),reference_channel(255-k,i,j),reference_channel(k^85,i,j)})
   $fatal(1,"Mixed-color adjustment mismatch b=%0d c=%0d rgb=%h out=%h",i,j,rgb,out);
 end
 // Independent channels catch cross-channel packing and neutral color errors.
 bb=4;cc=4;
 for(k=0;k<256;k=k+1)begin
  rgb={8'(k),8'(255-k),8'(k^8'h55)};#1;
  if(out!==rgb)$fatal(1,"Neutral mixed-color RGB mismatch rgb=%h out=%h",rgb,out);
 end
 @(negedge clk);reset=0;repeat(7200) @(negedge clk);
 if(tm!=24'h010000) $fatal(1,"Hour carry %h",tm);
 send("]");if(b!=5) $fatal(1,"Brightness step");
 repeat(12) send("]");if(b!=8) $fatal(1,"Brightness upper clamp");
 repeat(12) send("[");if(b!=0) $fatal(1,"Brightness lower clamp");
 send("C");if(c!=5) $fatal(1,"Contrast step");repeat(4) send("C");if(c!=0) $fatal(1,"Contrast wrap");
 send("c");if(c!=8)$fatal(1,"Contrast decrement wrap");
 send("D");if(b!=4||c!=4) $fatal(1,"Defaults");
 $display("PASS all 20736 grayscale plus 20736 mixed-color combinations, neutral RGB identity/clamp, BCD hour carry and parameter controls");$finish;
end
endmodule
