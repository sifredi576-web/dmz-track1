module dmz_track1_top #(parameter FULL_TELEMETRY=0)(
 input wire clk_50m,run_n,mute_switch,pattern_switch,uart_rx,emergency_switch,visual_hide_switch,
 input wire [3:0] key_col,inout wire [3:0] key_row,
 output wire SD_CS,SD_SCK,SD_MOSI,input wire SD_MISO,
 output wire uart_tx,output wire [7:0] leds,
 output wire HDMI_CLK_P,HDMI_D0_P,HDMI_D1_P,HDMI_D2_P);
wire arb_valid,arb_write;wire [20:0] arb_addr;wire [255:0] arb_data;
wire ui_key_valid;wire [3:0] ui_key_action;
wire emergency_screen,audio_pop;reg trigger_enabled;
wire tone_muted,beep_phase,switch_mute,switch_continuous,wav_source,audio_paused;wire [3:0] volume;
wire [447:0] mem_status,mem_snapshot;
wire emergency,visual_enabled,alert_on;wire visual_ink,visual_shade;wire [23:0] visual_color;
wire [4:0] level_l,level_r,peak_l,peak_r;
wire command_valid;wire [7:0] command_byte;
wire pixel_clk,serial_clk,mem_clk,sdram_clk,locked;
wire memory_locked,video_locked,legacy_pixel,legacy_serial;
dmz_clocking pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(legacy_pixel),.clk1_out(legacy_serial),.mem_clk(mem_clk),.sdram_clk(sdram_clk),.locked(memory_locked));
dmz_wide_pll video_pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(pixel_clk),.clk1_out(serial_clk),.unused_mem(),.unused_sdram(),.locked(video_locked));
assign locked=memory_locked&&video_locked;
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
dmz_sdram_ctrl ctrl(.clk(mem_clk),.reset(reset),.req_valid(bist_done?arb_valid:bvalid),.req_write(bist_done?arb_write:bwrite),.req_addr(bist_done?arb_addr:baddr),.req_wdata(bist_done?arb_data:bwdata),.req_ready(req_ready),.rsp_valid(rsp_valid),.rsp_rdata(rdata),.init_done(init_done),.refresh_count(refreshes),.ras_n(ras_n),.cas_n(cas_n),.we_n(we_n),.addr(sa),.ba(ba),.dq_out(dq_out),.dq_oe(dq_oe),.dq_in(dq));
dmz_sdram_bist #(.PARALLEL_CHECK(1),.COUNT_ERRORS(FULL_TELEMETRY)) bist(.clk(mem_clk),.reset(reset),.init_done(init_done),.req_valid(bvalid),.req_write(bwrite),.req_addr(baddr),.req_wdata(bwdata),.req_ready(req_ready&&!bist_done),.rsp_valid(rsp_valid&&!bist_done),.rsp_rdata(rdata),.done(bist_done),.passed(bist_passed),.errors(errors),.checked_words(checked),.first_bad_addr(first_addr),.first_expected(first_expected),.first_actual(first_actual),.status(bist_status));
wire [10:0] x;wire [9:0] y;
wire [9:0] scene_x,scene_y,scene_ahead1,scene_ahead2,scene_ahead3;wire course_area,wide_pop;
dmz_wide_mapper canvas(.clk(pixel_clk),.reset(pixel_reset),.x(x),.y(y),.inside_course(course_area),.pair_pop(wide_pop),.sx(scene_x),.sy(scene_y),.ahead1_x(scene_ahead1),.ahead2_x(scene_ahead2),.ahead3_x(scene_ahead3));
reg frame_toggle;
always @(posedge pixel_clk) if(pixel_reset) frame_toggle<=0;else if(x==0&&y==720) frame_toggle<=~frame_toggle;
wire fifo_push,fifo_full,fifo_empty,fifo_reset;wire [31:0] fifo_in,fifo_out;wire [11:0] fifo_used;
wire display_valid,front_bank,fb_fault;wire [31:0] swaps,frames_written,dma_reads;
wire sd_ready,sd_done,sd_initialized,sd_byte_valid,sd_start;
wire [31:0] sd_lba,sd_sectors;wire [8:0] sd_index;wire [7:0] sd_byte,sd_error,sd_status;
dmz_sd_reader sd(.clk(mem_clk),.reset(reset),.read_start(sd_start),.read_lba(sd_lba),.ready(sd_ready),.initialized(sd_initialized),.read_done(sd_done),.byte_valid(sd_byte_valid),.byte_index(sd_index),.byte_data(sd_byte),.error(sd_error),.status(sd_status),.sectors_read(sd_sectors),.sd_cs(SD_CS),.sd_sck(SD_SCK),.sd_mosi(SD_MOSI),.sd_miso(SD_MISO));
wire load_valid,load_last,load_ready,load_ack,image_done;wire [17:0] load_addr;wire [255:0] load_data;
wire [7:0] image_error,image_status;wire [31:0] image_pixels;wire [63:0] image_name;
wire catalog_ready,loader_busy,gallery_request,autoplay,gallery_loading;
wire [5:0] image_count;wire [4:0] selected_image,requested_image,displayed_image;
wire menu_open;wire [1:0] menu_section,setting_cursor;wire [5:0] menu_query,query_mem,browse_tag;
wire [63:0] browse_name;wire browse_valid;
(* ASYNC_REG="TRUE" *) reg [1:0] alert_mem;
always @(posedge mem_clk)if(reset)alert_mem<=0;else alert_mem<={alert_mem[0],emergency_switch};
wire platform_found,platform_ready,platform_mode;wire [159:0] ui_status,ui_pixel;
wire aux_valid,aux_write,aux_ready,aux_response;wire [20:0] aux_addr;wire [255:0] aux_data;
wire [1:0] clients_ready,clients_response;
wire [41:0] audio_params,audio_params_pixel;wire [7:0] audio_params_ack;wire [8:0] audio_finished_mem;
wire ui_control_valid,ui_control_pixel_valid;wire [7:0] ui_control_byte;wire [31:0] ui_control_pixel_data;
wire ui_events_empty,ui_events_full;wire [31:0] ui_event_data;
wire [2:0] ui_flags_mem;reg replay_pending;
wire replay_fire=replay_pending&&ui_events_empty&&!ui_flags_mem[0]&&!ui_status[1]&&!ui_status[149];
always @(posedge mem_clk)begin
 if(reset)replay_pending<=0;
 else begin
  if(replay_fire||!platform_mode)replay_pending<=0;
  if(platform_mode&&mem_command_valid&&(mem_command=="J"||mem_command=="j"))replay_pending<=1;
 end
end
dmz_status_cdc #(.WIDTH(160),.INTERVAL(32)) ui_snapshot(.src_clk(mem_clk),.src_reset(reset),.src_data(ui_status),.dst_clk(pixel_clk),.dst_reset(pixel_reset),.dst_data(ui_pixel));
dmz_status_cdc #(.WIDTH(3),.INTERVAL(32)) ui_flags(.src_clk(pixel_clk),.src_reset(pixel_reset),.src_data({tone_muted,audio_paused,menu_open}),.dst_clk(mem_clk),.dst_reset(reset),.dst_data(ui_flags_mem));
dmz_pixel_fifo #(.AW(2)) ui_events(.wclk(pixel_clk),.wreset(pixel_reset),.wpush(ui_key_valid),.wdata({28'd0,ui_key_action}),.full(ui_events_full),.used(),
 .rclk(mem_clk),.rreset(reset),.rpop(!ui_events_empty),.rdata(ui_event_data),.empty(ui_events_empty));
wire ui_commands_empty,ui_commands_full;
assign ui_control_pixel_valid=!ui_commands_empty;
dmz_pixel_fifo #(.AW(2)) ui_commands(.wclk(mem_clk),.wreset(reset),.wpush(ui_control_valid),.wdata({24'd0,ui_control_byte}),.full(ui_commands_full),.used(),
 .rclk(pixel_clk),.rreset(pixel_reset),.rpop(!ui_commands_empty),.rdata(ui_control_pixel_data),.empty(ui_commands_empty));
dmz_status_cdc #(.WIDTH(42),.INTERVAL(16)) params_to_pixel(.src_clk(mem_clk),.src_reset(reset),.src_data(audio_params),.dst_clk(pixel_clk),.dst_reset(pixel_reset),.dst_data(audio_params_pixel));
dmz_status_cdc #(.WIDTH(8),.INTERVAL(16)) params_ack(.src_clk(pixel_clk),.src_reset(pixel_reset),.src_data(audio_params_pixel[41:34]),.dst_clk(mem_clk),.dst_reset(reset),.dst_data(audio_params_ack));
wire [8:0] audio_finished_pixel;
dmz_status_cdc #(.WIDTH(9),.INTERVAL(32)) completion_to_memory(.src_clk(pixel_clk),.src_reset(pixel_reset),.src_data(audio_finished_pixel),.dst_clk(mem_clk),.dst_reset(reset),.dst_data(audio_finished_mem));
dmz_mem_mux #(.N(2)) memory_clients(.clk(mem_clk),.reset(reset),.valid({aux_valid,fvalid}),.write({aux_write,fwrite}),.addr({aux_addr,faddr}),.wdata({aux_data,fwdata}),
 .ready(clients_ready),.response(clients_response),.req_valid(arb_valid),.req_write(arb_write),.req_addr(arb_addr),.req_wdata(arb_data),.req_ready(req_ready&&bist_done),.rsp_valid(rsp_valid&&bist_done));
assign aux_ready=clients_ready[1];assign aux_response=clients_response[1];wire [7:0] platform_error;
wire [4:0] wav_count;wire [3:0] audio_selected_index;wire audio_flushing;
// Dedicated coherent query/response, independent of the player metadata port.
dmz_status_cdc #(.WIDTH(6)) menu_request_cdc(.src_clk(pixel_clk),.src_reset(base_pixel_reset),.src_data(menu_query),
 .dst_clk(mem_clk),.dst_reset(base_mem_reset),.dst_data(query_mem));
wire [115:0] menu_status,menu_snapshot;
assign menu_status={sd_error,image_error,wav_error,audio_selected_index,wav_count,displayed_image,image_count,catalog_ready,browse_valid,browse_tag,browse_name};
dmz_status_cdc #(.WIDTH(116)) menu_reply_cdc(.src_clk(mem_clk),.src_reset(base_mem_reset),.src_data(menu_status),
 .dst_clk(pixel_clk),.dst_reset(base_pixel_reset),.dst_data(menu_snapshot));
wire [63:0] menu_name=menu_snapshot[63:0];wire [5:0] menu_tag=menu_snapshot[69:64];
wire menu_valid=menu_snapshot[70],menu_ready=menu_snapshot[71];
wire [5:0] menu_images=menu_snapshot[77:72];wire [4:0] menu_displayed=menu_snapshot[82:78];
wire [4:0] menu_wavs=menu_snapshot[87:83];wire [3:0] menu_wav_index=menu_snapshot[91:88];
wire [7:0] menu_wav_error=menu_snapshot[99:92],menu_image_error=menu_snapshot[107:100],menu_sd_error=menu_snapshot[115:108];
// Four queued command bytes, preserving order across pixel/memory clocks.
// Physical keys and 115200-baud UART produce at most a two-command burst.
wire command_fifo_empty,command_fifo_full;wire [31:0] command_fifo_data;
wire mem_command_valid=!command_fifo_empty;
wire [7:0] mem_command=command_fifo_data[7:0];
dmz_pixel_fifo #(.AW(2)) command_fifo(.wclk(pixel_clk),.wreset(base_pixel_reset),
 .wpush(command_valid),.wdata({24'd0,command_byte}),.full(command_fifo_full),.used(),
 .rclk(mem_clk),.rreset(base_mem_reset),.rpop(!command_fifo_empty),.rdata(command_fifo_data),.empty(command_fifo_empty));

dmz_gallery_control gallery(.clk(mem_clk),.reset(reset||platform_mode),.command_valid(mem_command_valid),.command_byte(mem_command),
 .catalog_ready(catalog_ready),.file_count(image_count),.selected_index(selected_image),.loader_busy(loader_busy),.loader_error(image_error),.swaps(swaps),
 .select_request(gallery_request),.requested_index(requested_image),.autoplay(autoplay),.loading(gallery_loading),.displayed_index(displayed_image));
wire wav_found,wav_done,pcm_valid,pcm_ready;wire [31:0] wav_bytes,decoded_pairs,wav_loops,declared_pairs,pcm_pair;
wire [7:0] wav_error,wav_status;wire [31:0] image_reads,audio_reads;
wire [12:0] audio_fifo_used;
// KEY10/W toggles paired playback; explicit WAV menu selection returns to background mode.
reg paired_mode;
(* ASYNC_REG="TRUE" *) reg [1:0] paired_pixel;
always @(posedge pixel_clk) if(base_pixel_reset)paired_pixel<=0;else paired_pixel<={paired_pixel[0],paired_mode};
always @(posedge mem_clk) begin
 if(reset) paired_mode<=0;
 else if(mem_command_valid) begin
  if(mem_command=="W" || mem_command=="w") paired_mode<=~paired_mode;
  else if(mem_command[7:4]==4'hc) paired_mode<=0;
 end
end
dmz_media_pipeline #(.RT_PLATFORM(1)) storage(.clk(mem_clk),.reset(reset),.enable(bist_passed),.audio_urgent(audio_fifo_used<1024),
 .platform_found(platform_found),.platform_ready(platform_ready),.platform_error(platform_error),
 .pair_enable(paired_mode),.frame_swaps(swaps),
 .audio_select_request(mem_command_valid&&(mem_command[7:4]==4'hc||mem_command=="J"||mem_command=="j")),.audio_requested_index((mem_command=="J"||mem_command=="j")?audio_selected_index:mem_command[3:0]),.audio_selected_index(audio_selected_index),
 .audio_flushing(audio_flushing),.wav_count(wav_count),.browse_query(query_mem),.browse_tag(browse_tag),.browse_name(browse_name),.browse_valid(browse_valid),
 .select_request(gallery_request),.requested_index(requested_image),.selected_index(selected_image),
 .catalog_ready(catalog_ready),.image_count(image_count),.image_name(image_name),.image_busy(loader_busy),.image_done(image_done),.image_error(image_error),.image_status(image_status),.image_pixels(image_pixels),
 .load_valid(load_valid),.load_addr(load_addr),.load_data(load_data),.load_last(load_last),.load_ready(load_ready),.load_ack(load_ack),
 .wav_found(wav_found),.wav_bytes(wav_bytes),.decoded_pairs(decoded_pairs),.loop_count(wav_loops),.declared_pairs(declared_pairs),.wav_error(wav_error),.wav_status(wav_status),.wav_done(wav_done),
 .pcm_valid(pcm_valid),.pcm_ready(pcm_ready),.pcm_pair(pcm_pair),
 .sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(sd_byte_valid),.sd_byte_index(sd_index),.sd_byte_data(sd_byte),.sd_error(sd_error),
 .image_reads(image_reads),.audio_reads(audio_reads),
 .ui_event_valid(!ui_events_empty||replay_fire),.ui_event_action(ui_events_empty?4'd8:ui_event_data[3:0]),.ui_menu_open(ui_flags_mem[0]),.ui_paused(ui_flags_mem[1]),.ui_muted(ui_flags_mem[2]),.physical_alert(alert_mem[1]),
 .platform_mode(platform_mode),.ui_status(ui_status),.audio_params(audio_params),.audio_params_ack(audio_params_ack),.audio_finished(audio_finished_mem),
 .ui_control_valid(ui_control_valid),.ui_control_byte(ui_control_byte),.aux_valid(aux_valid),.aux_write(aux_write),.aux_addr(aux_addr),.aux_data(aux_data),.aux_ready(aux_ready),.aux_response(aux_response),.aux_rdata(rdata));

dmz_image_framebuffer #(.WIDE_MODE(1)) fb(.load_valid(load_valid),.load_addr(load_addr),.load_data(load_data),.load_last(load_last),.load_ready(load_ready),.load_ack(load_ack),.clk(mem_clk),.reset(reset),.bist_done(bist_done),.bist_passed(bist_passed),.frame_toggle(frame_toggle),.req_valid(fvalid),.req_write(fwrite),.req_addr(faddr),.req_wdata(fwdata),.req_ready(clients_ready[0]),.rsp_valid(clients_response[0]),.rsp_rdata(rdata),.fifo_used(fifo_used),.fifo_full(fifo_full),.fifo_push(fifo_push),.fifo_data(fifo_in),.fifo_reset(fifo_reset),.display_valid(display_valid),.front_bank(front_bank),.swaps(swaps),.frames_written(frames_written),.dma_reads(dma_reads),.fault(fb_fault));
reg [2:0] fr;
always @(posedge pixel_clk or posedge fifo_reset) if(fifo_reset) fr<=7;else fr<={fr[1:0],1'b0};
reg [1:0] dv,fail;
always @(posedge pixel_clk) if(pixel_reset) begin dv<=0;fail<=0;end else begin dv<={dv[0],display_valid};fail<={fail[0],bist_done&&!bist_passed};end
wire active=course_area;
wire pop=wide_pop&&dv[1]&&!fr[2];
dmz_pixel_fifo #(.RECODE_ADDR(1)) fifo(.wclk(mem_clk),.wreset(fifo_reset),.wpush(fifo_push),.wdata(fifo_in),.full(fifo_full),.used(fifo_used),.rclk(pixel_clk),.rreset(fr[2]),.rpop(pop),.rdata(fifo_out),.empty(fifo_empty));
reg [31:0] underflow,uf_gray;
always @(posedge pixel_clk) begin
 if(pixel_reset) begin underflow<=0;uf_gray<=0;end
 else if(active&&dv[1]&&!fr[2]&&fifo_empty) begin underflow<=underflow+1'b1;uf_gray<=((underflow+1'b1)>>1)^(underflow+1'b1);end
end
(* ASYNC_REG="TRUE" *) reg [31:0] uf1,uf2;
always @(posedge mem_clk) if(reset) begin uf1<=0;uf2<=0;end else begin uf1<=uf_gray;uf2<=uf1;end
function automatic [31:0] fromgray(input [31:0] g);integer k;begin fromgray[31]=g[31];for(k=30;k>=0;k=k-1) fromgray[k]=fromgray[k+1]^g[k];end endfunction
wire [31:0] underflow_mem=fromgray(uf2);
wire [15:0] p565=scene_x[0]?fifo_out[31:16]:fifo_out[15:0];
reg [23:0] rgb;
wire [23:0] base_rgb=fail[1]?24'hff0000:!dv[1]?(menu_image_error!=0?24'hff8000:24'h000040):
 (fifo_empty||fr[2])?24'hff00ff:{p565[15:11],p565[15:13],p565[10:5],p565[10:9],p565[4:0],p565[4:2]};
wire [3:0] brightness,contrast;wire [23:0] display_time,adjusted_rgb;
dmz_display_control #(.SECOND_CYCLES(75000000)) display_controls(.clk(pixel_clk),.reset(base_pixel_reset),.frame_tick(x==0&&y==720),
 .command_valid(command_valid),.command_byte(command_byte),.brightness(brightness),.contrast(contrast),.time_bcd(display_time));
dmz_picture_pipe adjust_picture(.clk(pixel_clk),.reset(pixel_reset),.rgb(base_rgb),.brightness(brightness),.contrast(contrast),.adjusted(adjusted_rgb));
wire ui_ink_raw;wire [23:0] ui_color_raw;reg ui_ink;reg [23:0] ui_color;
always @(posedge pixel_clk)if(pixel_reset)begin ui_ink<=0;ui_color<=0;end else begin ui_ink<=ui_ink_raw;ui_color<=ui_color_raw;end
dmz_ui_overlay ui_overlay(.status(ui_pixel),.blocked(menu_open||emergency_screen),.x(scene_ahead1),.y(scene_y),.ink(ui_ink_raw),.color(ui_color_raw));
wire legacy_osd=!ui_pixel[0]||menu_open||(emergency&&!ui_pixel[147]);
wire emergency_audio=emergency||ui_pixel[146];
assign emergency_screen=emergency_audio&&!ui_pixel[147];
wire panel_ink,panel_shade;wire [23:0] panel_color;
wire osd_text,osd_shade;wire [23:0] osd_color;
dmz_osd #(.EXTERNAL_COORDS(1)) osd(.frame_tick(x==0&&y==720),.course_mode(ui_pixel[0]),.menu_section(menu_section),.setting_cursor(setting_cursor),.paired_mode(paired_pixel[1]),.emergency(emergency),.visual_enabled(visual_enabled),.clk(pixel_clk),.reset(base_pixel_reset),.time_bcd(display_time),.brightness(brightness),.contrast(contrast),.x(scene_ahead3),.y(scene_y),.menu_open(menu_open),.query(menu_query),
 .browse_tag(menu_tag),.browse_name(menu_name),.browse_valid(menu_valid),.catalog_ready(menu_ready),
 .image_count(menu_images),.displayed_image(menu_displayed),.wav_count(menu_wavs),.wav_index(menu_wav_index),.volume(volume),
 .audio_paused(audio_paused),.tone_muted(tone_muted),.wav_source(wav_source),.autoplay(autoplay_pixel[1]),
 .sd_error(menu_sd_error),.image_error(menu_image_error),.wav_error(menu_wav_error),.text_on(osd_text),.shade_on(osd_shade),.color(osd_color));
wire trigger_button_ink;wire [23:0] trigger_button_color;
dmz_trigger_button trigger_button(.x(x),.y(y),.enabled(ui_pixel[0]&&ui_pixel[2]&&ui_pixel[145:144]==0),.locked(trigger_enabled),.platform_enabled(ui_pixel[0]),.auto_enabled(ui_pixel[150]),.auto_paused(ui_pixel[151]),.auto_wait(ui_pixel[5]||!ui_pixel[152]),.ink(trigger_button_ink),.color(trigger_button_color));
reg [25:0] overlay_now;reg [25:0] overlay_q[0:2];integer oi;
wire ticker_ink,ticker_shade;
dmz_top_ticker top_ticker(.clk(pixel_clk),.reset(base_pixel_reset),
 .frame_tick(x==0&&y==720),.x(x),.y(y),.ink(ticker_ink),.shade(ticker_shade));
always @*begin
 overlay_now=0;
 if(ticker_ink)overlay_now={2'b10,24'hffffff};
 else if(ticker_shade)overlay_now={2'b10,24'h08182c};
 else if(panel_ink)overlay_now={2'b10,panel_color};
 else if(panel_shade)overlay_now={2'b10,24'h08182c};
 else if(trigger_button_ink)overlay_now={2'b10,trigger_button_color};
 else if(!course_area)overlay_now={2'b10,24'h000000};
 else if(osd_text&&legacy_osd)overlay_now={2'b10,osd_color};
 else if(visual_ink)overlay_now={2'b10,visual_color};
 else if(emergency_screen)overlay_now={2'b10,alert_on?24'h600808:24'h380808};
 else if(ui_ink&&!menu_open)overlay_now={2'b10,ui_color};
 else if((osd_shade&&legacy_osd)||visual_shade)overlay_now={2'b01,24'd0};
end
always @(posedge pixel_clk)begin
 if(pixel_reset)begin rgb<=0;for(oi=0;oi<3;oi=oi+1)overlay_q[oi]<=0;end
 else begin
  overlay_q[0]<=overlay_now;overlay_q[1]<=overlay_q[0];overlay_q[2]<=overlay_q[1];
  if(overlay_q[2][25])rgb<=overlay_q[2][23:0];
  else if(overlay_q[2][24])rgb<={1'b0,adjusted_rgb[23:17],1'b0,adjusted_rgb[15:9],1'b0,adjusted_rgb[7:1]};
  else rgb<=adjusted_rgb;
 end
end
// Physical keys and development UART share one command path; WAV starts enabled.

wire [1:0] audio_mode;wire [15:0] command_count;wire [7:0] last_command;

wire raw_command_valid;wire [7:0] raw_command_byte;

wire uart_command_valid,key_valid;wire [7:0] uart_command_byte;
wire [3:0] key_code,key_row_low;
genvar kr;generate for(kr=0;kr<4;kr=kr+1) begin
 assign key_row[kr]=key_row_low[kr]?1'b0:1'bz;
end endgenerate
dmz_matrix_keys #(.SLOT_CYCLES(37500)) keys(.clk(pixel_clk),.reset(base_pixel_reset),.col_in(key_col),
 .row_low(key_row_low),.key_valid(key_valid),.key_code(key_code));
dmz_uart_rx #(.DIVISOR(651)) command_rx(.clk(pixel_clk),.reset(base_pixel_reset),.rx(uart_rx),.valid(uart_command_valid),.data(uart_command_byte));
wire trigger_context=ui_pixel[0]&&ui_pixel[2]&&!ui_pixel[1]&&ui_pixel[145:144]==0&&!menu_open;
wire trigger_key=key_valid&&key_code==4&&trigger_context;
always @(posedge pixel_clk)if(base_pixel_reset)trigger_enabled<=1;else if(trigger_key||(uart_command_valid&&uart_command_byte==8'h7e))trigger_enabled<=~trigger_enabled;
dmz_ui_keys board_commands(.clk(pixel_clk),.reset(base_pixel_reset),.key_valid(key_valid&&!trigger_key),.key_code(key_code),
 .menu_open(menu_open),.platform_active(ui_pixel[0]),.audio_paused(audio_paused),.tone_muted(tone_muted),.uart_valid(uart_command_valid),.uart_byte(uart_command_byte),
 .command_valid(raw_command_valid),.command_byte(raw_command_byte),.ui_valid(ui_key_valid),.ui_action(ui_key_action));
reg menu_raw_valid;reg [7:0] menu_raw_byte;
always @(posedge pixel_clk)begin
 if(base_pixel_reset)begin menu_raw_valid<=0;menu_raw_byte<=0;end
 else begin menu_raw_valid<=ui_control_pixel_valid||raw_command_valid;menu_raw_byte<=ui_control_pixel_valid?ui_control_pixel_data[7:0]:raw_command_byte;end
end
dmz_file_menu file_menu(.clk(pixel_clk),.reset(base_pixel_reset),.raw_valid(menu_raw_valid),.raw_byte(menu_raw_byte),.course_mode(ui_pixel[0]),.force_close(ui_pixel[146]),
 .catalog_ready(menu_ready),.image_count(menu_images),.wav_count(menu_wavs),.browse_valid(menu_valid),.browse_tag(menu_tag),
 .menu_open(menu_open),.query(menu_query),.section(menu_section),.setting_cursor(setting_cursor),.command_valid(command_valid),.command_byte(command_byte));
dmz_media_control #(.DEFAULT_MODE(1),.DEFAULT_WAV(1),.SECOND_CYCLES(75000000),.RESTART_CYCLES(75000)) controls(.clk(pixel_clk),.reset(base_pixel_reset),.command_valid(command_valid),.command_byte(command_byte),
 .mute_switch(mute_switch),.continuous_switch(pattern_switch),.tone_muted(tone_muted),.mode(audio_mode),
 .command_count(command_count),.last_command(last_command),.restart(restart),.beep_phase(beep_phase),
 .switch_mute(switch_mute),.switch_continuous(switch_continuous),.wav_source(wav_source),.audio_paused(audio_paused),.volume(volume));
wire [31:0] dbg_samples,dbg_pcm_packets,dbg_nonzero_packets,dbg_acr_packets,dbg_pcm_pair;
wire [19:0] dbg_cts;

dmz_scene_control #(.HALF_SECOND(37500000)) scene(.clk(pixel_clk),.reset(base_pixel_reset),.frame_tick(x==0&&y==720),
 .emergency_switch(ui_pixel[0]?ui_pixel[146]:emergency_switch),.visual_hide_switch(visual_hide_switch),.command_valid(command_valid),.command_byte(command_byte),
 .emergency(emergency),.visual_enabled(visual_enabled),.alert_on(alert_on));
wire sample_ce;wire signed [15:0] sample;wire [15:0] aw[1:0];
dmz_tone #(.CLOCK_HZ(75000000)) tone(.clk(pixel_clk),.reset(pixel_reset),.mute(1'b0),.sample_ce(sample_ce),.sample(sample));
wire audio_fifo_full,audio_fifo_empty;wire [31:0] audio_fifo_data;
assign pcm_ready=!audio_fifo_full;
wire course_audio_enabled=!ui_pixel[0]||audio_params_pixel[33];
wire track_audio_done;wire course_audio_done=ui_pixel[0]&&track_audio_done;
dmz_audio_completion completion(.clk(pixel_clk),.reset(pixel_reset),.params(audio_params_pixel),.flushing(audio_flush_sync[1]),.pop(audio_pop),.finished(audio_finished_pixel),.done(track_audio_done));
assign audio_pop=sample_ce&&wav_source&&!audio_paused&&!emergency_audio&&!ui_pixel[148]&&!course_audio_done&&course_audio_enabled&&audio_active&&!audio_fifo_empty;
(* ASYNC_REG="TRUE" *) reg [1:0] audio_flush_sync;
reg audio_flushing_mem;
always @(posedge mem_clk)if(base_mem_reset)audio_flushing_mem<=1;else audio_flushing_mem<=audio_flushing;
always @(posedge pixel_clk) if(base_pixel_reset) audio_flush_sync<=3;else audio_flush_sync<={audio_flush_sync[0],audio_flushing_mem};
wire audio_pixel_reset=pixel_reset||audio_flush_sync[1];
dmz_pixel_fifo #(.AW(11),.RECODE_ADDR(1),.DATA_CODE(1),.USE_BRAM32(1)) audio_fifo(.wclk(mem_clk),.wreset(reset||audio_flushing),.wpush(pcm_valid&&pcm_ready),.wdata(pcm_pair),.full(audio_fifo_full),.used(audio_fifo_used),
 .rclk(pixel_clk),.rreset(audio_pixel_reset),.rpop(audio_pop),.rdata(audio_fifo_data),.empty(audio_fifo_empty));
reg prefilled;
always @(posedge mem_clk)if(reset||audio_flushing)prefilled<=0;else prefilled<=(audio_fifo_used>=512)||(wav_done&&audio_fifo_used!=0);
(* ASYNC_REG="TRUE" *) reg [1:0] prefill_sync,wav_sync,error_sync;
reg audio_active;reg [31:0] audio_underflows,played_pairs;
always @(posedge pixel_clk) begin
 if(audio_pixel_reset) begin prefill_sync<=0;wav_sync<=0;error_sync<=0;audio_active<=0;audio_underflows<=0;played_pairs<=0;end
 else begin
  prefill_sync<={prefill_sync[0],prefilled};wav_sync<={wav_sync[0],wav_found};error_sync<={error_sync[0],(wav_error!=0)};
  if(!audio_active&&prefill_sync[1]&&wav_sync[1]&&!error_sync[1]) audio_active<=1;
  if(audio_pop) played_pairs<=played_pairs+1'b1;
  if(sample_ce&&audio_active&&wav_source&&!audio_paused&&!emergency_audio&&!ui_pixel[148]&&!course_audio_done&&course_audio_enabled&&audio_fifo_empty&&!error_sync[1]) begin audio_underflows<=audio_underflows+1'b1;audio_active<=0;end
 end
end
wire signed [15:0] selected_left=emergency_audio?(alert_on?sample:16'sd0):wav_source?((audio_active&&!audio_fifo_empty&&!error_sync[1]&&!course_audio_done&&course_audio_enabled&&!ui_pixel[148])?$signed(audio_fifo_data[15:0]):16'sd0):(sample <<< 1);
wire signed [15:0] selected_right=emergency_audio?(alert_on?sample:16'sd0):wav_source?((audio_active&&!audio_fifo_empty&&!error_sync[1]&&!course_audio_done&&course_audio_enabled&&!ui_pixel[148])?$signed(audio_fifo_data[31:16]):16'sd0):(sample <<< 1);
wire signed [20:0] scaled_left=selected_left*$signed({1'b0,volume});
wire signed [20:0] scaled_right=selected_right*$signed({1'b0,volume});
wire [15:0] aw_next_l=(tone_muted||(audio_paused&&!emergency_audio))?16'd0:16'(scaled_left >>> 3);
wire [15:0] aw_next_r=(tone_muted||(audio_paused&&!emergency_audio))?16'd0:16'(scaled_right >>> 3);
reg [15:0] aw_l,aw_r;
always @(posedge pixel_clk)if(pixel_reset)begin aw_l<=0;aw_r<=0;end else begin aw_l<=aw_next_l;aw_r<=aw_next_r;end
assign aw[0]=aw_l;assign aw[1]=aw_r;
dmz_status_panel #(.CANVAS_W(1650),.CANVAS_H(750),.ORIGIN_X(1136),.ORIGIN_Y(192),.SCALE_SHIFT(1)) status_panel(.clk(pixel_clk),.reset(base_pixel_reset),.frame_tick(x==0&&y==720),
 .enabled(ui_pixel[0]),
 .muted(tone_muted),.paused(audio_paused),.loading(ui_pixel[1]||ui_pixel[148]||audio_flush_sync[1]),
 .audio_enabled(course_audio_enabled),.audio_active(audio_active),.ended(course_audio_done),.fault(error_sync[1]||menu_wav_error!=0),
 .volume(volume),.brightness(brightness),.contrast(contrast),.x(x),.y(y),.ink(panel_ink),.shade(panel_shade),.color(panel_color));
dmz_audio_visual #(.EXTERNAL_COORDS(1),.PIPELINED(1),.TRIGGER_SUPPORT(1)) visualizer(.clk(pixel_clk),.reset(pixel_reset),.sample_ce(sample_ce),.frame_tick(x==0&&y==720),
 .trigger_enabled(trigger_enabled),.enabled(visual_enabled&&(!ui_pixel[0]||(ui_pixel[2]&&!ui_pixel[1]&&!menu_open))),.left(aw[0]),.right(aw[1]),.x(scene_ahead3),.y(scene_y),.ink(visual_ink),.shade(visual_shade),.color(visual_color),
 .level_l(level_l),.level_r(level_r),.peak_l(peak_l),.peak_r(peak_r));
wire [2:0] tmds;
hdmi #(.VIDEO_ID_CODE(4),.AVI_VIDEO_ID_CODE(4),.RGB_PIPELINE_DELAY(3),.EXTERNAL_SERIAL_RESET(1),.VIDEO_REFRESH_RATE(60.6060606061),.PIXEL_RATE_OVERRIDE(75000000.0),.AUDIO_RATE(48000),.AUDIO_BIT_WIDTH(16),.VENDOR_NAME("DMZ     "),.PRODUCT_DESCRIPTION("DMZ Track1      ")) tx(.clk_pixel_x5(serial_clk),.clk_pixel(pixel_clk),.clk_audio(sample_ce),.reset(pixel_reset),.serializer_ar(ar),.rgb(rgb),.audio_sample_word(aw),.tmds(tmds),.tmds_clock(HDMI_CLK_P),.dbg_samples(dbg_samples),.dbg_pcm_packets(dbg_pcm_packets),.dbg_nonzero_packets(dbg_nonzero_packets),.dbg_acr_packets(dbg_acr_packets),.dbg_cts(dbg_cts),.dbg_pcm_pair(dbg_pcm_pair),.cx(x),.cy(y),.frame_width(),.frame_height(),.screen_width(),.screen_height());
assign {HDMI_D2_P,HDMI_D1_P,HDMI_D0_P}=tmds;
reg [31:0] uptime;always @(posedge mem_clk) if(reset) uptime<=0;else uptime<=uptime+1'b1;
// Coherent memory-domain diagnostics cross via held-data request/acknowledge.

assign mem_status={wav_bytes,audio_reads,image_reads,wav_loops,decoded_pairs,swaps[12:0],catalog_ready,gallery_loading,autoplay,displayed_image,selected_image,image_count,refreshes,sd_sectors,swaps,checked,{sd_error,image_error,sd_status,image_status},(display_valid?32'd307200:image_pixels),errors,
 24'd0,fb_fault,(underflow_mem!=0),front_bank,display_valid,bist_passed,bist_done,init_done,sd_initialized};
dmz_status_cdc #(.WIDTH(448)) snapshot(.src_clk(mem_clk),.src_reset(base_mem_reset),.src_data(mem_status),
 .dst_clk(pixel_clk),.dst_reset(base_pixel_reset),.dst_data(mem_snapshot));
wire [63:0] audio_status,audio_snapshot;
assign audio_status={declared_pairs,2'd0,wav_found,wav_error,wav_status,audio_fifo_used};
dmz_status_cdc #(.WIDTH(64)) audio_diag(.src_clk(mem_clk),.src_reset(base_mem_reset),.src_data(audio_status),.dst_clk(pixel_clk),.dst_reset(base_pixel_reset),.dst_data(audio_snapshot));
(* ASYNC_REG="TRUE" *) reg [7:0] compact_flags1,compact_flags2;
(* ASYNC_REG="TRUE" *) reg [1:0] autoplay_pixel;
always @(posedge pixel_clk)begin
 if(base_pixel_reset)begin compact_flags1<=0;compact_flags2<=0;autoplay_pixel<=0;end
 else begin compact_flags1<={fb_fault,(underflow_mem!=0),front_bank,display_valid,bist_passed,bist_done,init_done,sd_initialized};
  compact_flags2<=compact_flags1;autoplay_pixel<={autoplay_pixel[0],autoplay};end
end
wire [7:0] flags=FULL_TELEMETRY?mem_snapshot[7:0]:compact_flags2;
wire [31:0] words[23:0];
assign words[0]=32'h54533154; // "T1ST", telemetry version 4
assign words[1]={10'd0,audio_mode,switch_continuous,beep_phase,switch_mute,tone_muted,
 locked,flags[7],(underflow!=0),flags[5],flags[4],flags[3],flags[2],flags[1],8'd4};
assign words[2]=dbg_samples;assign words[3]=dbg_pcm_packets;assign words[4]=dbg_nonzero_packets;
assign words[5]=dbg_acr_packets;assign words[6]={12'd0,dbg_cts};assign words[7]={16'd6144,16'd48000};
assign words[8]=mem_snapshot[63:32];assign words[9]=mem_snapshot[95:64];assign words[10]=underflow;
assign words[11]=mem_snapshot[127:96];assign words[12]=mem_snapshot[159:128];
assign words[13]=mem_snapshot[287:256];assign words[14]={command_count,last_command,level_l[4:1],level_r[4:1]};
assign words[15]=audio_underflows;assign words[16]=played_pairs;assign words[17]=mem_snapshot[319:288];
assign words[18]=mem_snapshot[351:320];assign words[19]=audio_snapshot[31:0];
assign words[20]=mem_snapshot[415:384];assign words[21]=mem_snapshot[447:416];
assign words[22]={menu_wav_index,emergency,visual_enabled,platform_found,platform_ready,menu_ready,menu_open,menu_query,menu_wavs,platform_error[2:0],volume,audio_paused,wav_source,audio_active,1'b0};
reg [31:0] checksum;integer n;always @* begin checksum=0;for(n=0;n<23;n=n+1) checksum=checksum^words[n];end
assign words[23]=checksum;
wire [767:0] status;genvar i;generate for(i=0;i<24;i=i+1) begin assign status[32*i+:32]=words[i];end endgenerate
// Production status keeps the UART and command acknowledgements without retaining
// hundreds of debug-only counters/snapshots. FULL_TELEMETRY=1 selects the legacy packet.
wire [31:0] compact_words[0:7];wire [255:0] compact_status;
assign compact_words[0]=32'h54533154;
assign compact_words[1]={words[1][31:8],8'd5};
assign compact_words[2]=ui_pixel[31:0];assign compact_words[3]=ui_pixel[159:128];
assign compact_words[4]={menu_sd_error,menu_image_error,menu_wav_error,8'd0};
assign compact_words[5]={command_count,last_command,volume,audio_paused,tone_muted,emergency_audio,visual_enabled};
assign compact_words[6]={menu_wavs,menu_wav_index,menu_images,menu_displayed,ui_pixel[21:16],ui_pixel[15:11],menu_open};
assign compact_words[7]=compact_words[0]^compact_words[1]^compact_words[2]^compact_words[3]^compact_words[4]^compact_words[5]^compact_words[6];
generate if(FULL_TELEMETRY)begin:full_diagnostics
 dmz_status_uart #(.DIVISOR(651),.PERIOD(37500000),.BYTES(96)) telemetry(.clk(pixel_clk),.reset(base_pixel_reset),.status(status),.tx(uart_tx));
end else begin:production_diagnostics
 for(genvar ci=0;ci<8;ci=ci+1)begin assign compact_status[ci*32+:32]=compact_words[ci];end
 dmz_status_uart #(.DIVISOR(651),.PERIOD(37500000),.BYTES(32)) telemetry(.clk(pixel_clk),.reset(base_pixel_reset),.status(compact_status),.tx(uart_tx));
end endgenerate
assign leds={fb_fault,(underflow_mem!=0),~tone_muted,display_valid,tone_muted,bist_passed,init_done,uptime[24]};
endmodule

