`timescale 1ns/1ps
module tb_p2 #(parameter integer BIST_WORDS=2097152);
reg clk=0,pclk=0,reset=1;
always #10 clk=~clk;always #20 pclk=~pclk;
wire req_ready,rsp_valid,init_done,done,passed;
wire bv,bw,fv,fw;wire [20:0] ba_req,fa_req;wire [255:0] bd,fd,rd;
wire ras,cas,we;wire [10:0] sa;wire [1:0] bank;wire [31:0] dout,din;wire oe;
wire [31:0] refreshes,errors,checked,expected,actual;wire [20:0] bad;wire [7:0] status;
dmz_sdram_ctrl ctrl(.clk(clk),.reset(reset),.req_valid(done?fv:bv),.req_write(done?fw:bw),.req_addr(done?fa_req:ba_req),.req_wdata(done?fd:bd),.req_ready(req_ready),.rsp_valid(rsp_valid),.rsp_rdata(rd),.init_done(init_done),.refresh_count(refreshes),.ras_n(ras),.cas_n(cas),.we_n(we),.addr(sa),.ba(bank),.dq_out(dout),.dq_oe(oe),.dq_in(din));
sdram_model mem(.clk(~clk),.reset(reset),.ras_n(ras),.cas_n(cas),.we_n(we),.addr(sa),.ba(bank),.dq_out(dout),.dq_oe(oe),.dq_in(din));
dmz_sdram_bist #(.WORD_COUNT(BIST_WORDS),.HOLD_CYCLES(5000)) bist(.clk(clk),.reset(reset),.init_done(init_done),.req_valid(bv),.req_write(bw),.req_addr(ba_req),.req_wdata(bd),.req_ready(req_ready&&!done),.rsp_valid(rsp_valid&&!done),.rsp_rdata(rd),.done(done),.passed(passed),.errors(errors),.checked_words(checked),.first_bad_addr(bad),.first_expected(expected),.first_actual(actual),.status(status));
reg [9:0] x=0,y=0;reg ft=0;
always @(posedge pclk) if(reset) begin x<=0;y<=0;ft<=0;end else begin
 if(x==799) begin x<=0;if(y==524) y<=0;else y<=y+1'b1;end else x<=x+1'b1;
 if(x==0&&y==480) ft<=~ft;
end
wire full,empty,fpush,freset,valid,front,fault;wire [31:0] fi,fo,swaps,written,reads;wire [11:0] used;
dmz_framebuffer #(.SWAP_FRAMES(2)) fb(.clk(clk),.reset(reset),.bist_done(done),.bist_passed(passed),.frame_toggle(ft),.req_valid(fv),.req_write(fw),.req_addr(fa_req),.req_wdata(fd),.req_ready(req_ready&&done),.rsp_valid(rsp_valid&&done),.rsp_rdata(rd),.fifo_used(used),.fifo_full(full),.fifo_push(fpush),.fifo_data(fi),.fifo_reset(freset),.display_valid(valid),.front_bank(front),.swaps(swaps),.frames_written(written),.dma_reads(reads),.fault(fault));
reg [2:0] fr;reg [1:0] dv;
always @(posedge pclk or posedge freset) if(freset) fr<=7;else fr<={fr[1:0],1'b0};
always @(posedge pclk) if(reset) dv<=0;else dv<={dv[0],valid};
wire active=x<640&&y<480;
dmz_pixel_fifo fifo(.wclk(clk),.wreset(freset),.wpush(fpush),.wdata(fi),.full(full),.used(used),.rclk(pclk),.rreset(fr[2]),.rpop(active&&x[0]&&dv[1]&&!fr[2]),.rdata(fo),.empty(empty));
integer display_frames=0,checked_pixels=0;
reg last_front=0;
reg [31:0] frame_id;
wire [15:0] current_pixel=x[0]?fo[31:16]:fo[15:0];
always @(posedge clk) if(!reset&&done) begin
 if(fv&&req_ready&&fw&&fa_req[18]==front) $fatal(1,"writing front buffer");
 if(front!=last_front) begin
  if(y<480) $fatal(1,"mid-frame swap");
  last_front=front;frame_id=written-1;
 end
end
always @(posedge pclk) if(!reset&&dv[1]&&!fr[2]) begin

 if(active) begin
  if(empty) $fatal(1,"FIFO underrun x=%0d y=%0d",x,y);
  if(current_pixel!==fb.pixel(x,y[8:0],frame_id)) $fatal(1,"pixel mismatch x=%0d y=%0d got=%h expected=%h",x,y,current_pixel,fb.pixel(x,y[8:0],frame_id));
  checked_pixels=checked_pixels+1;
 end
 if(x==799&&y==479) display_frames=display_frames+1;
end
initial begin
 #200;reset=0;
 wait(done);
 if($test$plusargs("fault")) begin
  if(passed||errors!=4||bad!=23) $fatal(1,"fault detection errors=%0d addr=%0d",errors,bad);
  $display("PASS injected fault: errors=%0d first_addr=%0d",errors,bad);$finish;
 end
 if(!$test$plusargs("fault")) begin
 if(!passed||checked!=BIST_WORDS*4) $fatal(1,"BIST errors=%0d count=%0d first=%0d expected=%h actual=%h",errors,checked,bad,expected,actual);
 $display("PASS BIST four patterns, checked=%0d refresh=%0d",checked,refreshes);
 wait(display_frames==8);
 if(swaps<2||fault) $fatal(1,"swap/fault");
 $display("PASS display frames=%0d pixels=%0d swaps=%0d refresh=%0d no underrun/tearing",display_frames,checked_pixels,swaps,refreshes);$finish;
end
end
initial begin #2000000000;$fatal(1,"timeout");end
endmodule



