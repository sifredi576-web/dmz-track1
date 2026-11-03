`timescale 1ns/1ps
module tb_fifo_recode;
reg wclk=0,rclk=0;always #7 wclk=~wclk;always #11 rclk=~rclk;
reg wrst=1,rrst=1;integer phase=0,writes=0,reads=0;
reg [15:0] ws=16'h53a1,rs=16'h71b9;
reg push=0,pop=0;
wire full0,full1,empty0,empty1;wire [11:0] used0,used1;wire [31:0] data0,data1;
function automatic [31:0] expected(input integer i);expected=(32'(i)*32'h010203)^32'h5432abcd;endfunction
wire [31:0] input_data=expected(writes);
dmz_pixel_fifo #(.AW(11),.RECODE_ADDR(0)) reference_fifo(wclk,wrst,push,input_data,full0,used0,rclk,rrst,pop,data0,empty0);
dmz_pixel_fifo #(.AW(11),.RECODE_ADDR(1),.DATA_CODE(1)) recoded_fifo(wclk,wrst,push,input_data,full1,used1,rclk,rrst,pop,data1,empty1);
always @(negedge wclk)begin
 ws={ws[14:0],ws[15]^ws[13]^ws[12]^ws[10]};
 push=phase==0?1:phase==1?(ws[0]||ws[2]):0;
end
always @(negedge rclk)begin
 rs={rs[14:0],rs[15]^rs[13]^rs[12]^rs[10]};
 pop=phase==0?0:phase==1?(rs[0]||rs[1]):1;
end
always @(posedge wclk)begin
 if(wrst)writes<=0;
 else begin
  if(full0!==full1||used0!==used1||used1>2048)$fatal(1,"write state differs");
  if(push&&!full1)writes<=writes+1;
 end
end
always @(posedge rclk)begin
 if(rrst)reads<=0;
 else begin
  if(empty0!==empty1)$fatal(1,"read state differs");
  if(!empty1&&(data0!==data1||data1!==expected(reads)))
   $fatal(1,"FIFO order/data mismatch reads=%0d got=%h expected=%h",reads,data1,expected(reads));
  if(pop&&!empty1)begin
   if(reads>=writes)$fatal(1,"phantom sample");
   reads<=reads+1;
  end
 end
end
initial begin
 repeat(5)@(negedge wclk);wrst=0;rrst=0;
 repeat(5000)@(negedge wclk);
 if(!full1||writes!=2048||reads!=0)$fatal(1,"full boundary");
 phase=1;repeat(25000)@(negedge wclk);
 if(writes<4096||reads<2048)$fatal(1,"insufficient wrap coverage");
 phase=2;repeat(10000)@(negedge rclk);
 if(!empty1||reads!=writes)$fatal(1,"drain lost samples");
 // Reset both domains, refill, and compare all addresses once more.
 wrst=1;rrst=1;phase=0;repeat(5)@(negedge wclk);wrst=0;rrst=0;
 repeat(5000)@(negedge wclk);phase=2;repeat(7000)@(negedge rclk);
 if(writes!=2048||reads!=2048||!empty1)$fatal(1,"reset/refill");
 $display("PASS actual 2048-pair FIFO: full/empty, asynchronous clocks, random stalls, multiple wraps, data order and reset/refill against independent sequence and original FIFO");$finish;
end
initial begin #2000000;$fatal(1,"timeout");end
endmodule
