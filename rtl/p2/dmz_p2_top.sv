module dmz_p2_top(
 input wire clk_50m,run_n,mute_switch,pattern_switch,uart_rx,
 output wire uart_tx,output wire [7:0] leds,
 output wire HDMI_CLK_P,HDMI_D0_P,HDMI_D1_P,HDMI_D2_P);
wire pixel_clk,serial_clk,mem_clk,sdram_clk,locked;
dmz_p2_pll pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(pixel_clk),.clk1_out(serial_clk),.mem_clk(mem_clk),.sdram_clk(sdram_clk),.locked(locked));
wire ar=~run_n|~locked;
reg [3:0] mr,pr;
always @(posedge mem_clk or posedge ar) if(ar) mr<=15;else mr<={mr[2:0],1'b0};
always @(posedge pixel_clk or posedge ar) if(ar) pr<=15;else pr<={pr[2:0],1'b0};
wire reset=mr[3],pixel_reset=pr[3];
wire ras_n,cas_n,we_n;wire [10:0] sa;wire [1:0] ba;wire [31:0] dq,dq_out;wire dq_oe;
assign dq=dq_oe?dq_out:32'bz;
EG_PHY_SDRAM_2M_32 memory(.clk(sdram_clk),.ras_n(ras_n),.cas_n(cas_n),.we_n(we_n),.addr(sa),.ba(ba),.dq(dq),.cs_n(1'b0),.cke(1'b1),.dm0(1'b0),.dm1(1'b0),.dm2(1'b0),.dm3(1'b0));
wire init_done,req_ready,rsp_valid,bist_done,bist_passed;
wire bvalid,bwrite,fvalid,fwrite;wire [20:0] baddr,faddr;wire [255:0] bwdata,fwdata,rdata;
wire [31:0] refreshes,errors,checked,first_expected,first_actual;wire [20:0] first_addr;wire [7:0] bist_status;
dmz_sdram_ctrl ctrl(.clk(mem_clk),.reset(reset),.req_valid(bist_done?fvalid:bvalid),.req_write(bist_done?fwrite:bwrite),.req_addr(bist_done?faddr:baddr),.req_wdata(bist_done?fwdata:bwdata),.req_ready(req_ready),.rsp_valid(rsp_valid),.rsp_rdata(rdata),.init_done(init_done),.refresh_count(refreshes),.ras_n(ras_n),.cas_n(cas_n),.we_n(we_n),.addr(sa),.ba(ba),.dq_out(dq_out),.dq_oe(dq_oe),.dq_in(dq));
dmz_sdram_bist bist(.clk(mem_clk),.reset(reset),.init_done(init_done),.req_valid(bvalid),.req_write(bwrite),.req_addr(baddr),.req_wdata(bwdata),.req_ready(req_ready&&!bist_done),.rsp_valid(rsp_valid&&!bist_done),.rsp_rdata(rdata),.done(bist_done),.passed(bist_passed),.errors(errors),.checked_words(checked),.first_bad_addr(first_addr),.first_expected(first_expected),.first_actual(first_actual),.status(bist_status));
wire [9:0] x,y;
reg frame_toggle;
always @(posedge pixel_clk) if(pixel_reset) frame_toggle<=0;else if(x==0&&y==480) frame_toggle<=~frame_toggle;
wire fifo_push,fifo_full,fifo_empty,fifo_reset;wire [31:0] fifo_in,fifo_out;wire [11:0] fifo_used;
wire display_valid,front_bank,fb_fault;wire [31:0] swaps,frames_written,dma_reads;
dmz_framebuffer fb(.clk(mem_clk),.reset(reset),.bist_done(bist_done),.bist_passed(bist_passed),.frame_toggle(frame_toggle),.req_valid(fvalid),.req_write(fwrite),.req_addr(faddr),.req_wdata(fwdata),.req_ready(req_ready&&bist_done),.rsp_valid(rsp_valid&&bist_done),.rsp_rdata(rdata),.fifo_used(fifo_used),.fifo_full(fifo_full),.fifo_push(fifo_push),.fifo_data(fifo_in),.fifo_reset(fifo_reset),.display_valid(display_valid),.front_bank(front_bank),.swaps(swaps),.frames_written(frames_written),.dma_reads(dma_reads),.fault(fb_fault));
reg [2:0] fr;
always @(posedge pixel_clk or posedge fifo_reset) if(fifo_reset) fr<=7;else fr<={fr[1:0],1'b0};
reg [1:0] dv,fail;
always @(posedge pixel_clk) if(pixel_reset) begin dv<=0;fail<=0;end else begin dv<={dv[0],display_valid};fail<={fail[0],bist_done&&!bist_passed};end
wire active=x<640&&y<480;
wire pop=active&&x[0]&&dv[1]&&!fr[2];
dmz_pixel_fifo fifo(.wclk(mem_clk),.wreset(fifo_reset),.wpush(fifo_push),.wdata(fifo_in),.full(fifo_full),.used(fifo_used),.rclk(pixel_clk),.rreset(fr[2]),.rpop(pop),.rdata(fifo_out),.empty(fifo_empty));
reg [31:0] underflow,uf_gray;
always @(posedge pixel_clk) begin
 if(pixel_reset) begin underflow<=0;uf_gray<=0;end
 else if(active&&dv[1]&&!fr[2]&&fifo_empty) begin underflow<=underflow+1'b1;uf_gray<=((underflow+1'b1)>>1)^(underflow+1'b1);end
end
(* ASYNC_REG="TRUE" *) reg [31:0] uf1,uf2;
always @(posedge mem_clk) if(reset) begin uf1<=0;uf2<=0;end else begin uf1<=uf_gray;uf2<=uf1;end
function automatic [31:0] fromgray(input [31:0] g);integer k;begin fromgray[31]=g[31];for(k=30;k>=0;k=k-1) fromgray[k]=fromgray[k+1]^g[k];end endfunction
wire [31:0] underflow_mem=fromgray(uf2);
wire [15:0] p565=x[0]?fifo_out[31:16]:fifo_out[15:0];
reg [23:0] rgb;
always @(posedge pixel_clk) begin
 if(pixel_reset) rgb<=0;
 else if(fail[1]) rgb<=24'hff0000;
 else if(!dv[1]) rgb<=24'h000040;
 else if(fifo_empty||fr[2]) rgb<=24'hff00ff;
 else rgb<={p565[15:11],p565[15:13],p565[10:5],p565[10:9],p565[4:0],p565[4:2]};
end
// P1 audio preserved as silent packets; physical audio acceptance explicitly deferred.
wire sample_ce;wire signed [15:0] sample;wire [15:0] aw[1:0];assign aw[0]=sample;assign aw[1]=sample;
dmz_tone tone(.clk(pixel_clk),.reset(pixel_reset),.mute(1'b1),.sample_ce(sample_ce),.sample(sample));
wire [2:0] tmds;
hdmi #(.VIDEO_ID_CODE(1),.VIDEO_REFRESH_RATE(59.5238095238),.AUDIO_RATE(48000),.AUDIO_BIT_WIDTH(16),.VENDOR_NAME("DMZ     "),.PRODUCT_DESCRIPTION("Track1 P2       ")) tx(.clk_pixel_x5(serial_clk),.clk_pixel(pixel_clk),.clk_audio(sample_ce),.reset(pixel_reset),.rgb(rgb),.audio_sample_word(aw),.tmds(tmds),.tmds_clock(HDMI_CLK_P),.cx(x),.cy(y),.frame_width(),.frame_height(),.screen_width(),.screen_height());
assign {HDMI_D2_P,HDMI_D1_P,HDMI_D0_P}=tmds;
reg [31:0] uptime;always @(posedge mem_clk) if(reset) uptime<=0;else uptime<=uptime+1'b1;
wire [31:0] words[15:0];
assign words[0]=32'h54533250;
assign words[1]={16'd0,locked,fb_fault,(underflow_mem!=0),front_bank,display_valid,bist_passed,bist_done,init_done,8'd2};
assign words[2]={24'd0,bist_status};assign words[3]=checked;assign words[4]=errors;
assign words[5]={11'd0,first_addr};assign words[6]=first_expected;assign words[7]=first_actual;
assign words[8]=refreshes;assign words[9]=swaps;assign words[10]=frames_written;assign words[11]=dma_reads;
assign words[12]=underflow_mem;assign words[13]={20'd0,fifo_used};assign words[14]=uptime;
reg [31:0] checksum;integer n;always @* begin checksum=0;for(n=0;n<15;n=n+1) checksum=checksum^words[n];end
assign words[15]=checksum;
wire [511:0] status;genvar i;generate for(i=0;i<16;i=i+1) begin assign status[32*i+:32]=words[i];end endgenerate
dmz_status_uart telemetry(.clk(mem_clk),.reset(reset),.status(status),.tx(uart_tx));
assign leds={fb_fault,(underflow_mem!=0),swaps[0],display_valid,(errors!=0),bist_passed,init_done,uptime[24]};
endmodule
