`timescale 1ns/1ps
module tb_widescreen;
reg mclk=0,pclk=0,reset=1;
always #10 mclk=~mclk;
always #6.666666667 pclk=~pclk;
reg [10:0] x=0;reg [9:0] y=0;reg ft=0;
wire [9:0] sx,sy,a2,a3;wire area,pop;
dmz_wide_mapper mapper(.clk(pclk),.reset(reset),.x(x),.y(y),.sx(sx),.sy(sy),.ahead2_x(a2),.ahead3_x(a3),.inside_course(area),.pair_pop(pop));
always @(posedge pclk)if(reset)begin x<=0;y<=0;ft<=0;end else begin
 if(x==1649)begin x<=0;y<=y==749?0:y+1'b1;end else x<=x+1'b1;
 if(x==0&&y==720)ft<=~ft;
end
wire req,rw,ready,rsp,init;wire [20:0] addr;wire [255:0] wdata,rdata;
wire ras,cas,we;wire [10:0] sa;wire [1:0] bank;wire [31:0] dout,din,refreshes;wire oe;
dmz_sdram_ctrl #(.INIT_CYCLES(20),.READ_WAIT_CYCLES(2),.OPEN_PAGE(1)) ctrl(.clk(mclk),.reset(reset),.req_valid(req),.req_write(rw),.req_addr(addr),.req_wdata(wdata),.req_ready(ready),.rsp_valid(rsp),.rsp_rdata(rdata),.init_done(init),.refresh_count(refreshes),.ras_n(ras),.cas_n(cas),.we_n(we),.addr(sa),.ba(bank),.dq_out(dout),.dq_oe(oe),.dq_in(din));
sdram_model mem(.clk(~mclk),.reset(reset),.ras_n(ras),.cas_n(cas),.we_n(we),.addr(sa),.ba(bank),.dq_out(dout),.dq_oe(oe),.dq_in(din));
wire fb_req,fb_rw;wire [20:0] fb_addr;wire [255:0] fb_data;wire [1:0] mux_ready,mux_response;
reg [7:0] aux_timer=0;integer aux_count=0;
always @(posedge mclk)if(reset)aux_timer<=0;else begin aux_timer<=aux_timer+1'b1;if(mux_response[1])aux_count<=aux_count+1;end
dmz_mem_mux #(.N(2)) mux(.clk(mclk),.reset(reset),.valid({aux_timer[7],fb_req}),.write({1'b1,fb_rw}),.addr({21'h100000,fb_addr}),.wdata({256'h12345678,fb_data}),.ready(mux_ready),.response(mux_response),.req_valid(req),.req_write(rw),.req_addr(addr),.req_wdata(wdata),.req_ready(ready),.rsp_valid(rsp));
reg load=1;reg [18:0] load_addr=0;wire load_ready,ack;
wire last=load_addr==345592;reg [255:0] payload;
function automatic [15:0] pixel(input integer row,col);pixel=16'(row*67+col);endfunction
always_comb for(integer k=0;k<8;k=k+1)begin
 payload[k*32+:16]=pixel((int'(load_addr)+k)/480,((int'(load_addr)+k)%480)*2);
 payload[k*32+16+:16]=pixel((int'(load_addr)+k)/480,((int'(load_addr)+k)%480)*2+1);
end
always @(posedge mclk)if(reset)begin load<=1;load_addr<=0;end else if(ack)begin
 if(last)load<=0;else load_addr<=load_addr+8;
end
// Hold valid until response; suppress a duplicate request during the ack cycle.
wire full,empty,push,freset,display_valid,front,fault;wire [31:0] fi,fo,swaps,written,reads;wire [11:0] used;
dmz_image_framebuffer #(.WIDE_MODE(1),.HD(1)) fb(.clk(mclk),.reset(reset),.bist_done(init),.bist_passed(1'b1),.frame_toggle(ft),.load_valid(load&&!ack),.load_addr(load_addr),.load_data(payload),.load_last(last),.load_ready(load_ready),.load_ack(ack),.req_valid(fb_req),.req_write(fb_rw),.req_addr(fb_addr),.req_wdata(fb_data),.req_ready(mux_ready[0]),.rsp_valid(mux_response[0]),.rsp_rdata(rdata),.fifo_used(used),.fifo_full(full),.fifo_push(push),.fifo_data(fi),.fifo_reset(freset),.display_valid(display_valid),.front_bank(front),.swaps(swaps),.frames_written(written),.dma_reads(reads),.fault(fault));
reg [2:0] fr=7;reg [1:0] dv=0;
always @(posedge pclk or posedge freset)if(freset)fr<=7;else fr<={fr[1:0],1'b0};
always @(posedge pclk)if(reset)dv<=0;else dv<={dv[0],display_valid};

dmz_pixel_fifo #(.AW(11),.RECODE_ADDR(1),.USE_BRAM32(1)) fifo(.wclk(mclk),.wreset(freset),.wpush(push),.wdata(fi),.full(full),.used(used),.rclk(pclk),.rreset(fr[2]),.rpop(area&&x[0]&&dv[1]&&!fr[2]),.rdata(fo),.empty(empty));
wire [15:0] actual=x[0]?fo[31:16]:fo[15:0];
wire sample_ce;wire [15:0] sample;
dmz_tone #(.CLOCK_HZ(75000000)) audio(.clk(pclk),.reset(reset),.mute(1'b0),.sample_ce(sample_ce),.sample(sample));
integer pixels=0,frames=0,pops=0,cycles=0,samples=0,last_sample=0;
always @(posedge pclk)if(!reset)begin
 cycles=cycles+1;
 if(sample_ce)begin
  if(last_sample!=0&&cycles-last_sample!=1562&&cycles-last_sample!=1563)$fatal(1,"48kHz spacing");
  last_sample=cycles;samples=samples+1;
 end
 if(area)begin
  if(sx!=(int'(x)-160)*2/3||sy!=int'(y)*2/3)$fatal(1,"mapper x=%0d y=%0d sx=%0d sy=%0d",x,y,sx,sy);
  if(x<1117&&(a2!=(int'(x)-158)*2/3||a3!=(int'(x)-157)*2/3))$fatal(1,"lookahead mapping");
  if(dv[1]&&!fr[2])begin
   if(empty)$fatal(1,"wide FIFO underrun x=%0d y=%0d reads=%0d",x,y,reads);
   if(actual!==pixel(int'(y),int'(x)-160))$fatal(1,"wide pixel x=%0d y=%0d sx=%0d sy=%0d actual=%h expected=%h",x,y,sx,sy,actual,pixel(int'(y),int'(x)-160));
   pixels=pixels+1;if(x[0])pops=pops+1;
  end
 end
 if(x==1649&&y==719&&dv[1])begin
  frames=frames+1;
  if(pixels!=frames*960*720||pops!=frames*480*720)$fatal(1,"frame size mismatch");
  if(frames==2)begin
   if(fault||aux_count<100||refreshes<100||samples<1000)$fatal(1,"refresh/audio coverage missing");
   $display("PASS widescreen: %0d pixels, %0d packed pairs, two 1280x720 frames; actual SDRAM refresh + FIFO no underrun; 48kHz samples=%0d",pixels,pops,samples);$finish;
  end
 end
end
initial begin #200;reset=0;#200000000;$fatal(1,"wide test timeout");end
endmodule
