module dmz_track1_top(
 input wire clk_50m,run_n,mute_switch,pattern_switch,uart_rx,
 output wire SD_CS,SD_SCK,SD_MOSI,input wire SD_MISO,
 output wire uart_tx,output wire [7:0] leds,
 output wire HDMI_CLK_P,HDMI_D0_P,HDMI_D1_P,HDMI_D2_P);
wire pixel_clk,serial_clk,mem_clk,sdram_clk,locked;
dmz_p2_pll pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(pixel_clk),.clk1_out(serial_clk),.mem_clk(mem_clk),.sdram_clk(sdram_clk),.locked(locked));
wire ar=~run_n|~locked;
reg [3:0] mr,pr;
always @(posedge mem_clk or posedge ar) if(ar) mr<=15;else mr<={mr[2:0],1'b0};
always @(posedge pixel_clk or posedge ar) if(ar) pr<=15;else pr<={pr[2:0],1'b0};
wire base_mem_reset=mr[3],base_pixel_reset=pr[3];
wire restart;
(* ASYNC_REG="TRUE" *) reg [1:0] restart_sync;
always @(posedge mem_clk) if(base_mem_reset) restart_sync<=0;else restart_sync<={restart_sync[0],restart};
wire reset=base_mem_reset|restart_sync[1],pixel_reset=base_pixel_reset|restart;
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
wire sd_ready,sd_done,sd_initialized,sd_byte_valid,sd_start;
wire [31:0] sd_lba,sd_sectors;wire [8:0] sd_index;wire [7:0] sd_byte,sd_error,sd_status;
dmz_sd_reader sd(.clk(mem_clk),.reset(reset),.read_start(sd_start),.read_lba(sd_lba),.ready(sd_ready),.initialized(sd_initialized),.read_done(sd_done),.byte_valid(sd_byte_valid),.byte_index(sd_index),.byte_data(sd_byte),.error(sd_error),.status(sd_status),.sectors_read(sd_sectors),.sd_cs(SD_CS),.sd_sck(SD_SCK),.sd_mosi(SD_MOSI),.sd_miso(SD_MISO));
wire load_valid,load_last,load_ready,load_ack,image_done;wire [17:0] load_addr;wire [255:0] load_data;
wire [7:0] image_error,image_status;wire [31:0] image_pixels;wire [63:0] image_name;
wire catalog_ready,loader_busy,gallery_request,autoplay,gallery_loading;
wire [5:0] image_count;wire [4:0] selected_image,requested_image,displayed_image;
// UART holds a byte for >80us; toggle synchronization gives the bus >2 mem cycles to settle.
reg command_toggle;reg [7:0] command_hold;
always @(posedge pixel_clk) if(base_pixel_reset) begin command_toggle<=0;command_hold<=0;end
 else if(command_valid) begin command_hold<=command_byte;command_toggle<=~command_toggle;end
(* ASYNC_REG="TRUE" *) reg [1:0] command_sync;
reg command_seen,mem_command_valid;reg [7:0] mem_command;
always @(posedge mem_clk) if(base_mem_reset) begin command_sync<=0;command_seen<=0;mem_command_valid<=0;mem_command<=0;end
 else begin command_sync<={command_sync[0],command_toggle};mem_command_valid<=0;
  if(command_sync[1]!=command_seen) begin command_seen<=command_sync[1];mem_command<=command_hold;mem_command_valid<=1;end
 end
dmz_gallery_control gallery(.clk(mem_clk),.reset(reset),.command_valid(mem_command_valid),.command_byte(mem_command),
 .catalog_ready(catalog_ready),.file_count(image_count),.selected_index(selected_image),.loader_busy(loader_busy),.loader_error(image_error),.swaps(swaps),
 .select_request(gallery_request),.requested_index(requested_image),.autoplay(autoplay),.loading(gallery_loading),.displayed_index(displayed_image));
dmz_bmp_loader #(.GALLERY(1)) loader(.select_request(gallery_request),.requested_index(requested_image),
 .catalog_ready(catalog_ready),.file_count(image_count),.selected_index(selected_image),.busy(loader_busy),.clk(mem_clk),.reset(reset),.enable(bist_passed),.sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(sd_byte_valid),.sd_byte_index(sd_index),.sd_byte_data(sd_byte),.sd_error(sd_error),.load_valid(load_valid),.load_addr(load_addr),.load_data(load_data),.load_last(load_last),.load_ready(load_ready),.load_ack(load_ack),.done(image_done),.error(image_error),.status(image_status),.pixels_loaded(image_pixels),.filename(image_name));
dmz_image_framebuffer fb(.load_valid(load_valid),.load_addr(load_addr),.load_data(load_data),.load_last(load_last),.load_ready(load_ready),.load_ack(load_ack),.clk(mem_clk),.reset(reset),.bist_done(bist_done),.bist_passed(bist_passed),.frame_toggle(frame_toggle),.req_valid(fvalid),.req_write(fwrite),.req_addr(faddr),.req_wdata(fwdata),.req_ready(req_ready&&bist_done),.rsp_valid(rsp_valid&&bist_done),.rsp_rdata(rdata),.fifo_used(fifo_used),.fifo_full(fifo_full),.fifo_push(fifo_push),.fifo_data(fifo_in),.fifo_reset(fifo_reset),.display_valid(display_valid),.front_bank(front_bank),.swaps(swaps),.frames_written(frames_written),.dma_reads(dma_reads),.fault(fb_fault));
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
 else if(!dv[1]) rgb<=image_error!=0?24'hff8000:24'h000040;
 else if(fifo_empty||fr[2]) rgb<=24'hff00ff;
 else rgb<={p565[15:11],p565[15:13],p565[10:5],p565[10:9],p565[4:0],p565[4:2]};
end
// One control path for the unified project. Start muted; no board switch action required.
wire tone_muted,beep_phase,switch_mute,switch_continuous;
wire [1:0] audio_mode;wire [15:0] command_count;wire [7:0] last_command;
wire command_valid;wire [7:0] command_byte;
dmz_uart_rx command_rx(.clk(pixel_clk),.reset(base_pixel_reset),.rx(uart_rx),.valid(command_valid),.data(command_byte));
dmz_media_control controls(.clk(pixel_clk),.reset(base_pixel_reset),.command_valid(command_valid),.command_byte(command_byte),
 .mute_switch(mute_switch),.continuous_switch(pattern_switch),.tone_muted(tone_muted),.mode(audio_mode),
 .command_count(command_count),.last_command(last_command),.restart(restart),.beep_phase(beep_phase),
 .switch_mute(switch_mute),.switch_continuous(switch_continuous));
wire [31:0] dbg_samples,dbg_pcm_packets,dbg_nonzero_packets,dbg_acr_packets,dbg_pcm_pair;
wire [19:0] dbg_cts;

wire sample_ce;wire signed [15:0] sample;wire [15:0] aw[1:0];assign aw[0]=sample <<< 1;assign aw[1]=sample <<< 1;
dmz_tone tone(.clk(pixel_clk),.reset(pixel_reset),.mute(tone_muted),.sample_ce(sample_ce),.sample(sample));
wire [2:0] tmds;
hdmi #(.VIDEO_ID_CODE(1),.VIDEO_REFRESH_RATE(59.5238095238),.AUDIO_RATE(48000),.AUDIO_BIT_WIDTH(16),.VENDOR_NAME("DMZ     "),.PRODUCT_DESCRIPTION("DMZ Track1      ")) tx(.clk_pixel_x5(serial_clk),.clk_pixel(pixel_clk),.clk_audio(sample_ce),.reset(pixel_reset),.rgb(rgb),.audio_sample_word(aw),.tmds(tmds),.tmds_clock(HDMI_CLK_P),.dbg_samples(dbg_samples),.dbg_pcm_packets(dbg_pcm_packets),.dbg_nonzero_packets(dbg_nonzero_packets),.dbg_acr_packets(dbg_acr_packets),.dbg_cts(dbg_cts),.dbg_pcm_pair(dbg_pcm_pair),.cx(x),.cy(y),.frame_width(),.frame_height(),.screen_width(),.screen_height());
assign {HDMI_D2_P,HDMI_D1_P,HDMI_D0_P}=tmds;
reg [31:0] uptime;always @(posedge mem_clk) if(reset) uptime<=0;else uptime<=uptime+1'b1;
// Coherent memory-domain diagnostics cross via held-data request/acknowledge.
wire [287:0] mem_status,mem_snapshot;
assign mem_status={swaps[12:0],catalog_ready,gallery_loading,autoplay,displayed_image,selected_image,image_count,refreshes,sd_sectors,swaps,checked,{sd_error,image_error,sd_status,image_status},(display_valid?32'd307200:image_pixels),errors,
 24'd0,fb_fault,(underflow_mem!=0),front_bank,display_valid,bist_passed,bist_done,init_done,sd_initialized};
dmz_status_cdc #(.WIDTH(288)) snapshot(.src_clk(mem_clk),.src_reset(base_mem_reset),.src_data(mem_status),
 .dst_clk(pixel_clk),.dst_reset(base_pixel_reset),.dst_data(mem_snapshot));
wire [7:0] flags=mem_snapshot[7:0];
wire [31:0] words[15:0];
assign words[0]=32'h54533154; // "T1ST", telemetry version 3
assign words[1]={10'd0,audio_mode,switch_continuous,beep_phase,switch_mute,tone_muted,
 locked,flags[7],(underflow!=0),flags[5],flags[4],flags[3],flags[2],flags[1],8'd3};
assign words[2]=dbg_samples;assign words[3]=dbg_pcm_packets;assign words[4]=dbg_nonzero_packets;
assign words[5]=dbg_acr_packets;assign words[6]={12'd0,dbg_cts};assign words[7]={16'd6144,16'd48000};
assign words[8]=mem_snapshot[63:32];assign words[9]=mem_snapshot[95:64];assign words[10]=underflow;
assign words[11]=mem_snapshot[127:96];assign words[12]=mem_snapshot[159:128];
assign words[13]=mem_snapshot[287:256];assign words[14]={command_count,last_command,8'd0};
reg [31:0] checksum;integer n;always @* begin checksum=0;for(n=0;n<15;n=n+1) checksum=checksum^words[n];end
assign words[15]=checksum;
wire [511:0] status;genvar i;generate for(i=0;i<16;i=i+1) begin assign status[32*i+:32]=words[i];end endgenerate
dmz_status_uart #(.DIVISOR(217),.PERIOD(12500000)) telemetry(.clk(pixel_clk),.reset(base_pixel_reset),.status(status),.tx(uart_tx));
assign leds={fb_fault,(underflow_mem!=0),~tone_muted,display_valid,tone_muted,bist_passed,init_done,uptime[24]};
endmodule
