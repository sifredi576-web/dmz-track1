`default_nettype none
// Memory-domain PCM buffering, pixel-domain playback and final volume/mute.
module dmz_audio_output(
    input wire pixel_clk,
    input wire mem_clk,
    input wire pixel_reset,
    input wire base_pixel_reset,
    input wire reset,
    input wire tone_muted,
    input wire audio_paused,
    input wire emergency,
    input wire alert_on,
    input wire wav_source,
    input wire pcm_valid,
    input wire audio_flushing,
    input wire wav_done,
    input wire wav_found,
    input wire [3:0] volume,
    input wire [7:0] wav_error,
    input wire [31:0] pcm_pair,
    output wire sample_ce,
    output wire pcm_ready,
    output reg audio_active,
    output wire [31:0] pcm_output,
    output reg [31:0] audio_underflows,
    output reg [31:0] played_pairs,
    output wire [12:0] audio_fifo_used
);
import dmz_contract_pkg::*;
wire signed [15:0] sample;wire [15:0] aw[1:0];
dmz_tone tone(
    .clk(pixel_clk),
    .reset(pixel_reset),
    .mute(1'b0),
    .sample_ce(sample_ce),
    .sample(sample)
);
wire audio_fifo_full,audio_fifo_empty;wire [31:0] audio_fifo_data;
assign pcm_ready=!audio_fifo_full;

wire audio_pop=sample_ce&&wav_source&&!audio_paused&&!emergency&&audio_active&&!audio_fifo_empty;
(* ASYNC_REG="TRUE" *) reg [1:0] audio_flush_sync;
always @(posedge pixel_clk) if(base_pixel_reset) audio_flush_sync<=3;else audio_flush_sync<={audio_flush_sync[0],audio_flushing};
wire audio_pixel_reset=pixel_reset||audio_flush_sync[1];
dmz_pixel_fifo #(.AW(12)) audio_fifo(
    .wclk(mem_clk),
    .wreset(reset||audio_flushing),
    .wpush(pcm_valid&&pcm_ready),
    .wdata(pcm_pair),
    .full(audio_fifo_full),
    .used(audio_fifo_used),
    .rclk(pixel_clk),
    .rreset(audio_pixel_reset),
    .rpop(audio_pop),
    .rdata(audio_fifo_data),
    .empty(audio_fifo_empty)
);
wire prefilled=(audio_fifo_used>=AUDIO_PREFILL_WORDS)||(wav_done&&audio_fifo_used!=0);
(* ASYNC_REG="TRUE" *) reg [1:0] prefill_sync,wav_sync,error_sync;

always @(posedge pixel_clk) begin
 if(audio_pixel_reset) begin prefill_sync<=0;wav_sync<=0;error_sync<=0;audio_active<=0;audio_underflows<=0;played_pairs<=0;end
 else begin
  prefill_sync<={prefill_sync[0],prefilled};wav_sync<={wav_sync[0],wav_found};error_sync<={error_sync[0],(wav_error!=0)};
  if(!audio_active&&prefill_sync[1]&&wav_sync[1]&&!error_sync[1]) audio_active<=1;
  if(audio_pop) played_pairs<=played_pairs+1'b1;
  if(sample_ce&&audio_active&&wav_source&&!audio_paused&&!emergency&&audio_fifo_empty&&!error_sync[1]) begin audio_underflows<=audio_underflows+1'b1;audio_active<=0;end
 end
end
wire signed [15:0] selected_left=emergency?(alert_on?sample:16'sd0):wav_source?((audio_active&&!audio_fifo_empty&&!error_sync[1])?$signed(audio_fifo_data[15:0]):16'sd0):(sample <<< 1);
wire signed [15:0] selected_right=emergency?(alert_on?sample:16'sd0):wav_source?((audio_active&&!audio_fifo_empty&&!error_sync[1])?$signed(audio_fifo_data[31:16]):16'sd0):(sample <<< 1);
wire signed [20:0] scaled_left=selected_left*$signed({1'b0,volume});
wire signed [20:0] scaled_right=selected_right*$signed({1'b0,volume});
assign aw[0]=(tone_muted||(audio_paused&&!emergency))?16'd0:16'(scaled_left >>> 3);
assign aw[1]=(tone_muted||(audio_paused&&!emergency))?16'd0:16'(scaled_right >>> 3);

assign pcm_output={aw[1],aw[0]};

endmodule

`default_nettype wire
