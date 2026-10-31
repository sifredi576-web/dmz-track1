`default_nettype none
// Pixel-domain keys/UART arbitration, file menu, playback and scene controls.
module dmz_control_subsystem(
    input wire pixel_clk,
    input wire base_pixel_reset,
    input wire frame_tick,
    input wire uart_rx,
    input wire mute_switch,
    input wire pattern_switch,
    input wire emergency_switch,
    input wire visual_hide_switch,
    input wire [3:0] key_col,
    input wire [dmz_contract_pkg::MENU_BITS-1:0] menu_snapshot,
    output wire [3:0] key_row_low,
    output wire [3:0] volume,
    output wire [5:0] menu_query,
    output wire command_valid,
    output wire menu_open,
    output wire tone_muted,
    output wire wav_source,
    output wire audio_paused,
    output wire restart,
    output wire beep_phase,
    output wire switch_mute,
    output wire switch_continuous,
    output wire emergency,
    output wire visual_enabled,
    output wire alert_on,
    output wire [7:0] command_byte,
    output wire [7:0] last_command,
    output wire [15:0] command_count,
    output wire [1:0] audio_mode
);
import dmz_contract_pkg::*;

wire [5:0] menu_tag=menu_snapshot[MENU_TAG+:6];
wire menu_valid=menu_snapshot[MENU_VALID],menu_ready=menu_snapshot[MENU_READY];
wire [5:0] menu_images=menu_snapshot[MENU_IMAGES+:6];
wire [4:0] menu_wavs=menu_snapshot[MENU_WAVS+:5];

// Physical keys and development UART share one command path; WAV starts enabled.

wire raw_command_valid;wire [7:0] raw_command_byte;
wire uart_command_valid,key_valid;wire [7:0] uart_command_byte;
wire [3:0] key_code;

dmz_matrix_keys keys(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .col_in(key_col),
    .row_low(key_row_low),
    .key_valid(key_valid),
    .key_code(key_code)
);
dmz_uart_rx command_rx(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .rx(uart_rx),
    .valid(uart_command_valid),
    .data(uart_command_byte)
);
dmz_board_commands board_commands(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .key_valid(key_valid),
    .key_code(key_code),
    .audio_paused(audio_paused),
    .tone_muted(tone_muted),
    .uart_valid(uart_command_valid),
    .uart_byte(uart_command_byte),
    .command_valid(raw_command_valid),
    .command_byte(raw_command_byte)
);
dmz_file_menu file_menu(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .raw_valid(raw_command_valid),
    .raw_byte(raw_command_byte),
    .catalog_ready(menu_ready),
    .image_count(menu_images),
    .wav_count(menu_wavs),
    .browse_valid(menu_valid),
    .browse_tag(menu_tag),
    .menu_open(menu_open),
    .query(menu_query),
    .command_valid(command_valid),
    .command_byte(command_byte)
);
dmz_media_control #(.DEFAULT_MODE(1),.DEFAULT_WAV(1)) controls(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .command_valid(command_valid),
    .command_byte(command_byte),
    .mute_switch(mute_switch),
    .continuous_switch(pattern_switch),
    .tone_muted(tone_muted),
    .mode(audio_mode),
    .command_count(command_count),
    .last_command(last_command),
    .restart(restart),
    .beep_phase(beep_phase),
    .switch_mute(switch_mute),
    .switch_continuous(switch_continuous),
    .wav_source(wav_source),
    .audio_paused(audio_paused),
    .volume(volume)
);
dmz_scene_control scene(
    .clk(pixel_clk),
    .reset(base_pixel_reset),
    .frame_tick(frame_tick),
    .emergency_switch(emergency_switch),
    .visual_hide_switch(visual_hide_switch),
    .command_valid(command_valid),
    .command_byte(command_byte),
    .emergency(emergency),
    .visual_enabled(visual_enabled),
    .alert_on(alert_on)
);

endmodule

`default_nettype wire
