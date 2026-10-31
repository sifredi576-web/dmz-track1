`default_nettype none
// Pixel FIFO readout, picture adjustment, OSD and actual-output PCM visualization.
module dmz_video_output(
    input wire pixel_clk,
    input wire mem_clk,
    input wire pixel_reset,
    input wire base_pixel_reset,
    input wire reset,
    input wire fifo_reset,
    input wire fifo_push,
    input wire display_valid,
    input wire bist_done,
    input wire bist_passed,
    input wire command_valid,
    input wire menu_open,
    input wire autoplay,
    input wire audio_paused,
    input wire tone_muted,
    input wire wav_source,
    input wire emergency,
    input wire visual_enabled,
    input wire alert_on,
    input wire sample_ce,
    input wire [7:0] command_byte,
    input wire [7:0] image_error,
    input wire [31:0] fifo_in,
    input wire [31:0] pcm_output,
    input wire [9:0] x,
    input wire [9:0] y,
    input wire [3:0] volume,
    input wire [5:0] menu_query,
    input wire [dmz_contract_pkg::MENU_BITS-1:0] menu_snapshot,
    output wire fifo_full,
    output wire [11:0] fifo_used,
    output reg [23:0] rgb,
    output reg [31:0] underflow,
    output wire [31:0] underflow_mem,
    output wire [4:0] level_l,
    output wire [4:0] level_r
);
import dmz_contract_pkg::*;
wire visual_ink,visual_shade;
wire [23:0] visual_color;
wire [4:0] peak_l,peak_r;
wire [63:0] menu_name=menu_snapshot[MENU_NAME+:64];
wire [5:0] menu_tag=menu_snapshot[MENU_TAG+:6];
wire menu_valid=menu_snapshot[MENU_VALID],menu_ready=menu_snapshot[MENU_READY];
wire [5:0] menu_images=menu_snapshot[MENU_IMAGES+:6];
wire [4:0] menu_displayed=menu_snapshot[MENU_DISPLAYED+:5],menu_wavs=menu_snapshot[MENU_WAVS+:5];
wire [3:0] menu_wav_index=menu_snapshot[MENU_WAV_INDEX+:4];
wire [7:0] menu_wav_error=menu_snapshot[MENU_WAV_ERROR+:8],menu_image_error=menu_snapshot[MENU_IMAGE_ERROR+:8],menu_sd_error=menu_snapshot[MENU_SD_ERROR+:8];
wire fifo_empty;wire [31:0] fifo_out;wire [15:0] aw[1:0];assign aw[0]=pcm_output[15:0];assign aw[1]=pcm_output[31:16];
reg [2:0] fr;
always @(posedge pixel_clk or posedge fifo_reset) if(fifo_reset) fr<=7;else fr<={fr[1:0],1'b0};
reg [1:0] dv,fail;
always @(posedge pixel_clk) if(pixel_reset) begin dv<=0;fail<=0;end else begin dv<={dv[0],display_valid};fail<={fail[0],bist_done&&!bist_passed};end
wire active=x<VIDEO_WIDTH&&y<VIDEO_HEIGHT;
wire pop=active&&x[0]&&dv[1]&&!fr[2];
dmz_pixel_fifo fifo(
    .wclk(mem_clk),
    .wreset(fifo_reset),
    .wpush(fifo_push),
    .wdata(fifo_in),
    .full(fifo_full),
    .used(fifo_used),
    .rclk(pixel_clk),
    .rreset(fr[2]),
    .rpop(pop),
    .rdata(fifo_out),
    .empty(fifo_empty)
);
reg [31:0] uf_gray;
always @(posedge pixel_clk) begin
 if(pixel_reset) begin underflow<=0;uf_gray<=0;end
 else if(active&&dv[1]&&!fr[2]&&fifo_empty) begin underflow<=underflow+1'b1;uf_gray<=((underflow+1'b1)>>1)^(underflow+1'b1);end
end
(* ASYNC_REG="TRUE" *) reg [31:0] uf1,uf2;
always @(posedge mem_clk) if(reset) begin uf1<=0;uf2<=0;end else begin uf1<=uf_gray;uf2<=uf1;end
function automatic [31:0] fromgray(input [31:0] g);integer k;begin fromgray[31]=g[31];for(k=30;k>=0;k=k-1) fromgray[k]=fromgray[k+1]^g[k];end endfunction

wire [15:0] p565=x[0]?fifo_out[31:16]:fifo_out[15:0];

wire [23:0] base_rgb=fail[1]?24'hff0000:!dv[1]?(image_error!=0?24'hff8000:24'h000040):
 (fifo_empty||fr[2])?24'hff00ff:{p565[15:11],p565[15:13],p565[10:5],p565[10:9],p565[4:0],p565[4:2]};
wire [3:0] brightness,contrast;wire [23:0] display_time,adjusted_rgb;
dmz_display_control display_controls(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .frame_tick(x==0&&y==VIDEO_HEIGHT),
    .command_valid(command_valid),
    .command_byte(command_byte),
    .brightness(brightness),
    .contrast(contrast),
    .time_bcd(display_time)
);
dmz_picture_adjust adjust_picture(
    .rgb(base_rgb),
    .brightness(brightness),
    .contrast(contrast),
    .adjusted(adjusted_rgb)
);
wire osd_text,osd_shade;wire [23:0] osd_color;
dmz_osd osd(
    .emergency(emergency),
    .visual_enabled(visual_enabled),
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .time_bcd(display_time),
    .brightness(brightness),
    .contrast(contrast),
    .x(x),
    .y(y),
    .menu_open(menu_open),
    .query(menu_query),
    .browse_tag(menu_tag),
    .browse_name(menu_name),
    .browse_valid(menu_valid),
    .catalog_ready(menu_ready),
    .image_count(menu_images),
    .displayed_image(menu_displayed),
    .wav_count(menu_wavs),
    .wav_index(menu_wav_index),
    .volume(volume),
    .audio_paused(audio_paused),
    .tone_muted(tone_muted),
    .wav_source(wav_source),
    .autoplay(autoplay),
    .sd_error(menu_sd_error),
    .image_error(menu_image_error),
    .wav_error(menu_wav_error),
    .text_on(osd_text),
    .shade_on(osd_shade),
    .color(osd_color)
);
always @(posedge pixel_clk) begin
 if(pixel_reset) rgb<=0;
 else if(osd_text) rgb<=osd_color;
 else if(visual_ink) rgb<=visual_color;
 else if(emergency) rgb<=alert_on?24'h600808:24'h380808;
 else if(osd_shade||visual_shade) rgb<={1'b0,adjusted_rgb[23:17],1'b0,adjusted_rgb[15:9],1'b0,adjusted_rgb[7:1]};
 else rgb<=adjusted_rgb;
end
dmz_audio_visual visualizer(
    .clk(pixel_clk),
    .reset(pixel_reset),
    .sample_ce(sample_ce),
    .frame_tick(x==0&&y==VIDEO_HEIGHT),
    .enabled(visual_enabled),
    .left(aw[0]),
    .right(aw[1]),
    .x(x),
    .y(y),
    .ink(visual_ink),
    .shade(visual_shade),
    .color(visual_color),
    .level_l(level_l),
    .level_r(level_r),
    .peak_l(peak_l),
    .peak_r(peak_r)
);
assign underflow_mem=fromgray(uf2);
endmodule

`default_nettype wire
