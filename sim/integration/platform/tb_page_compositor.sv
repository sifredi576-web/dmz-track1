`timescale 1ns/1ps
module tb_page_compositor;
reg clk=0;always #5 clk=~clk;
reg reset=1,enabled=1,page_begin=0,iv=0,il=0;reg [17:0] ia=0;reg [255:0] idata={16{16'h001f}};
wire ir,iack,ov,ol,mv,busy;wire [17:0] oa;wire [255:0] od;wire [20:0] ma;reg ordy=0,oack=0,mr=0,mrsp=0;reg [255:0] md=0;
wire [2:0] index;reg [98:0] widget=0;reg [98:0] descriptors[0:7];reg [7:0] scene[0:514271];reg [255:0] expected[0:19199];
integer cycle=0,mdelay=0,odelay=0,received=0;reg mpending=0,opending=0;reg [20:0] address;
dmz_page_compositor dut(.clk(clk),.reset(reset),.enabled(enabled),.page_begin(page_begin),.widget_count(4'd5),.widget_index(index),.widget(widget),
 .in_valid(iv),.in_addr(ia),.in_data(idata),.in_last(il),.in_ready(ir),.in_ack(iack),.out_valid(ov),.out_addr(oa),.out_data(od),.out_last(ol),.out_ready(ordy),.out_ack(oack),
 .mem_valid(mv),.mem_addr(ma),.mem_ready(mr),.mem_response(mrsp),.mem_data(md),.busy(busy));
always @(posedge clk)begin
 cycle<=cycle+1;widget<=descriptors[index];ordy<=!opending&&cycle%7!=0;mr<=!mpending&&cycle%5!=0;mrsp<=0;oack<=0;
 if(mv&&mr)begin address<=ma;mpending<=1;mdelay<=cycle%5+1;mr<=0;end
 if(mpending)begin
  if(mdelay!=0)mdelay<=mdelay-1;
  else begin for(integer j=0;j<32;j++)md[j*8+:8]<=scene[32+(address-21'h80000)*4+j];mrsp<=1;mpending<=0;end
 end
 if(ov&&ordy)begin
  if(od!=expected[oa>>3])$fatal(1,"composition mismatch addr=%h got=%h expected=%h",oa,od,expected[oa>>3]);
  opending<=1;odelay<=cycle%4+2;ordy<=0;received<=received+1;
 end
 if(opending)begin if(odelay!=0)odelay<=odelay-1;else begin opending<=0;oack<=1;end end
end
task ticks(input integer n);repeat(n)@(negedge clk);endtask
task frame_send(input integer bottom_up);
 integer row,col;begin
 page_begin=1;ticks(1);page_begin=0;
 for(integer y=0;y<480;y++)for(col=0;col<40;col++)begin
  row=bottom_up?479-y:y;while(!ir)ticks(1);ia=row*320+col*8;il=y==479&&col==39;iv=1;ticks(1);iv=0;
  while(!iack)ticks(1);
 end ticks(4);
end endtask
initial begin
 for(integer i=0;i<8;i++)descriptors[i]=0;
descriptors[0]=99'h1bb60024a0007f9e2c8834018;
descriptors[1]=99'h1ea20024a000ff9e2c8834158;
descriptors[2]=99'h218e0024a0017f9e2c8843018;
descriptors[3]=99'h247a0024a001ff9e2c8843158;
descriptors[4]=99'h0cb60006a000044e3050680f0;
 $readmemh("sim/integration/platform/course_v2.hex",scene);$readmemh("sim/integration/platform/quiz_composed.hex",expected);
 ticks(4);reset=0;frame_send(1);frame_send(0);
 if(received!=38400)$fatal(1,"lost framebuffer bursts %0d",received);
 $display("PASS Chinese base+label alpha composition: full frames bottom-up/top-down, five controls, source and destination stalls, SDRAM ACK backpressure");$finish;
end
initial begin #200000000;$fatal(1,"compositor timeout");end
endmodule
