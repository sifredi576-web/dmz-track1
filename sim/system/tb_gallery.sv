`timescale 1ns/1ps
module tb_gallery;
reg clk=0,reset=1;always #10 clk=~clk;
wire start,valid,last,done;wire [31:0] lba,pixels;wire [17:0] address;wire [255:0] data;wire [7:0] error,status;wire [63:0] name;
reg sd_ready=1,sd_done=0,bvalid=0;reg [8:0] bindex=0;reg [7:0] bdata=0;
reg load_ready=1,ack=0;reg reading=0;reg [31:0] current_lba;integer index=0,ack_delay=0,bursts=0,sectors=0;
reg select_request=0;reg [4:0] requested=0;wire catalog_ready,busy;wire [5:0] count;wire [4:0] selected;
dmz_bmp_loader #(.GALLERY(1)) dut(.select_request(select_request),.requested_index(requested),.catalog_ready(catalog_ready),.file_count(count),.selected_index(selected),.busy(busy),.clk(clk),.reset(reset),.enable(1'b1),.sd_start(start),.sd_lba(lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(bvalid),.sd_byte_index(bindex),.sd_byte_data(bdata),.sd_error(8'd0),.load_valid(valid),.load_addr(address),.load_data(data),.load_last(last),.load_ready(load_ready),.load_ack(ack),.done(done),.error(error),.status(status),.pixels_loaded(pixels),.filename(name));
`include "sim/system/gallery_fixture.svh"
function automatic [7:0] disk(input integer l,input integer i);
 integer e,slot,j,shifted,c,ofs;reg [31:0] value;
 begin
 disk=basic_disk(l,i);
 if(l>=1&&l<=16) begin
  e=(l-1)*128+i/4;value=0;
  if(e==2) value=32'h0fffffff;
  if(e>=3&&e<=453&&e[0]) value=e==453?32'h0fffffff:32'(e+2);
  if(e>=503&&e<=953&&e[0]) value=e==953?32'h0fffffff:32'(e+2);
  disk=value[(i%4)*8+:8];
 end
 if(l==17) begin
  disk=0;slot=i/32;j=i%32;
  if(slot<3) begin
   if(j<8) disk=(slot==0?64'h2020202020414349:slot==1?64'h2020202020444142:64'h2020202020424349)>>(j*8);
   if(j==8) disk="B";if(j==9) disk="M";if(j==10) disk="P";if(j==11) disk=32;
   if(j==26) disk=slot==0?3:slot==1?8'heb:8'hf7;
   if(j==27) disk=slot==0?0:slot==1?3:1;
   if(j>=28) disk=32'd921654>>((j-28)*8);
  end
 end
 if(l>=4025&&l<8025) begin
  shifted=l-4000;disk=basic_disk(shifted,i);c=(shifted-25)/8;ofs=(c/2)*4096+((shifted-25)%8)*512+i;
  if(c%2==0&&ofs>=54) disk=disk^8'hff;
 end
 if(l>=8025) begin disk=basic_disk(l-8000,i);if(l==8025&&i==30) disk=1;end
 end
endfunction
function automatic [15:0] expected(input integer a,input integer odd);
 integer x,y;reg [7:0] r,g,b;
 begin x=(a%320)*2+odd;y=a/320;b=8'(x);g=8'(y);r=8'(x^y);if(selected==2) begin r=~r;g=~g;b=~b;end expected={r[7:3],g[7:2],b[7:3]};end
endfunction
always @(posedge clk) begin
 sd_done<=0;bvalid<=0;ack<=0;
 if(start&&sd_ready) begin reading<=1;sd_ready<=0;current_lba<=lba;index<=0;sectors<=sectors+1;end
 else if(reading) begin
  bvalid<=1;bindex<=9'(index);bdata<=disk(current_lba,index);
  if(index==511) begin reading<=0;end else index<=index+1;
 end else if(!sd_ready) begin sd_done<=1;sd_ready<=1;end
 if(valid&&load_ready) begin
  for(integer j=0;j<8;j=j+1) if(data[j*32+:32]!=={expected(address+j,1),expected(address+j,0)}) $fatal(1,"BMP pixel a=%0d j=%0d actual=%h",address,j,data[j*32+:32]);
  bursts<=bursts+1;ack_delay<=7;load_ready<=0;
 end
 if(ack_delay>0) begin ack_delay<=ack_delay-1;if(ack_delay==1) begin ack<=1;load_ready<=1;end end
end
task choose(input [4:0] slot);
 begin @(negedge clk);bursts=0;requested=slot;select_request=1;@(negedge clk);select_request=0;wait(busy);wait(!busy);end
endtask
initial begin
 #100;reset=0;wait(done||error!=0);
 if(error||count!=3||!catalog_ready||bursts!=19200||selected!=0) $fatal(1,"catalog/first image count=%0d error=%0d bursts=%0d",count,error,bursts);
 choose(1);if(error!=8||bursts!=0||done) $fatal(1,"bad gallery image not rejected");
 choose(2);if(error||!done||bursts!=19200||pixels!=307200) $fatal(1,"second valid image failed");
 choose(0);if(error||!done||bursts!=19200) $fatal(1,"wrap/reload first image failed");
 $display("PASS gallery catalog=3, full pixel comparison for two distinct images, malformed image rejected without writes, selectable reload");$finish;
end
initial begin #500000000;$fatal(1,"gallery timeout state=%0d",status);end
endmodule
