`default_nettype none
module dmz_track1_top(
    // Board clock, run switch and physical controls.
    input wire clk_50m, run_n,
    input wire mute_switch, pattern_switch,
    input wire uart_rx,
    input wire emergency_switch, visual_hide_switch,
    input wire [3:0] key_col,
    inout wire [3:0] key_row,
    // SD card and diagnostic UART.
    output wire SD_CS, SD_SCK, SD_MOSI,
    input wire SD_MISO,
    output wire uart_tx,
    output wire [7:0] leds,
    // HDMI positive pins; differential outputs are configured by the board ADC.
    output wire HDMI_CLK_P, HDMI_D0_P, HDMI_D1_P, HDMI_D2_P
);
import dmz_contract_pkg::*;

// Explicit subsystem interconnect; no implicit nets.
wire tone_muted;
wire beep_phase;
wire switch_mute;
wire switch_continuous;
wire wav_source;
wire audio_paused;
wire [3:0] volume;
wire [MEM_BITS-1:0] mem_status;
wire [MEM_BITS-1:0] mem_snapshot;
wire emergency;
wire visual_enabled;
wire alert_on;
wire [4:0] level_l;
wire [4:0] level_r;
wire command_valid;
wire [7:0] command_byte;
wire pixel_clk;
wire serial_clk;
wire mem_clk;
wire sdram_clk;
wire locked;
wire ar;
reg [3:0] mr;
reg [3:0] pr;
wire base_mem_reset;
wire base_pixel_reset;
wire restart;
(* ASYNC_REG="TRUE" *) reg [1:0] restart_sync;
wire reset;
wire pixel_reset;
wire ras_n;
wire cas_n;
wire we_n;
wire [10:0] sa;
wire [1:0] ba;
wire [31:0] dq;
wire [31:0] dq_out;
wire dq_oe;
wire init_done;
wire req_ready;
wire rsp_valid;
wire bist_done;
wire bist_passed;
wire bvalid;
wire bwrite;
wire fvalid;
wire fwrite;
wire [20:0] baddr;
wire [20:0] faddr;
wire [255:0] bwdata;
wire [255:0] fwdata;
wire [255:0] rdata;
wire [31:0] refreshes;
wire [31:0] errors;
wire [31:0] checked;
wire [31:0] first_expected;
wire [31:0] first_actual;
wire [20:0] first_addr;
wire [7:0] bist_status;
wire [9:0] x;
wire [9:0] y;
reg frame_toggle;
wire fifo_push;
wire fifo_full;
wire fifo_reset;
wire [31:0] fifo_in;
wire [11:0] fifo_used;
wire display_valid;
wire front_bank;
wire fb_fault;
wire [31:0] swaps;
wire [31:0] frames_written;
wire [31:0] dma_reads;
wire sd_ready;
wire sd_done;
wire sd_initialized;
wire sd_byte_valid;
wire sd_start;
wire [31:0] sd_lba;
wire [31:0] sd_sectors;
wire [8:0] sd_index;
wire [7:0] sd_byte;
wire [7:0] sd_error;
wire [7:0] sd_status;
wire load_valid;
wire load_last;
wire load_ready;
wire load_ack;
wire image_done;
wire [17:0] load_addr;
wire [255:0] load_data;
wire [7:0] image_error;
wire [7:0] image_status;
wire [31:0] image_pixels;
wire [63:0] image_name;
wire catalog_ready;
wire loader_busy;
wire gallery_request;
wire autoplay;
wire gallery_loading;
wire [5:0] image_count;
wire [4:0] selected_image;
wire [4:0] requested_image;
wire [4:0] displayed_image;
wire menu_open;
wire [5:0] menu_query;
wire [5:0] query_mem;
wire [5:0] browse_tag;
wire [63:0] browse_name;
wire browse_valid;
wire [4:0] wav_count;
wire [3:0] audio_selected_index;
wire audio_flushing;
wire [MENU_BITS-1:0] menu_status;
wire [MENU_BITS-1:0] menu_snapshot;
wire command_fifo_empty;
wire command_fifo_full;
wire [31:0] command_fifo_data;
wire mem_command_valid;
wire [7:0] mem_command;
wire wav_found;
wire wav_done;
wire pcm_valid;
wire pcm_ready;
wire [31:0] wav_bytes;
wire [31:0] decoded_pairs;
wire [31:0] wav_loops;
wire [31:0] declared_pairs;
wire [31:0] pcm_pair;
wire [7:0] wav_error;
wire [7:0] wav_status;
wire [31:0] image_reads;
wire [31:0] audio_reads;
wire [12:0] audio_fifo_used;
wire [31:0] dbg_samples;
wire [31:0] dbg_pcm_packets;
wire [31:0] dbg_nonzero_packets;
wire [31:0] dbg_acr_packets;
wire [31:0] dbg_pcm_pair;
wire [19:0] dbg_cts;
wire [23:0] rgb;
wire [31:0] underflow;
wire [31:0] underflow_mem;
wire [31:0] pcm_output;
wire [31:0] audio_underflows;
wire [31:0] played_pairs;
wire [15:0] aw[1:0];
wire sample_ce;
wire audio_active;
wire [1:0] audio_mode;
wire [15:0] command_count;
wire [7:0] last_command;
wire [3:0] key_row_low;
wire menu_ready;
wire [4:0] menu_wavs;
wire [3:0] menu_wav_index;
wire [2:0] tmds;
reg [31:0] uptime;
wire [AUDIO_BITS-1:0] audio_status;
wire [AUDIO_BITS-1:0] audio_snapshot;

assign ar = ~run_n|~locked;
assign base_mem_reset = mr[3];
assign base_pixel_reset = pr[3];
assign reset = base_mem_reset|restart_sync[1];
assign pixel_reset = base_pixel_reset|restart;
assign mem_command_valid = !command_fifo_empty;
assign mem_command = command_fifo_data[7:0];
assign menu_ready = menu_snapshot[MENU_READY];
assign menu_wavs = menu_snapshot[MENU_WAVS+:5];
assign menu_wav_index = menu_snapshot[MENU_WAV_INDEX+:4];

dmz_p2_pll pll(
    .refclk(clk_50m),
    .reset(~run_n),
    .clk0_out(pixel_clk),
    .clk1_out(serial_clk),
    .mem_clk(mem_clk),
    .sdram_clk(sdram_clk),
    .locked(locked)
);

always @(posedge mem_clk or posedge ar) if(ar) mr<=15;else mr<={mr[2:0],1'b0};
always @(posedge pixel_clk or posedge ar) if(ar) pr<=15;else pr<={pr[2:0],1'b0};

always @(posedge mem_clk) if(base_mem_reset) restart_sync<=0;else restart_sync<={restart_sync[0],restart};

assign dq=dq_oe?dq_out:32'bz;
EG_PHY_SDRAM_2M_32 memory(
    .clk(sdram_clk),
    .ras_n(ras_n),
    .cas_n(cas_n),
    .we_n(we_n),
    .addr(sa),
    .ba(ba),
    .dq(dq),
    .cs_n(1'b0),
    .cke(1'b1),
    .dm0(1'b0),
    .dm1(1'b0),
    .dm2(1'b0),
    .dm3(1'b0)
);

dmz_sdram_ctrl ctrl(
    .clk(mem_clk),
    .reset(reset),
    .req_valid(bist_done?fvalid:bvalid),
    .req_write(bist_done?fwrite:bwrite),
    .req_addr(bist_done?faddr:baddr),
    .req_wdata(bist_done?fwdata:bwdata),
    .req_ready(req_ready),
    .rsp_valid(rsp_valid),
    .rsp_rdata(rdata),
    .init_done(init_done),
    .refresh_count(refreshes),
    .ras_n(ras_n),
    .cas_n(cas_n),
    .we_n(we_n),
    .addr(sa),
    .ba(ba),
    .dq_out(dq_out),
    .dq_oe(dq_oe),
    .dq_in(dq)
);
dmz_sdram_bist bist(
    .clk(mem_clk),
    .reset(reset),
    .init_done(init_done),
    .req_valid(bvalid),
    .req_write(bwrite),
    .req_addr(baddr),
    .req_wdata(bwdata),
    .req_ready(req_ready&&!bist_done),
    .rsp_valid(rsp_valid&&!bist_done),
    .rsp_rdata(rdata),
    .done(bist_done),
    .passed(bist_passed),
    .errors(errors),
    .checked_words(checked),
    .first_bad_addr(first_addr),
    .first_expected(first_expected),
    .first_actual(first_actual),
    .status(bist_status)
);

always @(posedge pixel_clk) if(pixel_reset) frame_toggle<=0;else if(x==0&&y==VIDEO_HEIGHT) frame_toggle<=~frame_toggle;

dmz_sd_reader sd(
    .clk(mem_clk),
    .reset(reset),
    .read_start(sd_start),
    .read_lba(sd_lba),
    .ready(sd_ready),
    .initialized(sd_initialized),
    .read_done(sd_done),
    .byte_valid(sd_byte_valid),
    .byte_index(sd_index),
    .byte_data(sd_byte),
    .error(sd_error),
    .status(sd_status),
    .sectors_read(sd_sectors),
    .sd_cs(SD_CS),
    .sd_sck(SD_SCK),
    .sd_mosi(SD_MOSI),
    .sd_miso(SD_MISO)
);

// Dedicated coherent query/response, independent of the player metadata port.
dmz_status_cdc #(.WIDTH(6)) menu_request_cdc(
    .src_clk(pixel_clk),
    .src_reset(base_pixel_reset),
    .src_data(menu_query),
    .dst_clk(mem_clk),
    .dst_reset(base_mem_reset),
    .dst_data(query_mem)
);

// Keep menu producer and consumers on the same named field contract.
assign menu_status[MENU_NAME+:64] = browse_name;
assign menu_status[MENU_TAG+:6] = browse_tag;
assign menu_status[MENU_VALID] = browse_valid;
assign menu_status[MENU_READY] = catalog_ready;
assign menu_status[MENU_IMAGES+:6] = image_count;
assign menu_status[MENU_DISPLAYED+:5] = displayed_image;
assign menu_status[MENU_WAVS+:5] = wav_count;
assign menu_status[MENU_WAV_INDEX+:4] = audio_selected_index;
assign menu_status[MENU_WAV_ERROR+:8] = wav_error;
assign menu_status[MENU_IMAGE_ERROR+:8] = image_error;
assign menu_status[MENU_SD_ERROR+:8] = sd_error;
dmz_status_cdc #(.WIDTH(MENU_BITS)) menu_reply_cdc(
    .src_clk(mem_clk),
    .src_reset(base_mem_reset),
    .src_data(menu_status),
    .dst_clk(pixel_clk),
    .dst_reset(base_pixel_reset),
    .dst_data(menu_snapshot)
);
// Four queued command bytes, preserving order across pixel/memory clocks.
// Physical keys and 115200-baud UART produce at most a two-command burst.

dmz_pixel_fifo #(.AW(2)) command_fifo(
    .wclk(pixel_clk),
    .wreset(base_pixel_reset),
    .wpush(command_valid),
    .wdata({24'd0,command_byte}),
    .full(command_fifo_full),
    .used(),
    .rclk(mem_clk),
    .rreset(base_mem_reset),
    .rpop(!command_fifo_empty),
    .rdata(command_fifo_data),
    .empty(command_fifo_empty)
);

dmz_gallery_control gallery(
    .clk(mem_clk),
    .reset(reset),
    .command_valid(mem_command_valid),
    .command_byte(mem_command),
    .catalog_ready(catalog_ready),
    .file_count(image_count),
    .selected_index(selected_image),
    .loader_busy(loader_busy),
    .loader_error(image_error),
    .swaps(swaps),
    .select_request(gallery_request),
    .requested_index(requested_image),
    .autoplay(autoplay),
    .loading(gallery_loading),
    .displayed_index(displayed_image)
);

dmz_media_pipeline storage(
    .clk(mem_clk),
    .reset(reset),
    .enable(bist_passed),
    .audio_urgent(audio_fifo_used<AUDIO_URGENT_WORDS),
    .audio_select_request(mem_command_valid&&mem_command[7:4]==AUDIO_COMMAND_PREFIX),
    .audio_requested_index(mem_command[3:0]),
    .audio_selected_index(audio_selected_index),
    .audio_flushing(audio_flushing),
    .wav_count(wav_count),
    .browse_query(query_mem),
    .browse_tag(browse_tag),
    .browse_name(browse_name),
    .browse_valid(browse_valid),
    .select_request(gallery_request),
    .requested_index(requested_image),
    .selected_index(selected_image),
    .catalog_ready(catalog_ready),
    .image_count(image_count),
    .image_name(image_name),
    .image_busy(loader_busy),
    .image_done(image_done),
    .image_error(image_error),
    .image_status(image_status),
    .image_pixels(image_pixels),
    .load_valid(load_valid),
    .load_addr(load_addr),
    .load_data(load_data),
    .load_last(load_last),
    .load_ready(load_ready),
    .load_ack(load_ack),
    .wav_found(wav_found),
    .wav_bytes(wav_bytes),
    .decoded_pairs(decoded_pairs),
    .loop_count(wav_loops),
    .declared_pairs(declared_pairs),
    .wav_error(wav_error),
    .wav_status(wav_status),
    .wav_done(wav_done),
    .pcm_valid(pcm_valid),
    .pcm_ready(pcm_ready),
    .pcm_pair(pcm_pair),
    .sd_start(sd_start),
    .sd_lba(sd_lba),
    .sd_ready(sd_ready),
    .sd_done(sd_done),
    .sd_byte_valid(sd_byte_valid),
    .sd_byte_index(sd_index),
    .sd_byte_data(sd_byte),
    .sd_error(sd_error),
    .image_reads(image_reads),
    .audio_reads(audio_reads)
);

dmz_image_framebuffer fb(
    .load_valid(load_valid),
    .load_addr(load_addr),
    .load_data(load_data),
    .load_last(load_last),
    .load_ready(load_ready),
    .load_ack(load_ack),
    .clk(mem_clk),
    .reset(reset),
    .bist_done(bist_done),
    .bist_passed(bist_passed),
    .frame_toggle(frame_toggle),
    .req_valid(fvalid),
    .req_write(fwrite),
    .req_addr(faddr),
    .req_wdata(fwdata),
    .req_ready(req_ready&&bist_done),
    .rsp_valid(rsp_valid&&bist_done),
    .rsp_rdata(rdata),
    .fifo_used(fifo_used),
    .fifo_full(fifo_full),
    .fifo_push(fifo_push),
    .fifo_data(fifo_in),
    .fifo_reset(fifo_reset),
    .display_valid(display_valid),
    .front_bank(front_bank),
    .swaps(swaps),
    .frames_written(frames_written),
    .dma_reads(dma_reads),
    .fault(fb_fault)
);

assign aw[0]=pcm_output[15:0];assign aw[1]=pcm_output[31:16];

genvar kr;generate for(kr=0;kr<4;kr=kr+1) begin
 assign key_row[kr]=key_row_low[kr]?1'b0:1'bz;
end endgenerate

dmz_audio_output audio(
    .pixel_clk(pixel_clk),
    .mem_clk(mem_clk),
    .pixel_reset(pixel_reset),
    .base_pixel_reset(base_pixel_reset),
    .reset(reset),
    .tone_muted(tone_muted),
    .audio_paused(audio_paused),
    .emergency(emergency),
    .alert_on(alert_on),
    .wav_source(wav_source),
    .pcm_valid(pcm_valid),
    .audio_flushing(audio_flushing),
    .wav_done(wav_done),
    .wav_found(wav_found),
    .volume(volume),
    .wav_error(wav_error),
    .pcm_pair(pcm_pair),
    .sample_ce(sample_ce),
    .pcm_ready(pcm_ready),
    .audio_active(audio_active),
    .pcm_output(pcm_output),
    .audio_underflows(audio_underflows),
    .played_pairs(played_pairs),
    .audio_fifo_used(audio_fifo_used)
);
dmz_video_output video(
    .pixel_clk(pixel_clk),
    .mem_clk(mem_clk),
    .pixel_reset(pixel_reset),
    .base_pixel_reset(base_pixel_reset),
    .reset(reset),
    .fifo_reset(fifo_reset),
    .fifo_push(fifo_push),
    .display_valid(display_valid),
    .bist_done(bist_done),
    .bist_passed(bist_passed),
    .command_valid(command_valid),
    .menu_open(menu_open),
    .autoplay(mem_snapshot[MEM_AUTOPLAY]),
    .audio_paused(audio_paused),
    .tone_muted(tone_muted),
    .wav_source(wav_source),
    .emergency(emergency),
    .visual_enabled(visual_enabled),
    .alert_on(alert_on),
    .sample_ce(sample_ce),
    .command_byte(command_byte),
    .image_error(image_error),
    .fifo_in(fifo_in),
    .pcm_output(pcm_output),
    .x(x),
    .y(y),
    .volume(volume),
    .menu_query(menu_query),
    .menu_snapshot(menu_snapshot),
    .fifo_full(fifo_full),
    .fifo_used(fifo_used),
    .rgb(rgb),
    .underflow(underflow),
    .underflow_mem(underflow_mem),
    .level_l(level_l),
    .level_r(level_r)
);
dmz_control_subsystem control(
    .pixel_clk(pixel_clk),
    .base_pixel_reset(base_pixel_reset),
    .frame_tick(x==0&&y==VIDEO_HEIGHT),
    .uart_rx(uart_rx),
    .mute_switch(mute_switch),
    .pattern_switch(pattern_switch),
    .emergency_switch(emergency_switch),
    .visual_hide_switch(visual_hide_switch),
    .key_col(key_col),
    .menu_snapshot(menu_snapshot),
    .key_row_low(key_row_low),
    .volume(volume),
    .menu_query(menu_query),
    .command_valid(command_valid),
    .menu_open(menu_open),
    .tone_muted(tone_muted),
    .wav_source(wav_source),
    .audio_paused(audio_paused),
    .restart(restart),
    .beep_phase(beep_phase),
    .switch_mute(switch_mute),
    .switch_continuous(switch_continuous),
    .emergency(emergency),
    .visual_enabled(visual_enabled),
    .alert_on(alert_on),
    .command_byte(command_byte),
    .last_command(last_command),
    .command_count(command_count),
    .audio_mode(audio_mode)
);
dmz_telemetry diagnostics(
    .catalog_ready(catalog_ready),
    .gallery_loading(gallery_loading),
    .autoplay(autoplay),
    .display_valid(display_valid),
    .fb_fault(fb_fault),
    .front_bank(front_bank),
    .bist_passed(bist_passed),
    .bist_done(bist_done),
    .init_done(init_done),
    .sd_initialized(sd_initialized),
    .wav_found(wav_found),
    .pixel_clk(pixel_clk),
    .base_pixel_reset(base_pixel_reset),
    .switch_continuous(switch_continuous),
    .beep_phase(beep_phase),
    .switch_mute(switch_mute),
    .tone_muted(tone_muted),
    .locked(locked),
    .emergency(emergency),
    .visual_enabled(visual_enabled),
    .menu_ready(menu_ready),
    .menu_open(menu_open),
    .audio_paused(audio_paused),
    .wav_source(wav_source),
    .audio_active(audio_active),
    .wav_bytes(wav_bytes),
    .audio_reads(audio_reads),
    .image_reads(image_reads),
    .wav_loops(wav_loops),
    .decoded_pairs(decoded_pairs),
    .swaps(swaps),
    .checked(checked),
    .image_pixels(image_pixels),
    .errors(errors),
    .refreshes(refreshes),
    .sd_sectors(sd_sectors),
    .underflow_mem(underflow_mem),
    .declared_pairs(declared_pairs),
    .dbg_samples(dbg_samples),
    .dbg_pcm_packets(dbg_pcm_packets),
    .dbg_nonzero_packets(dbg_nonzero_packets),
    .dbg_acr_packets(dbg_acr_packets),
    .underflow(underflow),
    .audio_underflows(audio_underflows),
    .played_pairs(played_pairs),
    .sd_error(sd_error),
    .image_error(image_error),
    .sd_status(sd_status),
    .image_status(image_status),
    .wav_error(wav_error),
    .wav_status(wav_status),
    .last_command(last_command),
    .displayed_image(displayed_image),
    .selected_image(selected_image),
    .menu_wavs(menu_wavs),
    .level_l(level_l),
    .level_r(level_r),
    .image_count(image_count),
    .menu_query(menu_query),
    .volume(volume),
    .menu_wav_index(menu_wav_index),
    .audio_fifo_used(audio_fifo_used),
    .dbg_cts(dbg_cts),
    .command_count(command_count),
    .audio_mode(audio_mode),
    .mem_snapshot(mem_snapshot),
    .audio_snapshot(audio_snapshot),
    .mem_status(mem_status),
    .audio_status(audio_status),
    .uart_tx(uart_tx)
);

hdmi #(.VIDEO_ID_CODE(1),.VIDEO_REFRESH_RATE(59.5238095238),.AUDIO_RATE(AUDIO_RATE),.AUDIO_BIT_WIDTH(16),.VENDOR_NAME("DMZ     "),.PRODUCT_DESCRIPTION("DMZ Track1      ")) tx(
    .clk_pixel_x5(serial_clk),
    .clk_pixel(pixel_clk),
    .clk_audio(sample_ce),
    .reset(pixel_reset),
    .rgb(rgb),
    .audio_sample_word(aw),
    .tmds(tmds),
    .tmds_clock(HDMI_CLK_P),
    .dbg_samples(dbg_samples),
    .dbg_pcm_packets(dbg_pcm_packets),
    .dbg_nonzero_packets(dbg_nonzero_packets),
    .dbg_acr_packets(dbg_acr_packets),
    .dbg_cts(dbg_cts),
    .dbg_pcm_pair(dbg_pcm_pair),
    .cx(x),
    .cy(y),
    .frame_width(),
    .frame_height(),
    .screen_width(),
    .screen_height()
);
assign {HDMI_D2_P,HDMI_D1_P,HDMI_D0_P}=tmds;
always @(posedge mem_clk) if(reset) uptime<=0;else uptime<=uptime+1'b1;
// Coherent memory-domain diagnostics cross via held-data request/acknowledge.

dmz_status_cdc #(.WIDTH(MEM_BITS)) snapshot(
    .src_clk(mem_clk),
    .src_reset(base_mem_reset),
    .src_data(mem_status),
    .dst_clk(pixel_clk),
    .dst_reset(base_pixel_reset),
    .dst_data(mem_snapshot)
);

dmz_status_cdc #(.WIDTH(AUDIO_BITS)) audio_diag(
    .src_clk(mem_clk),
    .src_reset(base_mem_reset),
    .src_data(audio_status),
    .dst_clk(pixel_clk),
    .dst_reset(base_pixel_reset),
    .dst_data(audio_snapshot)
);
assign leds={fb_fault,(underflow_mem!=0),~tone_muted,display_valid,tone_muted,bist_passed,init_done,uptime[24]};
endmodule

`default_nettype wire
