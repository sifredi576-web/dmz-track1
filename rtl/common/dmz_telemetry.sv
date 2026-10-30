`default_nettype none
// dmz_telemetry owns this data/control path; clock/reset inputs are explicit.
module dmz_telemetry(
    input wire catalog_ready,
    input wire gallery_loading,
    input wire autoplay,
    input wire display_valid,
    input wire fb_fault,
    input wire front_bank,
    input wire bist_passed,
    input wire bist_done,
    input wire init_done,
    input wire sd_initialized,
    input wire wav_found,
    input wire pixel_clk,
    input wire base_pixel_reset,
    input wire switch_continuous,
    input wire beep_phase,
    input wire switch_mute,
    input wire tone_muted,
    input wire locked,
    input wire emergency,
    input wire visual_enabled,
    input wire menu_ready,
    input wire menu_open,
    input wire audio_paused,
    input wire wav_source,
    input wire audio_active,
    input wire [31:0] wav_bytes,
    input wire [31:0] audio_reads,
    input wire [31:0] image_reads,
    input wire [31:0] wav_loops,
    input wire [31:0] decoded_pairs,
    input wire [31:0] swaps,
    input wire [31:0] checked,
    input wire [31:0] image_pixels,
    input wire [31:0] errors,
    input wire [31:0] refreshes,
    input wire [31:0] sd_sectors,
    input wire [31:0] underflow_mem,
    input wire [31:0] declared_pairs,
    input wire [31:0] dbg_samples,
    input wire [31:0] dbg_pcm_packets,
    input wire [31:0] dbg_nonzero_packets,
    input wire [31:0] dbg_acr_packets,
    input wire [31:0] underflow,
    input wire [31:0] audio_underflows,
    input wire [31:0] played_pairs,
    input wire [7:0] sd_error,
    input wire [7:0] image_error,
    input wire [7:0] sd_status,
    input wire [7:0] image_status,
    input wire [7:0] wav_error,
    input wire [7:0] wav_status,
    input wire [7:0] last_command,
    input wire [4:0] displayed_image,
    input wire [4:0] selected_image,
    input wire [4:0] menu_wavs,
    input wire [4:0] level_l,
    input wire [4:0] level_r,
    input wire [5:0] image_count,
    input wire [5:0] menu_query,
    input wire [3:0] volume,
    input wire [3:0] menu_wav_index,
    input wire [12:0] audio_fifo_used,
    input wire [19:0] dbg_cts,
    input wire [15:0] command_count,
    input wire [1:0] audio_mode,
    input wire [447:0] mem_snapshot,
    input wire [63:0] audio_snapshot,
    output wire [447:0] mem_status,
    output wire [63:0] audio_status,
    output wire uart_tx
);
import dmz_contract_pkg::*;
assign mem_status={wav_bytes,audio_reads,image_reads,wav_loops,decoded_pairs,swaps[12:0],catalog_ready,gallery_loading,autoplay,displayed_image,selected_image,image_count,refreshes,sd_sectors,swaps,checked,{sd_error,image_error,sd_status,image_status},(display_valid?32'(VIDEO_PIXELS):image_pixels),errors,
 24'd0,fb_fault,(underflow_mem!=0),front_bank,display_valid,bist_passed,bist_done,init_done,sd_initialized};
assign audio_status={declared_pairs,2'd0,wav_found,wav_error,wav_status,audio_fifo_used};
wire [7:0] flags=mem_snapshot[MEM_FLAGS+:8];
wire [31:0] words[23:0];
assign words[0]=STATUS_MAGIC; // "T1ST", telemetry version 4
assign words[1]={10'd0,audio_mode,switch_continuous,beep_phase,switch_mute,tone_muted,
 locked,flags[7],(underflow!=0),flags[5],flags[4],flags[3],flags[2],flags[1],8'(STATUS_VERSION)};
assign words[2]=dbg_samples;assign words[3]=dbg_pcm_packets;assign words[4]=dbg_nonzero_packets;
assign words[5]=dbg_acr_packets;assign words[6]={12'd0,dbg_cts};assign words[7]={16'(ACR_N),16'(AUDIO_RATE)};
assign words[8]=mem_snapshot[MEM_ERRORS+:32];assign words[9]=mem_snapshot[MEM_PIXELS+:32];assign words[10]=underflow;
assign words[11]=mem_snapshot[MEM_IO_ERRORS+:32];assign words[12]=mem_snapshot[MEM_CHECKED+:32];
assign words[13]=mem_snapshot[MEM_GALLERY+:32];assign words[14]={command_count,last_command,level_l[4:1],level_r[4:1]};
assign words[15]=audio_underflows;assign words[16]=played_pairs;assign words[17]=mem_snapshot[MEM_DECODED+:32];
assign words[18]=mem_snapshot[MEM_WAV_LOOPS+:32];assign words[19]=audio_snapshot[31:0];
assign words[20]=mem_snapshot[MEM_AUDIO_READS+:32];assign words[21]=mem_snapshot[MEM_WAV_BYTES+:32];
assign words[22]={menu_wav_index,emergency,visual_enabled,2'd0,menu_ready,menu_open,menu_query,menu_wavs,3'd0,volume,audio_paused,wav_source,audio_active,1'b0};
reg [31:0] checksum;integer n;always @* begin checksum=0;for(n=0;n<23;n=n+1) checksum=checksum^words[n];end
assign words[23]=checksum;
wire [767:0] status;genvar i;generate for(i=0;i<24;i=i+1) begin assign status[32*i+:32]=words[i];end endgenerate
dmz_status_uart #(.DIVISOR(217),.PERIOD(12500000),.BYTES(STATUS_BYTES)) telemetry(.clk(pixel_clk),.reset(base_pixel_reset),.status(status),.tx(uart_tx));

endmodule

`default_nettype wire
