// Verilog netlist created by Tang Dynasty v6.2.168116
// Sun Oct 25 14:42:10 2026

`timescale 1ns / 1ps
module dmz_p1_top  // ../../../rtl/p1/dmz_p1_top.sv(1)
  (
  clk_50m,
  mute_switch,
  pattern_switch,
  run_n,
  uart_rx,
  HDMI_CLK_P,
  HDMI_D0_P,
  HDMI_D1_P,
  HDMI_D2_P,
  leds,
  uart_tx
  );

  input clk_50m;  // ../../../rtl/p1/dmz_p1_top.sv(2)
  input mute_switch;  // ../../../rtl/p1/dmz_p1_top.sv(2)
  input pattern_switch;  // ../../../rtl/p1/dmz_p1_top.sv(2)
  input run_n;  // ../../../rtl/p1/dmz_p1_top.sv(2)
  input uart_rx;  // ../../../rtl/p1/dmz_p1_top.sv(3)
  output HDMI_CLK_P;  // ../../../rtl/p1/dmz_p1_top.sv(5)
  output HDMI_D0_P;  // ../../../rtl/p1/dmz_p1_top.sv(5)
  output HDMI_D1_P;  // ../../../rtl/p1/dmz_p1_top.sv(5)
  output HDMI_D2_P;  // ../../../rtl/p1/dmz_p1_top.sv(5)
  output [3:0] leds;  // ../../../rtl/p1/dmz_p1_top.sv(4)
  output uart_tx;  // ../../../rtl/p1/dmz_p1_top.sv(3)

  wire [17:0] gray_b19;
  wire [23:0] heartbeat;  // ../../../rtl/p1/dmz_p1_top.sv(15)
  wire [23:0] heartbeat_b1;
  wire [11:0] lt10_syn_7;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [11:0] lt11_syn_7;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [11:0] lt12_syn_7;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [11:0] lt13_syn_7;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [11:0] lt14_syn_7;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [11:0] lt15_syn_7;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [10:0] lt17_syn_4;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [11:0] lt9_syn_4;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire [1:0] mute_sync;  // ../../../rtl/p1/dmz_p1_top.sv(14)
  wire [1:0] pattern_sync;  // ../../../rtl/p1/dmz_p1_top.sv(14)
  wire [3:0] reset_pipe;  // ../../../rtl/p1/dmz_p1_top.sv(8)
  wire [23:0] rgb_b8;
  wire [1:0] rx_sync;  // ../../../rtl/p1/dmz_p1_top.sv(16)
  wire [24:0] \tone/accumulator ;  // ../../../rtl/p1/dmz_tone.sv(3)
  wire [24:0] \tone/accumulator_b3 ;
  wire [24:0] \tone/accumulator_b4 ;
  wire [15:0] \tone/mux8_syn_2 ;  // ../../../rtl/p1/dmz_tone.sv(61)
  wire [5:0] \tone/phase ;  // ../../../rtl/p1/dmz_tone.sv(4)
  wire [5:0] \tone/phase_b5 ;
  wire [9:0] \tx/cx ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(81)
  wire [9:0] \tx/cx_b4 ;
  wire [9:0] \tx/cy ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(82)
  wire [9:0] \tx/cy_b5 ;
  wire [2:0] \tx/mode ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(238)
  wire [9:0] \tx/mux11_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(216)
  wire [9:0] \tx/mux12_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(216)
  wire [23:0] \tx/rgb ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(71)
  wire [9:0] \tx/serializer/lane[0]$shift ;  // ../../../rtl/p1/serializer.sv(23)
  wire [9:0] \tx/serializer/lane[1]$shift ;  // ../../../rtl/p1/serializer.sv(23)
  wire [9:0] \tx/serializer/lane[2]$shift ;  // ../../../rtl/p1/serializer.sv(23)
  wire [9:0] \tx/serializer/lane[3]$shift ;  // ../../../rtl/p1/serializer.sv(23)
  wire [4:0] \tx/tmds_gen[0]$tmds_channel/N0q_m07 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  wire [3:0] \tx/tmds_gen[0]$tmds_channel/N1q_m07_b ;
  wire [4:0] \tx/tmds_gen[0]$tmds_channel/acc ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(22)
  wire [4:0] \tx/tmds_gen[0]$tmds_channel/acc_add ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire [4:0] \tx/tmds_gen[0]$tmds_channel/acc_add_b2 ;
  wire [4:0] \tx/tmds_gen[0]$tmds_channel/acc_add_b4 ;
  wire [4:0] \tx/tmds_gen[0]$tmds_channel/acc_add_b5 ;
  wire [1:0] \tx/tmds_gen[0]$tmds_channel/add0_syn_6 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(34)
  wire [1:0] \tx/tmds_gen[0]$tmds_channel/add2_syn_6 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(35)
  wire [1:0] \tx/tmds_gen[0]$tmds_channel/control_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(14)
  wire [3:0] \tx/tmds_gen[0]$tmds_channel/data_island_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(13)
  wire [9:0] \tx/tmds_gen[0]$tmds_channel/q_out_b3 ;
  wire [9:0] \tx/tmds_gen[0]$tmds_channel/tmds ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(16)
  wire [7:0] \tx/tmds_gen[0]$tmds_channel/video_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(12)
  wire [4:0] \tx/tmds_gen[1]$tmds_channel/N0q_m07 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  wire [3:0] \tx/tmds_gen[1]$tmds_channel/N1q_m07_b ;
  wire [4:0] \tx/tmds_gen[1]$tmds_channel/acc ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(22)
  wire [4:0] \tx/tmds_gen[1]$tmds_channel/acc_add ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire [4:0] \tx/tmds_gen[1]$tmds_channel/acc_add_b2 ;
  wire [4:0] \tx/tmds_gen[1]$tmds_channel/acc_add_b4 ;
  wire [4:0] \tx/tmds_gen[1]$tmds_channel/acc_add_b5 ;
  wire [1:0] \tx/tmds_gen[1]$tmds_channel/add0_syn_6 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(34)
  wire [1:0] \tx/tmds_gen[1]$tmds_channel/control_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(14)
  wire [3:0] \tx/tmds_gen[1]$tmds_channel/data_island_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(13)
  wire [9:0] \tx/tmds_gen[1]$tmds_channel/q_out_b3 ;
  wire [9:0] \tx/tmds_gen[1]$tmds_channel/tmds ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(16)
  wire [7:0] \tx/tmds_gen[1]$tmds_channel/video_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(12)
  wire [4:0] \tx/tmds_gen[2]$tmds_channel/N0q_m07 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  wire [3:0] \tx/tmds_gen[2]$tmds_channel/N1q_m07_b ;
  wire [4:0] \tx/tmds_gen[2]$tmds_channel/acc ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(22)
  wire [4:0] \tx/tmds_gen[2]$tmds_channel/acc_add ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire [4:0] \tx/tmds_gen[2]$tmds_channel/acc_add_b2 ;
  wire [4:0] \tx/tmds_gen[2]$tmds_channel/acc_add_b4 ;
  wire [4:0] \tx/tmds_gen[2]$tmds_channel/acc_add_b5 ;
  wire [1:0] \tx/tmds_gen[2]$tmds_channel/add0_syn_6 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(34)
  wire [1:0] \tx/tmds_gen[2]$tmds_channel/control_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(14)
  wire [3:0] \tx/tmds_gen[2]$tmds_channel/data_island_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(13)
  wire [9:0] \tx/tmds_gen[2]$tmds_channel/q_out_b3 ;
  wire [9:0] \tx/tmds_gen[2]$tmds_channel/tmds ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(16)
  wire [7:0] \tx/tmds_gen[2]$tmds_channel/video_data ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(12)
  wire [63:0] \tx/true_hdmi_output$packet_assembler/bch[0] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(29)
  wire [63:0] \tx/true_hdmi_output$packet_assembler/bch[1] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(29)
  wire [63:0] \tx/true_hdmi_output$packet_assembler/bch[2] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(29)
  wire [63:0] \tx/true_hdmi_output$packet_assembler/bch[3] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(29)
  wire [4:0] \tx/true_hdmi_output$packet_assembler/counter ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(11)
  wire  \tx/true_hdmi_output$packet_assembler/mux0_syn_55 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux0_syn_56 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire [39:0] \tx/true_hdmi_output$packet_assembler/mux13_syn_2 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(69)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_146 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_154 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_157 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_158 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_166 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_260 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_261 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_354 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_360 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_363 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_364 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux14_syn_54 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_149 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_151 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_156 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_158 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_260 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_261 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_263 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_360 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_362 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_366 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_369 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_46 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_54 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux15_syn_56 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(35)
  wire  \tx/true_hdmi_output$packet_assembler/mux2_syn_39 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(62)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity[4] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(27)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next[0] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next[1] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next[2] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next[3] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next[4] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next_next[0] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next_next[1] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next_next[2] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire [7:0] \tx/true_hdmi_output$packet_assembler/parity_next_next[3] ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire [5:0] \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(24)
  wire [5:0] \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 ;
  wire  \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(35)
  wire [19:0] \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(25)
  wire [19:0] \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 ;
  wire [5:0] \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(28)
  wire [55:0] \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(16)
  wire [3:0] \tx/true_hdmi_output$packet_picker/audio_sample_packet/audio_sample_word_present ;  // ../../../rtl/p1/hdmi_core/audio_sample_packet.sv(57)
  wire [7:0] \tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter ;  // ../../../rtl/p1/hdmi_core/audio_sample_packet.sv(51)
  wire [1:0] \tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[2] ;  // ../../../rtl/p1/hdmi_core/audio_sample_packet.sv(77)
  wire [1:0] \tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[3] ;  // ../../../rtl/p1/hdmi_core/audio_sample_packet.sv(77)
  wire [15:0] \tx/true_hdmi_output$packet_picker/audio_sample_word[1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(22)
  wire [23:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(124)
  wire [23:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(124)
  wire [23:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(124)
  wire [23:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(124)
  wire [15:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(66)
  wire [15:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(66)
  wire [1:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(78)
  wire [15:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  wire [31:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b ;
  wire [15:0] \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  wire [5:0] \tx/true_hdmi_output$packet_picker/frame_counter_b5 ;
  wire [7:0] \tx/true_hdmi_output$packet_picker/packet_type ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(28)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_229 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_233 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_243 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_247 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_257 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_261 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_271 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [3:0] \tx/true_hdmi_output$packet_picker/ramread0_syn_275 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire [1:0] \tx/true_hdmi_output$packet_picker/samples_remaining ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(84)
  wire add0_syn_125;  // ../../../rtl/p1/dmz_p1_top.sv(23)
  wire add0_syn_129;  // ../../../rtl/p1/dmz_p1_top.sv(23)
  wire add0_syn_133;  // ../../../rtl/p1/dmz_p1_top.sv(23)
  wire add0_syn_137;  // ../../../rtl/p1/dmz_p1_top.sv(23)
  wire add0_syn_141;  // ../../../rtl/p1/dmz_p1_top.sv(23)
  wire add0_syn_145;  // ../../../rtl/p1/dmz_p1_top.sv(23)
  wire lt0_syn_18;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt1_syn_6;  // ../../../rtl/p1/dmz_p1_top.sv(35)
  wire lt1_syn_10;  // ../../../rtl/p1/dmz_p1_top.sv(35)
  wire lt1_syn_14;  // ../../../rtl/p1/dmz_p1_top.sv(35)
  wire lt10_syn_83;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt10_syn_87;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt10_syn_91;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt11_syn_83;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt11_syn_87;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt11_syn_91;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt12_syn_83;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt12_syn_87;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt12_syn_91;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt13_syn_83;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt13_syn_87;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt13_syn_91;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt14_syn_83;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt14_syn_87;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt14_syn_91;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt15_syn_83;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt15_syn_87;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt15_syn_91;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt16_syn_6;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt16_syn_10;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt16_syn_14;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt16_syn_18;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt16_syn_22;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt16_syn_26;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt17_syn_74;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt17_syn_78;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt2_syn_6;  // ../../../rtl/p1/dmz_p1_top.sv(36)
  wire lt2_syn_10;  // ../../../rtl/p1/dmz_p1_top.sv(36)
  wire lt2_syn_14;  // ../../../rtl/p1/dmz_p1_top.sv(36)
  wire lt3_syn_24;  // ../../../rtl/p1/dmz_p1_top.sv(37)
  wire lt4_syn_6;  // ../../../rtl/p1/dmz_p1_top.sv(38)
  wire lt4_syn_10;  // ../../../rtl/p1/dmz_p1_top.sv(38)
  wire lt4_syn_14;  // ../../../rtl/p1/dmz_p1_top.sv(38)
  wire lt6_syn_6;  // ../../../rtl/p1/dmz_p1_top.sv(40)
  wire lt6_syn_10;  // ../../../rtl/p1/dmz_p1_top.sv(40)
  wire lt6_syn_14;  // ../../../rtl/p1/dmz_p1_top.sv(40)
  wire lt8_syn_6;  // ../../../rtl/p1/dmz_p1_top.sv(42)
  wire lt8_syn_10;  // ../../../rtl/p1/dmz_p1_top.sv(42)
  wire lt8_syn_14;  // ../../../rtl/p1/dmz_p1_top.sv(42)
  wire lt9_syn_80;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt9_syn_84;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire lt9_syn_88;  // ../../../rtl/p1/dmz_p1_top.sv(30)
  wire clk_50m_dup_1;  // ../../../rtl/p1/dmz_p1_top.sv(2)
  wire gray_b1_n10;
  wire gray_b1_n103;
  wire gray_b1_n104;
  wire gray_b1_n105;
  wire gray_b1_n106;
  wire gray_b1_n107;
  wire gray_b1_n108;
  wire gray_b1_n109;
  wire gray_b1_n11;
  wire gray_b1_n110;
  wire gray_b1_n111;
  wire gray_b1_n112;
  wire gray_b1_n12;
  wire gray_b1_n122;
  wire gray_b1_n123;
  wire gray_b1_n124;
  wire gray_b1_n125;
  wire gray_b1_n126;
  wire gray_b1_n127;
  wire gray_b1_n128;
  wire gray_b1_n129;
  wire gray_b1_n13;
  wire gray_b1_n130;
  wire gray_b1_n131;
  wire gray_b1_n14;
  wire gray_b1_n141;
  wire gray_b1_n142;
  wire gray_b1_n143;
  wire gray_b1_n144;
  wire gray_b1_n145;
  wire gray_b1_n146;
  wire gray_b1_n147;
  wire gray_b1_n148;
  wire gray_b1_n149;
  wire gray_b1_n15;
  wire gray_b1_n150;
  wire gray_b1_n16;
  wire gray_b1_n17;
  wire gray_b1_n27;
  wire gray_b1_n28;
  wire gray_b1_n29;
  wire gray_b1_n30;
  wire gray_b1_n31;
  wire gray_b1_n32;
  wire gray_b1_n33;
  wire gray_b1_n34;
  wire gray_b1_n35;
  wire gray_b1_n36;
  wire gray_b1_n46;
  wire gray_b1_n47;
  wire gray_b1_n48;
  wire gray_b1_n49;
  wire gray_b1_n50;
  wire gray_b1_n51;
  wire gray_b1_n52;
  wire gray_b1_n53;
  wire gray_b1_n54;
  wire gray_b1_n55;
  wire gray_b1_n65;
  wire gray_b1_n66;
  wire gray_b1_n67;
  wire gray_b1_n68;
  wire gray_b1_n69;
  wire gray_b1_n7;
  wire gray_b1_n70;
  wire gray_b1_n71;
  wire gray_b1_n72;
  wire gray_b1_n73;
  wire gray_b1_n74;
  wire gray_b1_n8;
  wire gray_b1_n84;
  wire gray_b1_n85;
  wire gray_b1_n86;
  wire gray_b1_n87;
  wire gray_b1_n88;
  wire gray_b1_n89;
  wire gray_b1_n9;
  wire gray_b1_n90;
  wire gray_b1_n91;
  wire gray_b1_n92;
  wire gray_b1_n93;
  wire \leds[3]_dup_5 ;  // ../../../rtl/p1/dmz_p1_top.sv(4)
  wire \leds[1]_dup_1 ;  // ../../../rtl/p1/dmz_p1_top.sv(4)
  wire \leds[0]_dup_5 ;  // ../../../rtl/p1/dmz_p1_top.sv(4)
  wire \rgb_b1[23]_syn_2 ;
  wire \rgb_b1[14]_syn_2 ;
  wire \rgb_b1[7]_syn_4 ;
  wire \rgb_b1[7]_syn_6 ;
  wire \rgb_b1[7]_syn_9 ;
  wire \rgb_b1[7]_syn_12 ;
  wire \rgb_b1[7]_syn_15 ;
  wire \rgb_b1[6]_syn_2 ;
  wire \rgb_b1[5]_syn_2 ;
  wire \rgb_b1[4]_syn_2 ;
  wire \rgb_b1[3]_syn_2 ;
  wire \rgb_b1[2]_syn_2 ;
  wire \rgb_b1[1]_syn_2 ;
  wire \rgb_b1[0]_syn_2 ;
  wire reset_async;  // ../../../rtl/p1/dmz_p1_top.sv(9)
  wire rgb_b10_n;
  wire rgb_b12_n;
  wire rgb_b14_n;
  wire rgb_b16_n;
  wire rgb_b18_n;
  wire rgb_b3_n;
  wire rgb_b5_n;
  wire run_n_dup_1;  // ../../../rtl/p1/dmz_p1_top.sv(2)
  wire \pll/clk0_buf ;  // ../../../rtl/p1/dmz_video_pll.v(37)
  wire \pll/reset ;  // ../../../rtl/p1/dmz_video_pll.v(32)
  wire \tone/add0_syn_33 ;  // ../../../rtl/p1/dmz_tone.sv(68)
  wire \tone/add0_syn_35 ;  // ../../../rtl/p1/dmz_tone.sv(68)
  wire \tone/add0_syn_37 ;  // ../../../rtl/p1/dmz_tone.sv(68)
  wire \tone/add1_syn_94 ;  // ../../../rtl/p1/dmz_tone.sv(69)
  wire \tone/add1_syn_98 ;  // ../../../rtl/p1/dmz_tone.sv(69)
  wire \tone/add1_syn_102 ;  // ../../../rtl/p1/dmz_tone.sv(69)
  wire \tone/add1_syn_106 ;  // ../../../rtl/p1/dmz_tone.sv(69)
  wire \tone/lt0_syn_6 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_10 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_14 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_18 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_22 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_26 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_30 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_34 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_38 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/lt0_syn_42 ;  // ../../../rtl/p1/dmz_tone.sv(64)
  wire \tone/mux0_syn_77 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_79 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_121 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_259 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_297 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_299 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_319 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_341 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_343 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_387 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_433 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_435 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_483 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_634 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_636 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_639 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_646 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_652 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_654 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_658 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_665 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux0_syn_669 ;  // ../../../rtl/p1/dmz_tone.sv(7)
  wire \tone/mux8_syn_58 ;  // ../../../rtl/p1/dmz_tone.sv(61)
  wire \tone/sub0_syn_102 ;  // ../../../rtl/p1/dmz_tone.sv(65)
  wire \tone/sub0_syn_106 ;  // ../../../rtl/p1/dmz_tone.sv(65)
  wire \tone/sub0_syn_110 ;  // ../../../rtl/p1/dmz_tone.sv(65)
  wire \tone/sub0_syn_114 ;  // ../../../rtl/p1/dmz_tone.sv(65)
  wire \tone/accumulator_b1_n ;
  wire \tx/add12_syn_55 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(223)
  wire \tx/add12_syn_59 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(223)
  wire \tx/add13_syn_54 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(224)
  wire \tx/add13_syn_58 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(224)
  wire \tx/add5_syn_21 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(277)
  wire \tx/lt0_syn_6 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  wire \tx/lt0_syn_10 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  wire \tx/lt0_syn_14 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  wire \tx/lt10_syn_7 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt10_syn_11 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt10_syn_15 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt10_syn_19 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt11_syn_8 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt11_syn_12 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt11_syn_16 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt11_syn_20 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  wire \tx/lt12_syn_6 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt12_syn_10 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt12_syn_14 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt12_syn_18 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt12_syn_22 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt13_syn_6 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt13_syn_10 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt13_syn_14 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt13_syn_18 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  wire \tx/lt16_syn_8 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt16_syn_12 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt16_syn_16 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt16_syn_20 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt16_syn_24 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt18_syn_6 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt18_syn_10 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt18_syn_14 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt18_syn_18 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt18_syn_22 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  wire \tx/lt19_syn_7 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  wire \tx/lt19_syn_11 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  wire \tx/lt19_syn_15 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  wire \tx/lt19_syn_19 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  wire \tx/lt19_syn_23 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  wire \tx/lt3_syn_8 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt3_syn_12 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt3_syn_16 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt3_syn_20 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt3_syn_24 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt4_syn_8 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt4_syn_12 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt4_syn_16 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt4_syn_20 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt4_syn_24 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  wire \tx/lt5_syn_6 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  wire \tx/lt5_syn_10 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  wire \tx/lt5_syn_14 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  wire \tx/lt9_syn_7 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  wire \tx/lt9_syn_11 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  wire \tx/lt9_syn_15 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  wire \tx/mux12_syn_40 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(216)
  wire \tx/mux12_syn_42 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(216)
  wire \tx/cx[0]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(81)
  wire \tx/true_hdmi_output$packet_data[8]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[7]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[6]_syn_4 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[5]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[4]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[3]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[2]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[1]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[0]_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[0]_syn_4 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[0]_syn_6 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/true_hdmi_output$packet_data[0]_syn_8 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  wire \tx/clk_pixel ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(67)
  wire \tx/cx_b3_n ;
  wire \tx/cy_b4_n ;
  wire \tx/data_island_data_b_n_syn_2 ;
  wire \tx/hsync_n2 ;
  wire \tx/hsync_n3 ;
  wire \tx/true_hdmi_output$data_island_guard ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(279)
  wire \tx/true_hdmi_output$data_island_guard_n11 ;
  wire \tx/true_hdmi_output$data_island_period_instantaneous ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(274)
  wire \tx/true_hdmi_output$data_island_period_instantaneous_n2 ;
  wire \tx/true_hdmi_output$data_island_period_instantaneous_n3 ;
  wire \tx/true_hdmi_output$data_island_preamble ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(280)
  wire \tx/true_hdmi_output$data_island_preamble_n4 ;
  wire \tx/true_hdmi_output$data_island_preamble_n5 ;
  wire \tx/true_hdmi_output$video_guard ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(246)
  wire \tx/true_hdmi_output$video_guard_n6 ;
  wire \tx/true_hdmi_output$video_guard_n9 ;
  wire \tx/true_hdmi_output$video_preamble ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(247)
  wire \tx/true_hdmi_output$video_preamble_n1_syn_2 ;
  wire \tx/true_hdmi_output$video_preamble_n4 ;
  wire \tx/video_data_period ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(229)
  wire \tx/vsync_syn_2 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(95)
  wire \tx/vsync_syn_4 ;  // ../../../rtl/p1/hdmi_core/hdmi.sv(95)
  wire \tx/vsync_n11 ;
  wire \tx/vsync_n12 ;
  wire \tx/serializer/clk_pixel_x5 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/lane[0]$shift_b_n ;
  wire \tx/serializer/meta ;  // ../../../rtl/p1/serializer.sv(7)
  wire \tx/serializer/reset ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_syn_2 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_228 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_229 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_230 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_231 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_232 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_233 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_234 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_235 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_236 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/reset_dup_237 ;  // ../../../rtl/p1/serializer.sv(3)
  wire \tx/serializer/sync ;  // ../../../rtl/p1/serializer.sv(7)
  wire \tx/serializer/toggle ;  // ../../../rtl/p1/serializer.sv(6)
  wire \tx/tmds_gen[0]$tmds_channel/add0_syn_50 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(34)
  wire \tx/tmds_gen[0]$tmds_channel/add1_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  wire \tx/tmds_gen[0]$tmds_channel/add1_syn_25 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  wire \tx/tmds_gen[0]$tmds_channel/add15_syn_33 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(88)
  wire \tx/tmds_gen[0]$tmds_channel/add2_syn_36 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(35)
  wire \tx/tmds_gen[0]$tmds_channel/mux6_syn_178 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(116)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_135 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_218 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_228 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_230 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_233 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_235 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_238 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_242 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_244 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_246 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_250 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_252 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_255 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_259 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_261 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_265 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_267 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_269 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_271 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_273 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_275 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_277 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_281 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_283 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_286 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_288 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_290 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_293 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_295 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_297 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_300 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_302 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_305 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_307 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_310 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_312 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_314 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_317 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/mux9_syn_319 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[0]$tmds_channel/sub2_syn_21 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  wire \tx/tmds_gen[0]$tmds_channel/sub2_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  wire \tx/tmds_gen[0]$tmds_channel/sub3_syn_21 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  wire \tx/tmds_gen[0]$tmds_channel/sub3_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  wire \tx/tmds_gen[0]$tmds_channel/acc_add[4]_syn_4 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire \tx/tmds_gen[0]$tmds_channel/acc_add[3]_syn_2 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire \tx/tmds_gen[0]$tmds_channel/q_m_b[5]_syn_2 ;
  wire \tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 ;
  wire \tx/tmds_gen[0]$tmds_channel/acc_add_n1 ;
  wire \tx/tmds_gen[0]$tmds_channel/acc_b1_n ;
  wire \tx/tmds_gen[1]$tmds_channel/add0_syn_50 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(34)
  wire \tx/tmds_gen[1]$tmds_channel/add1_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  wire \tx/tmds_gen[1]$tmds_channel/add1_syn_25 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  wire \tx/tmds_gen[1]$tmds_channel/add15_syn_33 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(88)
  wire \tx/tmds_gen[1]$tmds_channel/add2_syn_36 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(35)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_208 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_210 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_212 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_214 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_219 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_222 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_224 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_226 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_229 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_231 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_233 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_236 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_238 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_240 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_245 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_247 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_251 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_253 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_255 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_257 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_259 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_261 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_264 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_266 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_269 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_271 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_273 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_276 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_278 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_281 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_283 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_286 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_288 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_291 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_293 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_296 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/mux7_syn_298 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[1]$tmds_channel/sub1_syn_22 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(47)
  wire \tx/tmds_gen[1]$tmds_channel/sub2_syn_21 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  wire \tx/tmds_gen[1]$tmds_channel/sub2_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  wire \tx/tmds_gen[1]$tmds_channel/sub3_syn_21 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  wire \tx/tmds_gen[1]$tmds_channel/sub3_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  wire \tx/tmds_gen[1]$tmds_channel/acc_add[4]_syn_4 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire \tx/tmds_gen[1]$tmds_channel/acc_add[3]_syn_2 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire \tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 ;
  wire \tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 ;
  wire \tx/tmds_gen[2]$tmds_channel/add0_syn_50 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(34)
  wire \tx/tmds_gen[2]$tmds_channel/add1_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  wire \tx/tmds_gen[2]$tmds_channel/add1_syn_25 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  wire \tx/tmds_gen[2]$tmds_channel/add15_syn_33 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(88)
  wire \tx/tmds_gen[2]$tmds_channel/lt0_syn_16 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(56)
  wire \tx/tmds_gen[2]$tmds_channel/mux6_syn_138 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(116)
  wire \tx/tmds_gen[2]$tmds_channel/mux6_syn_200 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(116)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_218 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_224 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_226 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_228 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_232 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_237 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_239 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_241 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_243 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_246 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_248 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_250 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_252 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_254 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_256 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_258 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_263 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_265 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_269 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_271 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_273 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_275 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_278 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_280 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_283 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_286 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_289 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_291 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_294 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_296 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_299 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_301 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_304 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_306 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_309 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/mux7_syn_311 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  wire \tx/tmds_gen[2]$tmds_channel/sub1_syn_22 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(47)
  wire \tx/tmds_gen[2]$tmds_channel/sub2_syn_21 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  wire \tx/tmds_gen[2]$tmds_channel/sub2_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  wire \tx/tmds_gen[2]$tmds_channel/sub3_syn_21 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  wire \tx/tmds_gen[2]$tmds_channel/sub3_syn_23 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  wire \tx/tmds_gen[2]$tmds_channel/acc_add[4]_syn_4 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire \tx/tmds_gen[2]$tmds_channel/acc_add[3]_syn_2 ;  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  wire \tx/tmds_gen[2]$tmds_channel/q_m_b[5]_syn_2 ;
  wire \tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 ;
  wire \tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 ;
  wire \tx/true_hdmi_output$packet_assembler/mux5_syn_55 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(61)
  wire \tx/true_hdmi_output$packet_assembler/mux7_syn_51 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(61)
  wire \tx/true_hdmi_output$packet_assembler/mux9_syn_42 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(58)
  wire \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_2 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_4 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_8 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_10 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_15 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_2 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_4 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_8 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_10 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_12 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_14 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_16 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_18 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_20 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_22 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_24 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_26 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_28 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_30 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_32 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_34 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_37 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_40 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_42 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_44 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_46 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_49 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_51 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_53 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_55 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_57 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_59 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_61 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_63 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_65 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_68 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_70 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_73 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_75 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_77 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_79 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_81 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_83 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_85 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_87 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_91 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_7 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_15 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_23 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_25 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_27 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_29 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_31 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_39 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_43 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_45 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_47 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_49 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_53 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_55 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_57 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_59 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_61 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_63 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_65 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_67 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_69 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_72 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_74 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_76 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_78 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_80 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_82 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_84 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_86 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_88 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_91 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_93 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_95 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_97 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_99 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_103 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_106 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_112 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_114 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_116 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_118 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_120 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_122 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_124 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_126 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_128 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_130 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_132 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_134 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_136 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_138 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_140 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_142 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_144 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_2 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_4 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_9 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_11 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_15 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_17 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_19 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_21 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_23 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_25 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_27 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_29 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_33 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_35 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_37 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_39 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_42 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_44 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_46 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_48 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_50 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_52 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_54 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_56 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_59 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_61 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_63 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_66 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_2 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_4 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_8 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_10 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_13 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_16 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_20 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_22 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_24 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_26 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_29 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_31 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_33 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_35 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_39 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_42 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_44 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_46 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_48 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_50 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_54 ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  wire \tx/true_hdmi_output$packet_assembler/data_island_period ;  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(7)
  wire \tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ;
  wire \tx/true_hdmi_output$packet_assembler/parity[0]_b5_n ;
  wire \tx/true_hdmi_output$packet_assembler/parity_next[0]_b2_n ;
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[0]_b2_n ;
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[2]_b2_n ;
  wire \tx/true_hdmi_output$packet_assembler/parity_next_next[3]_b2_n ;
  wire \tx/true_hdmi_output$packet_picker/add1_syn_32 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  wire \tx/true_hdmi_output$packet_picker/add1_syn_34 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  wire \tx/true_hdmi_output$packet_picker/add1_syn_36 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  wire \tx/true_hdmi_output$packet_picker/eq2_syn_29 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(135)
  wire \tx/true_hdmi_output$packet_picker/lt0_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  wire \tx/true_hdmi_output$packet_picker/lt0_syn_10 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  wire \tx/true_hdmi_output$packet_picker/lt0_syn_14 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_226 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_227 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_228 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_240 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_241 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_242 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_254 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_255 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_256 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_268 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_269 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/ramread0_syn_270 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  wire \tx/true_hdmi_output$packet_picker/sample_buffer_ready_reg_syn_7 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(98)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_8 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_11 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_13 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_15 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_17 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_19 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_23 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_27 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/audio_info_frame_sent ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(156)
  wire \tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 ;
  wire \tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ;
  wire \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(67)
  wire \tx/true_hdmi_output$packet_picker/auxiliary_video_information_info_frame_sent ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(157)
  wire \tx/true_hdmi_output$packet_picker/frame_counter_b1_n ;
  wire \tx/true_hdmi_output$packet_picker/frame_counter_b4_n ;
  wire \tx/true_hdmi_output$packet_picker/last_clk_audio_counter_wrap ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(159)
  wire \tx/true_hdmi_output$packet_picker/packet_enable ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(20)
  wire \tx/true_hdmi_output$packet_picker/sample_buffer_current ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(83)
  wire \tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ;
  wire \tx/true_hdmi_output$packet_picker/sample_buffer_ready ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(96)
  wire \tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(96)
  wire \tx/true_hdmi_output$packet_picker/sample_buffer_used ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(95)
  wire \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(158)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_32 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_34 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_36 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_104 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_108 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_112 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_116 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_120 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter[0]_syn_2 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(25)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(13)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(14)
  wire \tx/true_hdmi_output$packet_picker/audio_sample_packet/mux0_syn_27 ;  // ../../../rtl/p1/hdmi_core/audio_sample_packet.sv(92)
  wire \tx/true_hdmi_output$packet_picker/audio_sample_packet/header_n1 ;
  wire \tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[0]_n29 ;
  wire \tone/phase_reg[3]_syn_6 ;  // ../../../rtl/p1/dmz_tone.sv(60)
  wire \tone/phase_reg[3]_syn_8 ;  // ../../../rtl/p1/dmz_tone.sv(60)
  wire \tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(129)
  wire \tx/true_hdmi_output$packet_picker/packet_type_reg[0]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/packet_type_reg[1]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/packet_type_reg[7]_syn_6 ;  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  wire \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_reg[5]_syn_6 ;  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)

  EG_PHY_PAD #(
    //.LOCATION("P1"),
    //.PULLMODE("NONE"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("RESET"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .ODDRMODE("DDRX1"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("ASYNC"),
    .TSMUX("0"))
    HDMI_CLK_P_syn_2 (
    .do({open_n1,open_n2,\tx/serializer/lane[3]$shift [1:0]}),
    .osclk(\tx/serializer/clk_pixel_x5 ),
    .rst(\tx/serializer/reset ),
    .opad(HDMI_CLK_P));  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("R1"),
    //.PULLMODE("NONE"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .TSMUX("0"))
    HDMI_CLK_P_syn_3 ();  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("N1"),
    //.PULLMODE("NONE"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("RESET"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .ODDRMODE("DDRX1"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("ASYNC"),
    .TSMUX("0"))
    HDMI_D0_P_syn_2 (
    .do({open_n34,open_n35,\tx/serializer/lane[0]$shift [1:0]}),
    .osclk(\tx/serializer/clk_pixel_x5 ),
    .rst(\tx/serializer/reset_dup_237 ),
    .opad(HDMI_D0_P));  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("M1"),
    //.PULLMODE("NONE"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .TSMUX("0"))
    HDMI_D0_P_syn_3 ();  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("P4"),
    //.PULLMODE("NONE"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("RESET"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .ODDRMODE("DDRX1"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("ASYNC"),
    .TSMUX("0"))
    HDMI_D1_P_syn_2 (
    .do({open_n67,open_n68,\tx/serializer/lane[1]$shift [1:0]}),
    .osclk(\tx/serializer/clk_pixel_x5 ),
    .rst(\tx/serializer/reset_dup_236 ),
    .opad(HDMI_D1_P));  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("N4"),
    //.PULLMODE("NONE"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .TSMUX("0"))
    HDMI_D1_P_syn_3 ();  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("J3"),
    //.PULLMODE("NONE"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("RESET"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .ODDRMODE("DDRX1"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("ASYNC"),
    .TSMUX("0"))
    HDMI_D2_P_syn_2 (
    .do({open_n100,open_n101,\tx/serializer/lane[2]$shift [1:0]}),
    .osclk(\tx/serializer/clk_pixel_x5 ),
    .rst(\tx/serializer/reset_dup_237 ),
    .opad(HDMI_D2_P));  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_PAD #(
    //.LOCATION("J4"),
    //.PULLMODE("NONE"),
    .DRIVE("NA"),
    .IOTYPE("LVDS33"),
    .MODE("OUT"),
    .TSMUX("0"))
    HDMI_D2_P_syn_3 ();  // ../../../rtl/p1/dmz_p1_top.sv(5)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y0Z0"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    add0_syn_147 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [1],1'b1}),
    .e({\tx/cx [2],\tx/cx [0]}),
    .mi(heartbeat_b1[10:9]),
    .sr(\tx/serializer/reset_dup_231 ),
    .fco(add0_syn_125),
    .q(heartbeat[10:9]));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    add0_syn_148 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({heartbeat[5],\tx/cx [3]}),
    .e({heartbeat[6],\tx/cx [4]}),
    .fci(add0_syn_125),
    .f({heartbeat_b1[5],open_n165}),
    .fco(add0_syn_129),
    .fx({heartbeat_b1[6],open_n166}));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    add0_syn_149 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({heartbeat[9],heartbeat[7]}),
    .e({heartbeat[10],heartbeat[8]}),
    .fci(add0_syn_129),
    .f({heartbeat_b1[9],heartbeat_b1[7]}),
    .fco(add0_syn_133),
    .fx({heartbeat_b1[10],heartbeat_b1[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    add0_syn_150 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({heartbeat[13],heartbeat[11]}),
    .e({heartbeat[14],heartbeat[12]}),
    .fci(add0_syn_133),
    .f({heartbeat_b1[13],heartbeat_b1[11]}),
    .fco(add0_syn_137),
    .fx({heartbeat_b1[14],heartbeat_b1[12]}));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y2Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    add0_syn_151 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({heartbeat[17],heartbeat[15]}),
    .e({heartbeat[18],heartbeat[16]}),
    .fci(add0_syn_137),
    .f({heartbeat_b1[17],heartbeat_b1[15]}),
    .fco(add0_syn_141),
    .fx({heartbeat_b1[18],heartbeat_b1[16]}));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y2Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    add0_syn_152 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({heartbeat[21],heartbeat[19]}),
    .e({heartbeat[22],heartbeat[20]}),
    .fci(add0_syn_141),
    .f({heartbeat_b1[21],heartbeat_b1[19]}),
    .fco(add0_syn_145),
    .fx({heartbeat_b1[22],heartbeat_b1[20]}));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_LSLICE #(
    //.MACRO("add0_syn_147"),
    //.R_POSITION("X0Y3Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    add0_syn_153 (
    .a({open_n241,1'b0}),
    .c(2'b00),
    .d({open_n246,\leds[0]_dup_5 }),
    .fci(add0_syn_145),
    .f({open_n263,heartbeat_b1[23]}));  // ../../../rtl/p1/dmz_p1_top.sv(23)
  EG_PHY_PAD #(
    //.HYSTERESIS("OFF"),
    //.LOCATION("R7"),
    //.PCICLAMP("OFF"),
    //.PULLMODE("PULLUP"),
    .IOTYPE("LVCMOS33"),
    .MODE("IN"),
    .TSMUX("1"))
    clk_50m_syn_2 (
    .ipad(clk_50m),
    .di(clk_50m_dup_1));  // ../../../rtl/p1/dmz_p1_top.sv(2)
  EG_PHY_CONFIG #(
    .DONE_PERSISTN("ENABLE"),
    .INIT_PERSISTN("ENABLE"),
    .JTAG_PERSISTN("DISABLE"),
    .PROGRAMN_PERSISTN("DISABLE"))
    config_inst ();
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n103_syn_13 (
    .b({lt9_syn_4[5],lt9_syn_4[6]}),
    .c({gray_b1_n13,gray_b1_n12}),
    .d({lt9_syn_4[11],lt9_syn_4[11]}),
    .f({gray_b1_n31,gray_b1_n30}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n103_syn_15 (
    .b({lt13_syn_7[9],lt13_syn_7[7]}),
    .c({gray_b1_n85,gray_b1_n87}),
    .d({lt13_syn_7[11],lt13_syn_7[11]}),
    .f({gray_b1_n103,gray_b1_n105}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n103_syn_17 (
    .b({lt10_syn_7[6],lt10_syn_7[4]}),
    .c({gray_b1_n31,gray_b1_n33}),
    .d({lt10_syn_7[11],lt10_syn_7[11]}),
    .f({gray_b1_n49,gray_b1_n51}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n103_syn_19 (
    .b(lt12_syn_7[8:7]),
    .c({gray_b1_n67,gray_b1_n68}),
    .d({lt12_syn_7[11],lt12_syn_7[11]}),
    .f({gray_b1_n85,gray_b1_n86}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n122_syn_15 (
    .b({lt9_syn_4[4],lt9_syn_4[7]}),
    .c({gray_b1_n14,gray_b1_n11}),
    .d({lt9_syn_4[11],lt9_syn_4[11]}),
    .f({gray_b1_n32,gray_b1_n29}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n122_syn_17 (
    .b({lt11_syn_7[6],lt11_syn_7[1]}),
    .c({gray_b1_n50,gray_b1_n55}),
    .d({lt11_syn_7[11],lt11_syn_7[11]}),
    .f({gray_b1_n68,gray_b1_n73}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n122_syn_19 (
    .b({lt10_syn_7[5],lt10_syn_7[3]}),
    .c({gray_b1_n32,gray_b1_n34}),
    .d({lt10_syn_7[11],lt10_syn_7[11]}),
    .f({gray_b1_n50,gray_b1_n52}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n122_syn_21 (
    .b(lt14_syn_7[9:8]),
    .c({gray_b1_n104,gray_b1_n105}),
    .d({lt14_syn_7[11],lt14_syn_7[11]}),
    .f({gray_b1_n122,gray_b1_n123}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n141_syn_17 (
    .b({lt12_syn_7[6],lt12_syn_7[1]}),
    .c({gray_b1_n69,gray_b1_n74}),
    .d({lt12_syn_7[11],lt12_syn_7[11]}),
    .f({gray_b1_n87,gray_b1_n92}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n141_syn_19 (
    .b(lt11_syn_7[5:4]),
    .c({gray_b1_n51,gray_b1_n52}),
    .d({lt11_syn_7[11],lt11_syn_7[11]}),
    .f({gray_b1_n69,gray_b1_n70}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n141_syn_25 (
    .b(lt15_syn_7[9:8]),
    .c({gray_b1_n123,gray_b1_n124}),
    .d({lt15_syn_7[11],lt15_syn_7[11]}),
    .f({gray_b1_n141,gray_b1_n142}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n142_syn_17 (
    .b(lt13_syn_7[6:5]),
    .c({gray_b1_n88,gray_b1_n89}),
    .d({lt13_syn_7[11],lt13_syn_7[11]}),
    .f({gray_b1_n106,gray_b1_n107}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n142_syn_19 (
    .b(lt12_syn_7[5:4]),
    .c({gray_b1_n70,gray_b1_n71}),
    .d({lt12_syn_7[11],lt12_syn_7[11]}),
    .f({gray_b1_n88,gray_b1_n89}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n142_syn_21 (
    .b(lt9_syn_4[2:1]),
    .c({gray_b1_n16,gray_b1_n17}),
    .d({lt9_syn_4[11],lt9_syn_4[11]}),
    .f({gray_b1_n34,gray_b1_n35}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n143_syn_17 (
    .b({lt14_syn_7[6],lt14_syn_7[4]}),
    .c({gray_b1_n107,gray_b1_n109}),
    .d({lt14_syn_7[11],lt14_syn_7[11]}),
    .f({gray_b1_n125,gray_b1_n127}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n143_syn_19 (
    .b(lt11_syn_7[3:2]),
    .c({gray_b1_n53,gray_b1_n54}),
    .d({lt11_syn_7[11],lt11_syn_7[11]}),
    .f({gray_b1_n71,gray_b1_n72}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n143_syn_21 (
    .b(lt10_syn_7[2:1]),
    .c({gray_b1_n35,gray_b1_n36}),
    .d({lt10_syn_7[11],lt10_syn_7[11]}),
    .f({gray_b1_n53,gray_b1_n54}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n143_syn_26 (
    .b(lt15_syn_7[7:6]),
    .c({gray_b1_n125,gray_b1_n126}),
    .d({lt15_syn_7[11],lt15_syn_7[11]}),
    .f({gray_b1_n143,gray_b1_n144}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n144_syn_16 (
    .b({lt13_syn_7[4],lt13_syn_7[1]}),
    .c({gray_b1_n90,gray_b1_n93}),
    .d({lt13_syn_7[11],lt13_syn_7[11]}),
    .f({gray_b1_n108,gray_b1_n111}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n144_syn_18 (
    .b({lt14_syn_7[5],lt14_syn_7[3]}),
    .c({gray_b1_n108,gray_b1_n110}),
    .d({lt14_syn_7[11],lt14_syn_7[11]}),
    .f({gray_b1_n126,gray_b1_n128}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n144_syn_20 (
    .b(lt12_syn_7[3:2]),
    .c({gray_b1_n72,gray_b1_n73}),
    .d({lt12_syn_7[11],lt12_syn_7[11]}),
    .f({gray_b1_n90,gray_b1_n91}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("~(C@D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n144_syn_24 (
    .b({open_n841,lt9_syn_4[3]}),
    .c({gray_b19[7],gray_b1_n15}),
    .d({lt9_syn_4[11],lt9_syn_4[11]}),
    .f({gray_b1_n36,gray_b1_n33}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    gray_b1_n145_syn_14 (
    .b({open_n868,lt10_syn_7[8]}),
    .c({gray_b19[6],gray_b1_n29}),
    .d({lt10_syn_7[11],lt10_syn_7[11]}),
    .f({gray_b1_n55,gray_b1_n47}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n145_syn_16 (
    .b(lt13_syn_7[3:2]),
    .c({gray_b1_n91,gray_b1_n92}),
    .d({lt13_syn_7[11],lt13_syn_7[11]}),
    .f({gray_b1_n109,gray_b1_n110}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n145_syn_21 (
    .b(lt15_syn_7[5:4]),
    .c({gray_b1_n127,gray_b1_n128}),
    .d({lt15_syn_7[11],lt15_syn_7[11]}),
    .f({gray_b1_n145,gray_b1_n146}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("~(C@D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n146_syn_15 (
    .b({open_n939,lt11_syn_7[7]}),
    .c({gray_b19[5],gray_b1_n49}),
    .d({lt11_syn_7[11],lt11_syn_7[11]}),
    .f({gray_b1_n74,gray_b1_n67}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n147_syn_10 (
    .b(lt14_syn_7[2:1]),
    .c({gray_b1_n111,gray_b1_n112}),
    .d({lt14_syn_7[11],lt14_syn_7[11]}),
    .f({gray_b1_n129,gray_b1_n130}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("~(C@D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n147_syn_13 (
    .b({open_n988,lt12_syn_7[9]}),
    .c({gray_b19[4],gray_b1_n66}),
    .d({lt12_syn_7[11],lt12_syn_7[11]}),
    .f({gray_b1_n93,gray_b1_n84}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n147_syn_15 (
    .b(lt15_syn_7[3:2]),
    .c({gray_b1_n129,gray_b1_n130}),
    .d({lt15_syn_7[11],lt15_syn_7[11]}),
    .f({gray_b1_n147,gray_b1_n148}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    gray_b1_n148_syn_9 (
    .b({open_n1037,lt13_syn_7[8]}),
    .c({gray_b19[3],gray_b1_n86}),
    .d({lt13_syn_7[11],lt13_syn_7[11]}),
    .f({gray_b1_n112,gray_b1_n104}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"))
    gray_b1_n149_syn_6 (
    .b({lt15_syn_7[1],lt14_syn_7[7]}),
    .c({gray_b1_n131,gray_b1_n106}),
    .d({lt15_syn_7[11],lt14_syn_7[11]}),
    .f({gray_b1_n149,gray_b1_n124}));
  EG_PHY_MSLICE #(
    //.LUT0("~(C@D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b1111000000001111),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    gray_b1_n150_syn_4 (
    .c({gray_b19[1],gray_b19[2]}),
    .d({lt15_syn_7[11],lt14_syn_7[11]}),
    .f({gray_b1_n150,gray_b1_n131}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n27_syn_5 (
    .b(lt9_syn_4[9:8]),
    .c({gray_b1_n9,gray_b1_n10}),
    .d({lt9_syn_4[11],lt9_syn_4[11]}),
    .f({gray_b1_n27,gray_b1_n28}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n46_syn_10 (
    .b({lt10_syn_7[9],lt10_syn_7[7]}),
    .c({gray_b1_n28,gray_b1_n30}),
    .d({lt10_syn_7[11],lt10_syn_7[11]}),
    .f({gray_b1_n46,gray_b1_n48}));
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    gray_b1_n46_syn_8 (
    .b({lt17_syn_4[7],lt17_syn_4[8]}),
    .c({gray_b19[15],gray_b19[16]}),
    .clk(\tx/clk_pixel ),
    .d({lt17_syn_4[10],lt17_syn_4[10]}),
    .mi({open_n1169,heartbeat_b1[15]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({gray_b1_n10,gray_b1_n9}),
    .q({open_n1173,heartbeat[15]}));
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    gray_b1_n65_syn_9 (
    .b(lt11_syn_7[9:8]),
    .c({gray_b1_n47,gray_b1_n48}),
    .d({lt11_syn_7[11],lt11_syn_7[11]}),
    .f({gray_b1_n65,gray_b1_n66}));
  EG_PHY_LSLICE #(
    //.LUTF0("~(C@D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("~(C@D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000001111),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000000001111),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    gray_b1_n8_syn_4 (
    .b({lt17_syn_4[9],open_n1202}),
    .c({gray_b19[17],gray_b19[8]}),
    .clk(\tx/clk_pixel ),
    .d({lt17_syn_4[10],lt17_syn_4[10]}),
    .mi({open_n1207,heartbeat_b1[22]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({gray_b1_n8,gray_b1_n17}),
    .q({open_n1222,heartbeat[22]}));
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[11]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({heartbeat_b1[11],heartbeat_b1[14]}),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({heartbeat[11],heartbeat[14]}));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[12]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({heartbeat_b1[12],heartbeat_b1[13]}),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({heartbeat[12],heartbeat[13]}));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[16]_syn_4  (
    .b({lt17_syn_4[3],lt17_syn_4[6]}),
    .c({gray_b19[11],gray_b19[14]}),
    .clk(\tx/clk_pixel ),
    .d({lt17_syn_4[10],lt17_syn_4[10]}),
    .mi({heartbeat_b1[16],heartbeat_b1[23]}),
    .sr(\tx/serializer/reset_dup_231 ),
    .f({gray_b1_n14,gray_b1_n11}),
    .q({heartbeat[16],\leds[0]_dup_5 }));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[17]_syn_4  (
    .b({lt17_syn_4[4],lt17_syn_4[2]}),
    .c({gray_b19[12],gray_b19[10]}),
    .clk(\tx/clk_pixel ),
    .d({lt17_syn_4[10],lt17_syn_4[10]}),
    .mi({heartbeat_b1[17],heartbeat_b1[20]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({gray_b1_n13,gray_b1_n15}),
    .q({heartbeat[17],heartbeat[20]}));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[21]_syn_4  (
    .b({lt17_syn_4[5],lt17_syn_4[1]}),
    .c({gray_b19[13],gray_b19[9]}),
    .clk(\tx/clk_pixel ),
    .d({lt17_syn_4[10],lt17_syn_4[10]}),
    .mi({heartbeat_b1[21],pattern_sync[0]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({gray_b1_n12,gray_b1_n16}),
    .q({heartbeat[21],pattern_sync[1]}));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[5]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({heartbeat_b1[5],heartbeat_b1[6]}),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({heartbeat[5],heartbeat[6]}));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \heartbeat_reg[7]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({heartbeat_b1[7],heartbeat_b1[8]}),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({heartbeat[7],heartbeat[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_PAD #(
    //.LOCATION("B14"),
    //.PULLMODE("NONE"),
    //.SLEWRATE("SLOW"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("RESET"),
    .DRIVE("8"),
    .IOTYPE("LVCMOS33"),
    .MODE("OUT"),
    .ODDRMODE("OFF"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("SYNC"),
    .TSMUX("0"))
    \leds[0]_syn_6  (
    .do({open_n1380,open_n1381,open_n1382,heartbeat_b1[23]}),
    .osclk(\tx/clk_pixel ),
    .rst(\tx/serializer/reset_dup_230 ),
    .opad(leds[0]));  // ../../../rtl/p1/dmz_p1_top.sv(4)
  EG_PHY_PAD #(
    //.LOCATION("B15"),
    //.PULLMODE("NONE"),
    //.SLEWRATE("SLOW"),
    .DRIVE("8"),
    .IOTYPE("LVCMOS33"),
    .MODE("OUT"),
    .TSMUX("0"))
    \leds[1]_syn_2  (
    .do({open_n1395,open_n1396,open_n1397,\leds[1]_dup_1 }),
    .opad(leds[1]));  // ../../../rtl/p1/dmz_p1_top.sv(4)
  EG_PHY_PAD #(
    //.LOCATION("B16"),
    //.PULLMODE("NONE"),
    //.SLEWRATE("SLOW"),
    .DRIVE("8"),
    .IOTYPE("LVCMOS33"),
    .MODE("OUT"),
    .TSMUX("0"))
    \leds[2]_syn_1  (
    .do({open_n1412,open_n1413,open_n1414,\tx/serializer/reset_syn_2 }),
    .opad(leds[2]));  // ../../../rtl/p1/dmz_p1_top.sv(4)
  EG_PHY_PAD #(
    //.LOCATION("C15"),
    //.PULLMODE("NONE"),
    //.SLEWRATE("SLOW"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("RESET"),
    .DRIVE("8"),
    .IOTYPE("LVCMOS33"),
    .MODE("OUT"),
    .ODDRMODE("OFF"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("SYNC"),
    .TSMUX("0"))
    \leds[3]_syn_6  (
    .do({open_n1429,open_n1430,open_n1431,mute_sync[0]}),
    .osclk(\tx/clk_pixel ),
    .rst(\tx/serializer/reset_dup_230 ),
    .opad(leds[3]));  // ../../../rtl/p1/dmz_p1_top.sv(4)
  EG_PHY_LSLICE #(
    //.MACRO("lt10_syn_93"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt10_syn_93 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n36,1'b1}),
    .e({gray_b1_n35,gray_b19[6]}),
    .f({lt10_syn_7[1],open_n1460}),
    .fco(lt10_syn_83),
    .fx({lt10_syn_7[2],open_n1461}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt10_syn_93"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt10_syn_94 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n32,gray_b1_n34}),
    .e({gray_b1_n31,gray_b1_n33}),
    .fci(lt10_syn_83),
    .f({lt10_syn_7[5],lt10_syn_7[3]}),
    .fco(lt10_syn_87),
    .fx({lt10_syn_7[6],lt10_syn_7[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt10_syn_93"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt10_syn_95 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n28,gray_b1_n30}),
    .e({gray_b1_n27,gray_b1_n29}),
    .fci(lt10_syn_87),
    .f({lt10_syn_7[9],lt10_syn_7[7]}),
    .fco(lt10_syn_91),
    .fx({open_n1498,lt10_syn_7[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt10_syn_93"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt10_syn_96 (
    .a({open_n1501,1'b0}),
    .c(2'b00),
    .d({open_n1506,1'b1}),
    .fci(lt10_syn_91),
    .f({open_n1523,lt10_syn_7[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt11_syn_93"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt11_syn_93 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n55,1'b1}),
    .e({gray_b1_n54,gray_b19[5]}),
    .f({lt11_syn_7[1],open_n1546}),
    .fco(lt11_syn_83),
    .fx({lt11_syn_7[2],open_n1547}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt11_syn_93"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt11_syn_94 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n51,gray_b1_n53}),
    .e({gray_b1_n50,gray_b1_n52}),
    .fci(lt11_syn_83),
    .f({lt11_syn_7[5],lt11_syn_7[3]}),
    .fco(lt11_syn_87),
    .fx({lt11_syn_7[6],lt11_syn_7[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt11_syn_93"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt11_syn_95 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n47,gray_b1_n49}),
    .e({gray_b1_n46,gray_b1_n48}),
    .fci(lt11_syn_87),
    .f({lt11_syn_7[9],lt11_syn_7[7]}),
    .fco(lt11_syn_91),
    .fx({open_n1584,lt11_syn_7[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt11_syn_93"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt11_syn_96 (
    .a({open_n1587,1'b0}),
    .c(2'b00),
    .d({open_n1592,1'b1}),
    .fci(lt11_syn_91),
    .f({open_n1609,lt11_syn_7[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt12_syn_93"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt12_syn_93 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n74,1'b1}),
    .e({gray_b1_n73,gray_b19[4]}),
    .f({lt12_syn_7[1],open_n1632}),
    .fco(lt12_syn_83),
    .fx({lt12_syn_7[2],open_n1633}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt12_syn_93"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt12_syn_94 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n70,gray_b1_n72}),
    .e({gray_b1_n69,gray_b1_n71}),
    .fci(lt12_syn_83),
    .f({lt12_syn_7[5],lt12_syn_7[3]}),
    .fco(lt12_syn_87),
    .fx({lt12_syn_7[6],lt12_syn_7[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt12_syn_93"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt12_syn_95 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n66,gray_b1_n68}),
    .e({gray_b1_n65,gray_b1_n67}),
    .fci(lt12_syn_87),
    .f({lt12_syn_7[9],lt12_syn_7[7]}),
    .fco(lt12_syn_91),
    .fx({open_n1670,lt12_syn_7[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt12_syn_93"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt12_syn_96 (
    .a({open_n1673,1'b0}),
    .c(2'b00),
    .d({open_n1678,1'b1}),
    .fci(lt12_syn_91),
    .f({open_n1695,lt12_syn_7[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt13_syn_93"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt13_syn_93 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n93,1'b1}),
    .e({gray_b1_n92,gray_b19[3]}),
    .f({lt13_syn_7[1],open_n1718}),
    .fco(lt13_syn_83),
    .fx({lt13_syn_7[2],open_n1719}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt13_syn_93"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt13_syn_94 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n89,gray_b1_n91}),
    .e({gray_b1_n88,gray_b1_n90}),
    .fci(lt13_syn_83),
    .f({lt13_syn_7[5],lt13_syn_7[3]}),
    .fco(lt13_syn_87),
    .fx({lt13_syn_7[6],lt13_syn_7[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt13_syn_93"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt13_syn_95 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n85,gray_b1_n87}),
    .e({gray_b1_n84,gray_b1_n86}),
    .fci(lt13_syn_87),
    .f({lt13_syn_7[9],lt13_syn_7[7]}),
    .fco(lt13_syn_91),
    .fx({open_n1756,lt13_syn_7[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt13_syn_93"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt13_syn_96 (
    .a({open_n1759,1'b0}),
    .c(2'b00),
    .d({open_n1764,1'b1}),
    .fci(lt13_syn_91),
    .f({open_n1781,lt13_syn_7[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt14_syn_93"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt14_syn_93 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n112,1'b1}),
    .e({gray_b1_n111,gray_b19[2]}),
    .f({lt14_syn_7[1],open_n1804}),
    .fco(lt14_syn_83),
    .fx({lt14_syn_7[2],open_n1805}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt14_syn_93"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt14_syn_94 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n108,gray_b1_n110}),
    .e({gray_b1_n107,gray_b1_n109}),
    .fci(lt14_syn_83),
    .f({lt14_syn_7[5],lt14_syn_7[3]}),
    .fco(lt14_syn_87),
    .fx({lt14_syn_7[6],lt14_syn_7[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt14_syn_93"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt14_syn_95 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n104,gray_b1_n106}),
    .e({gray_b1_n103,gray_b1_n105}),
    .fci(lt14_syn_87),
    .f({lt14_syn_7[9],lt14_syn_7[7]}),
    .fco(lt14_syn_91),
    .fx({open_n1842,lt14_syn_7[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt14_syn_93"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt14_syn_96 (
    .a({open_n1845,1'b0}),
    .c(2'b00),
    .d({open_n1850,1'b1}),
    .fci(lt14_syn_91),
    .f({open_n1867,lt14_syn_7[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt15_syn_93"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt15_syn_93 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n131,1'b1}),
    .e({gray_b1_n130,gray_b19[1]}),
    .f({lt15_syn_7[1],open_n1890}),
    .fco(lt15_syn_83),
    .fx({lt15_syn_7[2],open_n1891}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt15_syn_93"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt15_syn_94 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n127,gray_b1_n129}),
    .e({gray_b1_n126,gray_b1_n128}),
    .fci(lt15_syn_83),
    .f({lt15_syn_7[5],lt15_syn_7[3]}),
    .fco(lt15_syn_87),
    .fx({lt15_syn_7[6],lt15_syn_7[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt15_syn_93"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt15_syn_95 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n123,gray_b1_n125}),
    .e({gray_b1_n122,gray_b1_n124}),
    .fci(lt15_syn_87),
    .f({lt15_syn_7[9],lt15_syn_7[7]}),
    .fco(lt15_syn_91),
    .fx({open_n1928,lt15_syn_7[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt15_syn_93"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt15_syn_96 (
    .a({open_n1931,1'b0}),
    .c(2'b00),
    .d({open_n1936,1'b1}),
    .fci(lt15_syn_91),
    .f({open_n1953,lt15_syn_7[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_42 (
    .a({gray_b19[0],1'b0}),
    .b({1'b1,open_n1959}),
    .fco(lt16_syn_6));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_45 (
    .a({gray_b1_n149,gray_b1_n150}),
    .b(2'b11),
    .fci(lt16_syn_6),
    .fco(lt16_syn_10));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_48 (
    .a({gray_b1_n147,gray_b1_n148}),
    .b(2'b11),
    .fci(lt16_syn_10),
    .fco(lt16_syn_14));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_51 (
    .a({gray_b1_n145,gray_b1_n146}),
    .b(2'b11),
    .fci(lt16_syn_14),
    .fco(lt16_syn_18));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_54 (
    .a({gray_b1_n143,gray_b1_n144}),
    .b(2'b00),
    .fci(lt16_syn_18),
    .fco(lt16_syn_22));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_57 (
    .a({gray_b1_n141,gray_b1_n142}),
    .b(2'b01),
    .fci(lt16_syn_22),
    .fco(lt16_syn_26));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt16_syn_42"),
    //.R_POSITION("X0Y3Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt16_syn_59 (
    .a({open_n2105,1'b0}),
    .b({open_n2106,1'b1}),
    .fci(lt16_syn_26),
    .f({open_n2125,gray_b1_n7}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt17_syn_83"),
    //.R_POSITION("X0Y0Z0"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    lt17_syn_83 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .clk(\tx/clk_pixel ),
    .d({gray_b19[9],1'b1}),
    .e({gray_b19[10],gray_b19[8]}),
    .mi(heartbeat_b1[19:18]),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({lt17_syn_4[1],open_n2144}),
    .fco(lt17_syn_74),
    .fx({lt17_syn_4[2],open_n2145}),
    .q(heartbeat[19:18]));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt17_syn_83"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt17_syn_84 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b19[13],gray_b19[11]}),
    .e({gray_b19[14],gray_b19[12]}),
    .fci(lt17_syn_74),
    .f({lt17_syn_4[5],lt17_syn_4[3]}),
    .fco(lt17_syn_78),
    .fx({lt17_syn_4[6],lt17_syn_4[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt17_syn_83"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt17_syn_85 (
    .a(2'b01),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b19[17],gray_b19[15]}),
    .e({1'b1,gray_b19[16]}),
    .fci(lt17_syn_78),
    .f({lt17_syn_4[9],lt17_syn_4[7]}),
    .fx({lt17_syn_4[10],lt17_syn_4[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MSLICE #(
    //.MACRO("lt1_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt1_syn_27 (
    .a(2'b11),
    .b({\tx/cy [4],open_n2183}),
    .fco(lt1_syn_6));  // ../../../rtl/p1/dmz_p1_top.sv(35)
  EG_PHY_MSLICE #(
    //.MACRO("lt1_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt1_syn_30 (
    .a(2'b00),
    .b(\tx/cy [6:5]),
    .fci(lt1_syn_6),
    .fco(lt1_syn_10));  // ../../../rtl/p1/dmz_p1_top.sv(35)
  EG_PHY_MSLICE #(
    //.MACRO("lt1_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt1_syn_33 (
    .a(2'b11),
    .b(\tx/cy [8:7]),
    .fci(lt1_syn_10),
    .fco(lt1_syn_14));  // ../../../rtl/p1/dmz_p1_top.sv(35)
  EG_PHY_MSLICE #(
    //.MACRO("lt1_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt1_syn_36 (
    .a(2'b00),
    .b({1'b1,\tx/cy [9]}),
    .fci(lt1_syn_14),
    .f({rgb_b3_n,open_n2275}));  // ../../../rtl/p1/dmz_p1_top.sv(35)
  EG_PHY_MSLICE #(
    //.MACRO("lt2_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt2_syn_27 (
    .a({\tx/cx [4],1'b0}),
    .b({1'b1,open_n2281}),
    .fco(lt2_syn_6));  // ../../../rtl/p1/dmz_p1_top.sv(36)
  EG_PHY_MSLICE #(
    //.MACRO("lt2_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt2_syn_30 (
    .a(\tx/cx [6:5]),
    .b(2'b10),
    .fci(lt2_syn_6),
    .fco(lt2_syn_10));  // ../../../rtl/p1/dmz_p1_top.sv(36)
  EG_PHY_MSLICE #(
    //.MACRO("lt2_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt2_syn_33 (
    .a(\tx/cx [8:7]),
    .b(2'b00),
    .fci(lt2_syn_10),
    .fco(lt2_syn_14));  // ../../../rtl/p1/dmz_p1_top.sv(36)
  EG_PHY_MSLICE #(
    //.MACRO("lt2_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt2_syn_36 (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b10),
    .fci(lt2_syn_14),
    .f({rgb_b5_n,open_n2373}));  // ../../../rtl/p1/dmz_p1_top.sv(36)
  EG_PHY_MSLICE #(
    //.MACRO("lt4_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt4_syn_27 (
    .a({\tx/cx [4],1'b0}),
    .b({1'b1,open_n2379}),
    .fco(lt4_syn_6));  // ../../../rtl/p1/dmz_p1_top.sv(38)
  EG_PHY_MSLICE #(
    //.MACRO("lt4_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt4_syn_30 (
    .a(\tx/cx [6:5]),
    .b(2'b11),
    .fci(lt4_syn_6),
    .fco(lt4_syn_10));  // ../../../rtl/p1/dmz_p1_top.sv(38)
  EG_PHY_MSLICE #(
    //.MACRO("lt4_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt4_syn_33 (
    .a(\tx/cx [8:7]),
    .b(2'b01),
    .fci(lt4_syn_10),
    .fco(lt4_syn_14));  // ../../../rtl/p1/dmz_p1_top.sv(38)
  EG_PHY_MSLICE #(
    //.MACRO("lt4_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt4_syn_36 (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b10),
    .fci(lt4_syn_14),
    .f({rgb_b10_n,open_n2471}));  // ../../../rtl/p1/dmz_p1_top.sv(38)
  EG_PHY_MSLICE #(
    //.MACRO("lt6_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt6_syn_27 (
    .a({\tx/cx [4],1'b0}),
    .b({1'b1,open_n2477}),
    .fco(lt6_syn_6));  // ../../../rtl/p1/dmz_p1_top.sv(40)
  EG_PHY_MSLICE #(
    //.MACRO("lt6_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt6_syn_30 (
    .a(\tx/cx [6:5]),
    .b(2'b00),
    .fci(lt6_syn_6),
    .fco(lt6_syn_10));  // ../../../rtl/p1/dmz_p1_top.sv(40)
  EG_PHY_MSLICE #(
    //.MACRO("lt6_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt6_syn_33 (
    .a(\tx/cx [8:7]),
    .b(2'b11),
    .fci(lt6_syn_10),
    .fco(lt6_syn_14));  // ../../../rtl/p1/dmz_p1_top.sv(40)
  EG_PHY_MSLICE #(
    //.MACRO("lt6_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt6_syn_36 (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b10),
    .fci(lt6_syn_14),
    .f({rgb_b14_n,open_n2569}));  // ../../../rtl/p1/dmz_p1_top.sv(40)
  EG_PHY_MSLICE #(
    //.MACRO("lt8_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt8_syn_27 (
    .a({\tx/cx [4],1'b0}),
    .b({1'b1,open_n2575}),
    .fco(lt8_syn_6));  // ../../../rtl/p1/dmz_p1_top.sv(42)
  EG_PHY_MSLICE #(
    //.MACRO("lt8_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt8_syn_30 (
    .a(\tx/cx [6:5]),
    .b(2'b01),
    .fci(lt8_syn_6),
    .fco(lt8_syn_10));  // ../../../rtl/p1/dmz_p1_top.sv(42)
  EG_PHY_MSLICE #(
    //.MACRO("lt8_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt8_syn_33 (
    .a(\tx/cx [8:7]),
    .b(2'b00),
    .fci(lt8_syn_10),
    .fco(lt8_syn_14));  // ../../../rtl/p1/dmz_p1_top.sv(42)
  EG_PHY_MSLICE #(
    //.MACRO("lt8_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    lt8_syn_36 (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b11),
    .fci(lt8_syn_14),
    .f({rgb_b18_n,open_n2667}));  // ../../../rtl/p1/dmz_p1_top.sv(42)
  EG_PHY_LSLICE #(
    //.MACRO("lt9_syn_90"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt9_syn_90 (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .d({gray_b1_n17,1'b1}),
    .e({gray_b1_n16,gray_b19[7]}),
    .f({lt9_syn_4[1],open_n2690}),
    .fco(lt9_syn_80),
    .fx({lt9_syn_4[2],open_n2691}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt9_syn_90"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt9_syn_91 (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({gray_b1_n13,gray_b1_n15}),
    .e({gray_b1_n12,gray_b1_n14}),
    .fci(lt9_syn_80),
    .f({lt9_syn_4[5],lt9_syn_4[3]}),
    .fco(lt9_syn_84),
    .fx({lt9_syn_4[6],lt9_syn_4[4]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt9_syn_90"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt9_syn_92 (
    .a(2'b01),
    .b(2'b11),
    .c(2'b00),
    .d({gray_b1_n9,gray_b1_n11}),
    .e({gray_b1_n8,gray_b1_n10}),
    .fci(lt9_syn_84),
    .f({lt9_syn_4[9],lt9_syn_4[7]}),
    .fco(lt9_syn_88),
    .fx({open_n2728,lt9_syn_4[8]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_LSLICE #(
    //.MACRO("lt9_syn_90"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    lt9_syn_93 (
    .a({open_n2731,1'b0}),
    .c(2'b00),
    .d({open_n2736,1'b1}),
    .fci(lt9_syn_88),
    .f({open_n2753,lt9_syn_4[11]}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_MULT18 #(
    .CEAMUX("1"),
    .CLKMUX("SIG"),
    .INPUTREGA("ENABLE"),
    .INPUTREGB("DISABLE"),
    .MODE("MULT18X18C"),
    .OUTPUTREG("DISABLE"),
    .RSTANMUX("INV"),
    .SIGNEDAMUX("0"),
    .SIGNEDBMUX("0"),
    .SRMODE("SYNC"))
    mult0_syn_1 (
    .a({8'b00000000,\tx/cx_b4 [9:1],\tx/cx[0]_syn_2 }),
    .b(18'b000000000011111111),
    .clk(\tx/clk_pixel ),
    .rstan(\tx/mux11_syn_2 [7]),
    .p({open_n2840,open_n2841,open_n2842,open_n2843,open_n2844,open_n2845,open_n2846,open_n2847,open_n2848,open_n2849,open_n2850,open_n2851,open_n2852,open_n2853,open_n2854,open_n2855,open_n2856,open_n2857,gray_b19}));  // ../../../rtl/p1/dmz_p1_top.sv(30)
  EG_PHY_PAD #(
    //.HYSTERESIS("OFF"),
    //.LOCATION("A10"),
    //.PCICLAMP("OFF"),
    //.PULLMODE("PULLUP"),
    .IDDRMODE("OFF"),
    .IDDRPIPEMODE("NONE"),
    .INCEMUX("1"),
    .INPCLKMUX("CLK"),
    .INRSTMUX("RST"),
    .IN_DFFMODE("FF"),
    .IN_REGSET("RESET"),
    .IOTYPE("LVCMOS33"),
    .MODE("IN"),
    .SRMODE("SYNC"),
    .TSMUX("1"))
    mute_switch_syn_6 (
    .ipad(mute_switch),
    .ipclk(\tx/clk_pixel ),
    .rst(\tx/serializer/reset_dup_230 ),
    .diq({open_n2868,open_n2869,open_n2870,mute_sync[0]}));  // ../../../rtl/p1/dmz_p1_top.sv(2)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \mute_sync_reg[1]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({open_n2892,mute_sync[0]}),
    .sr(\tx/serializer/reset_dup_230 ),
    .q({open_n2898,\leds[3]_dup_5 }));  // ../../../rtl/p1/dmz_p1_top.sv(17)
  EG_PHY_PAD #(
    //.HYSTERESIS("OFF"),
    //.LOCATION("B10"),
    //.PCICLAMP("OFF"),
    //.PULLMODE("PULLUP"),
    .IDDRMODE("OFF"),
    .IDDRPIPEMODE("NONE"),
    .INCEMUX("1"),
    .INPCLKMUX("CLK"),
    .INRSTMUX("RST"),
    .IN_DFFMODE("FF"),
    .IN_REGSET("RESET"),
    .IOTYPE("LVCMOS33"),
    .MODE("IN"),
    .SRMODE("SYNC"),
    .TSMUX("1"))
    pattern_switch_syn_6 (
    .ipad(pattern_switch),
    .ipclk(\tx/clk_pixel ),
    .rst(\tx/serializer/reset_dup_228 ),
    .diq({open_n2909,open_n2910,open_n2911,pattern_sync[0]}));  // ../../../rtl/p1/dmz_p1_top.sv(2)
  EG_PHY_BANKREF #(
    .DIFFRESISTOR("NONE"),
    .INR("ON"),
    .LVDS("ON"),
    .VCM("1.2"),
    .VOD("350M"))
    place_created_bankref ();
  EG_PHY_GCLK \pll/bufg_feedback  (
    .clki(\pll/clk0_buf ),
    .clko(\tx/clk_pixel ));  // ../../../rtl/p1/dmz_video_pll.v(39)
  EG_PHY_PLL #(
    //.RID("0X0101"),
    //.WID("0X0101"),
    .CLKC0_CPHASE(39),
    .CLKC0_DIV(40),
    .CLKC0_DIV2_ENABLE("DISABLE"),
    .CLKC0_ENABLE("ENABLE"),
    .CLKC0_FPHASE(0),
    .CLKC1_CPHASE(7),
    .CLKC1_DIV(8),
    .CLKC1_DIV2_ENABLE("DISABLE"),
    .CLKC1_ENABLE("ENABLE"),
    .CLKC1_FPHASE(0),
    .CLKC2_CPHASE(1),
    .CLKC2_DIV(1),
    .CLKC2_DIV2_ENABLE("DISABLE"),
    .CLKC2_ENABLE("DISABLE"),
    .CLKC2_FPHASE(0),
    .CLKC3_CPHASE(1),
    .CLKC3_DIV(1),
    .CLKC3_DIV2_ENABLE("DISABLE"),
    .CLKC3_ENABLE("DISABLE"),
    .CLKC3_FPHASE(0),
    .CLKC4_CPHASE(1),
    .CLKC4_DIV(1),
    .CLKC4_DIV2_ENABLE("DISABLE"),
    .CLKC4_ENABLE("DISABLE"),
    .CLKC4_FPHASE(0),
    .DERIVE_PLL_CLOCKS("DISABLE"),
    .DPHASE_SOURCE("DISABLE"),
    .DYNCFG("DISABLE"),
    .FBCLK_DIV(1),
    .FEEDBK_MODE("NORMAL"),
    .FEEDBK_PATH("CLKC0_EXT"),
    .FIN("50.000000"),
    .FREQ_LOCK_ACCURACY(2),
    .GEN_BASIC_CLOCK("DISABLE"),
    .GMC_GAIN(2),
    .GMC_TEST(14),
    .ICP_CURRENT(9),
    .IF_ESCLKSTSW("DISABLE"),
    .INTFB_WAKE("DISABLE"),
    .KVCO(2),
    .LPF_CAPACITOR(1),
    .LPF_RESISTOR(8),
    .NORESET("DISABLE"),
    .ODIV_MUXC0("DIV"),
    .ODIV_MUXC1("DIV"),
    .ODIV_MUXC2("DIV"),
    .ODIV_MUXC3("DIV"),
    .ODIV_MUXC4("DIV"),
    .PLLC2RST_ENA("DISABLE"),
    .PLLC34RST_ENA("DISABLE"),
    .PLLMRST_ENA("DISABLE"),
    .PLLRST_ENA("ENABLE"),
    .PLL_LOCK_MODE(0),
    .PREDIV_MUXC0("VCO"),
    .PREDIV_MUXC1("VCO"),
    .PREDIV_MUXC2("VCO"),
    .PREDIV_MUXC3("VCO"),
    .PREDIV_MUXC4("VCO"),
    .REFCLK_DIV(2),
    .REFCLK_SEL("INTERNAL"),
    .STDBY_ENABLE("DISABLE"),
    .STDBY_VCO_ENA("DISABLE"),
    .SYNC_ENABLE("DISABLE"),
    .VCO_NORESET("DISABLE"))
    \pll/pll_inst  (
    .daddr(6'b000000),
    .dclk(1'b0),
    .dcs(1'b0),
    .di(8'b00000000),
    .dwe(1'b0),
    .fbclk(\tx/clk_pixel ),
    .load_reg(1'b0),
    .psclk(1'b0),
    .psclksel(3'b000),
    .psdown(1'b0),
    .psstep(1'b0),
    .refclk(clk_50m_dup_1),
    .reset(\pll/reset ),
    .stdby(1'b0),
    .clkc({open_n2917,open_n2918,open_n2919,\tx/serializer/clk_pixel_x5 ,\pll/clk0_buf }),
    .extlock(\leds[1]_dup_1 ));  // ../../../rtl/p1/dmz_video_pll.v(68)
  EG_PHY_MSLICE #(
    //.LUT0("(~D)"),
    .INIT_LUT0(16'b0000000011111111),
    .MODE("LOGIC"))
    \pll/reset_syn_4  (
    .d({open_n2937,run_n_dup_1}),
    .f({open_n2951,\pll/reset }));  // ../../../rtl/p1/dmz_video_pll.v(32)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .REG1_REGSET("SET"),
    .REG1_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[1]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({reset_pipe[0],1'b0}),
    .sr(reset_async),
    .q(reset_pipe[1:0]));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_LSLICE #(
    //.LUTF0("~(C*D)"),
    //.LUTG0("~(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111111111111),
    .INIT_LUTG0(16'b0000111111111111),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[2]_syn_4  (
    .c({open_n2989,\leds[1]_dup_1 }),
    .clk(\tx/clk_pixel ),
    .d({open_n2991,run_n_dup_1}),
    .mi({open_n2995,reset_pipe[1]}),
    .sr(reset_async),
    .f({open_n3007,reset_async}),
    .q({open_n3011,reset_pipe[2]}));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(B*~(C)*~(D)*~(0)+B*C*~(D)*~(0)+B*~(C)*D*~(0)+~(B)*C*D*~(0)+B*C*~(D)*0+~(B)*~(C)*D*0+~(B)*C*D*0+B*C*D*0))"),
    //.LUTF1("(D*~(C*~B))"),
    //.LUTG0("(A*(B*~(C)*~(D)*~(1)+B*C*~(D)*~(1)+B*~(C)*D*~(1)+~(B)*C*D*~(1)+B*C*~(D)*1+~(B)*~(C)*D*1+~(B)*C*D*1+B*C*D*1))"),
    //.LUTG1("(D*~(C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0010100010001000),
    .INIT_LUTF1(16'b1100111100000000),
    .INIT_LUTG0(16'b1010001010000000),
    .INIT_LUTG1(16'b1100111100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("SET"),
    .REG1_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_17  (
    .a({open_n3012,\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_294 ,\tx/tmds_gen[2]$tmds_channel/data_island_data [0]}),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/tmds_gen[2]$tmds_channel/data_island_data [1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_283 ,\tx/tmds_gen[2]$tmds_channel/data_island_data [2]}),
    .e({open_n3014,\tx/tmds_gen[2]$tmds_channel/data_island_data [3]}),
    .mi({reset_pipe[2],open_n3016}),
    .sr(reset_async),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_296 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_301 }),
    .q({\tx/serializer/reset_dup_234 ,open_n3031}));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*~((~C*~(~D*B)))*~(0)+A*(~C*~(~D*B))*~(0)+~(A)*(~C*~(~D*B))*0+A*(~C*~(~D*B))*0)"),
    //.LUTF1("~(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUTG0("(A*~((~C*~(~D*B)))*~(1)+A*(~C*~(~D*B))*~(1)+~(A)*(~C*~(~D*B))*1+A*(~C*~(~D*B))*1)"),
    //.LUTG1("~(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1010101010101010),
    .INIT_LUTF1(16'b0011000000111111),
    .INIT_LUTG0(16'b0000111100000011),
    .INIT_LUTG1(16'b0011000000111111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("SET"),
    .REG1_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_19  (
    .a({open_n3032,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_86 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_46 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_149 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [4],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_97 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_37 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .e({open_n3034,\tx/true_hdmi_output$packet_assembler/counter [4]}),
    .mi({reset_pipe[2],open_n3036}),
    .sr(reset_async),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next[0]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_103 }),
    .q({\tx/serializer/reset_dup_233 ,open_n3051}));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~(~B*~D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111100001100),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_22  (
    .b({open_n3054,rgb_b5_n}),
    .c({open_n3055,rgb_b3_n}),
    .clk(\tx/clk_pixel ),
    .d({open_n3057,rgb_b8[6]}),
    .mi({open_n3068,reset_pipe[2]}),
    .sr(reset_async),
    .f({open_n3069,\rgb_b1[7]_syn_15 }),
    .q({open_n3073,\tx/serializer/reset_dup_229 }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_24  (
    .clk(\tx/clk_pixel ),
    .mi({open_n3093,reset_pipe[2]}),
    .sr(reset_async),
    .q({open_n3099,\tx/serializer/reset_dup_232 }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_26  (
    .clk(\tx/clk_pixel ),
    .mi({open_n3112,reset_pipe[2]}),
    .sr(reset_async),
    .q({open_n3129,\tx/serializer/reset_dup_237 }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_28  (
    .clk(\tx/clk_pixel ),
    .mi({open_n3149,reset_pipe[2]}),
    .sr(reset_async),
    .q({open_n3155,\tx/serializer/reset }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_30  (
    .clk(\tx/clk_pixel ),
    .mi({open_n3175,reset_pipe[2]}),
    .sr(reset_async),
    .q({open_n3181,\tx/serializer/reset_dup_230 }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_32  (
    .clk(\tx/clk_pixel ),
    .mi({open_n3194,reset_pipe[2]}),
    .sr(reset_async),
    .q({open_n3211,\tx/serializer/reset_dup_228 }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \reset_pipe_reg[3]_syn_34  (
    .clk(\tx/clk_pixel ),
    .mi({open_n3224,reset_pipe[2]}),
    .sr(reset_async),
    .q({open_n3241,\tx/serializer/reset_dup_236 }));  // ../../../rtl/p1/dmz_p1_top.sv(11)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~D)"),
    //.LUT1("(C*~D)"),
    .INIT_LUT0(16'b0000000011110000),
    .INIT_LUT1(16'b0000000011110000),
    .MODE("LOGIC"))
    \rgb_b1[0]_syn_6  (
    .c({\rgb_b1[7]_syn_4 ,\rgb_b1[7]_syn_4 }),
    .d({gray_b1_n7,lt15_syn_7[11]}),
    .f({\rgb_b1[0]_syn_2 ,\rgb_b1[1]_syn_2 }));
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~D*C)*~(B*~A))"),
    //.LUTF1("(~C*~(B*~D))"),
    //.LUTG0("(~(~D*C)*~(B*~A))"),
    //.LUTG1("(~C*~(B*~D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1011101100001011),
    .INIT_LUTF1(16'b0000111100000011),
    .INIT_LUTG0(16'b1011101100001011),
    .INIT_LUTG1(16'b0000111100000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_b1[14]_syn_6  (
    .a({open_n3266,\rgb_b1[6]_syn_2 }),
    .b({rgb_b12_n,\rgb_b1[14]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({rgb_b3_n,\tx/cy [6]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({\rgb_b1[14]_syn_2 ,open_n3284}),
    .q({open_n3288,\tx/rgb [14]}));
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~D)"),
    //.LUTF1("(C*~D)"),
    //.LUTG0("(C*~D)"),
    //.LUTG1("(C*~D)"),
    .INIT_LUTF0(16'b0000000011110000),
    .INIT_LUTF1(16'b0000000011110000),
    .INIT_LUTG0(16'b0000000011110000),
    .INIT_LUTG1(16'b0000000011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \rgb_b1[2]_syn_6  (
    .c({\rgb_b1[7]_syn_4 ,\rgb_b1[7]_syn_4 }),
    .d({lt14_syn_7[11],lt13_syn_7[11]}),
    .f({\rgb_b1[2]_syn_2 ,\rgb_b1[3]_syn_2 }));
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~D)"),
    //.LUTF1("(C*~D)"),
    //.LUTG0("(C*~D)"),
    //.LUTG1("(C*~D)"),
    .INIT_LUTF0(16'b0000000011110000),
    .INIT_LUTF1(16'b0000000011110000),
    .INIT_LUTG0(16'b0000000011110000),
    .INIT_LUTG1(16'b0000000011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \rgb_b1[4]_syn_6  (
    .c({\rgb_b1[7]_syn_4 ,\rgb_b1[7]_syn_4 }),
    .d({lt12_syn_7[11],lt11_syn_7[11]}),
    .f({\rgb_b1[4]_syn_2 ,\rgb_b1[5]_syn_2 }));
  EG_PHY_MSLICE #(
    //.LUT0("(C*~D)"),
    //.LUT1("(C*~D)"),
    .INIT_LUT0(16'b0000000011110000),
    .INIT_LUT1(16'b0000000011110000),
    .MODE("LOGIC"))
    \rgb_b1[6]_syn_6  (
    .c({\rgb_b1[7]_syn_4 ,\rgb_b1[7]_syn_4 }),
    .d({lt10_syn_7[11],lt9_syn_4[11]}),
    .f({\rgb_b1[6]_syn_2 ,\rgb_b1[7]_syn_6 }));
  EG_PHY_MSLICE #(
    //.LUT0("(~D*~A*~(C*~B))"),
    //.LUT1("(~C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000001000101),
    .INIT_LUT1(16'b0000000000001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_b1[7]_syn_26  (
    .a({open_n3369,\tx/vsync_syn_2 }),
    .b({open_n3370,lt0_syn_18}),
    .c({\tx/cx [8],\tx/cx [9]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [7],\tx/cy [9]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({lt0_syn_18,open_n3384}),
    .q({open_n3388,\tx/video_data_period }));
  EG_PHY_MSLICE #(
    //.LUT0("(~B*~(~A*~(~D*C)))"),
    //.LUT1("(~D*~(C*~(~B*~A)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0010001000110010),
    .INIT_LUT1(16'b0000000000011111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_b1[7]_syn_28  (
    .a({\tx/cx [6],\rgb_b1[7]_syn_9 }),
    .b({\tx/cx [7],rgb_b3_n}),
    .c({\tx/cx [8],rgb_b16_n}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [9],rgb_b12_n}),
    .mi({open_n3400,\tx/rgb [5]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({rgb_b12_n,\rgb_b1[23]_syn_2 }),
    .q({open_n3404,\tx/tmds_gen[0]$tmds_channel/video_data [5]}));
  EG_PHY_LSLICE #(
    //.LUTF0("(~D*~C*~(B*~A))"),
    //.LUTF1("(~C*~D)"),
    //.LUTG0("(~D*~C*~(B*~A))"),
    //.LUTG1("(~C*~D)"),
    .INIT_LUTF0(16'b0000000000001011),
    .INIT_LUTF1(16'b0000000000001111),
    .INIT_LUTG0(16'b0000000000001011),
    .INIT_LUTG1(16'b0000000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \rgb_b1[7]_syn_31  (
    .a({open_n3405,lt3_syn_24}),
    .b({open_n3406,\tx/cx [7]}),
    .c({\tx/cx [6],\tx/cx [8]}),
    .d({\tx/cx [5],\tx/cx [9]}),
    .f({lt3_syn_24,\rgb_b1[7]_syn_9 }));
  EG_PHY_MSLICE #(
    //.LUT0("(C*B*D)"),
    //.LUT1("(~D*~(~C*B))"),
    .INIT_LUT0(16'b1100000000000000),
    .INIT_LUT1(16'b0000000011110011),
    .MODE("LOGIC"))
    \rgb_b1[7]_syn_33  (
    .b({rgb_b18_n,\tx/cx [2]}),
    .c({rgb_b16_n,\tx/cx [3]}),
    .d({rgb_b14_n,\tx/cx [1]}),
    .f({\rgb_b1[7]_syn_12 ,\tx/add5_syn_21 }));
  EG_PHY_MSLICE #(
    //.LUT0("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUT1("(~(~D*C)*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111000001110),
    .INIT_LUT1(16'b1011101100001011),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[10]_syn_4  (
    .a({\rgb_b1[2]_syn_2 ,\rgb_b1[1]_syn_2 }),
    .b({\rgb_b1[14]_syn_2 ,\rgb_b1[23]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [2],\tx/cx [1]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [10],\tx/rgb [17]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTF1("(~(~D*C)*~(B*~A))"),
    //.LUTG0("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    //.LUTG1("(~(~D*C)*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1011101100001011),
    .INIT_LUTG0(16'b0000111011111110),
    .INIT_LUTG1(16'b1011101100001011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[11]_syn_4  (
    .a({\rgb_b1[3]_syn_2 ,\rgb_b1[0]_syn_2 }),
    .b({\rgb_b1[14]_syn_2 ,\rgb_b1[7]_syn_15 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [3],\tx/cx [0]}),
    .e({open_n3472,\tx/cy [0]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [11],\tx/rgb [0]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTF1("(~(~D*C)*~(B*~A))"),
    //.LUTG0("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    //.LUTG1("(~(~D*C)*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1011101100001011),
    .INIT_LUTG0(16'b0000111011111110),
    .INIT_LUTG1(16'b1011101100001011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[12]_syn_4  (
    .a({\rgb_b1[4]_syn_2 ,\rgb_b1[2]_syn_2 }),
    .b({\rgb_b1[14]_syn_2 ,\rgb_b1[7]_syn_15 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [4],\tx/cx [2]}),
    .e({open_n3493,\tx/cy [2]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [12],\tx/rgb [2]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTF1("(~(~D*C)*~(B*~A))"),
    //.LUTG0("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    //.LUTG1("(~(~D*C)*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1011101100001011),
    .INIT_LUTG0(16'b0000111011111110),
    .INIT_LUTG1(16'b1011101100001011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[13]_syn_4  (
    .a({\rgb_b1[5]_syn_2 ,\rgb_b1[1]_syn_2 }),
    .b({\rgb_b1[14]_syn_2 ,\rgb_b1[7]_syn_15 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [5],\tx/cx [1]}),
    .e({open_n3514,\tx/cy [1]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [13],\tx/rgb [1]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_MSLICE #(
    //.LUT0("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUT1("(~(~D*C)*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111000001110),
    .INIT_LUT1(16'b1011101100001011),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[15]_syn_4  (
    .a({\rgb_b1[7]_syn_6 ,\rgb_b1[7]_syn_6 }),
    .b({\rgb_b1[14]_syn_2 ,\rgb_b1[23]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [7],\tx/cx [7]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/rgb [15],\tx/rgb [23]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~D*C)*~(B*~A))"),
    //.LUTF1("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUTG0("(~(~D*C)*~(B*~A))"),
    //.LUTG1("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1011101100001011),
    .INIT_LUTF1(16'b1111111000001110),
    .INIT_LUTG0(16'b1011101100001011),
    .INIT_LUTG1(16'b1111111000001110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[16]_syn_4  (
    .a({\rgb_b1[0]_syn_2 ,\rgb_b1[0]_syn_2 }),
    .b({\rgb_b1[23]_syn_2 ,\rgb_b1[14]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [0],\tx/cy [0]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [16],\tx/rgb [8]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_MSLICE #(
    //.LUT0("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUT1("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111000001110),
    .INIT_LUT1(16'b1111111000001110),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[19]_syn_4  (
    .a({\rgb_b1[3]_syn_2 ,\rgb_b1[4]_syn_2 }),
    .b({\rgb_b1[23]_syn_2 ,\rgb_b1[23]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [3],\tx/cx [4]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [19],\tx/rgb [20]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_MSLICE #(
    //.LUT0("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUT1("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111000001110),
    .INIT_LUT1(16'b1111111000001110),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[21]_syn_4  (
    .a({\rgb_b1[5]_syn_2 ,\rgb_b1[6]_syn_2 }),
    .b({\rgb_b1[23]_syn_2 ,\rgb_b1[23]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [5],\tx/cx [6]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [21],\tx/rgb [22]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTF1("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTG0("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    //.LUTG1("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1111111000001110),
    .INIT_LUTG0(16'b0000111011111110),
    .INIT_LUTG1(16'b0000111011111110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[3]_syn_4  (
    .a({\rgb_b1[3]_syn_2 ,\rgb_b1[4]_syn_2 }),
    .b({\rgb_b1[7]_syn_15 ,\rgb_b1[7]_syn_15 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [3],\tx/cx [4]}),
    .e({\tx/cy [3],\tx/cy [4]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [3],\tx/rgb [4]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTF1("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTG0("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    //.LUTG1("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1111111000001110),
    .INIT_LUTG0(16'b0000111011111110),
    .INIT_LUTG1(16'b0000111011111110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[5]_syn_4  (
    .a({\rgb_b1[5]_syn_2 ,\rgb_b1[6]_syn_2 }),
    .b({\rgb_b1[7]_syn_15 ,\rgb_b1[7]_syn_15 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [5],\tx/cx [6]}),
    .e({\tx/cy [5],\tx/cy [6]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [5],\tx/rgb [6]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUTF1("(~(~D*C)*~(B*~A))"),
    //.LUTG0("(~(~B*~A)*~(D)*~(C)+~(~B*~A)*D*~(C)+~(~(~B*~A))*D*C+~(~B*~A)*D*C)"),
    //.LUTG1("(~(~D*C)*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1011101100001011),
    .INIT_LUTG0(16'b1111111000001110),
    .INIT_LUTG1(16'b1011101100001011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \rgb_reg[9]_syn_4  (
    .a({\rgb_b1[1]_syn_2 ,\rgb_b1[2]_syn_2 }),
    .b({\rgb_b1[14]_syn_2 ,\rgb_b1[23]_syn_2 }),
    .c({pattern_sync[1],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [1],\tx/cx [2]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .q({\tx/rgb [9],\tx/rgb [18]}));  // ../../../rtl/p1/dmz_p1_top.sv(32)
  EG_PHY_PAD #(
    //.HYSTERESIS("OFF"),
    //.LOCATION("A9"),
    //.PCICLAMP("OFF"),
    //.PULLMODE("PULLUP"),
    .IOTYPE("LVCMOS33"),
    .MODE("IN"),
    .TSMUX("1"))
    run_n_syn_2 (
    .ipad(run_n),
    .di(run_n_dup_1));  // ../../../rtl/p1/dmz_p1_top.sv(2)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUT1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100110011110000),
    .INIT_LUT1(16'b1100110011110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[10]_syn_4  (
    .b({\tone/accumulator_b4 [10],\tone/accumulator_b4 [11]}),
    .c({\tone/accumulator_b3 [10],\tone/accumulator_b3 [11]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [10],\tone/accumulator [11]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUT1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100110011110000),
    .INIT_LUT1(16'b1100110011110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[12]_syn_4  (
    .b({\tone/accumulator_b4 [12],\tone/accumulator_b4 [9]}),
    .c({\tone/accumulator_b3 [12],\tone/accumulator_b3 [9]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [12],\tone/accumulator [9]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTF1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110011110000),
    .INIT_LUTF1(16'b1100110011110000),
    .INIT_LUTG0(16'b1100110011110000),
    .INIT_LUTG1(16'b1100110011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[13]_syn_4  (
    .b({\tone/accumulator_b4 [13],\tone/accumulator_b4 [14]}),
    .c({\tone/accumulator_b3 [13],\tone/accumulator_b3 [14]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [13],\tone/accumulator [14]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTF1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110011110000),
    .INIT_LUTF1(16'b1100110011110000),
    .INIT_LUTG0(16'b1100110011110000),
    .INIT_LUTG1(16'b1100110011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[15]_syn_4  (
    .b({\tone/accumulator_b4 [15],\tone/accumulator_b4 [16]}),
    .c({\tone/accumulator_b3 [15],\tone/accumulator_b3 [16]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [15],\tone/accumulator [16]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUT1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100110011110000),
    .INIT_LUT1(16'b1100110011110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[17]_syn_4  (
    .b({\tone/accumulator_b4 [17],\tone/accumulator_b4 [18]}),
    .c({\tone/accumulator_b3 [17],\tone/accumulator_b3 [18]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [17],\tone/accumulator [18]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUT1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100110011110000),
    .INIT_LUT1(16'b1100110011110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[19]_syn_4  (
    .b({\tone/accumulator_b4 [19],\tone/accumulator_b4 [20]}),
    .c({\tone/accumulator_b3 [19],\tone/accumulator_b3 [20]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [19],\tone/accumulator [20]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTF1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110011110000),
    .INIT_LUTF1(16'b1100110011110000),
    .INIT_LUTG0(16'b1100110011110000),
    .INIT_LUTG1(16'b1100110011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[21]_syn_4  (
    .b({\tone/accumulator_b4 [21],\tone/accumulator_b4 [22]}),
    .c({\tone/accumulator_b3 [21],\tone/accumulator_b3 [22]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [21],\tone/accumulator [22]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTF1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG0("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110011110000),
    .INIT_LUTF1(16'b1100110011110000),
    .INIT_LUTG0(16'b1100110011110000),
    .INIT_LUTG1(16'b1100110011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[23]_syn_4  (
    .b({\tone/accumulator_b4 [23],\tone/accumulator_b4 [24]}),
    .c({\tone/accumulator_b3 [23],\tone/accumulator_b3 [24]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q({\tone/accumulator [23],\tone/accumulator [24]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(~((~B*A))*~(C)*~(D)*~(0)+~((~B*A))*C*~(D)*~(0)+(~B*A)*C*~(D)*~(0)+~((~B*A))*~(C)*D*~(0)+(~B*A)*~(C)*D*~(0)+~((~B*A))*C*D*~(0)+~((~B*A))*~(C)*~(D)*0+(~B*A)*~(C)*~(D)*0+~((~B*A))*C*~(D)*0+(~B*A)*C*~(D)*0)"),
    //.LUTF1("(C@D)"),
    //.LUTG0("(~((~B*A))*~(C)*~(D)*~(1)+~((~B*A))*C*~(D)*~(1)+(~B*A)*C*~(D)*~(1)+~((~B*A))*~(C)*D*~(1)+(~B*A)*~(C)*D*~(1)+~((~B*A))*C*D*~(1)+~((~B*A))*~(C)*~(D)*1+(~B*A)*~(C)*~(D)*1+~((~B*A))*C*~(D)*1+(~B*A)*C*~(D)*1)"),
    //.LUTG1("(C@D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1101111111111101),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b0000000011111111),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[6]_syn_7  (
    .a({open_n3865,\tone/mux0_syn_319 }),
    .b({open_n3866,\tone/phase [2]}),
    .c({\tone/accumulator [6],\tone/phase [3]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/phase [4]}),
    .e({open_n3868,\tone/phase [5]}),
    .sr(\tx/serializer/reset_dup_231 ),
    .f({open_n3883,\tone/mux8_syn_58 }),
    .q({\tone/accumulator [6],open_n3887}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~(B)*~(D)+~C*B*~(D)+~(~C)*B*D+~C*B*D)"),
    //.LUTF1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    //.LUTG0("(~C*~(B)*~(D)+~C*B*~(D)+~(~C)*B*D+~C*B*D)"),
    //.LUTG1("(C*~(B)*~(D)+C*B*~(D)+~(C)*B*D+C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110000001111),
    .INIT_LUTF1(16'b1100110011110000),
    .INIT_LUTG0(16'b1100110000001111),
    .INIT_LUTG1(16'b1100110011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/accumulator_reg[8]_syn_4  (
    .b(\tone/accumulator_b4 [8:7]),
    .c({\tone/accumulator_b3 [8],\tone/accumulator [7]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .sr(\tx/serializer/reset_dup_231 ),
    .q(\tone/accumulator [8:7]));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.MACRO("tone/add0_syn_48"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("ADD_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tone/add0_syn_48  (
    .a({\tone/accumulator [6],1'b0}),
    .b({1'b1,open_n3912}),
    .fco(\tone/add0_syn_33 ));  // ../../../rtl/p1/dmz_tone.sv(68)
  EG_PHY_MSLICE #(
    //.MACRO("tone/add0_syn_48"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tone/add0_syn_51  (
    .a(\tone/phase [2:1]),
    .b(2'b00),
    .fci(\tone/add0_syn_33 ),
    .f(\tone/phase_b5 [2:1]),
    .fco(\tone/add0_syn_35 ));  // ../../../rtl/p1/dmz_tone.sv(68)
  EG_PHY_MSLICE #(
    //.MACRO("tone/add0_syn_48"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tone/add0_syn_54  (
    .a(\tone/phase [4:3]),
    .b(2'b00),
    .fci(\tone/add0_syn_35 ),
    .f(\tone/phase_b5 [4:3]),
    .fco(\tone/add0_syn_37 ));  // ../../../rtl/p1/dmz_tone.sv(68)
  EG_PHY_MSLICE #(
    //.MACRO("tone/add0_syn_48"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tone/add0_syn_56  (
    .a({open_n3982,\tone/phase [5]}),
    .b({open_n3983,1'b0}),
    .fci(\tone/add0_syn_37 ),
    .f({open_n4002,\tone/phase_b5 [5]}));  // ../../../rtl/p1/dmz_tone.sv(68)
  EG_PHY_LSLICE #(
    //.MACRO("tone/add1_syn_110"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/add1_syn_110  (
    .a({\tone/accumulator [8],1'b0}),
    .b({\tone/accumulator [9],\tone/accumulator [7]}),
    .c(2'b00),
    .d(2'b11),
    .e(2'b11),
    .f({\tone/accumulator_b3 [8],open_n4025}),
    .fco(\tone/add1_syn_94 ),
    .fx({\tone/accumulator_b3 [9],open_n4026}));  // ../../../rtl/p1/dmz_tone.sv(69)
  EG_PHY_LSLICE #(
    //.MACRO("tone/add1_syn_110"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/add1_syn_111  (
    .a({\tone/accumulator [12],\tone/accumulator [10]}),
    .b({\tone/accumulator [13],\tone/accumulator [11]}),
    .c(2'b00),
    .d(2'b10),
    .e(2'b11),
    .fci(\tone/add1_syn_94 ),
    .f({\tone/accumulator_b3 [12],\tone/accumulator_b3 [10]}),
    .fco(\tone/add1_syn_98 ),
    .fx({\tone/accumulator_b3 [13],\tone/accumulator_b3 [11]}));  // ../../../rtl/p1/dmz_tone.sv(69)
  EG_PHY_LSLICE #(
    //.MACRO("tone/add1_syn_110"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/add1_syn_112  (
    .a({\tone/accumulator [16],\tone/accumulator [14]}),
    .b({\tone/accumulator [17],\tone/accumulator [15]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b01),
    .fci(\tone/add1_syn_98 ),
    .f({\tone/accumulator_b3 [16],\tone/accumulator_b3 [14]}),
    .fco(\tone/add1_syn_102 ),
    .fx({\tone/accumulator_b3 [17],\tone/accumulator_b3 [15]}));  // ../../../rtl/p1/dmz_tone.sv(69)
  EG_PHY_LSLICE #(
    //.MACRO("tone/add1_syn_110"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/add1_syn_113  (
    .a({\tone/accumulator [20],\tone/accumulator [18]}),
    .b({\tone/accumulator [21],\tone/accumulator [19]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b00),
    .fci(\tone/add1_syn_102 ),
    .f({\tone/accumulator_b3 [20],\tone/accumulator_b3 [18]}),
    .fco(\tone/add1_syn_106 ),
    .fx({\tone/accumulator_b3 [21],\tone/accumulator_b3 [19]}));  // ../../../rtl/p1/dmz_tone.sv(69)
  EG_PHY_LSLICE #(
    //.MACRO("tone/add1_syn_110"),
    //.R_POSITION("X0Y2Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/add1_syn_114  (
    .a({\tone/accumulator [24],\tone/accumulator [22]}),
    .b({open_n4083,\tone/accumulator [23]}),
    .c(2'b00),
    .d(2'b00),
    .e({open_n4086,1'b0}),
    .fci(\tone/add1_syn_106 ),
    .f({\tone/accumulator_b3 [24],\tone/accumulator_b3 [22]}),
    .fx({open_n4102,\tone/accumulator_b3 [23]}));  // ../../../rtl/p1/dmz_tone.sv(69)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_65  (
    .a(2'b11),
    .b({\tone/accumulator [6],open_n4105}),
    .fco(\tone/lt0_syn_6 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_68  (
    .a(2'b01),
    .b(\tone/accumulator [8:7]),
    .fci(\tone/lt0_syn_6 ),
    .fco(\tone/lt0_syn_10 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_71  (
    .a(2'b10),
    .b(\tone/accumulator [10:9]),
    .fci(\tone/lt0_syn_10 ),
    .fco(\tone/lt0_syn_14 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_74  (
    .a(2'b11),
    .b(\tone/accumulator [12:11]),
    .fci(\tone/lt0_syn_14 ),
    .fco(\tone/lt0_syn_18 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_77  (
    .a(2'b01),
    .b(\tone/accumulator [14:13]),
    .fci(\tone/lt0_syn_18 ),
    .fco(\tone/lt0_syn_22 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_80  (
    .a(2'b01),
    .b(\tone/accumulator [16:15]),
    .fci(\tone/lt0_syn_22 ),
    .fco(\tone/lt0_syn_26 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y3Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_83  (
    .a(2'b10),
    .b(\tone/accumulator [18:17]),
    .fci(\tone/lt0_syn_26 ),
    .fco(\tone/lt0_syn_30 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y3Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_86  (
    .a(2'b11),
    .b(\tone/accumulator [20:19]),
    .fci(\tone/lt0_syn_30 ),
    .fco(\tone/lt0_syn_34 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y4Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_89  (
    .a(2'b11),
    .b(\tone/accumulator [22:21]),
    .fci(\tone/lt0_syn_34 ),
    .fco(\tone/lt0_syn_38 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y4Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tone/lt0_syn_92  (
    .a(2'b10),
    .b(\tone/accumulator [24:23]),
    .fci(\tone/lt0_syn_38 ),
    .fco(\tone/lt0_syn_42 ));  // ../../../rtl/p1/dmz_tone.sv(64)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+A*B*C*D*0)"),
    //.LUTF1("~(B*~((D*C))*~(A)+B*(D*C)*~(A)+~(B)*(D*C)*A+B*(D*C)*A)"),
    //.LUTG0("(~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+A*B*C*D*1)"),
    //.LUTG1("~(B*~((D*C))*~(A)+B*(D*C)*~(A)+~(B)*(D*C)*A+B*(D*C)*A)"),
    .INIT_LUTF0(16'b0111110101110000),
    .INIT_LUTF1(16'b0001101110111011),
    .INIT_LUTG0(16'b1000111100011101),
    .INIT_LUTG1(16'b0001101110111011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_698  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({open_n4349,\tone/phase [4]}),
    .f({\tone/mux0_syn_665 ,\tone/mux0_syn_435 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+A*B*~(C)*D*~(0)+A*~(B)*C*D*~(0)+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+~(A)*B*C*D*0)"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*C*~(D)+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUTG0("(~(A)*B*~(C)*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+A*B*~(C)*D*~(1)+A*~(B)*C*D*~(1)+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+~(A)*B*C*D*1)"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*C*~(D)+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    .INIT_LUTF0(16'b0010100011100100),
    .INIT_LUTF1(16'b1011110010010010),
    .INIT_LUTG0(16'b0101111101001110),
    .INIT_LUTG1(16'b1011110010010010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_701  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({open_n4372,\tone/phase [4]}),
    .f({\tone/mux0_syn_634 ,\tone/mux0_syn_669 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+A*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*B*C*D*0)"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUTG0("(~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+A*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*B*C*D*1)"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    .INIT_LUTF0(16'b1011101110110000),
    .INIT_LUTF1(16'b1110001010000010),
    .INIT_LUTG0(16'b0100111100011011),
    .INIT_LUTG1(16'b1110001010000010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_704  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({open_n4395,\tone/phase [4]}),
    .f({\tone/mux0_syn_433 ,\tone/mux0_syn_387 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+A*~(B)*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0)"),
    //.LUTG0("(~(A)*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+A*~(B)*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1)"),
    .INIT_LUTF0(16'b1111111101010000),
    .INIT_LUTF1(16'b0100010111000000),
    .INIT_LUTG0(16'b1010111100010101),
    .INIT_LUTG1(16'b0111101100000111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_707  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({\tone/phase [4],\tone/phase [4]}),
    .f({\tone/mux0_syn_636 ,\tone/mux0_syn_343 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+A*B*C*~(D)*0+~(A)*B*~(C)*D*0+~(A)*B*C*D*0)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+A*B*C*~(D)*1+~(A)*B*~(C)*D*1+~(A)*B*C*D*1)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*~(B)*C*D+A*B*C*D)"),
    .INIT_LUTF0(16'b0111110111111011),
    .INIT_LUTF1(16'b1010010110101011),
    .INIT_LUTG0(16'b0100010010111111),
    .INIT_LUTG1(16'b1010010110101011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_710  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({open_n4440,\tone/phase [4]}),
    .f({\tone/mux0_syn_297 ,\tone/mux0_syn_259 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+~(A)*B*C*~(D)*0+A*B*C*~(D)*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0)"),
    //.LUTF1("(~(A)*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+A*B*~(C)*D*0+~(A)*B*C*D*0)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+~(A)*B*C*~(D)*1+A*B*C*~(D)*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1)"),
    //.LUTG1("(~(A)*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+A*B*~(C)*D*1+~(A)*B*C*D*1)"),
    .INIT_LUTF0(16'b1100011011000111),
    .INIT_LUTF1(16'b0101010010110100),
    .INIT_LUTG0(16'b0111100011000110),
    .INIT_LUTG1(16'b0100101101011010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_713  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({\tone/phase [4],\tone/phase [4]}),
    .f({\tone/mux0_syn_299 ,\tone/mux0_syn_654 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+A*B*C*~(D)*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+A*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+~(A)*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+A*B*C*~(D)*0+~(A)*B*~(C)*D*0+A*~(B)*C*D*0+A*B*C*D*0)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+A*B*C*~(D)*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+A*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+~(A)*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+A*B*C*~(D)*1+~(A)*B*~(C)*D*1+A*~(B)*C*D*1+A*B*C*D*1)"),
    .INIT_LUTF0(16'b1101011010111011),
    .INIT_LUTF1(16'b1111111001011011),
    .INIT_LUTG0(16'b1011101110111010),
    .INIT_LUTG1(16'b1010010010110100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_716  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .e({\tone/phase [4],\tone/phase [4]}),
    .f({\tone/mux0_syn_483 ,\tone/mux0_syn_79 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_MSLICE #(
    //.LUT0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUT1("(~C*(~B*~(D)*~(A)+~B*D*~(A)+~(~B)*D*A+~B*D*A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1010001010000000),
    .INIT_LUT1(16'b0000101100000001),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tone/mux0_syn_718  (
    .a({\tone/accumulator [6],\tone/phase_reg[3]_syn_8 }),
    .b({\tone/phase [1],\tone/accumulator_b1_n }),
    .c({\tone/phase [2],\tone/phase_b5 [5]}),
    .clk(\tx/clk_pixel ),
    .d({\tone/phase [3],\tone/phase [5]}),
    .f({\tone/mux0_syn_121 ,open_n4519}),
    .q({open_n4523,\tone/phase [5]}));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(~A*~(C*B)))"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUTG0("(D*~(~A*~(C*B)))"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    .INIT_LUTF0(16'b1110101000000000),
    .INIT_LUTF1(16'b1011010011111110),
    .INIT_LUTG0(16'b1110101000000000),
    .INIT_LUTG1(16'b1011010011111110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tone/mux0_syn_721  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .f({\tone/mux0_syn_646 ,\tone/mux0_syn_341 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUT1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D)"),
    .INIT_LUT0(16'b1011101101111101),
    .INIT_LUT1(16'b1010101011010110),
    .MODE("LOGIC"))
    \tone/mux0_syn_724  (
    .a({\tone/accumulator [6],\tone/accumulator [6]}),
    .b({\tone/phase [1],\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/phase [3],\tone/phase [3]}),
    .f({\tone/mux0_syn_77 ,\tone/mux0_syn_658 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D)"),
    //.LUT1("(C*~D)"),
    .INIT_LUT0(16'b0011110100111001),
    .INIT_LUT1(16'b0000000011110000),
    .MODE("LOGIC"))
    \tone/mux0_syn_727  (
    .a({open_n4568,\tone/accumulator [6]}),
    .b({open_n4569,\tone/phase [1]}),
    .c({\tone/phase [2],\tone/phase [2]}),
    .d({\tone/accumulator [6],\tone/phase [3]}),
    .f({\tone/mux0_syn_639 ,\tone/mux0_syn_652 }));  // ../../../rtl/p1/dmz_tone.sv(7)
  EG_PHY_MSLICE #(
    //.LUT0("~(~D*~(A*~(~C*B)))"),
    .INIT_LUT0(16'b1111111110100010),
    .MODE("LOGIC"))
    \tone/mux8_syn_65  (
    .a({open_n4590,\tone/accumulator_b1_n }),
    .b({open_n4591,\tone/mux8_syn_58 }),
    .c({open_n4592,\leds[3]_dup_5 }),
    .d({open_n4595,\tx/serializer/reset_dup_231 }),
    .f({open_n4609,\tone/mux8_syn_2 [14]}));  // ../../../rtl/p1/dmz_tone.sv(61)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~D)"),
    .INIT_LUT0(16'b0000000000001111),
    .MODE("LOGIC"))
    \tone/mux8_syn_67  (
    .c({open_n4619,\tone/phase [1]}),
    .d({open_n4622,\tone/accumulator [6]}),
    .f({open_n4636,\tone/mux0_syn_319 }));  // ../../../rtl/p1/dmz_tone.sv(61)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~(0*~D*B*A))"),
    //.LUTF1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUTG0("(~C*~(1*~D*B*A))"),
    //.LUTG1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111100001111),
    .INIT_LUTF1(16'b1010001010000000),
    .INIT_LUTG0(16'b0000111100000111),
    .INIT_LUTG1(16'b1010001010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tone/phase_reg[1]_syn_9  (
    .a({\tone/phase_reg[3]_syn_8 ,\tone/accumulator_b1_n }),
    .b({\tone/accumulator_b1_n ,\tone/phase_reg[3]_syn_6 }),
    .c({\tone/phase_b5 [1],\tx/serializer/reset_dup_231 }),
    .clk(\tx/clk_pixel ),
    .d({\tone/phase [1],\tone/phase [4]}),
    .e({open_n4643,\tone/phase [5]}),
    .f({open_n4659,\tone/phase_reg[3]_syn_8 }),
    .q({\tone/phase [1],open_n4663}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUT1("(D*C*B*A)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1010001010000000),
    .INIT_LUT1(16'b1000000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tone/phase_reg[3]_syn_17  (
    .a({\tone/accumulator [6],\tone/phase_reg[3]_syn_8 }),
    .b({\tone/phase [1],\tone/accumulator_b1_n }),
    .c({\tone/phase [2],\tone/phase_b5 [2]}),
    .clk(\tx/clk_pixel ),
    .d(\tone/phase [3:2]),
    .f({\tone/phase_reg[3]_syn_6 ,open_n4678}),
    .q({open_n4682,\tone/phase [2]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUTF1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUTG0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUTG1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1010001010000000),
    .INIT_LUTF1(16'b1010001010000000),
    .INIT_LUTG0(16'b1010001010000000),
    .INIT_LUTG1(16'b1010001010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tone/phase_reg[4]_syn_9  (
    .a({\tone/phase_reg[3]_syn_8 ,\tone/phase_reg[3]_syn_8 }),
    .b({\tone/accumulator_b1_n ,\tone/accumulator_b1_n }),
    .c(\tone/phase_b5 [4:3]),
    .clk(\tx/clk_pixel ),
    .d(\tone/phase [4:3]),
    .q(\tone/phase [4:3]));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.MACRO("tone/lt0_syn_65"),
    //.R_POSITION("X0Y5Z0"),
    .ALUTYPE("A_LE_B"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_ce_reg_syn_5  (
    .a({open_n4706,1'b0}),
    .b({open_n4707,1'b1}),
    .clk(\tx/clk_pixel ),
    .fci(\tone/lt0_syn_42 ),
    .sr(\tx/serializer/reset_dup_231 ),
    .f({open_n4724,\tone/accumulator_b1_n }),
    .q({open_n4728,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio }));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~D*~(B)*~(C)+~D*B*~(C)+~(~D)*B*C+~D*B*C)"),
    //.LUTF1("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUTG0("~(~D*~(B)*~(C)+~D*B*~(C)+~(~D)*B*C+~D*B*C)"),
    //.LUTG1("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011111100110000),
    .INIT_LUTF1(16'b1100111111000000),
    .INIT_LUTG0(16'b0011111100110000),
    .INIT_LUTG1(16'b1100111111000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[0]_syn_4  (
    .b({\tone/mux0_syn_77 ,\tone/mux0_syn_665 }),
    .c({\tone/phase [5],\tone/phase [5]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({\tone/mux0_syn_79 ,\tone/mux0_syn_387 }),
    .sr(\tone/mux8_syn_2 [14]),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [0],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [7]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("~(~C*~(B*D))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111110011110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[12]_syn_4  (
    .b({open_n4754,\tone/phase [4]}),
    .c({open_n4755,\tone/phase [5]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({open_n4756,\tone/phase [3]}),
    .sr(\tone/mux8_syn_2 [14]),
    .q({open_n4774,\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [12]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("~(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUT1("(~D*~(B)*~(C)+~D*B*~(C)+~(~D)*B*C+~D*B*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011000000111111),
    .INIT_LUT1(16'b1100000011001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[1]_syn_4  (
    .b({\tone/mux0_syn_121 ,\tone/mux0_syn_652 }),
    .c({\tone/phase [5],\tone/phase [5]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({\tone/mux0_syn_669 ,\tone/mux0_syn_654 }),
    .sr(\tone/mux8_syn_2 [14]),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [3]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+A*B*C*D*~(0)+~(A)*B*C*~(D)*0+A*B*C*~(D)*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("~(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUTG0("(~(A)*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+A*B*C*D*~(1)+~(A)*B*C*~(D)*1+A*B*C*~(D)*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("~(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1011001111110100),
    .INIT_LUTF1(16'b0011000000111111),
    .INIT_LUTG0(16'b1100000011000000),
    .INIT_LUTG1(16'b0011000000111111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[2]_syn_4  (
    .a({open_n4794,\tone/mux0_syn_319 }),
    .b({\tone/mux0_syn_634 ,\tone/phase [2]}),
    .c({\tone/phase [5],\tone/phase [3]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({\tone/mux0_syn_636 ,\tone/phase [4]}),
    .e({open_n4795,\tone/phase [5]}),
    .sr(\tone/mux8_syn_2 [14]),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [2],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [11]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUTF1("~(~D*~(B)*~(C)+~D*B*~(C)+~(~D)*B*C+~D*B*C)"),
    //.LUTG0("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUTG1("~(~D*~(B)*~(C)+~D*B*~(C)+~(~D)*B*C+~D*B*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100111111000000),
    .INIT_LUTF1(16'b0011111100110000),
    .INIT_LUTG0(16'b1100111111000000),
    .INIT_LUTG1(16'b0011111100110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[4]_syn_4  (
    .b({\tone/mux0_syn_658 ,\tone/mux0_syn_341 }),
    .c({\tone/phase [5],\tone/phase [5]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({\tone/mux0_syn_259 ,\tone/mux0_syn_343 }),
    .sr(\tone/mux8_syn_2 [14]),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [4],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [6]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*B*C*D*~(0)+~(A)*B*C*~(D)*0+~(A)*B*C*D*0)"),
    //.LUTF1("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUTG0("(A*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*B*C*D*~(1)+~(A)*B*C*~(D)*1+~(A)*B*C*D*1)"),
    //.LUTG1("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1001101111110110),
    .INIT_LUTF1(16'b1100111111000000),
    .INIT_LUTG0(16'b0100000001000000),
    .INIT_LUTG1(16'b1100111111000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[5]_syn_4  (
    .a({open_n4838,\tone/mux0_syn_639 }),
    .b({\tone/mux0_syn_297 ,\tone/phase [1]}),
    .c({\tone/phase [5],\tone/phase [3]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({\tone/mux0_syn_299 ,\tone/phase [4]}),
    .e({open_n4839,\tone/phase [5]}),
    .sr(\tone/mux8_syn_2 [14]),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [5],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [10]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_MSLICE #(
    //.LUT0("~(~D*~(B)*~(C)+~D*B*~(C)+~(~D)*B*C+~D*B*C)"),
    //.LUT1("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011111100110000),
    .INIT_LUT1(16'b1100111111000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tone/sample_reg[8]_syn_4  (
    .b({\tone/mux0_syn_433 ,\tone/mux0_syn_646 }),
    .c({\tone/phase [5],\tone/phase [5]}),
    .ce(\tone/accumulator_b1_n ),
    .clk(\tx/clk_pixel ),
    .d({\tone/mux0_syn_435 ,\tone/mux0_syn_483 }),
    .sr(\tone/mux8_syn_2 [14]),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [8],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [9]}));  // ../../../rtl/p1/dmz_tone.sv(60)
  EG_PHY_LSLICE #(
    //.MACRO("tone/sub0_syn_119"),
    //.R_POSITION("X0Y0Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'h0005),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/sub0_syn_119  (
    .a({\tone/accumulator [7],1'b0}),
    .b({\tone/accumulator [8],\tone/accumulator [6]}),
    .c(2'b11),
    .d(2'b11),
    .e(2'b01),
    .f({\tone/accumulator_b4 [7],open_n4895}),
    .fco(\tone/sub0_syn_102 ),
    .fx({\tone/accumulator_b4 [8],open_n4896}));  // ../../../rtl/p1/dmz_tone.sv(65)
  EG_PHY_LSLICE #(
    //.MACRO("tone/sub0_syn_119"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/sub0_syn_120  (
    .a({\tone/accumulator [11],\tone/accumulator [9]}),
    .b({\tone/accumulator [12],\tone/accumulator [10]}),
    .c(2'b11),
    .d(2'b10),
    .e(2'b11),
    .fci(\tone/sub0_syn_102 ),
    .f({\tone/accumulator_b4 [11],\tone/accumulator_b4 [9]}),
    .fco(\tone/sub0_syn_106 ),
    .fx({\tone/accumulator_b4 [12],\tone/accumulator_b4 [10]}));  // ../../../rtl/p1/dmz_tone.sv(65)
  EG_PHY_LSLICE #(
    //.MACRO("tone/sub0_syn_119"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/sub0_syn_121  (
    .a({\tone/accumulator [15],\tone/accumulator [13]}),
    .b({\tone/accumulator [16],\tone/accumulator [14]}),
    .c(2'b11),
    .d(2'b11),
    .e(2'b00),
    .fci(\tone/sub0_syn_106 ),
    .f({\tone/accumulator_b4 [15],\tone/accumulator_b4 [13]}),
    .fco(\tone/sub0_syn_110 ),
    .fx({\tone/accumulator_b4 [16],\tone/accumulator_b4 [14]}));  // ../../../rtl/p1/dmz_tone.sv(65)
  EG_PHY_LSLICE #(
    //.MACRO("tone/sub0_syn_119"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/sub0_syn_122  (
    .a({\tone/accumulator [19],\tone/accumulator [17]}),
    .b({\tone/accumulator [20],\tone/accumulator [18]}),
    .c(2'b11),
    .d(2'b10),
    .e(2'b11),
    .fci(\tone/sub0_syn_110 ),
    .f({\tone/accumulator_b4 [19],\tone/accumulator_b4 [17]}),
    .fco(\tone/sub0_syn_114 ),
    .fx({\tone/accumulator_b4 [20],\tone/accumulator_b4 [18]}));  // ../../../rtl/p1/dmz_tone.sv(65)
  EG_PHY_LSLICE #(
    //.MACRO("tone/sub0_syn_119"),
    //.R_POSITION("X0Y2Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tone/sub0_syn_123  (
    .a({\tone/accumulator [23],\tone/accumulator [21]}),
    .b({\tone/accumulator [24],\tone/accumulator [22]}),
    .c(2'b11),
    .d(2'b01),
    .e(2'b11),
    .fci(\tone/sub0_syn_114 ),
    .f({\tone/accumulator_b4 [23],\tone/accumulator_b4 [21]}),
    .fx({\tone/accumulator_b4 [24],\tone/accumulator_b4 [22]}));  // ../../../rtl/p1/dmz_tone.sv(65)
  EG_PHY_LSLICE #(
    //.MACRO("tx/add12_syn_63"),
    //.R_POSITION("X0Y0Z0"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/add12_syn_63  (
    .a(2'b00),
    .b(2'b01),
    .c(2'b00),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [1],1'b1}),
    .e({\tx/cx [2],\tx/cx [0]}),
    .mi(\tx/cx_b4 [9:8]),
    .sr(\tx/mux11_syn_2 [7]),
    .f({\tx/cx_b4 [1],open_n4985}),
    .fco(\tx/add12_syn_55 ),
    .fx({\tx/cx_b4 [2],open_n4986}),
    .q(\tx/cx [9:8]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(223)
  EG_PHY_LSLICE #(
    //.MACRO("tx/add12_syn_63"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/add12_syn_64  (
    .a(2'b00),
    .b(2'b00),
    .c(2'b00),
    .d({\tx/cx [5],\tx/cx [3]}),
    .e({\tx/cx [6],\tx/cx [4]}),
    .fci(\tx/add12_syn_55 ),
    .f({\tx/cx_b4 [5],\tx/cx_b4 [3]}),
    .fco(\tx/add12_syn_59 ),
    .fx({\tx/cx_b4 [6],\tx/cx_b4 [4]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(223)
  EG_PHY_LSLICE #(
    //.MACRO("tx/add12_syn_63"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/add12_syn_65  (
    .a(2'b00),
    .b({open_n5005,1'b0}),
    .c(2'b00),
    .d({\tx/cx [9],\tx/cx [7]}),
    .e({open_n5008,\tx/cx [8]}),
    .fci(\tx/add12_syn_59 ),
    .f({\tx/cx_b4 [9],\tx/cx_b4 [7]}),
    .fx({open_n5024,\tx/cx_b4 [8]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(223)
  EG_PHY_LSLICE #(
    //.MACRO("tx/add13_syn_62"),
    //.R_POSITION("X0Y0Z0"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/add13_syn_62  (
    .a({\tx/cy [1],1'b0}),
    .b({\tx/cy [2],\tx/cy [0]}),
    .c(2'b00),
    .ce(\tx/cx_b3_n ),
    .clk(\tx/clk_pixel ),
    .d(2'b01),
    .e(2'b01),
    .mi(\tx/cy_b5 [9:8]),
    .sr(\tx/mux12_syn_2 [9]),
    .f({\tx/cy_b5 [1],open_n5039}),
    .fco(\tx/add13_syn_54 ),
    .fx({\tx/cy_b5 [2],open_n5040}),
    .q(\tx/cy [9:8]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(224)
  EG_PHY_LSLICE #(
    //.MACRO("tx/add13_syn_62"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/add13_syn_63  (
    .a({\tx/cy [5],\tx/cy [3]}),
    .b({\tx/cy [6],\tx/cy [4]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b00),
    .fci(\tx/add13_syn_54 ),
    .f({\tx/cy_b5 [5],\tx/cy_b5 [3]}),
    .fco(\tx/add13_syn_58 ),
    .fx({\tx/cy_b5 [6],\tx/cy_b5 [4]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(224)
  EG_PHY_LSLICE #(
    //.MACRO("tx/add13_syn_62"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/add13_syn_64  (
    .a({\tx/cy [9],\tx/cy [7]}),
    .b({open_n5059,\tx/cy [8]}),
    .c(2'b00),
    .d(2'b00),
    .e({open_n5062,1'b0}),
    .fci(\tx/add13_syn_58 ),
    .f({\tx/cy_b5 [9],\tx/cy_b5 [7]}),
    .fx({open_n5078,\tx/cy_b5 [8]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(224)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~C*~D)"),
    //.LUTG0("~(~C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111111110000),
    .INIT_LUTG0(16'b1111111111110000),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/control_data_reg[2]_syn_4  (
    .c({open_n5085,\tx/true_hdmi_output$video_preamble }),
    .clk(\tx/clk_pixel ),
    .d({open_n5087,\tx/true_hdmi_output$data_island_preamble }),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({open_n5109,\tx/tmds_gen[1]$tmds_channel/control_data [0]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D)"),
    //.LUTG0("(~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000011111111),
    .INIT_LUTG0(16'b0000000011111111),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cx_reg[0]_syn_4  (
    .clk(\tx/clk_pixel ),
    .d({open_n5117,\tx/cx [0]}),
    .sr(\tx/mux11_syn_2 [7]),
    .f({open_n5134,\tx/cx[0]_syn_2 }),
    .q({open_n5138,\tx/cx [0]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cx_reg[1]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({open_n5158,\tx/cx_b4 [1]}),
    .sr(\tx/mux11_syn_2 [7]),
    .q({open_n5164,\tx/cx [1]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cx_reg[2]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/cx_b4 [2],\tx/cx_b4 [7]}),
    .sr(\tx/mux11_syn_2 [7]),
    .q({\tx/cx [2],\tx/cx [7]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cx_reg[3]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/cx_b4 [3],\tx/cx_b4 [6]}),
    .sr(\tx/mux11_syn_2 [7]),
    .q({\tx/cx [3],\tx/cx [6]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cx_reg[4]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/cx_b4 [4],\tx/cx_b4 [5]}),
    .sr(\tx/mux11_syn_2 [7]),
    .q({\tx/cx [4],\tx/cx [5]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_MSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cy_reg[1]_syn_3  (
    .ce(\tx/cx_b3_n ),
    .clk(\tx/clk_pixel ),
    .mi({\tx/cy_b5 [1],\tx/cy_b5 [2]}),
    .sr(\tx/mux12_syn_2 [9]),
    .q({\tx/cy [1],\tx/cy [2]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D*C*~B*~A)"),
    //.LUTF1("(D*~C*~B*~A)"),
    //.LUTG0("(~D*C*~B*~A)"),
    //.LUTG1("(D*~C*~B*~A)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000000010000),
    .INIT_LUTF1(16'b0000000100000000),
    .INIT_LUTG0(16'b0000000000010000),
    .INIT_LUTG1(16'b0000000100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cy_reg[3]_syn_4  (
    .a({\tx/cy [6],\tx/cy [0]}),
    .b({\tx/cy [7],\tx/cy [1]}),
    .c({\tx/cy [8],\tx/cy [3]}),
    .ce(\tx/cx_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [9],\tx/cy [4]}),
    .mi({\tx/cy_b5 [3],\tx/cy_b5 [4]}),
    .sr(\tx/mux12_syn_2 [9]),
    .f({\tx/mux12_syn_40 ,\tx/mux12_syn_42 }),
    .q({\tx/cy [3],\tx/cy [4]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~(~C*~(~D*~A)))"),
    //.LUTG0("(~B*~(~C*~(~D*~A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011000000110001),
    .INIT_LUTG0(16'b0011000000110001),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/cy_reg[7]_syn_4  (
    .a({open_n5285,\rgb_b1[7]_syn_12 }),
    .b({open_n5286,\rgb_b1[7]_syn_9 }),
    .c({open_n5287,rgb_b10_n}),
    .ce(\tx/cx_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({open_n5288,rgb_b12_n}),
    .mi({open_n5292,\tx/cy_b5 [7]}),
    .sr(\tx/mux12_syn_2 [9]),
    .f({open_n5304,rgb_b8[6]}),
    .q({open_n5308,\tx/cy [7]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(214)
  EG_PHY_LSLICE #(
    //.LUTF0("~(D*~(C*~B))"),
    //.LUTF1("~(~D*~(C*~B))"),
    //.LUTG0("~(D*~(C*~B))"),
    //.LUTG1("~(~D*~(C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011000011111111),
    .INIT_LUTF1(16'b1111111100110000),
    .INIT_LUTG0(16'b0011000011111111),
    .INIT_LUTG1(16'b1111111100110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/data_island_data_reg[10]_syn_4  (
    .b({\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ,\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n }),
    .c({\tx/true_hdmi_output$packet_assembler/mux14_syn_260 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_157 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_142 }),
    .sr(\tx/serializer/reset_dup_234 ),
    .q(\tx/tmds_gen[2]$tmds_channel/data_island_data [2:1]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~D*~(C*~B))"),
    //.LUTF1("~(~D*~(C*~B))"),
    //.LUTG0("~(~D*~(C*~B))"),
    //.LUTG1("~(~D*~(C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111100110000),
    .INIT_LUTF1(16'b1111111100110000),
    .INIT_LUTG0(16'b1111111100110000),
    .INIT_LUTG1(16'b1111111100110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/data_island_data_reg[11]_syn_4  (
    .b({\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ,\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n }),
    .c({\tx/true_hdmi_output$packet_assembler/mux14_syn_363 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_54 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[3]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0]_b2_n }),
    .sr(\tx/serializer/reset_dup_234 ),
    .q({\tx/tmds_gen[2]$tmds_channel/data_island_data [3],\tx/tmds_gen[2]$tmds_channel/data_island_data [0]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    //.LUT0("~(~D*~(C*~B))"),
    //.LUT1("~(~D*~(C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111100110000),
    .INIT_LUT1(16'b1111111100110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/data_island_data_reg[4]_syn_4  (
    .b({\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ,\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n }),
    .c({\tx/true_hdmi_output$packet_assembler/mux15_syn_56 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_263 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next[0]_b2_n ,\tx/true_hdmi_output$packet_assembler/mux5_syn_55 }),
    .sr(\tx/serializer/reset_dup_234 ),
    .q({\tx/tmds_gen[1]$tmds_channel/data_island_data [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    //.LUT0("~(~D*~(C*~B))"),
    //.LUT1("~(D*~(C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111100110000),
    .INIT_LUT1(16'b0011000011111111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/data_island_data_reg[5]_syn_4  (
    .b({\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ,\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n }),
    .c({\tx/true_hdmi_output$packet_assembler/mux15_syn_158 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_369 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_103 ,\tx/true_hdmi_output$packet_assembler/mux7_syn_51 }),
    .sr(\tx/serializer/reset_dup_234 ),
    .q({\tx/tmds_gen[1]$tmds_channel/data_island_data [1],\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt0_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt0_syn_27  (
    .a(2'b11),
    .b({\tx/cx [4],open_n5397}),
    .fco(\tx/lt0_syn_6 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt0_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt0_syn_30  (
    .a(2'b00),
    .b(\tx/cx [6:5]),
    .fci(\tx/lt0_syn_6 ),
    .fco(\tx/lt0_syn_10 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt0_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt0_syn_33  (
    .a(2'b01),
    .b(\tx/cx [8:7]),
    .fci(\tx/lt0_syn_10 ),
    .fco(\tx/lt0_syn_14 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt0_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt0_syn_36  (
    .a(2'b01),
    .b({1'b1,\tx/cx [9]}),
    .fci(\tx/lt0_syn_14 ),
    .f({\tx/hsync_n2 ,open_n5489}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt10_syn_34"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/lt10_syn_34  (
    .a(2'b11),
    .b({\tx/cx [2],open_n5495}),
    .clk(\tx/clk_pixel ),
    .mi({\tx/rgb [6],\tx/rgb [4]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .fco(\tx/lt10_syn_7 ),
    .q({\tx/tmds_gen[0]$tmds_channel/video_data [6],\tx/tmds_gen[0]$tmds_channel/video_data [4]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt10_syn_34"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt10_syn_37  (
    .a(2'b00),
    .b(\tx/cx [4:3]),
    .fci(\tx/lt10_syn_7 ),
    .fco(\tx/lt10_syn_11 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt10_syn_34"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt10_syn_40  (
    .a(2'b00),
    .b(\tx/cx [6:5]),
    .fci(\tx/lt10_syn_11 ),
    .fco(\tx/lt10_syn_15 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt10_syn_34"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt10_syn_43  (
    .a(2'b01),
    .b(\tx/cx [8:7]),
    .fci(\tx/lt10_syn_15 ),
    .fco(\tx/lt10_syn_19 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt10_syn_34"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt10_syn_46  (
    .a(2'b01),
    .b({1'b1,\tx/cx [9]}),
    .fci(\tx/lt10_syn_19 ),
    .f({\tx/true_hdmi_output$data_island_preamble_n5 ,open_n5605}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt11_syn_35"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt11_syn_35  (
    .a({\tx/cx [2],1'b0}),
    .b({1'b1,open_n5611}),
    .fco(\tx/lt11_syn_8 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt11_syn_35"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt11_syn_38  (
    .a(\tx/cx [4:3]),
    .b(2'b01),
    .fci(\tx/lt11_syn_8 ),
    .fco(\tx/lt11_syn_12 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt11_syn_35"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt11_syn_41  (
    .a(\tx/cx [6:5]),
    .b(2'b00),
    .fci(\tx/lt11_syn_12 ),
    .fco(\tx/lt11_syn_16 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt11_syn_35"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt11_syn_44  (
    .a(\tx/cx [8:7]),
    .b(2'b01),
    .fci(\tx/lt11_syn_16 ),
    .fco(\tx/lt11_syn_20 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt11_syn_35"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt11_syn_47  (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b11),
    .fci(\tx/lt11_syn_20 ),
    .f({\tx/true_hdmi_output$data_island_preamble_n4 ,open_n5727}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(296)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt12_syn_36"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt12_syn_36  (
    .a(2'b11),
    .b({\tx/cy [1],open_n5733}),
    .fco(\tx/lt12_syn_6 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt12_syn_36"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt12_syn_39  (
    .a(2'b10),
    .b(\tx/cy [3:2]),
    .fci(\tx/lt12_syn_6 ),
    .fco(\tx/lt12_syn_10 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt12_syn_36"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt12_syn_42  (
    .a(2'b10),
    .b(\tx/cy [5:4]),
    .fci(\tx/lt12_syn_10 ),
    .fco(\tx/lt12_syn_14 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt12_syn_36"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt12_syn_45  (
    .a(2'b11),
    .b(\tx/cy [7:6]),
    .fci(\tx/lt12_syn_14 ),
    .fco(\tx/lt12_syn_18 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt12_syn_36"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt12_syn_48  (
    .a(2'b01),
    .b(\tx/cy [9:8]),
    .fci(\tx/lt12_syn_18 ),
    .fco(\tx/lt12_syn_22 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt12_syn_36"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt12_syn_50  (
    .a({open_n5855,1'b0}),
    .b({open_n5856,1'b1}),
    .fci(\tx/lt12_syn_22 ),
    .f({open_n5875,\tx/vsync_n11 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt13_syn_33"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/lt13_syn_33  (
    .a({\tx/cy [2],1'b0}),
    .b({1'b1,open_n5881}),
    .ce(\tx/cx_b3_n ),
    .clk(\tx/clk_pixel ),
    .mi(\tx/cy_b5 [6:5]),
    .sr(\tx/mux12_syn_2 [9]),
    .fco(\tx/lt13_syn_6 ),
    .q(\tx/cy [6:5]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt13_syn_33"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt13_syn_36  (
    .a(\tx/cy [4:3]),
    .b(2'b01),
    .fci(\tx/lt13_syn_6 ),
    .fco(\tx/lt13_syn_10 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt13_syn_33"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt13_syn_39  (
    .a(\tx/cy [6:5]),
    .b(2'b11),
    .fci(\tx/lt13_syn_10 ),
    .fco(\tx/lt13_syn_14 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt13_syn_33"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt13_syn_42  (
    .a(\tx/cy [8:7]),
    .b(2'b11),
    .fci(\tx/lt13_syn_14 ),
    .fco(\tx/lt13_syn_18 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt13_syn_33"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt13_syn_45  (
    .a({1'b0,\tx/cy [9]}),
    .b(2'b10),
    .fci(\tx/lt13_syn_18 ),
    .f({\tx/vsync_n12 ,open_n5990}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(200)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt16_syn_38"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt16_syn_38  (
    .a(2'b11),
    .b({\tx/cx [1],open_n5996}),
    .fco(\tx/lt16_syn_8 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt16_syn_38"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt16_syn_41  (
    .a(2'b11),
    .b(\tx/cx [3:2]),
    .fci(\tx/lt16_syn_8 ),
    .fco(\tx/lt16_syn_12 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt16_syn_38"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt16_syn_44  (
    .a(2'b01),
    .b(\tx/cx [5:4]),
    .fci(\tx/lt16_syn_12 ),
    .fco(\tx/lt16_syn_16 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt16_syn_38"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt16_syn_47  (
    .a(2'b00),
    .b(\tx/cx [7:6]),
    .fci(\tx/lt16_syn_16 ),
    .fco(\tx/lt16_syn_20 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt16_syn_38"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt16_syn_50  (
    .a(2'b11),
    .b(\tx/cx [9:8]),
    .fci(\tx/lt16_syn_20 ),
    .fco(\tx/lt16_syn_24 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt16_syn_38"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt16_syn_52  (
    .a({open_n6118,1'b0}),
    .b({open_n6119,1'b1}),
    .fci(\tx/lt16_syn_24 ),
    .f({open_n6138,\tx/true_hdmi_output$video_guard_n6 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt18_syn_39"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt18_syn_39  (
    .a({\tx/cy [0],1'b0}),
    .b({1'b1,open_n6144}),
    .fco(\tx/lt18_syn_6 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt18_syn_39"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt18_syn_42  (
    .a(\tx/cy [2:1]),
    .b(2'b11),
    .fci(\tx/lt18_syn_6 ),
    .fco(\tx/lt18_syn_10 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt18_syn_39"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt18_syn_45  (
    .a(\tx/cy [4:3]),
    .b(2'b11),
    .fci(\tx/lt18_syn_10 ),
    .fco(\tx/lt18_syn_14 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt18_syn_39"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt18_syn_48  (
    .a(\tx/cy [6:5]),
    .b(2'b10),
    .fci(\tx/lt18_syn_14 ),
    .fco(\tx/lt18_syn_18 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt18_syn_39"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt18_syn_51  (
    .a(\tx/cy [8:7]),
    .b(2'b11),
    .fci(\tx/lt18_syn_18 ),
    .fco(\tx/lt18_syn_22 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt18_syn_39"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt18_syn_54  (
    .a({1'b0,\tx/cy [9]}),
    .b(2'b10),
    .fci(\tx/lt18_syn_22 ),
    .f({\tx/true_hdmi_output$video_guard_n9 ,open_n6284}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(257)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt19_syn_37"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt19_syn_37  (
    .a(2'b11),
    .b({\tx/cx [1],open_n6290}),
    .fco(\tx/lt19_syn_7 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt19_syn_37"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt19_syn_40  (
    .a(2'b01),
    .b(\tx/cx [3:2]),
    .fci(\tx/lt19_syn_7 ),
    .fco(\tx/lt19_syn_11 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt19_syn_37"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt19_syn_43  (
    .a(2'b01),
    .b(\tx/cx [5:4]),
    .fci(\tx/lt19_syn_11 ),
    .fco(\tx/lt19_syn_15 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt19_syn_37"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt19_syn_46  (
    .a(2'b00),
    .b(\tx/cx [7:6]),
    .fci(\tx/lt19_syn_15 ),
    .fco(\tx/lt19_syn_19 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt19_syn_37"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt19_syn_49  (
    .a(2'b11),
    .b(\tx/cx [9:8]),
    .fci(\tx/lt19_syn_19 ),
    .fco(\tx/lt19_syn_23 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt19_syn_37"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt19_syn_51  (
    .a({open_n6412,1'b0}),
    .b({open_n6413,1'b1}),
    .fci(\tx/lt19_syn_23 ),
    .f({open_n6432,\tx/true_hdmi_output$video_preamble_n4 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(258)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt3_syn_38"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/lt3_syn_38  (
    .a(2'b11),
    .b({\tx/cx [1],open_n6438}),
    .clk(\tx/clk_pixel ),
    .mi({open_n6454,reset_pipe[2]}),
    .sr(reset_async),
    .fco(\tx/lt3_syn_8 ),
    .q({open_n6459,\tx/serializer/reset_dup_231 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt3_syn_38"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt3_syn_41  (
    .a(2'b11),
    .b(\tx/cx [3:2]),
    .fci(\tx/lt3_syn_8 ),
    .fco(\tx/lt3_syn_12 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt3_syn_38"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt3_syn_44  (
    .a(2'b00),
    .b(\tx/cx [5:4]),
    .fci(\tx/lt3_syn_12 ),
    .fco(\tx/lt3_syn_16 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt3_syn_38"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt3_syn_47  (
    .a(2'b10),
    .b(\tx/cx [7:6]),
    .fci(\tx/lt3_syn_16 ),
    .fco(\tx/lt3_syn_20 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt3_syn_38"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt3_syn_50  (
    .a(2'b10),
    .b(\tx/cx [9:8]),
    .fci(\tx/lt3_syn_20 ),
    .fco(\tx/lt3_syn_24 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt3_syn_38"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt3_syn_52  (
    .a({open_n6556,1'b0}),
    .b({open_n6557,1'b1}),
    .fci(\tx/lt3_syn_24 ),
    .f({open_n6576,\tx/true_hdmi_output$data_island_period_instantaneous_n3 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt4_syn_38"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt4_syn_38  (
    .a({\tx/cx [1],1'b0}),
    .b({1'b1,open_n6582}),
    .fco(\tx/lt4_syn_8 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt4_syn_38"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt4_syn_41  (
    .a(\tx/cx [3:2]),
    .b(2'b11),
    .fci(\tx/lt4_syn_8 ),
    .fco(\tx/lt4_syn_12 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt4_syn_38"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt4_syn_44  (
    .a(\tx/cx [5:4]),
    .b(2'b00),
    .fci(\tx/lt4_syn_12 ),
    .fco(\tx/lt4_syn_16 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt4_syn_38"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt4_syn_47  (
    .a(\tx/cx [7:6]),
    .b(2'b00),
    .fci(\tx/lt4_syn_16 ),
    .fco(\tx/lt4_syn_20 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt4_syn_38"),
    //.R_POSITION("X0Y2Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt4_syn_50  (
    .a(\tx/cx [9:8]),
    .b(2'b11),
    .fci(\tx/lt4_syn_20 ),
    .fco(\tx/lt4_syn_24 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt4_syn_38"),
    //.R_POSITION("X0Y2Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt4_syn_52  (
    .a({open_n6704,1'b0}),
    .b({open_n6705,1'b1}),
    .fci(\tx/lt4_syn_24 ),
    .f({open_n6724,\tx/true_hdmi_output$data_island_period_instantaneous_n2 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(275)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt5_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt5_syn_27  (
    .a({\tx/cx [4],1'b0}),
    .b({1'b1,open_n6730}),
    .fco(\tx/lt5_syn_6 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt5_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt5_syn_30  (
    .a(\tx/cx [6:5]),
    .b(2'b11),
    .fci(\tx/lt5_syn_6 ),
    .fco(\tx/lt5_syn_10 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt5_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt5_syn_33  (
    .a(\tx/cx [8:7]),
    .b(2'b01),
    .fci(\tx/lt5_syn_10 ),
    .fco(\tx/lt5_syn_14 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt5_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt5_syn_36  (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b11),
    .fci(\tx/lt5_syn_14 ),
    .f({\tx/hsync_n3 ,open_n6822}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(192)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt9_syn_28"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/lt9_syn_28  (
    .a({\tx/cx [4],1'b0}),
    .b({1'b1,open_n6828}),
    .clk(\tx/clk_pixel ),
    .mi({\tx/rgb [7],\tx/rgb [2]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .fco(\tx/lt9_syn_7 ),
    .q({\tx/tmds_gen[0]$tmds_channel/video_data [7],\tx/tmds_gen[0]$tmds_channel/video_data [2]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt9_syn_28"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt9_syn_31  (
    .a(\tx/cx [6:5]),
    .b(2'b00),
    .fci(\tx/lt9_syn_7 ),
    .fco(\tx/lt9_syn_11 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt9_syn_28"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt9_syn_34  (
    .a(\tx/cx [8:7]),
    .b(2'b10),
    .fci(\tx/lt9_syn_11 ),
    .fco(\tx/lt9_syn_15 ));  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  EG_PHY_MSLICE #(
    //.MACRO("tx/lt9_syn_28"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/lt9_syn_37  (
    .a({1'b0,\tx/cx [9]}),
    .b(2'b11),
    .fci(\tx/lt9_syn_15 ),
    .f({\tx/true_hdmi_output$data_island_guard_n11 ,open_n6914}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(294)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~A*~(~B*~(D*~C)))"),
    //.LUTF1("~(~D*~(~A*~(~C*~B)))"),
    //.LUTG0("(~1*~A*~(~B*~(D*~C)))"),
    //.LUTG1("~(~D*~(~A*~(~C*~B)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0100010101000100),
    .INIT_LUTF1(16'b1111111101010100),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1111111101010100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/mode_reg[1]_syn_4  (
    .a({\tx/true_hdmi_output$data_island_guard ,\tx/true_hdmi_output$data_island_guard }),
    .b({\tx/true_hdmi_output$packet_assembler/data_island_period ,\tx/true_hdmi_output$packet_assembler/data_island_period }),
    .c({\tx/true_hdmi_output$video_guard ,\tx/true_hdmi_output$video_guard }),
    .clk(\tx/clk_pixel ),
    .d({\tx/serializer/reset_dup_232 ,\tx/video_data_period }),
    .e({open_n6921,\tx/serializer/reset_dup_232 }),
    .q(\tx/mode [1:0]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    //.LUT0("~(C*D)"),
    //.LUT1("~(~C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111111111111),
    .INIT_LUT1(16'b1111111111110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/mux11_syn_30  (
    .c({\tx/serializer/reset_dup_229 ,\tx/hsync_n3 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx_b3_n ,\tx/hsync_n2 }),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({\tx/mux11_syn_2 [7],open_n6959}),
    .q({open_n6963,\tx/tmds_gen[0]$tmds_channel/control_data [0]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(216)
  EG_PHY_LSLICE #(
    //.LUTF0("~((D*C)*~((0@B))*~(A)+(D*C)*(0@B)*~(A)+~((D*C))*(0@B)*A+(D*C)*(0@B)*A)"),
    //.LUTF1("(~D*C*B*A)"),
    //.LUTG0("~((D*C)*~((1@B))*~(A)+(D*C)*(1@B)*~(A)+~((D*C))*(1@B)*A+(D*C)*(1@B)*A)"),
    //.LUTG1("(~D*C*B*A)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0010011101110111),
    .INIT_LUTF1(16'b0000000010000000),
    .INIT_LUTG0(16'b1000110111011101),
    .INIT_LUTG1(16'b0000000010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/mux12_syn_49  (
    .a({\tx/mux12_syn_40 ,\tx/vsync_syn_4 }),
    .b({\tx/mux12_syn_42 ,\tx/hsync_n2 }),
    .c({\tx/cy [2],\tx/vsync_n11 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [5],\tx/vsync_n12 }),
    .e({open_n6965,\tx/cy [1]}),
    .sr(\tx/serializer/reset_dup_229 ),
    .f({\tx/cy_b4_n ,open_n6980}),
    .q({open_n6984,\tx/tmds_gen[0]$tmds_channel/control_data [1]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(216)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[0]$shift_reg[0]_syn_4  (
    .b({\tx/serializer/lane[0]$shift [2],\tx/serializer/lane[0]$shift [3]}),
    .c({\tx/tmds_gen[0]$tmds_channel/tmds [0],\tx/tmds_gen[0]$tmds_channel/tmds [1]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_237 ),
    .q({\tx/serializer/lane[0]$shift [0],\tx/serializer/lane[0]$shift [1]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[0]$shift_reg[2]_syn_4  (
    .b({\tx/serializer/lane[0]$shift [4],\tx/serializer/lane[0]$shift [5]}),
    .c({\tx/tmds_gen[0]$tmds_channel/tmds [2],\tx/tmds_gen[0]$tmds_channel/tmds [3]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .q({\tx/serializer/lane[0]$shift [2],\tx/serializer/lane[0]$shift [3]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[0]$shift_reg[4]_syn_4  (
    .b({\tx/serializer/lane[0]$shift [6],\tx/serializer/lane[0]$shift [7]}),
    .c({\tx/tmds_gen[0]$tmds_channel/tmds [4],\tx/tmds_gen[0]$tmds_channel/tmds [5]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .q({\tx/serializer/lane[0]$shift [4],\tx/serializer/lane[0]$shift [5]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001111),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[0]$shift_reg[7]_syn_4  (
    .b({\tx/serializer/lane[0]$shift [9],open_n7051}),
    .c({\tx/tmds_gen[0]$tmds_channel/tmds [7],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({open_n7065,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_4 }),
    .q({\tx/serializer/lane[0]$shift [7],open_n7069}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(C*D)"),
    //.LUT1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000000000000),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[0]$shift_reg[8]_syn_4  (
    .c({\tx/tmds_gen[0]$tmds_channel/tmds [8],\tx/tmds_gen[0]$tmds_channel/tmds [9]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .q({\tx/serializer/lane[0]$shift [8],\tx/serializer/lane[0]$shift [9]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[1]$shift_reg[1]_syn_4  (
    .b({open_n7094,\tx/serializer/lane[1]$shift [3]}),
    .c({open_n7095,\tx/tmds_gen[1]$tmds_channel/tmds [1]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({open_n7097,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset ),
    .q({open_n7119,\tx/serializer/lane[1]$shift [1]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[1]$shift_reg[2]_syn_4  (
    .b({open_n7122,\tx/serializer/lane[1]$shift [4]}),
    .c({open_n7123,\tx/tmds_gen[1]$tmds_channel/tmds [2]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({open_n7125,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset ),
    .q({open_n7147,\tx/serializer/lane[1]$shift [2]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000000000),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000000000000),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[1]$shift_reg[3]_syn_4  (
    .b({\tx/serializer/lane[1]$shift [5],open_n7150}),
    .c({\tx/tmds_gen[1]$tmds_channel/tmds [3],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({open_n7168,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 }),
    .q({\tx/serializer/lane[1]$shift [3],open_n7172}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~C*~B*~A)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(D*~C*~B*~A)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000100000000),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b0000000100000000),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[1]$shift_reg[5]_syn_4  (
    .a({open_n7173,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_74 }),
    .b({\tx/serializer/lane[1]$shift [7],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_15 }),
    .c({\tx/tmds_gen[1]$tmds_channel/tmds [5],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 }),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({open_n7191,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_76 }),
    .q({\tx/serializer/lane[1]$shift [5],open_n7195}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[2]$shift_reg[0]_syn_4  (
    .b({\tx/serializer/lane[2]$shift [2],\tx/serializer/lane[2]$shift [3]}),
    .c({\tx/tmds_gen[2]$tmds_channel/tmds [0],\tx/tmds_gen[2]$tmds_channel/tmds [1]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_237 ),
    .q({\tx/serializer/lane[2]$shift [0],\tx/serializer/lane[2]$shift [1]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000011001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[2]$shift_reg[2]_syn_4  (
    .b({\tx/serializer/lane[2]$shift [4],\tx/serializer/lane[2]$shift [5]}),
    .c({\tx/tmds_gen[2]$tmds_channel/tmds [2],\tx/tmds_gen[2]$tmds_channel/tmds [3]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .q({\tx/serializer/lane[2]$shift [2],\tx/serializer/lane[2]$shift [3]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_LSLICE #(
    //.LUTF0("((B*~(~D*C))*~(A)*~(0)+(B*~(~D*C))*A*~(0)+~((B*~(~D*C)))*A*0+(B*~(~D*C))*A*0)"),
    //.LUTF1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG0("((B*~(~D*C))*~(A)*~(1)+(B*~(~D*C))*A*~(1)+~((B*~(~D*C)))*A*1+(B*~(~D*C))*A*1)"),
    //.LUTG1("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110000001100),
    .INIT_LUTF1(16'b1111000011001100),
    .INIT_LUTG0(16'b1010101010101010),
    .INIT_LUTG1(16'b1111000011001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[2]$shift_reg[5]_syn_4  (
    .a({open_n7240,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_140 }),
    .b({\tx/serializer/lane[2]$shift [7],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_118 }),
    .c({\tx/tmds_gen[2]$tmds_channel/tmds [5],\tx/true_hdmi_output$packet_assembler/mux14_syn_146 }),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .e({open_n7242,\tx/true_hdmi_output$packet_assembler/counter [4]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({open_n7257,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_142 }),
    .q({\tx/serializer/lane[2]$shift [5],open_n7261}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(C*D)"),
    //.LUT1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000000000000),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[2]$shift_reg[8]_syn_4  (
    .c({\tx/tmds_gen[2]$tmds_channel/tmds [8],\tx/tmds_gen[2]$tmds_channel/tmds [9]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .q({\tx/serializer/lane[2]$shift [8],\tx/serializer/lane[2]$shift [9]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("~(~C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111111110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[3]$shift_reg[0]_syn_4  (
    .c({open_n7288,\tx/serializer/lane[3]$shift [1]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({open_n7290,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset ),
    .q({open_n7308,\tx/serializer/lane[3]$shift [0]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("~(~C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111111111110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/lane[3]$shift_reg[1]_syn_4  (
    .b({open_n7311,\tx/serializer/lane[1]$shift [2]}),
    .c({\tx/serializer/lane[3]$shift [3],\tx/tmds_gen[1]$tmds_channel/tmds [0]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/serializer/lane[0]$shift_b_n ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset ),
    .q({\tx/serializer/lane[3]$shift [1],\tx/serializer/lane[1]$shift [0]}));  // ../../../rtl/p1/serializer.sv(25)
  EG_PHY_MSLICE #(
    //.LUT0("(~D)"),
    .INIT_LUT0(16'b0000000011111111),
    .MODE("LOGIC"))
    \tx/serializer/reset_syn_240  (
    .d({open_n7338,\tx/serializer/reset_dup_230 }),
    .f({open_n7352,\tx/serializer/reset_syn_2 }));  // ../../../rtl/p1/serializer.sv(3)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~C*~A)*~((~D*B))*~(0)+~(~C*~A)*(~D*B)*~(0)+~(~(~C*~A))*(~D*B)*0+~(~C*~A)*(~D*B)*0)"),
    //.LUTF1("(~(~D*~C*~B)*~(A)*~(0)+~(~D*~C*~B)*A*~(0)+~(~(~D*~C*~B))*A*0+~(~D*~C*~B)*A*0)"),
    //.LUTG0("(~(~C*~A)*~((~D*B))*~(1)+~(~C*~A)*(~D*B)*~(1)+~(~(~C*~A))*(~D*B)*1+~(~C*~A)*(~D*B)*1)"),
    //.LUTG1("(~(~D*~C*~B)*~(A)*~(1)+~(~D*~C*~B)*A*~(1)+~(~(~D*~C*~B))*A*1+~(~D*~C*~B)*A*1)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111101011111010),
    .INIT_LUTF1(16'b1111111111111100),
    .INIT_LUTG0(16'b0000000011001100),
    .INIT_LUTG1(16'b1010101010101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/serializer/sync_reg_syn_5  (
    .a({\tx/true_hdmi_output$packet_assembler/mux15_syn_156 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_16 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_88 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_360 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_67 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_6 }),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_39 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .e({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/counter [4]}),
    .mi({\tx/serializer/meta ,\tx/serializer/toggle }),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_149 ,\tx/true_hdmi_output$packet_assembler/mux7_syn_51 }),
    .q({\tx/serializer/sync ,\tx/serializer/meta }));  // ../../../rtl/p1/serializer.sv(16)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~B*D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(~C*~B*D)"),
    //.LUTG1("~(C@D)"),
    .INIT_LUTF0(16'b0000001100000000),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b0000001100000000),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/N0q_m07[2]_syn_6  (
    .b({open_n7376,\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [3]}),
    .c({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2]}),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 }),
    .f({\tx/tmds_gen[0]$tmds_channel/N0q_m07 [2],\tx/tmds_gen[0]$tmds_channel/N0q_m07 [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUT1("(D*C*~B*A)"),
    .INIT_LUT0(16'b1101101110110010),
    .INIT_LUT1(16'b0010000000000000),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/N0q_m07[3]_syn_6  (
    .a({\tx/tmds_gen[0]$tmds_channel/add2_syn_6 [1],\tx/tmds_gen[0]$tmds_channel/add2_syn_6 [1]}),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_252 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_252 }),
    .c({\tx/tmds_gen[0]$tmds_channel/add2_syn_36 ,\tx/tmds_gen[0]$tmds_channel/add2_syn_36 }),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_255 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_255 }),
    .f(\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [3:2]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*(C@D))"),
    //.LUTF1("(C@D)"),
    //.LUTG0("(B*(C@D))"),
    //.LUTG1("(C@D)"),
    .INIT_LUTF0(16'b0000110011000000),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b0000110011000000),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/acc_add[1]_syn_4  (
    .b({open_n7423,\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_267 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_265 }),
    .f({\tx/tmds_gen[0]$tmds_channel/acc_add [1],\tx/tmds_gen[0]$tmds_channel/mux9_syn_267 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@(D*(0@(B*~A))))"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG0("(C@(D*(1@(B*~A))))"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    .INIT_LUTF0(16'b1011010011110000),
    .INIT_LUTF1(16'b0101011101100111),
    .INIT_LUTG0(16'b0100101111110000),
    .INIT_LUTG1(16'b0101011101100111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/acc_add[3]_syn_7  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_265 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_265 }),
    .b({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 ,\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1]}),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .e({open_n7450,\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 }),
    .f({\tx/tmds_gen[0]$tmds_channel/acc_add[3]_syn_2 ,\tx/tmds_gen[0]$tmds_channel/acc_add [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.LUT0("(D@(~(0*~C)*~(A)*~(B)+~(0*~C)*A*~(B)+~(~(0*~C))*A*B+~(0*~C)*A*B))"),
    //.LUT1("(D@(~(1*~C)*~(A)*~(B)+~(1*~C)*A*~(B)+~(~(1*~C))*A*B+~(1*~C)*A*B))"),
    .INIT_LUT0(16'b0100010010111011),
    .INIT_LUT1(16'b0100011110111000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[0]$tmds_channel/acc_add[3]_syn_9  (
    .a({\tx/tmds_gen[0]$tmds_channel/acc_add[3]_syn_2 ,\tx/tmds_gen[0]$tmds_channel/acc_add[3]_syn_2 }),
    .b({\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 }),
    .d({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2]}),
    .mi({open_n7483,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .fx({open_n7488,\tx/tmds_gen[0]$tmds_channel/acc_add [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)*~(A)*~(D)+~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)*A*~(D)+~(~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0))*A*D+~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)*A*D)"),
    //.LUTF1("~(B*~((D@C))*~(A)+B*(D@C)*~(A)+~(B)*(D@C)*A+B*(D@C)*A)"),
    //.LUTG0("~(~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)*~(A)*~(D)+~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)*A*~(D)+~(~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1))*A*D+~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)*A*D)"),
    //.LUTG1("~(B*~((D@C))*~(A)+B*(D@C)*~(A)+~(B)*(D@C)*A+B*(D@C)*A)"),
    .INIT_LUTF0(16'b0101010111001100),
    .INIT_LUTF1(16'b1011000100011011),
    .INIT_LUTG0(16'b0101010111110000),
    .INIT_LUTG1(16'b1011000100011011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/acc_add[4]_syn_12  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_265 ,\tx/tmds_gen[0]$tmds_channel/acc_add[4]_syn_4 }),
    .b({\tx/tmds_gen[0]$tmds_channel/acc_add_b2 [4],\tx/tmds_gen[0]$tmds_channel/acc_add_b5 [4]}),
    .c({\tx/tmds_gen[0]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[0]$tmds_channel/acc_add_b4 [4]}),
    .d({\tx/tmds_gen[0]$tmds_channel/add15_syn_33 ,\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 }),
    .e({open_n7493,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .f({\tx/tmds_gen[0]$tmds_channel/acc_add[4]_syn_4 ,\tx/tmds_gen[0]$tmds_channel/acc_add [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~C*B*~A)"),
    //.LUTF1("(A@(D*C*B))"),
    //.LUTG0("(D*~C*B*~A)"),
    //.LUTG1("(A@(D*C*B))"),
    .INIT_LUTF0(16'b0000010000000000),
    .INIT_LUTF1(16'b0110101010101010),
    .INIT_LUTG0(16'b0000010000000000),
    .INIT_LUTG1(16'b0110101010101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/acc_add[4]_syn_15  (
    .a({\tx/tmds_gen[0]$tmds_channel/acc_add_b5 [4],\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1]}),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 ,\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 }),
    .f({\tx/tmds_gen[0]$tmds_channel/acc_add_b2 [4],\tx/tmds_gen[0]$tmds_channel/add15_syn_33 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("ADD_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/acc_reg[1]_syn_4  (
    .a({\tx/tmds_gen[0]$tmds_channel/acc [1],1'b0}),
    .b({\tx/tmds_gen[0]$tmds_channel/acc_add [1],open_n7538}),
    .clk(\tx/clk_pixel ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .fco(\tx/tmds_gen[0]$tmds_channel/add1_syn_23 ),
    .q({\tx/tmds_gen[0]$tmds_channel/acc [1],open_n7560}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("ADD"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/acc_reg[3]_syn_4  (
    .a(\tx/tmds_gen[0]$tmds_channel/acc [3:2]),
    .b(\tx/tmds_gen[0]$tmds_channel/acc_add [3:2]),
    .clk(\tx/clk_pixel ),
    .fci(\tx/tmds_gen[0]$tmds_channel/add1_syn_23 ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .fco(\tx/tmds_gen[0]$tmds_channel/add1_syn_25 ),
    .q(\tx/tmds_gen[0]$tmds_channel/acc [3:2]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("ADD"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/acc_reg[4]_syn_4  (
    .a({open_n7581,\tx/tmds_gen[0]$tmds_channel/acc [4]}),
    .b({open_n7582,\tx/tmds_gen[0]$tmds_channel/acc_add [4]}),
    .clk(\tx/clk_pixel ),
    .fci(\tx/tmds_gen[0]$tmds_channel/add1_syn_25 ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .q({open_n7604,\tx/tmds_gen[0]$tmds_channel/acc [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*~(B)*C*D*0+~(A)*B*C*D*0)"),
    //.LUTF1("(~C*~(B*~D))"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*~(B)*C*D*1+~(A)*B*C*D*1)"),
    //.LUTG1("(~C*~(B*~D))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000001100110011),
    .INIT_LUTF1(16'b0000111100000011),
    .INIT_LUTG0(16'b0101001101010011),
    .INIT_LUTG1(16'b0000111100000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_371  (
    .a({open_n7605,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_271 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_228 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_310 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_312 ,\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .e({open_n7606,\tx/mode [0]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_314 ,open_n7622}),
    .q({open_n7626,\tx/tmds_gen[0]$tmds_channel/tmds [8]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(~C*(0@D@A)))"),
    //.LUTF1("~(C@B@D)"),
    //.LUTG0("~(~B*~(~C*(1@D@A)))"),
    //.LUTG1("~(C@B@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110111001110),
    .INIT_LUTF1(16'b0011110011000011),
    .INIT_LUTG0(16'b1100111011001101),
    .INIT_LUTG1(16'b0011110011000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_373  (
    .a({open_n7627,\tx/tmds_gen[0]$tmds_channel/mux9_syn_267 }),
    .b({\tx/tmds_gen[0]$tmds_channel/video_data [6],\tx/tmds_gen[0]$tmds_channel/mux9_syn_307 }),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [7],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/q_m_b[5]_syn_2 ,\tx/tmds_gen[0]$tmds_channel/video_data [0]}),
    .e({open_n7628,\tx/tmds_gen[0]$tmds_channel/video_data [1]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_242 ,open_n7644}),
    .q({open_n7648,\tx/tmds_gen[0]$tmds_channel/tmds [1]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D))"),
    //.LUTF1("(A*(B*~(C)*~(D)*~(0)+B*C*~(D)*~(0)+B*~(C)*D*~(0)+~(B)*C*D*~(0)+B*C*~(D)*0+~(B)*~(C)*D*0+~(B)*C*D*0+B*C*D*0))"),
    //.LUTG0("(~1*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D))"),
    //.LUTG1("(A*(B*~(C)*~(D)*~(1)+B*C*~(D)*~(1)+B*~(C)*D*~(1)+~(B)*C*D*~(1)+B*C*~(D)*1+~(B)*~(C)*D*1+~(B)*C*D*1+B*C*D*1))"),
    .INIT_LUTF0(16'b1010111100001100),
    .INIT_LUTF1(16'b0010100010001000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1010001010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_376  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/tmds_gen[0]$tmds_channel/mux6_syn_178 }),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .c({\tx/tmds_gen[0]$tmds_channel/control_data [1],\tx/mode [0]}),
    .d({\tx/tmds_gen[0]$tmds_channel/data_island_data [2],\tx/mode [1]}),
    .e({\tx/tmds_gen[0]$tmds_channel/data_island_data [3],\tx/mode [2]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_305 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_281 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~(D*~A)*~((C*~B))*~(0)+~(D*~A)*(C*~B)*~(0)+~(~(D*~A))*(C*~B)*0+~(D*~A)*(C*~B)*0)"),
    //.LUTF1("(~D*~(~B*~(~C*A)))"),
    //.LUTG0("~(~(D*~A)*~((C*~B))*~(1)+~(D*~A)*(C*~B)*~(1)+~(~(D*~A))*(C*~B)*1+~(D*~A)*(C*~B)*1)"),
    //.LUTG1("(~D*~(~B*~(~C*A)))"),
    .INIT_LUTF0(16'b0101010100000000),
    .INIT_LUTF1(16'b0000000011001110),
    .INIT_LUTG0(16'b1100111111001111),
    .INIT_LUTG1(16'b0000000011001110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_379  (
    .a({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/mux9_syn_135 }),
    .b({\tx/mode [0],\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .c({\tx/mode [1],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .d(\tx/mode [2:1]),
    .e({open_n7673,\tx/mode [2]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_271 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_228 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D))"),
    //.LUTF1("(0*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D))"),
    //.LUTG0("(1*(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D))"),
    //.LUTG1("(1*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0000000000000000),
    .INIT_LUTG0(16'b1110100000011110),
    .INIT_LUTG1(16'b0001110111100101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_382  (
    .a({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [1],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .c({\tx/tmds_gen[0]$tmds_channel/data_island_data [2],\tx/tmds_gen[0]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[0]$tmds_channel/data_island_data [3],\tx/tmds_gen[0]$tmds_channel/data_island_data [3]}),
    .e(\tx/mode [1:0]),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_312 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_317 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*(~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+~(A)*B*~(C)*D+~(A)*B*C*D))"),
    //.LUTF1("(A*(B*~(C)*~(D)*~(0)+~(B)*C*~(D)*~(0)+B*C*~(D)*~(0)+~(B)*~(C)*D*~(0)+B*C*D*~(0)+B*~(C)*~(D)*0+B*~(C)*D*0+~(B)*C*D*0))"),
    //.LUTG0("(1*(~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+~(A)*B*~(C)*D+~(A)*B*C*D))"),
    //.LUTG1("(A*(B*~(C)*~(D)*~(1)+~(B)*C*~(D)*~(1)+B*C*~(D)*~(1)+~(B)*~(C)*D*~(1)+B*C*D*~(1)+B*~(C)*~(D)*1+B*~(C)*D*1+~(B)*C*D*1))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1000001010101000),
    .INIT_LUTG0(16'b0100011011110000),
    .INIT_LUTG1(16'b0010100000001000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_385  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .c({\tx/tmds_gen[0]$tmds_channel/control_data [1],\tx/tmds_gen[0]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[0]$tmds_channel/data_island_data [2],\tx/tmds_gen[0]$tmds_channel/data_island_data [3]}),
    .e({\tx/tmds_gen[0]$tmds_channel/data_island_data [3],\tx/mode [0]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_286 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_135 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D))"),
    //.LUTF1("(~C*~(A*~(D*~B)))"),
    //.LUTG0("(1*(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D))"),
    //.LUTG1("(~C*~(A*~(D*~B)))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0000011100000101),
    .INIT_LUTG0(16'b1110100100011110),
    .INIT_LUTG1(16'b0000011100000101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_388  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_288 ,\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_300 ,\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_269 ,\tx/tmds_gen[0]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/tmds_gen[0]$tmds_channel/data_island_data [3]}),
    .e({open_n7740,\tx/mode [1]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_302 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_273 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*~(B)*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+A*~(B)*~(C)*D*~(0)+A*B*~(C)*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(C*~B*~D)"),
    //.LUTG0("(A*~(B)*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+A*~(B)*~(C)*D*~(1)+A*B*~(C)*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(C*~B*~D)"),
    .INIT_LUTF0(16'b1110101011101010),
    .INIT_LUTF1(16'b0000000000110000),
    .INIT_LUTG0(16'b1111111100001111),
    .INIT_LUTG1(16'b0000000000110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_391  (
    .a({open_n7761,\tx/tmds_gen[0]$tmds_channel/mux9_syn_305 }),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [1],\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 }),
    .c({\tx/mode [2],\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .d({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .e({open_n7764,\tx/mode [2]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_269 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_307 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(~A*~(D*~(C@B)))"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(~A*~(D*~(C@B)))"),
    .INIT_LUTF0(16'b0001010100010101),
    .INIT_LUTF1(16'b0001010001010101),
    .INIT_LUTG0(16'b1111000000001111),
    .INIT_LUTG1(16'b0001010001010101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_394  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_281 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_286 }),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 }),
    .c(\tx/tmds_gen[0]$tmds_channel/control_data ),
    .d({\tx/mode [2],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .e({open_n7787,\tx/mode [2]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_283 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_290 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C@B@(A*~(D)*~(0)+~(A)*D*~(0)+A*D*~(0)+A*D*0))"),
    //.LUT1("(C@B@(A*~(D)*~(1)+~(A)*D*~(1)+A*D*~(1)+A*D*1))"),
    .INIT_LUT0(16'b1100001110010110),
    .INIT_LUT1(16'b1001011000111100),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_396  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .b({\tx/tmds_gen[0]$tmds_channel/video_data [0],\tx/tmds_gen[0]$tmds_channel/video_data [0]}),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [1],\tx/tmds_gen[0]$tmds_channel/video_data [1]}),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [2],\tx/tmds_gen[0]$tmds_channel/video_data [2]}),
    .mi({open_n7820,\tx/tmds_gen[0]$tmds_channel/video_data [3]}),
    .fx({open_n7825,\tx/tmds_gen[0]$tmds_channel/mux9_syn_255 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(~C*~((B@A))*~((0@D))+~C*(B@A)*~((0@D))+~(~C)*(B@A)*(0@D)+~C*(B@A)*(0@D))"),
    //.LUT1("~(~C*~((B@A))*~((1@D))+~C*(B@A)*~((1@D))+~(~C)*(B@A)*(1@D)+~C*(B@A)*(1@D))"),
    .INIT_LUT0(16'b1001100111110000),
    .INIT_LUT1(16'b1111000010011001),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_398  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_242 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_242 }),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [0],\tx/tmds_gen[0]$tmds_channel/video_data [0]}),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [1],\tx/tmds_gen[0]$tmds_channel/video_data [1]}),
    .mi({open_n7840,\tx/tmds_gen[0]$tmds_channel/video_data [3]}),
    .fx({open_n7845,\tx/tmds_gen[0]$tmds_channel/add2_syn_36 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("((D@C@B)*~(0@A))"),
    //.LUT1("((D@C@B)*~(1@A))"),
    .INIT_LUT0(16'b0100000100010100),
    .INIT_LUT1(16'b1000001000101000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_400  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_235 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_235 }),
    .b({\tx/tmds_gen[0]$tmds_channel/video_data [3],\tx/tmds_gen[0]$tmds_channel/video_data [3]}),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [4],\tx/tmds_gen[0]$tmds_channel/video_data [4]}),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [5],\tx/tmds_gen[0]$tmds_channel/video_data [5]}),
    .mi({open_n7860,\tx/tmds_gen[0]$tmds_channel/video_data [6]}),
    .fx({open_n7865,\tx/tmds_gen[0]$tmds_channel/add0_syn_50 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*B*~(C)*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUT1("(~(A)*B*~(C)*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    .INIT_LUT0(16'b0100110100000100),
    .INIT_LUT1(16'b1101111101001101),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_402  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_244 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_244 }),
    .b({\tx/tmds_gen[0]$tmds_channel/add0_syn_50 ,\tx/tmds_gen[0]$tmds_channel/add0_syn_50 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_238 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_238 }),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_230 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_230 }),
    .mi({open_n7880,\tx/tmds_gen[0]$tmds_channel/add0_syn_6 [1]}),
    .fx({open_n7885,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~((C@B)*~(A)*~(D)+(C@B)*A*~(D)+~((C@B))*A*D+(C@B)*A*D)"),
    //.LUT1("(~C*~(A*~(D*~B)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0101010111000011),
    .INIT_LUT1(16'b0000011100000101),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_404  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_288 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_275 }),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_317 ,\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_310 ,\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .d(\tx/mode [1:0]),
    .mi({open_n7898,\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [7]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_319 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_218 }),
    .q({open_n7902,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [7]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D)"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D)"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1001110101001101),
    .INIT_LUTF1(16'b1101100101001110),
    .INIT_LUTG0(16'b1001110101001101),
    .INIT_LUTG1(16'b1101100101001110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_406  (
    .a({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [1],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .c({\tx/tmds_gen[0]$tmds_channel/data_island_data [2],\tx/tmds_gen[0]$tmds_channel/data_island_data [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/data_island_data [3],\tx/tmds_gen[0]$tmds_channel/data_island_data [3]}),
    .mi({open_n7907,\tx/true_hdmi_output$data_island_guard }),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_293 ,\tx/tmds_gen[0]$tmds_channel/mux6_syn_178 }),
    .q({open_n7922,\tx/mode [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~(D@B@A))"),
    //.LUTF1("~(~A*~((~C*B))*~(D)+~A*(~C*B)*~(D)+~(~A)*(~C*B)*D+~A*(~C*B)*D)"),
    //.LUTG0("(~C*~(D@B@A))"),
    //.LUTG1("~(~A*~((~C*B))*~(D)+~A*(~C*B)*~(D)+~(~A)*(~C*B)*D+~A*(~C*B)*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000011000001001),
    .INIT_LUTF1(16'b1111001110101010),
    .INIT_LUTG0(16'b0000011000001001),
    .INIT_LUTG1(16'b1111001110101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_408  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_295 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_275 }),
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/q_m_b[5]_syn_2 }),
    .c({\tx/tmds_gen[0]$tmds_channel/control_data [1],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .d({\tx/mode [2],\tx/tmds_gen[0]$tmds_channel/video_data [6]}),
    .mi({open_n7926,\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [11]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_297 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_277 }),
    .q({open_n7941,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [11]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~(D*~C)*~(~B*~A))"),
    //.LUTF1("(D*B*~(C)+D*~(B)*C+~(D)*B*C+D*B*C)"),
    //.LUTG0("~(~(D*~C)*~(~B*~A))"),
    //.LUTG1("(D*B*~(C)+D*~(B)*C+~(D)*B*C+D*B*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0001111100010001),
    .INIT_LUTF1(16'b1111110011000000),
    .INIT_LUTG0(16'b0001111100010001),
    .INIT_LUTG1(16'b1111110011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_410  (
    .a({open_n7942,\tx/true_hdmi_output$data_island_preamble_n4 }),
    .b({\tx/tmds_gen[0]$tmds_channel/video_data [4],\tx/true_hdmi_output$data_island_period_instantaneous_n3 }),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [5],\tx/true_hdmi_output$data_island_period_instantaneous_n2 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [3],\tx/true_hdmi_output$data_island_guard_n11 }),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[0]$tmds_channel/add0_syn_6 [1],open_n7960}),
    .q({open_n7964,\tx/true_hdmi_output$data_island_guard }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C*B*D)"),
    //.LUT1("~(D@C@B@A)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100000000000000),
    .INIT_LUT1(16'b1001011001101001),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_412  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_235 ,open_n7965}),
    .b({\tx/tmds_gen[0]$tmds_channel/video_data [1],\tx/add5_syn_21 }),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [4],\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_8 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [5],\tx/true_hdmi_output$data_island_period_instantaneous }),
    .mi({open_n7977,\tx/rgb [0]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_250 ,\tx/true_hdmi_output$packet_picker/packet_enable }),
    .q({open_n7981,\tx/tmds_gen[0]$tmds_channel/video_data [0]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D)"),
    //.LUTG0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D)"),
    .INIT_LUTF0(16'b1010111111111100),
    .INIT_LUTF1(16'b0001110111101101),
    .INIT_LUTG0(16'b1010111111111100),
    .INIT_LUTG1(16'b0001110111101101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_415  (
    .a({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/mux9_syn_293 }),
    .b(\tx/tmds_gen[0]$tmds_channel/control_data ),
    .c({\tx/tmds_gen[0]$tmds_channel/data_island_data [2],\tx/mode [0]}),
    .d({\tx/tmds_gen[0]$tmds_channel/data_island_data [3],\tx/mode [1]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_300 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_295 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(~B*~D))"),
    //.LUT1("(~C*~(B*D))"),
    .INIT_LUT0(16'b1111000011000000),
    .INIT_LUT1(16'b0000001100001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_418  (
    .b({\tx/tmds_gen[0]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/control_data [1]}),
    .c({\tx/mode [2],\tx/mode [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ,\tx/tmds_gen[0]$tmds_channel/control_data [0]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_288 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_310 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(B@(~(A)*~(C)*~(D)+A*~(C)*~(D)+A*C*~(D)+~(A)*~(C)*D+~(A)*C*D+A*C*D))"),
    //.LUTF1("(~(B)*~(C)*~((D@A))+~(B)*C*~((D@A))+B*C*~((D@A))+~(B)*~(C)*(D@A)+B*~(C)*(D@A)+B*C*(D@A))"),
    //.LUTG0("(B@(~(A)*~(C)*~(D)+A*~(C)*~(D)+A*C*~(D)+~(A)*~(C)*D+~(A)*C*D+A*C*D))"),
    //.LUTG1("(~(B)*~(C)*~((D@A))+~(B)*C*~((D@A))+B*C*~((D@A))+~(B)*~(C)*(D@A)+B*~(C)*(D@A)+B*C*(D@A))"),
    .INIT_LUTF0(16'b0011100101100011),
    .INIT_LUTF1(16'b1110011111011011),
    .INIT_LUTG0(16'b0011100101100011),
    .INIT_LUTG1(16'b1110011111011011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_421  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_250 ,\tx/tmds_gen[0]$tmds_channel/q_out_b3 [4]}),
    .c({\tx/tmds_gen[0]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[0]$tmds_channel/video_data [5]}),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [6],\tx/tmds_gen[0]$tmds_channel/video_data [6]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_252 ,\tx/tmds_gen[0]$tmds_channel/add2_syn_6 [1]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(D@C@B@A)"),
    //.LUTF1("(D*B*~(C)+D*~(B)*C+~(D)*B*C+D*B*C)"),
    //.LUTG0("(D@C@B@A)"),
    //.LUTG1("(D*B*~(C)+D*~(B)*C+~(D)*B*C+D*B*C)"),
    .INIT_LUTF0(16'b0110100110010110),
    .INIT_LUTF1(16'b1111110011000000),
    .INIT_LUTG0(16'b0110100110010110),
    .INIT_LUTG1(16'b1111110011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_424  (
    .a({open_n8052,\tx/tmds_gen[0]$tmds_channel/video_data [1]}),
    .b({\tx/tmds_gen[0]$tmds_channel/video_data [1],\tx/tmds_gen[0]$tmds_channel/video_data [3]}),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [2],\tx/tmds_gen[0]$tmds_channel/video_data [5]}),
    .d({\tx/tmds_gen[0]$tmds_channel/video_data [0],\tx/tmds_gen[0]$tmds_channel/video_data [7]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_230 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b0000001111001111),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_427  (
    .b({open_n8079,\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [5],\tx/tmds_gen[0]$tmds_channel/mux9_syn_246 }),
    .d({\tx/tmds_gen[0]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[0]$tmds_channel/mux9_syn_265 }),
    .f({\tx/tmds_gen[0]$tmds_channel/q_m_b[5]_syn_2 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_275 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C@B@D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b1100001100111100),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_431  (
    .b({open_n8102,\tx/tmds_gen[0]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [7],\tx/tmds_gen[0]$tmds_channel/video_data [2]}),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_233 ,\tx/tmds_gen[0]$tmds_channel/video_data [0]}),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_235 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_233 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~(B*D))"),
    //.LUTF1("(~C*~D)"),
    //.LUTG0("(~C*~(B*D))"),
    //.LUTG1("(~C*~D)"),
    .INIT_LUTF0(16'b0000001100001111),
    .INIT_LUTF1(16'b0000000000001111),
    .INIT_LUTG0(16'b0000001100001111),
    .INIT_LUTG1(16'b0000000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_435  (
    .b({open_n8125,\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 ,\tx/tmds_gen[0]$tmds_channel/acc_add_n1 }),
    .d({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 }),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_261 ,\tx/tmds_gen[0]$tmds_channel/acc_add_n_syn_2 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(D@C@B@A)"),
    //.LUT1("(~C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUT0(16'b1001011001101001),
    .INIT_LUT1(16'b0000101000001100),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_438  (
    .a({\tx/tmds_gen[0]$tmds_channel/acc_add_b5 [4],\tx/tmds_gen[0]$tmds_channel/add2_syn_6 [1]}),
    .b({\tx/tmds_gen[0]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[0]$tmds_channel/mux9_syn_252 }),
    .c({\tx/tmds_gen[0]$tmds_channel/acc_add_n1 ,\tx/tmds_gen[0]$tmds_channel/add2_syn_36 }),
    .d({\tx/tmds_gen[0]$tmds_channel/acc [4],\tx/tmds_gen[0]$tmds_channel/mux9_syn_255 }),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_265 ,\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(C@B@D)"),
    //.LUT1("(C*D)"),
    .INIT_LUT0(16'b0011110011000011),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_441  (
    .b({open_n8172,\tx/tmds_gen[0]$tmds_channel/video_data [3]}),
    .c({\tx/tmds_gen[0]$tmds_channel/video_data [0],\tx/tmds_gen[0]$tmds_channel/video_data [4]}),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_242 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_233 }),
    .f({\tx/tmds_gen[0]$tmds_channel/mux9_syn_244 ,\tx/tmds_gen[0]$tmds_channel/q_out_b3 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(~(D)*~(B)*~(C)+D*~(B)*~(C)+~(D)*B*~(C)+~(D)*~(B)*C)"),
    .INIT_LUT0(16'b0000001100111111),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_443  (
    .b({open_n8195,\tx/tmds_gen[0]$tmds_channel/video_data [6]}),
    .c({open_n8196,\tx/tmds_gen[0]$tmds_channel/video_data [7]}),
    .d({open_n8199,\tx/tmds_gen[0]$tmds_channel/mux9_syn_233 }),
    .f({open_n8213,\tx/tmds_gen[0]$tmds_channel/mux9_syn_238 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C@D)"),
    //.LUT1("(~D*~C*~B*~A)"),
    .INIT_LUT0(16'b0000111111110000),
    .INIT_LUT1(16'b0000000000000001),
    .MODE("LOGIC"))
    \tx/tmds_gen[0]$tmds_channel/mux9_syn_445  (
    .a({\tx/tmds_gen[0]$tmds_channel/acc [1],open_n8219}),
    .b({\tx/tmds_gen[0]$tmds_channel/acc [2],open_n8220}),
    .c({\tx/tmds_gen[0]$tmds_channel/acc [3],\tx/tmds_gen[0]$tmds_channel/mux9_syn_259 }),
    .d({\tx/tmds_gen[0]$tmds_channel/acc [4],\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1]}),
    .f({\tx/tmds_gen[0]$tmds_channel/acc_add_n1 ,\tx/tmds_gen[0]$tmds_channel/N0q_m07 [1]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("SUB_CARRY"),
    .INIT_LUT0(16'b0000000000000101),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[0]$tmds_channel/sub2_syn_32  (
    .a({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1],1'b0}),
    .b({\tx/tmds_gen[0]$tmds_channel/N0q_m07 [1],open_n8241}),
    .fco(\tx/tmds_gen[0]$tmds_channel/sub2_syn_21 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[0]$tmds_channel/sub2_syn_35  (
    .a(\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [3:2]),
    .b(\tx/tmds_gen[0]$tmds_channel/N0q_m07 [3:2]),
    .fci(\tx/tmds_gen[0]$tmds_channel/sub2_syn_21 ),
    .fco(\tx/tmds_gen[0]$tmds_channel/sub2_syn_23 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[0]$tmds_channel/sub2_syn_37  (
    .fci(\tx/tmds_gen[0]$tmds_channel/sub2_syn_23 ),
    .f({open_n8313,\tx/tmds_gen[0]$tmds_channel/acc_add_b5 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("SUB_CARRY"),
    .INIT_LUT0(16'b0000000000000101),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[0]$tmds_channel/sub3_syn_32  (
    .a({\tx/tmds_gen[0]$tmds_channel/N0q_m07 [1],1'b0}),
    .b({\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [1],open_n8319}),
    .fco(\tx/tmds_gen[0]$tmds_channel/sub3_syn_21 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[0]$tmds_channel/sub3_syn_35  (
    .a(\tx/tmds_gen[0]$tmds_channel/N0q_m07 [3:2]),
    .b(\tx/tmds_gen[0]$tmds_channel/N1q_m07_b [3:2]),
    .fci(\tx/tmds_gen[0]$tmds_channel/sub3_syn_21 ),
    .fco(\tx/tmds_gen[0]$tmds_channel/sub3_syn_23 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[0]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[0]$tmds_channel/sub3_syn_37  (
    .fci(\tx/tmds_gen[0]$tmds_channel/sub3_syn_23 ),
    .f({open_n8391,\tx/tmds_gen[0]$tmds_channel/acc_add_b4 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.LUT0("~(~B*~(~C*~(D@A)))"),
    //.LUT1("~(~B*~(~C*~(D@A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100111011001101),
    .INIT_LUT1(16'b1100111011001101),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("SET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[0]$tmds_channel/tmds_reg[2]_syn_4  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_275 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_275 }),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_314 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_302 }),
    .c({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/mux9_syn_233 ,\tx/tmds_gen[0]$tmds_channel/video_data [0]}),
    .q({\tx/tmds_gen[0]$tmds_channel/tmds [2],\tx/tmds_gen[0]$tmds_channel/tmds [0]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("~(B*~(~D*(C@A)))"),
    //.LUTF1("~(C*~(~D*(B@A)))"),
    //.LUTG0("~(B*~(~D*(C@A)))"),
    //.LUTG1("~(C*~(~D*(B@A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011001101111011),
    .INIT_LUTF1(16'b0000111101101111),
    .INIT_LUTG0(16'b0011001101111011),
    .INIT_LUTG1(16'b0000111101101111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[0]$tmds_channel/tmds_reg[5]_syn_4  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_267 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_275 }),
    .b({\tx/tmds_gen[0]$tmds_channel/q_m_b[5]_syn_2 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_297 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_290 ,\tx/tmds_gen[0]$tmds_channel/q_out_b3 [4]}),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .q(\tx/tmds_gen[0]$tmds_channel/tmds [5:4]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_MSLICE #(
    //.LUT0("~(~A*~(~D*~(C*~B)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1010101011101111),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[0]$tmds_channel/tmds_reg[6]_syn_4  (
    .a({open_n8437,\tx/tmds_gen[0]$tmds_channel/mux9_syn_277 }),
    .b({open_n8438,\tx/tmds_gen[0]$tmds_channel/mux9_syn_273 }),
    .c({open_n8439,\tx/tmds_gen[0]$tmds_channel/mux9_syn_271 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({open_n8440,\tx/tmds_gen[0]$tmds_channel/mux9_syn_269 }),
    .q({open_n8459,\tx/tmds_gen[0]$tmds_channel/tmds [6]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(~C*(0@D@A)))"),
    //.LUTF1("~(C*~(~D*~(B@A)))"),
    //.LUTG0("~(~B*~(~C*(1@D@A)))"),
    //.LUTG1("~(C*~(~D*~(B@A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110111001110),
    .INIT_LUTF1(16'b0000111110011111),
    .INIT_LUTG0(16'b1100111011001101),
    .INIT_LUTG1(16'b0000111110011111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[0]$tmds_channel/tmds_reg[7]_syn_4  (
    .a({\tx/tmds_gen[0]$tmds_channel/mux9_syn_267 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_267 }),
    .b({\tx/tmds_gen[0]$tmds_channel/mux9_syn_242 ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_319 }),
    .c({\tx/tmds_gen[0]$tmds_channel/mux9_syn_283 ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[0]$tmds_channel/mux9_syn_233 }),
    .e({open_n8460,\tx/tmds_gen[0]$tmds_channel/video_data [3]}),
    .q({\tx/tmds_gen[0]$tmds_channel/tmds [7],\tx/tmds_gen[0]$tmds_channel/tmds [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b0000000011110000),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/N0q_m07[1]_syn_4  (
    .c({\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 ,\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 }),
    .d({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1]}),
    .f({\tx/tmds_gen[1]$tmds_channel/N0q_m07 [1],\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~B*D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b0000001100000000),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/N0q_m07[2]_syn_6  (
    .b({open_n8507,\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [3]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 }),
    .f({\tx/tmds_gen[1]$tmds_channel/N0q_m07 [2],\tx/tmds_gen[1]$tmds_channel/N0q_m07 [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D)"),
    //.LUTF1("(~C*~B*D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D)"),
    //.LUTG1("(~C*~B*D)"),
    .INIT_LUTF0(16'b1001101110101011),
    .INIT_LUTF1(16'b0000001100000000),
    .INIT_LUTG0(16'b1001101110101011),
    .INIT_LUTG1(16'b0000001100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/N0q_m07[3]_syn_6  (
    .a({open_n8528,\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_231 ,\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1]}),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_233 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_238 ,\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 }),
    .f({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [3],\tx/tmds_gen[1]$tmds_channel/acc_add[3]_syn_2 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_MSLICE #(
    //.LUT0("~(C@D)"),
    .INIT_LUT0(16'b1111000000001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/acc_add[1]_syn_4  (
    .c({open_n8557,\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 }),
    .d({open_n8560,\tx/tmds_gen[1]$tmds_channel/mux7_syn_251 }),
    .f({open_n8574,\tx/tmds_gen[1]$tmds_channel/acc_add [1]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.LUT0("(C@(D*~(0@(B*A))))"),
    //.LUT1("(C@(D*~(1@(B*A))))"),
    .INIT_LUT0(16'b1000011111110000),
    .INIT_LUT1(16'b0111100011110000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[1]$tmds_channel/acc_add[2]_syn_4  (
    .a({\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 }),
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .mi({open_n8592,\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 }),
    .fx({open_n8597,\tx/tmds_gen[1]$tmds_channel/acc_add [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.LUT0("(D@(~(0*~C)*~(A)*~(B)+~(0*~C)*A*~(B)+~(~(0*~C))*A*B+~(0*~C)*A*B))"),
    //.LUT1("(D@(~(1*~C)*~(A)*~(B)+~(1*~C)*A*~(B)+~(~(1*~C))*A*B+~(1*~C)*A*B))"),
    .INIT_LUT0(16'b0100010010111011),
    .INIT_LUT1(16'b0100011110111000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[1]$tmds_channel/acc_add[3]_syn_7  (
    .a({\tx/tmds_gen[1]$tmds_channel/acc_add[3]_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add[3]_syn_2 }),
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 }),
    .d({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2]}),
    .mi({open_n8612,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .fx({open_n8617,\tx/tmds_gen[1]$tmds_channel/acc_add [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.LUT0("~(~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)*~(A)*~(D)+~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)*A*~(D)+~(~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0))*A*D+~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)*A*D)"),
    //.LUT1("~(~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)*~(A)*~(D)+~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)*A*~(D)+~(~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1))*A*D+~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)*A*D)"),
    .INIT_LUT0(16'b0101010111001100),
    .INIT_LUT1(16'b0101010111110000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[1]$tmds_channel/acc_add[4]_syn_11  (
    .a({\tx/tmds_gen[1]$tmds_channel/acc_add[4]_syn_4 ,\tx/tmds_gen[1]$tmds_channel/acc_add[4]_syn_4 }),
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add_b5 [4],\tx/tmds_gen[1]$tmds_channel/acc_add_b5 [4]}),
    .c({\tx/tmds_gen[1]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[1]$tmds_channel/acc_add_b4 [4]}),
    .d({\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 }),
    .mi({open_n8632,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .fx({open_n8637,\tx/tmds_gen[1]$tmds_channel/acc_add [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.LUT0("(A@(D*C*B))"),
    //.LUT1("~((D@C)*~(B)*~(A)+(D@C)*B*~(A)+~((D@C))*B*A+(D@C)*B*A)"),
    .INIT_LUT0(16'b0110101010101010),
    .INIT_LUT1(16'b0111001000100111),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/acc_add[4]_syn_15  (
    .a({\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_b5 [4]}),
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add_b2 [4],\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 }),
    .c({\tx/tmds_gen[1]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/add15_syn_33 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .f({\tx/tmds_gen[1]$tmds_channel/acc_add[4]_syn_4 ,\tx/tmds_gen[1]$tmds_channel/acc_add_b2 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("ADD_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[1]$tmds_channel/acc_reg[1]_syn_4  (
    .a({\tx/tmds_gen[1]$tmds_channel/acc [1],1'b0}),
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add [1],open_n8660}),
    .clk(\tx/clk_pixel ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .fco(\tx/tmds_gen[1]$tmds_channel/add1_syn_23 ),
    .q({\tx/tmds_gen[1]$tmds_channel/acc [1],open_n8682}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("ADD"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[1]$tmds_channel/acc_reg[3]_syn_4  (
    .a(\tx/tmds_gen[1]$tmds_channel/acc [3:2]),
    .b(\tx/tmds_gen[1]$tmds_channel/acc_add [3:2]),
    .clk(\tx/clk_pixel ),
    .fci(\tx/tmds_gen[1]$tmds_channel/add1_syn_23 ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .fco(\tx/tmds_gen[1]$tmds_channel/add1_syn_25 ),
    .q(\tx/tmds_gen[1]$tmds_channel/acc [3:2]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("ADD"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[1]$tmds_channel/acc_reg[4]_syn_4  (
    .a({open_n8703,\tx/tmds_gen[1]$tmds_channel/acc [4]}),
    .b({open_n8704,\tx/tmds_gen[1]$tmds_channel/acc_add [4]}),
    .clk(\tx/clk_pixel ),
    .fci(\tx/tmds_gen[1]$tmds_channel/add1_syn_25 ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .q({open_n8726,\tx/tmds_gen[1]$tmds_channel/acc [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*D+~(A)*B*C*D))"),
    //.LUTF1("(A*~(~B*~(~D*C)))"),
    //.LUTG0("(~1*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*D+~(A)*B*C*D))"),
    //.LUTG1("(A*~(~B*~(~D*C)))"),
    .INIT_LUTF0(16'b0101000000001100),
    .INIT_LUTF1(16'b1000100010101000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1000100010101000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_346  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_253 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_296 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_291 ,\tx/tmds_gen[1]$tmds_channel/control_data [0]}),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ,\tx/mode [0]}),
    .d({\tx/tmds_gen[1]$tmds_channel/control_data [0],\tx/mode [1]}),
    .e({open_n8729,\tx/mode [2]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_293 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_298 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*C*D+A*B*C*D))"),
    //.LUTF1("(A*(~(B)*~(C)*~(D)*~(0)+B*~(C)*~(D)*~(0)+~(B)*C*~(D)*~(0)+B*C*~(D)*~(0)+~(B)*~(C)*~(D)*0+B*C*~(D)*0+~(B)*~(C)*D*0+B*~(C)*D*0+B*C*D*0))"),
    //.LUTG0("(~1*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*C*D+A*B*C*D))"),
    //.LUTG1("(A*(~(B)*~(C)*~(D)*~(1)+B*~(C)*~(D)*~(1)+~(B)*C*~(D)*~(1)+B*C*~(D)*~(1)+~(B)*~(C)*~(D)*1+B*C*~(D)*1+~(B)*~(C)*D*1+B*~(C)*D*1+B*C*D*1))"),
    .INIT_LUTF0(16'b1010000011111100),
    .INIT_LUTF1(16'b0000000010101010),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1000101010000010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_349  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_208 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_276 }),
    .b({\tx/tmds_gen[1]$tmds_channel/data_island_data [0],\tx/tmds_gen[1]$tmds_channel/control_data [0]}),
    .c({\tx/tmds_gen[1]$tmds_channel/data_island_data [1],\tx/mode [0]}),
    .d({\tx/tmds_gen[1]$tmds_channel/data_island_data [2],\tx/mode [1]}),
    .e({\tx/tmds_gen[1]$tmds_channel/data_island_data [3],\tx/mode [2]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_210 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_278 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(~(B)*~(C)*~(D)*~(0)+~(B)*C*~(D)*~(0)+B*~(C)*D*~(0)+~(B)*C*D*~(0)+B*C*D*~(0)+~(B)*~(C)*~(D)*0+~(B)*C*~(D)*0+B*C*~(D)*0+~(B)*~(C)*D*0))"),
    //.LUTF1("(~D*~(~C*B))"),
    //.LUTG0("(A*(~(B)*~(C)*~(D)*~(1)+~(B)*C*~(D)*~(1)+B*~(C)*D*~(1)+~(B)*C*D*~(1)+B*C*D*~(1)+~(B)*~(C)*~(D)*1+~(B)*C*~(D)*1+B*C*~(D)*1+~(B)*~(C)*D*1))"),
    //.LUTG1("(~D*~(~C*B))"),
    .INIT_LUTF0(16'b1010100000100010),
    .INIT_LUTF1(16'b0000000011110011),
    .INIT_LUTG0(16'b0000001010100010),
    .INIT_LUTG1(16'b0000000011110011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_354  (
    .a({open_n8772,\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ,\tx/tmds_gen[1]$tmds_channel/data_island_data [0]}),
    .c({\tx/tmds_gen[1]$tmds_channel/control_data [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [1]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_255 ,\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}),
    .e({open_n8775,\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_257 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_291 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(B*~(C)*~(D)*~(0)+~(B)*C*~(D)*~(0)+B*C*~(D)*~(0)+~(B)*~(C)*D*~(0)+~(B)*~(C)*~(D)*0+B*C*~(D)*0+B*~(C)*D*0+~(B)*C*D*0+B*C*D*0))"),
    //.LUTF1("(~C*~(B*D))"),
    //.LUTG0("(A*(B*~(C)*~(D)*~(1)+~(B)*C*~(D)*~(1)+B*C*~(D)*~(1)+~(B)*~(C)*D*~(1)+~(B)*~(C)*~(D)*1+B*C*~(D)*1+B*~(C)*D*1+~(B)*C*D*1+B*C*D*1))"),
    //.LUTG1("(~C*~(B*D))"),
    .INIT_LUTF0(16'b0000001010101000),
    .INIT_LUTF1(16'b0000001100001111),
    .INIT_LUTG0(16'b1010100010000010),
    .INIT_LUTG1(16'b0000001100001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_358  (
    .a({open_n8796,\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 }),
    .b({\tx/tmds_gen[1]$tmds_channel/control_data [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [0]}),
    .c({\tx/mode [2],\tx/tmds_gen[1]$tmds_channel/data_island_data [1]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ,\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}),
    .e({open_n8799,\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_271 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_255 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~C*~((B@A))*~((0@D))+~C*(B@A)*~((0@D))+~(~C)*(B@A)*(0@D)+~C*(B@A)*(0@D))"),
    //.LUTF1("(B*~(C)*~((D@A))+~(B)*C*~((D@A))+B*C*~((D@A))+~(B)*~(C)*(D@A)+B*~(C)*(D@A)+~(B)*C*(D@A))"),
    //.LUTG0("~(~C*~((B@A))*~((1@D))+~C*(B@A)*~((1@D))+~(~C)*(B@A)*(1@D)+~C*(B@A)*(1@D))"),
    //.LUTG1("(B*~(C)*~((D@A))+~(B)*C*~((D@A))+B*C*~((D@A))+~(B)*~(C)*(D@A)+B*~(C)*(D@A)+~(B)*C*(D@A))"),
    .INIT_LUTF0(16'b1001100111110000),
    .INIT_LUTF1(16'b1011110101111110),
    .INIT_LUTG0(16'b1111000010011001),
    .INIT_LUTG1(16'b1011110101111110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_361  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .b({\tx/tmds_gen[1]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[1]$tmds_channel/mux7_syn_222 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_229 ,\tx/tmds_gen[1]$tmds_channel/video_data [0]}),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [6],\tx/tmds_gen[1]$tmds_channel/video_data [1]}),
    .e({open_n8822,\tx/tmds_gen[1]$tmds_channel/video_data [3]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_231 ,\tx/tmds_gen[1]$tmds_channel/add2_syn_36 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(0@D@C@B@A)"),
    //.LUTF1("(~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*B*C*D*~(0)+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTG0("~(1@D@C@B@A)"),
    //.LUTG1("(~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*B*C*D*~(1)+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    .INIT_LUTF0(16'b1001011001101001),
    .INIT_LUTF1(16'b0100110100000000),
    .INIT_LUTG0(16'b0110100110010110),
    .INIT_LUTG1(16'b1101111101001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_364  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_224 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 }),
    .b({\tx/tmds_gen[1]$tmds_channel/add0_syn_50 ,\tx/tmds_gen[1]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_214 ,\tx/tmds_gen[1]$tmds_channel/video_data [4]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_219 ,\tx/tmds_gen[1]$tmds_channel/video_data [5]}),
    .e({\tx/tmds_gen[1]$tmds_channel/add0_syn_6 [1],\tx/tmds_gen[1]$tmds_channel/video_data [7]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_229 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~D)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(~C*~D)"),
    //.LUTG1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000000001111),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0000000000001111),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_366  (
    .c({\tx/mode [1],\tx/mode [1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/mode [0],\tx/mode [0]}),
    .mi({open_n8873,\tx/true_hdmi_output$data_island_preamble }),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 }),
    .q({open_n8888,\tx/tmds_gen[2]$tmds_channel/control_data [0]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~(D)*~(B)+~C*D*~(B)+~(~C)*D*B+~C*D*B)"),
    //.LUT1("(B*~(C@D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100111100000011),
    .INIT_LUT1(16'b1100000000001100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_368  (
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 }),
    .mi({open_n8902,\tx/rgb [21]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_251 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_259 }),
    .q({open_n8906,\tx/tmds_gen[2]$tmds_channel/video_data [5]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(~C*~(D@A)))"),
    //.LUTF1("(~B*(D@C@A))"),
    //.LUTG0("~(~B*~(~C*~(D@A)))"),
    //.LUTG1("(~B*(D@C@A))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100111011001101),
    .INIT_LUTF1(16'b0010000100010010),
    .INIT_LUTG0(16'b1100111011001101),
    .INIT_LUTG1(16'b0010000100010010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_370  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_251 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_259 }),
    .b({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_293 }),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [0],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [1],\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 }),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_286 ,open_n8924}),
    .q({open_n8928,\tx/tmds_gen[1]$tmds_channel/tmds [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(B*~(~D*(C@A)))"),
    //.LUT1("(A*~(D*~(C*B)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011001101111011),
    .INIT_LUT1(16'b1000000010101010),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_372  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_271 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_259 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_281 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_278 }),
    .c({\tx/mode [0],\tx/tmds_gen[1]$tmds_channel/q_out_b3 [4]}),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/mode [1],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_283 ,open_n8942}),
    .q({open_n8946,\tx/tmds_gen[1]$tmds_channel/tmds [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*D)"),
    //.LUTF1("(A*~(~B*~(D*C)))"),
    //.LUTG0("(~C*D)"),
    //.LUTG1("(A*~(~B*~(D*C)))"),
    .INIT_LUTF0(16'b0000111100000000),
    .INIT_LUTF1(16'b1010100010001000),
    .INIT_LUTG0(16'b0000111100000000),
    .INIT_LUTG1(16'b1010100010001000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_375  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_253 ,open_n8947}),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_264 ,open_n8948}),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ,\tx/mode [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/control_data [0],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_266 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_253 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~D)"),
    //.LUTF1("(~C*D)"),
    //.LUTG0("(~C*~D)"),
    //.LUTG1("(~C*D)"),
    .INIT_LUTF0(16'b0000000000001111),
    .INIT_LUTF1(16'b0000111100000000),
    .INIT_LUTG0(16'b0000000000001111),
    .INIT_LUTG1(16'b0000111100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_377  (
    .c({\tx/mode [2],\tx/mode [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/mode [1]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_208 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~(D@B@A))"),
    //.LUTF1("~(D@C@B@A)"),
    //.LUTG0("(~C*~(D@B@A))"),
    //.LUTG1("~(D@C@B@A)"),
    .INIT_LUTF0(16'b0000011000001001),
    .INIT_LUTF1(16'b1001011001101001),
    .INIT_LUTG0(16'b0000011000001001),
    .INIT_LUTG1(16'b1001011001101001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_380  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_259 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_251 }),
    .b({\tx/tmds_gen[1]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[1]$tmds_channel/q_out_b3 [4]}),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [5],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .d(\tx/tmds_gen[1]$tmds_channel/video_data [6:5]),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_261 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_269 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+A*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D)"),
    //.LUTG0("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+A*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D)"),
    .INIT_LUTF0(16'b0110001010011110),
    .INIT_LUTF1(16'b0001110111101101),
    .INIT_LUTG0(16'b0110001010011110),
    .INIT_LUTG1(16'b0001110111101101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_382  (
    .a({\tx/tmds_gen[1]$tmds_channel/data_island_data [0],\tx/tmds_gen[2]$tmds_channel/data_island_data [0]}),
    .b({\tx/tmds_gen[1]$tmds_channel/data_island_data [1],\tx/tmds_gen[2]$tmds_channel/data_island_data [1]}),
    .c({\tx/tmds_gen[1]$tmds_channel/data_island_data [2],\tx/tmds_gen[2]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/data_island_data [3],\tx/tmds_gen[2]$tmds_channel/data_island_data [3]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_281 ,\tx/tmds_gen[2]$tmds_channel/mux6_syn_138 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUT1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    .INIT_LUT0(16'b1110100000011110),
    .INIT_LUT1(16'b1101100101001110),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_385  (
    .a({\tx/tmds_gen[1]$tmds_channel/data_island_data [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [0]}),
    .b({\tx/tmds_gen[1]$tmds_channel/data_island_data [1],\tx/tmds_gen[1]$tmds_channel/data_island_data [1]}),
    .c({\tx/tmds_gen[1]$tmds_channel/data_island_data [2],\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/data_island_data [3],\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_276 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_296 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(B@(~(A)*C*~(D)+A*~(C)*D))"),
    //.LUT1("(C*D)"),
    .INIT_LUT0(16'b1100011010011100),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_388  (
    .a({open_n9069,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .b({open_n9070,\tx/tmds_gen[1]$tmds_channel/q_out_b3 [4]}),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [0],\tx/tmds_gen[1]$tmds_channel/video_data [5]}),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_222 ,\tx/tmds_gen[1]$tmds_channel/video_data [6]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_224 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_233 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(~D*~C*B*~A)"),
    //.LUT1("(~C*~B*~D)"),
    .INIT_LUT0(16'b0000000000000100),
    .INIT_LUT1(16'b0000000000000011),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_390  (
    .a({open_n9091,\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1]}),
    .b({\tx/tmds_gen[1]$tmds_channel/acc [2],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[1]$tmds_channel/acc [3],\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .d({\tx/tmds_gen[1]$tmds_channel/acc [1],\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 }),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_247 ,\tx/tmds_gen[1]$tmds_channel/add15_syn_33 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C@B@D)"),
    //.LUT1("(B*(D@C@A))"),
    .INIT_LUT0(16'b1100001100111100),
    .INIT_LUT1(16'b1000010001001000),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_393  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 ,open_n9112}),
    .b({\tx/tmds_gen[1]$tmds_channel/add0_syn_6 [0],\tx/tmds_gen[1]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [6],\tx/tmds_gen[1]$tmds_channel/video_data [2]}),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [7],\tx/tmds_gen[1]$tmds_channel/video_data [0]}),
    .f({\tx/tmds_gen[1]$tmds_channel/add0_syn_50 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(D@C@B))"),
    //.LUTF1("(~A*~(D@C@B))"),
    //.LUTG0("(A*(D@C@B))"),
    //.LUTG1("(~A*~(D@C@B))"),
    .INIT_LUTF0(16'b1000001000101000),
    .INIT_LUTF1(16'b0001010001000001),
    .INIT_LUTG0(16'b1000001000101000),
    .INIT_LUTG1(16'b0001010001000001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_396  (
    .a({\tx/tmds_gen[1]$tmds_channel/add2_syn_36 ,\tx/tmds_gen[1]$tmds_channel/add2_syn_36 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_236 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_236 }),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [0],\tx/tmds_gen[1]$tmds_channel/video_data [0]}),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [1],\tx/tmds_gen[1]$tmds_channel/video_data [1]}),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_240 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_238 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(B)*~(C)+~(D)*B*~(C)+D*B*~(C)+D*B*C)"),
    //.LUTF1("~(D@C@B@A)"),
    //.LUTG0("(D*~(B)*~(C)+~(D)*B*~(C)+D*B*~(C)+D*B*C)"),
    //.LUTG1("~(D@C@B@A)"),
    .INIT_LUTF0(16'b1100111100001100),
    .INIT_LUTF1(16'b1001011001101001),
    .INIT_LUTG0(16'b1100111100001100),
    .INIT_LUTG1(16'b1001011001101001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_399  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 ,open_n9157}),
    .b({\tx/tmds_gen[1]$tmds_channel/add0_syn_6 [0],\tx/tmds_gen[1]$tmds_channel/video_data [2]}),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [6],\tx/tmds_gen[1]$tmds_channel/video_data [3]}),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [7],\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_222 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_236 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~D*C)*~(B*A))"),
    //.LUTF1("~((~C*B)*~(A)*~(D)+(~C*B)*A*~(D)+~((~C*B))*A*D+(~C*B)*A*D)"),
    //.LUTG0("(~(~D*C)*~(B*A))"),
    //.LUTG1("~((~C*B)*~(A)*~(D)+(~C*B)*A*~(D)+~((~C*B))*A*D+(~C*B)*A*D)"),
    .INIT_LUTF0(16'b0111011100000111),
    .INIT_LUTF1(16'b0101010111110011),
    .INIT_LUTG0(16'b0111011100000111),
    .INIT_LUTG1(16'b0101010111110011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_402  (
    .a({\tx/tmds_gen[1]$tmds_channel/acc_add_b5 [4],\tx/tmds_gen[1]$tmds_channel/mux7_syn_245 }),
    .b({\tx/tmds_gen[1]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_247 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_247 }),
    .d({\tx/tmds_gen[1]$tmds_channel/acc [4],\tx/tmds_gen[1]$tmds_channel/acc [4]}),
    .f({\tx/tmds_gen[1]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[1]$tmds_channel/acc_add_n_syn_2 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(C@B@D)"),
    //.LUT1("(C@B@D)"),
    .INIT_LUT0(16'b0011110011000011),
    .INIT_LUT1(16'b1100001100111100),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_405  (
    .b(\tx/tmds_gen[1]$tmds_channel/video_data [4:3]),
    .c(\tx/tmds_gen[1]$tmds_channel/video_data [5:4]),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [3],\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 }),
    .f({\tx/tmds_gen[1]$tmds_channel/add0_syn_6 [0],\tx/tmds_gen[1]$tmds_channel/q_out_b3 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*~(B)*C*D)"),
    //.LUTF1("(D@C@(~B*~A))"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*~(B)*C*D)"),
    //.LUTG1("(D@C@(~B*~A))"),
    .INIT_LUTF0(16'b0010001100110101),
    .INIT_LUTF1(16'b0001111011100001),
    .INIT_LUTG0(16'b0010001100110101),
    .INIT_LUTG1(16'b0001111011100001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[1]$tmds_channel/mux7_syn_408  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_238 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_238 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_240 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_240 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_231 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_231 }),
    .d({\tx/tmds_gen[1]$tmds_channel/mux7_syn_233 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_233 }),
    .f({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("SUB_CARRY"),
    .INIT_LUT0(16'b0000000000000101),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[1]$tmds_channel/sub2_syn_32  (
    .a({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1],1'b0}),
    .b({\tx/tmds_gen[1]$tmds_channel/N0q_m07 [1],open_n9252}),
    .fco(\tx/tmds_gen[1]$tmds_channel/sub2_syn_21 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[1]$tmds_channel/sub2_syn_35  (
    .a(\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [3:2]),
    .b(\tx/tmds_gen[1]$tmds_channel/N0q_m07 [3:2]),
    .fci(\tx/tmds_gen[1]$tmds_channel/sub2_syn_21 ),
    .fco(\tx/tmds_gen[1]$tmds_channel/sub2_syn_23 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[1]$tmds_channel/sub2_syn_37  (
    .fci(\tx/tmds_gen[1]$tmds_channel/sub2_syn_23 ),
    .f({open_n9324,\tx/tmds_gen[1]$tmds_channel/acc_add_b5 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("SUB_CARRY"),
    .INIT_LUT0(16'b0000000000000101),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[1]$tmds_channel/sub3_syn_32  (
    .a({\tx/tmds_gen[1]$tmds_channel/N0q_m07 [1],1'b0}),
    .b({\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [1],open_n9330}),
    .fco(\tx/tmds_gen[1]$tmds_channel/sub3_syn_21 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[1]$tmds_channel/sub3_syn_35  (
    .a(\tx/tmds_gen[1]$tmds_channel/N0q_m07 [3:2]),
    .b(\tx/tmds_gen[1]$tmds_channel/N1q_m07_b [3:2]),
    .fci(\tx/tmds_gen[1]$tmds_channel/sub3_syn_21 ),
    .fco(\tx/tmds_gen[1]$tmds_channel/sub3_syn_23 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[1]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[1]$tmds_channel/sub3_syn_37  (
    .fci(\tx/tmds_gen[1]$tmds_channel/sub3_syn_23 ),
    .f({open_n9402,\tx/tmds_gen[1]$tmds_channel/acc_add_b4 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(C*~(D*~(A)*~(0)+D*A*~(0)+~(D)*A*0+D*A*0)))"),
    //.LUTF1("~(B*~A*~(D*~C))"),
    //.LUTG0("~(~B*~(C*~(D*~(A)*~(1)+D*A*~(1)+~(D)*A*1+D*A*1)))"),
    //.LUTG1("~(B*~A*~(D*~C))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110011111100),
    .INIT_LUTF1(16'b1011111110111011),
    .INIT_LUTG0(16'b1101110011011100),
    .INIT_LUTG1(16'b1011111110111011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[1]$tmds_channel/tmds_reg[5]_syn_4  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_269 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_275 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_271 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_224 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_273 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/mode [1],\tx/tmds_gen[2]$tmds_channel/control_data [0]}),
    .e({open_n9408,\tx/mode [0]}),
    .q({\tx/tmds_gen[1]$tmds_channel/tmds [5],\tx/tmds_gen[2]$tmds_channel/tmds [9]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(C*~(D*~(A)*~(0)+D*A*~(0)+~(D)*A*0+D*A*0)))"),
    //.LUTF1("(~A*~((~D*~B))*~(C)+~A*(~D*~B)*~(C)+~(~A)*(~D*~B)*C+~A*(~D*~B)*C)"),
    //.LUTG0("~(~B*~(C*~(D*~(A)*~(1)+D*A*~(1)+~(D)*A*1+D*A*1)))"),
    //.LUTG1("(~A*~((~D*~B))*~(C)+~A*(~D*~B)*~(C)+~(~A)*(~D*~B)*C+~A*(~D*~B)*C)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110011111100),
    .INIT_LUTF1(16'b0000010100110101),
    .INIT_LUTG0(16'b1101110011011100),
    .INIT_LUTG1(16'b0000010100110101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .REG1_REGSET("SET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[1]$tmds_channel/tmds_reg[6]_syn_4  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_261 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_259 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_257 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_210 }),
    .c({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/mode [2],\tx/tmds_gen[1]$tmds_channel/control_data [0]}),
    .e({open_n9429,\tx/mode [0]}),
    .q({\tx/tmds_gen[1]$tmds_channel/tmds [6],\tx/tmds_gen[1]$tmds_channel/tmds [9]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(~C*(0@D@A)))"),
    //.LUTF1("~(~B*~(~D*~(C@A)))"),
    //.LUTG0("~(~B*~(~C*(1@D@A)))"),
    //.LUTG1("~(~B*~(~D*~(C@A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110111001110),
    .INIT_LUTF1(16'b1100110011101101),
    .INIT_LUTG0(16'b1100111011001101),
    .INIT_LUTG1(16'b1100110011101101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[1]$tmds_channel/tmds_reg[7]_syn_4  (
    .a({\tx/tmds_gen[1]$tmds_channel/mux7_syn_251 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_251 }),
    .b({\tx/tmds_gen[1]$tmds_channel/mux7_syn_266 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_298 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_222 ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_212 }),
    .e({open_n9450,\tx/tmds_gen[1]$tmds_channel/video_data [3]}),
    .q({\tx/tmds_gen[1]$tmds_channel/tmds [7],\tx/tmds_gen[1]$tmds_channel/tmds [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(C*~D)"),
    //.LUTG1("~(C@D)"),
    .INIT_LUTF0(16'b0000000011110000),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b0000000011110000),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/N0q_m07[1]_syn_4  (
    .c({\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 ,\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 }),
    .d({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1]}),
    .f({\tx/tmds_gen[2]$tmds_channel/N0q_m07 [1],\tx/tmds_gen[2]$tmds_channel/mux7_syn_263 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~B*D)"),
    //.LUT1("~(C@D)"),
    .INIT_LUT0(16'b0000001100000000),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/N0q_m07[2]_syn_6  (
    .b({open_n9501,\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [3]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_263 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_263 }),
    .f({\tx/tmds_gen[2]$tmds_channel/N0q_m07 [2],\tx/tmds_gen[2]$tmds_channel/N0q_m07 [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+A*~(B)*C*D)"),
    //.LUT1("(~C*~B*D)"),
    .INIT_LUT0(16'b0010001100110101),
    .INIT_LUT1(16'b0000001100000000),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/N0q_m07[3]_syn_6  (
    .a({open_n9522,\tx/tmds_gen[2]$tmds_channel/mux7_syn_250 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_256 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_252 }),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_258 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_256 }),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_250 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_258 }),
    .f(\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [3:2]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(31)
  EG_PHY_LSLICE #(
    //.LUTF0("~(C@D)"),
    //.LUTG0("~(C@D)"),
    .INIT_LUTF0(16'b1111000000001111),
    .INIT_LUTG0(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/acc_add[1]_syn_4  (
    .c({open_n9547,\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 }),
    .d({open_n9550,\tx/tmds_gen[2]$tmds_channel/mux7_syn_269 }),
    .f({open_n9568,\tx/tmds_gen[2]$tmds_channel/acc_add [1]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.LUT0("(C@(~D*~(0@(B*A))))"),
    //.LUT1("(C@(~D*~(1@(B*A))))"),
    .INIT_LUT0(16'b1111000010000111),
    .INIT_LUT1(16'b1111000001111000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[2]$tmds_channel/acc_add[2]_syn_4  (
    .a({\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 }),
    .b({\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .mi({open_n9586,\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 }),
    .fx({open_n9591,\tx/tmds_gen[2]$tmds_channel/acc_add [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D*C*B*~A)"),
    //.LUTF1("~((D@C)*~(B)*~(A)+(D@C)*B*~(A)+~((D@C))*B*A+(D@C)*B*A)"),
    //.LUTG0("(~D*C*B*~A)"),
    //.LUTG1("~((D@C)*~(B)*~(A)+(D@C)*B*~(A)+~((D@C))*B*A+(D@C)*B*A)"),
    .INIT_LUTF0(16'b0000000001000000),
    .INIT_LUTF1(16'b0111001000100111),
    .INIT_LUTG0(16'b0000000001000000),
    .INIT_LUTG1(16'b0111001000100111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/acc_add[4]_syn_13  (
    .a({\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1]}),
    .b({\tx/tmds_gen[2]$tmds_channel/acc_add_b2 [4],\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [2]}),
    .c({\tx/tmds_gen[2]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .d({\tx/tmds_gen[2]$tmds_channel/add15_syn_33 ,\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 }),
    .f({\tx/tmds_gen[2]$tmds_channel/acc_add[4]_syn_4 ,\tx/tmds_gen[2]$tmds_channel/add15_syn_33 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(50)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("ADD_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[2]$tmds_channel/acc_reg[1]_syn_4  (
    .a({\tx/tmds_gen[2]$tmds_channel/acc [1],1'b0}),
    .b({\tx/tmds_gen[2]$tmds_channel/acc_add [1],open_n9618}),
    .clk(\tx/clk_pixel ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .fco(\tx/tmds_gen[2]$tmds_channel/add1_syn_23 ),
    .q({\tx/tmds_gen[2]$tmds_channel/acc [1],open_n9640}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("ADD"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[2]$tmds_channel/acc_reg[3]_syn_4  (
    .a(\tx/tmds_gen[2]$tmds_channel/acc [3:2]),
    .b(\tx/tmds_gen[2]$tmds_channel/acc_add [3:2]),
    .clk(\tx/clk_pixel ),
    .fci(\tx/tmds_gen[2]$tmds_channel/add1_syn_23 ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .fco(\tx/tmds_gen[2]$tmds_channel/add1_syn_25 ),
    .q(\tx/tmds_gen[2]$tmds_channel/acc [3:2]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/acc_reg[1]_syn_4"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("ADD"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/tmds_gen[2]$tmds_channel/acc_reg[4]_syn_4  (
    .a({open_n9661,\tx/tmds_gen[2]$tmds_channel/acc [4]}),
    .b({open_n9662,\tx/tmds_gen[2]$tmds_channel/acc_add [4]}),
    .clk(\tx/clk_pixel ),
    .fci(\tx/tmds_gen[2]$tmds_channel/add1_syn_25 ),
    .sr(\tx/tmds_gen[0]$tmds_channel/acc_b1_n ),
    .q({open_n9684,\tx/tmds_gen[2]$tmds_channel/acc [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(98)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~(C*(D*~(A)*~(0)+D*A*~(0)+~(D)*A*0+D*A*0)))"),
    //.LUTF1("(~0*(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D))"),
    //.LUTG0("(~B*~(C*(D*~(A)*~(1)+D*A*~(1)+~(D)*A*1+D*A*1)))"),
    //.LUTG1("(~1*(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000001100110011),
    .INIT_LUTF1(16'b1010111100001011),
    .INIT_LUTG0(16'b0001001100010011),
    .INIT_LUTG1(16'b0000000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_364  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_271 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_226 }),
    .b({\tx/tmds_gen[2]$tmds_channel/control_data [0],\tx/tmds_gen[1]$tmds_channel/mux7_syn_210 }),
    .c({\tx/mode [0],\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/mode [1],\tx/tmds_gen[1]$tmds_channel/control_data [0]}),
    .e({\tx/mode [2],\tx/mode [0]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_273 ,open_n9700}),
    .q({open_n9704,\tx/tmds_gen[1]$tmds_channel/tmds [8]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D))"),
    //.LUTF1("(~0*~(~A*~(~C*~(~D*~B))))"),
    //.LUTG0("(~1*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D))"),
    //.LUTG1("(~1*~(~A*~(~C*~(~D*~B))))"),
    .INIT_LUTF0(16'b0101111100001100),
    .INIT_LUTF1(16'b1010111110101110),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b0000000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_367  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_278 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_309 }),
    .b({\tx/tmds_gen[2]$tmds_channel/control_data [0],\tx/tmds_gen[2]$tmds_channel/control_data [0]}),
    .c({\tx/mode [0],\tx/mode [0]}),
    .d({\tx/mode [1],\tx/mode [1]}),
    .e({\tx/mode [2],\tx/mode [2]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_280 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_311 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(~A*~(~C*~(~D*B))))"),
    //.LUTF1("(0*(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D))"),
    //.LUTG0("(~1*~(~A*~(~C*~(~D*B))))"),
    //.LUTG1("(1*(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D))"),
    .INIT_LUTF0(16'b1010111110101011),
    .INIT_LUTF1(16'b0000000000000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1110100100011110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_370  (
    .a({\tx/tmds_gen[2]$tmds_channel/data_island_data [0],\tx/tmds_gen[2]$tmds_channel/mux7_syn_304 }),
    .b({\tx/tmds_gen[2]$tmds_channel/data_island_data [1],\tx/tmds_gen[2]$tmds_channel/control_data [0]}),
    .c({\tx/tmds_gen[2]$tmds_channel/data_island_data [2],\tx/mode [0]}),
    .d({\tx/tmds_gen[2]$tmds_channel/data_island_data [3],\tx/mode [1]}),
    .e({\tx/mode [1],\tx/mode [2]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_271 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_306 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D))"),
    //.LUTF1("(~D*C*~(B*~A))"),
    //.LUTG0("(~1*(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+A*~(B)*C*D+A*B*C*D))"),
    //.LUTG1("(~D*C*~(B*~A))"),
    .INIT_LUTF0(16'b1010111100001100),
    .INIT_LUTF1(16'b0000000010110000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b0000000010110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_373  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux6_syn_200 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_289 }),
    .b({\tx/mode [0],\tx/tmds_gen[2]$tmds_channel/control_data [0]}),
    .c(\tx/mode [1:0]),
    .d(\tx/mode [2:1]),
    .e({open_n9751,\tx/mode [2]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_224 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_291 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*~(B)*C*D))"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D)"),
    //.LUTG0("(1*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*~(B)*C*D))"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D)"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0001110111101101),
    .INIT_LUTG0(16'b0010011110010101),
    .INIT_LUTG1(16'b0001110111101101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_375  (
    .a({\tx/tmds_gen[2]$tmds_channel/data_island_data [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [0]}),
    .b({\tx/tmds_gen[2]$tmds_channel/data_island_data [1],\tx/tmds_gen[1]$tmds_channel/data_island_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/data_island_data [2],\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/data_island_data [3],\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}),
    .e({open_n9774,\tx/mode [0]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_294 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_288 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*(~(A)*~(B)*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D))"),
    //.LUTF1("(0*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D))"),
    //.LUTG0("(1*(~(A)*~(B)*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D))"),
    //.LUTG1("(1*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0000000000000000),
    .INIT_LUTG0(16'b1001110101100001),
    .INIT_LUTG1(16'b0001110111100101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_377  (
    .a({\tx/tmds_gen[2]$tmds_channel/data_island_data [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [0]}),
    .b({\tx/tmds_gen[2]$tmds_channel/data_island_data [1],\tx/tmds_gen[1]$tmds_channel/data_island_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/data_island_data [2],\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/data_island_data [3],\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}),
    .e(\tx/mode [1:0]),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_304 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_273 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D))"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUTG0("(1*(~(A)*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*B*C*D))"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*B*~(C)*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1110100000011110),
    .INIT_LUTG0(16'b1001110101001101),
    .INIT_LUTG1(16'b1110100000011110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_380  (
    .a({\tx/tmds_gen[2]$tmds_channel/data_island_data [0],\tx/tmds_gen[2]$tmds_channel/data_island_data [0]}),
    .b({\tx/tmds_gen[2]$tmds_channel/data_island_data [1],\tx/tmds_gen[2]$tmds_channel/data_island_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/data_island_data [2],\tx/tmds_gen[2]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/data_island_data [3],\tx/tmds_gen[2]$tmds_channel/data_island_data [3]}),
    .e({open_n9819,\tx/mode [1]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_309 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_278 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(~(B)*~(C)*~(D)*~(0)+~(B)*C*~(D)*~(0)+B*C*~(D)*~(0)+~(B)*C*D*~(0)+~(B)*~(C)*~(D)*0+~(B)*C*~(D)*0+B*C*~(D)*0+~(B)*~(C)*D*0+B*C*D*0))"),
    //.LUTF1("~(C*D)"),
    //.LUTG0("(A*(~(B)*~(C)*~(D)*~(1)+~(B)*C*~(D)*~(1)+B*C*~(D)*~(1)+~(B)*C*D*~(1)+~(B)*~(C)*~(D)*1+~(B)*C*~(D)*1+B*C*~(D)*1+~(B)*~(C)*D*1+B*C*D*1))"),
    //.LUTG1("~(C*D)"),
    .INIT_LUTF0(16'b0010000010100010),
    .INIT_LUTF1(16'b0000111111111111),
    .INIT_LUTG0(16'b1000001010100010),
    .INIT_LUTG1(16'b0000111111111111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_383  (
    .a({open_n9840,\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 }),
    .b({open_n9841,\tx/tmds_gen[1]$tmds_channel/data_island_data [0]}),
    .c({\tx/mode [0],\tx/tmds_gen[1]$tmds_channel/data_island_data [1]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 ,\tx/tmds_gen[1]$tmds_channel/data_island_data [2]}),
    .e({open_n9844,\tx/tmds_gen[1]$tmds_channel/data_island_data [3]}),
    .f({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_264 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~((B@A))*~((0@D))+~C*(B@A)*~((0@D))+~(~C)*(B@A)*(0@D)+~C*(B@A)*(0@D))"),
    //.LUTF1("(B@(A*C*~(D)+~(A)*~(C)*D))"),
    //.LUTG0("(~C*~((B@A))*~((1@D))+~C*(B@A)*~((1@D))+~(~C)*(B@A)*(1@D)+~C*(B@A)*(1@D))"),
    //.LUTG1("(B@(A*C*~(D)+~(A)*~(C)*D))"),
    .INIT_LUTF0(16'b0110011000001111),
    .INIT_LUTF1(16'b1100100101101100),
    .INIT_LUTG0(16'b0000111101100110),
    .INIT_LUTG1(16'b1100100101101100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_386  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .b({\tx/tmds_gen[2]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[2]$tmds_channel/lt0_syn_16 }),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [5],\tx/tmds_gen[2]$tmds_channel/video_data [0]}),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [6],\tx/tmds_gen[2]$tmds_channel/video_data [1]}),
    .e({open_n9867,\tx/tmds_gen[2]$tmds_channel/video_data [3]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_258 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_246 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*B*~(C)*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+A*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+~(A)*~(B)*C*D*0)"),
    //.LUTG0("(A*B*~(C)*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+A*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+~(A)*~(B)*C*D*1)"),
    .INIT_LUTF0(16'b1111111011101000),
    .INIT_LUTF1(16'b0111111111111111),
    .INIT_LUTG0(16'b1111111111111110),
    .INIT_LUTG1(16'b0001011101111111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_389  (
    .a({\tx/tmds_gen[2]$tmds_channel/video_data [0],\tx/tmds_gen[2]$tmds_channel/video_data [0]}),
    .b({\tx/tmds_gen[2]$tmds_channel/video_data [1],\tx/tmds_gen[2]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [2],\tx/tmds_gen[2]$tmds_channel/video_data [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [6],\tx/tmds_gen[2]$tmds_channel/video_data [6]}),
    .e({\tx/tmds_gen[2]$tmds_channel/video_data [7],\tx/tmds_gen[2]$tmds_channel/video_data [7]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_228 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_241 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(0@D@C@B@A)"),
    //.LUT1("~(1@D@C@B@A)"),
    .INIT_LUT0(16'b1001011001101001),
    .INIT_LUT1(16'b0110100110010110),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_391  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 }),
    .b({\tx/tmds_gen[2]$tmds_channel/video_data [1],\tx/tmds_gen[2]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [4],\tx/tmds_gen[2]$tmds_channel/video_data [4]}),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [5],\tx/tmds_gen[2]$tmds_channel/video_data [5]}),
    .mi({open_n9922,\tx/tmds_gen[2]$tmds_channel/video_data [7]}),
    .fx({open_n9927,\tx/tmds_gen[2]$tmds_channel/mux7_syn_254 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(D@(~(~0*~C)*~(A)*~(B)+~(~0*~C)*A*~(B)+~(~(~0*~C))*A*B+~(~0*~C)*A*B))"),
    //.LUTF1("(~C*~B*~D)"),
    //.LUTG0("(D@(~(~1*~C)*~(A)*~(B)+~(~1*~C)*A*~(B)+~(~(~1*~C))*A*B+~(~1*~C)*A*B))"),
    //.LUTG1("(~C*~B*~D)"),
    .INIT_LUTF0(16'b0100011110111000),
    .INIT_LUTF1(16'b0000000000000011),
    .INIT_LUTG0(16'b0100010010111011),
    .INIT_LUTG1(16'b0000000000000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_393  (
    .a({open_n9930,\tx/tmds_gen[2]$tmds_channel/acc_add[3]_syn_2 }),
    .b({\tx/tmds_gen[2]$tmds_channel/acc [2],\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[2]$tmds_channel/acc [3],\tx/tmds_gen[2]$tmds_channel/mux7_syn_263 }),
    .d({\tx/tmds_gen[2]$tmds_channel/acc [1],\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [2]}),
    .e({open_n9933,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_265 ,\tx/tmds_gen[2]$tmds_channel/acc_add [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~(C*~(B)*~(0)+C*B*~(0)+~(C)*B*0+C*B*0)*~(A)*~(D)+~(C*~(B)*~(0)+C*B*~(0)+~(C)*B*0+C*B*0)*A*~(D)+~(~(C*~(B)*~(0)+C*B*~(0)+~(C)*B*0+C*B*0))*A*D+~(C*~(B)*~(0)+C*B*~(0)+~(C)*B*0+C*B*0)*A*D)"),
    //.LUTF1("~((~C*B)*~(A)*~(D)+(~C*B)*A*~(D)+~((~C*B))*A*D+(~C*B)*A*D)"),
    //.LUTG0("~(~(C*~(B)*~(1)+C*B*~(1)+~(C)*B*1+C*B*1)*~(A)*~(D)+~(C*~(B)*~(1)+C*B*~(1)+~(C)*B*1+C*B*1)*A*~(D)+~(~(C*~(B)*~(1)+C*B*~(1)+~(C)*B*1+C*B*1))*A*D+~(C*~(B)*~(1)+C*B*~(1)+~(C)*B*1+C*B*1)*A*D)"),
    //.LUTG1("~((~C*B)*~(A)*~(D)+(~C*B)*A*~(D)+~((~C*B))*A*D+(~C*B)*A*D)"),
    .INIT_LUTF0(16'b0101010111110000),
    .INIT_LUTF1(16'b0101010111110011),
    .INIT_LUTG0(16'b0101010111001100),
    .INIT_LUTG1(16'b0101010111110011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_395  (
    .a({\tx/tmds_gen[2]$tmds_channel/acc_add_b5 [4],\tx/tmds_gen[2]$tmds_channel/acc_add[4]_syn_4 }),
    .b({\tx/tmds_gen[2]$tmds_channel/acc_add_b4 [4],\tx/tmds_gen[2]$tmds_channel/acc_add_b5 [4]}),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_265 ,\tx/tmds_gen[2]$tmds_channel/acc_add_b4 [4]}),
    .d({\tx/tmds_gen[2]$tmds_channel/acc [4],\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 }),
    .e({open_n9956,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .f({\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/acc_add [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*C*~(D)*0+A*B*C*~(D)*0+A*~(B)*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+A*B*C*D*0)"),
    //.LUT1("(A*~(B)*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*C*~(D)*1+A*B*C*~(D)*1+A*~(B)*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+A*B*C*D*1)"),
    .INIT_LUT0(16'b1011101110100000),
    .INIT_LUT1(16'b1011001010100000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_397  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_237 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_237 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_232 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_232 }),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_239 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_239 }),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_228 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_228 }),
    .mi({open_n9989,\tx/tmds_gen[2]$tmds_channel/mux7_syn_241 }),
    .fx({open_n9994,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(B*~(~C*~(D@A)))"),
    //.LUTF1("(~B*(D@C@A))"),
    //.LUTG0("~(B*~(~C*~(D@A)))"),
    //.LUTG1("(~B*(D@C@A))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011101100110111),
    .INIT_LUTF1(16'b0010000100010010),
    .INIT_LUTG0(16'b0011101100110111),
    .INIT_LUTG1(16'b0010000100010010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_399  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_269 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_259 }),
    .b({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_283 }),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [0],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [1],\tx/tmds_gen[1]$tmds_channel/video_data [0]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_299 ,open_n10014}),
    .q({open_n10018,\tx/tmds_gen[1]$tmds_channel/tmds [0]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(B*~(~D*(C@A)))"),
    //.LUT1("(D*~(C*B))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011001101111011),
    .INIT_LUT1(16'b0011111100000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_401  (
    .a({open_n10019,\tx/tmds_gen[2]$tmds_channel/mux7_syn_269 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux6_syn_138 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_286 }),
    .c({\tx/tmds_gen[1]$tmds_channel/mux7_syn_206 ,\tx/tmds_gen[2]$tmds_channel/q_m_b[5]_syn_2 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_283 ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_286 ,open_n10033}),
    .q({open_n10037,\tx/tmds_gen[2]$tmds_channel/tmds [5]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("~(C*~D)"),
    //.LUT1("(~C*~(B*D))"),
    .INIT_LUT0(16'b1111111100001111),
    .INIT_LUT1(16'b0000001100001111),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_404  (
    .b({\tx/tmds_gen[2]$tmds_channel/control_data [0],open_n10040}),
    .c({\tx/mode [2],\tx/mode [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_214 }),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_283 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUTG0("(A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    .INIT_LUTF0(16'b1101100101001110),
    .INIT_LUTF1(16'b1011100100001111),
    .INIT_LUTG0(16'b1101100101001110),
    .INIT_LUTG1(16'b1011100100001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_408  (
    .a({\tx/tmds_gen[2]$tmds_channel/data_island_data [0],\tx/tmds_gen[2]$tmds_channel/data_island_data [0]}),
    .b({\tx/tmds_gen[2]$tmds_channel/data_island_data [1],\tx/tmds_gen[2]$tmds_channel/data_island_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/data_island_data [2],\tx/tmds_gen[2]$tmds_channel/data_island_data [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/data_island_data [3],\tx/tmds_gen[2]$tmds_channel/data_island_data [3]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux6_syn_200 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_289 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("~(D@C@B@A)"),
    //.LUTF1("(A*(B*C*~(D)+B*~(C)*D+~(B)*C*D+B*C*D))"),
    //.LUTG0("~(D@C@B@A)"),
    //.LUTG1("(A*(B*C*~(D)+B*~(C)*D+~(B)*C*D+B*C*D))"),
    .INIT_LUTF0(16'b1001011001101001),
    .INIT_LUTF1(16'b1010100010000000),
    .INIT_LUTG0(16'b1001011001101001),
    .INIT_LUTG1(16'b1010100010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_412  (
    .a({\tx/tmds_gen[2]$tmds_channel/add0_syn_50 ,\tx/tmds_gen[2]$tmds_channel/video_data [1]}),
    .b({\tx/tmds_gen[2]$tmds_channel/video_data [3],\tx/tmds_gen[2]$tmds_channel/video_data [3]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [4],\tx/tmds_gen[2]$tmds_channel/video_data [5]}),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [5],\tx/tmds_gen[2]$tmds_channel/video_data [7]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_232 ,\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*B*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D+A*B*C*D)"),
    //.LUT1("(D@C@(~B*~A))"),
    .INIT_LUT0(16'b1011100110111010),
    .INIT_LUT1(16'b0001111011100001),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_414  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_250 ,\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_252 ,\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_256 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_258 ,\tx/tmds_gen[2]$tmds_channel/sub1_syn_22 }),
    .f({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1],\tx/tmds_gen[2]$tmds_channel/acc_add[3]_syn_2 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(A@(~D*C*B))"),
    //.LUT1("(~(~D*C)*~(B*A))"),
    .INIT_LUT0(16'b1010101001101010),
    .INIT_LUT1(16'b0111011100000111),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_416  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_263 ,\tx/tmds_gen[2]$tmds_channel/acc_add_b5 [4]}),
    .b({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [2],\tx/tmds_gen[2]$tmds_channel/mux7_syn_263 }),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_265 ,\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/acc [4],\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .f({\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/acc_add_b2 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B)"),
    //.LUT1("(B*(C@D))"),
    .INIT_LUT0(16'b1111110000110000),
    .INIT_LUT1(16'b0000110011000000),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_419  (
    .b({\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/acc_add_n_syn_2 }),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .d({\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 ,\tx/tmds_gen[2]$tmds_channel/acc_add_b_n_syn_2 }),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_269 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_275 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(B)*~(C)*~((D@A))+B*~(C)*~((D@A))+~(B)*C*~((D@A))+B*~(C)*(D@A)+~(B)*C*(D@A)+B*C*(D@A))"),
    //.LUTF1("(~(D)*~(B)*~(C)+~(D)*B*~(C)+D*B*~(C)+~(D)*B*C)"),
    //.LUTG0("(~(B)*~(C)*~((D@A))+B*~(C)*~((D@A))+~(B)*C*~((D@A))+B*~(C)*(D@A)+~(B)*C*(D@A)+B*C*(D@A))"),
    //.LUTG1("(~(D)*~(B)*~(C)+~(D)*B*~(C)+D*B*~(C)+~(D)*B*C)"),
    .INIT_LUTF0(16'b0111111010111101),
    .INIT_LUTF1(16'b0000110011001111),
    .INIT_LUTG0(16'b0111111010111101),
    .INIT_LUTG1(16'b0000110011001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_422  (
    .a({open_n10171,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .b({\tx/tmds_gen[2]$tmds_channel/video_data [2],\tx/tmds_gen[2]$tmds_channel/q_out_b3 [4]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [3],\tx/tmds_gen[2]$tmds_channel/mux7_syn_254 }),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 ,\tx/tmds_gen[2]$tmds_channel/video_data [6]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_248 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_256 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@B@D)"),
    //.LUTF1("(C@B@D)"),
    //.LUTG0("(C@B@D)"),
    //.LUTG1("(C@B@D)"),
    .INIT_LUTF0(16'b1100001100111100),
    .INIT_LUTF1(16'b1100001100111100),
    .INIT_LUTG0(16'b1100001100111100),
    .INIT_LUTG1(16'b1100001100111100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_425  (
    .b({\tx/tmds_gen[2]$tmds_channel/video_data [4],\tx/tmds_gen[2]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [5],\tx/tmds_gen[2]$tmds_channel/video_data [2]}),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [3],\tx/tmds_gen[2]$tmds_channel/video_data [0]}),
    .f({\tx/tmds_gen[2]$tmds_channel/add0_syn_6 [0],\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(~A*(D@C@B))"),
    //.LUT1("(A*~(D@C@B))"),
    .INIT_LUT0(16'b0100000100010100),
    .INIT_LUT1(16'b0010100010000010),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_428  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_246 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_246 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_248 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_248 }),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [0],\tx/tmds_gen[2]$tmds_channel/video_data [0]}),
    .d({\tx/tmds_gen[2]$tmds_channel/video_data [1],\tx/tmds_gen[2]$tmds_channel/video_data [1]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_252 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_250 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(B*(D@C@A))"),
    //.LUT1("~(C@B@D)"),
    .INIT_LUT0(16'b1000010001001000),
    .INIT_LUT1(16'b0011110011000011),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_431  (
    .a({open_n10242,\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 }),
    .b({\tx/tmds_gen[2]$tmds_channel/video_data [3],\tx/tmds_gen[2]$tmds_channel/add0_syn_6 [0]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [4],\tx/tmds_gen[2]$tmds_channel/video_data [6]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[2]$tmds_channel/video_data [7]}),
    .f({\tx/tmds_gen[2]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[2]$tmds_channel/add0_syn_50 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*(~(B)*~(C)*~(D)+B*~(C)*~(D)+~(B)*C*~(D)+~(B)*~(C)*D))"),
    //.LUTF1("(C*~D)"),
    //.LUTG0("(~A*(~(B)*~(C)*~(D)+B*~(C)*~(D)+~(B)*C*~(D)+~(B)*~(C)*D))"),
    //.LUTG1("(C*~D)"),
    .INIT_LUTF0(16'b0000000100010101),
    .INIT_LUTF1(16'b0000000011110000),
    .INIT_LUTG0(16'b0000000100010101),
    .INIT_LUTG1(16'b0000000011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_434  (
    .a({open_n10263,\tx/tmds_gen[2]$tmds_channel/add0_syn_50 }),
    .b({open_n10264,\tx/tmds_gen[2]$tmds_channel/video_data [3]}),
    .c({\tx/tmds_gen[2]$tmds_channel/video_data [0],\tx/tmds_gen[2]$tmds_channel/video_data [4]}),
    .d({\tx/tmds_gen[2]$tmds_channel/lt0_syn_16 ,\tx/tmds_gen[2]$tmds_channel/video_data [5]}),
    .f({\tx/tmds_gen[2]$tmds_channel/mux7_syn_237 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_239 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@B@D)"),
    //.LUTF1("(C@D)"),
    //.LUTG0("(C@B@D)"),
    //.LUTG1("(C@D)"),
    .INIT_LUTF0(16'b1100001100111100),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b1100001100111100),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/tmds_gen[2]$tmds_channel/mux7_syn_438  (
    .b({open_n10291,\tx/tmds_gen[2]$tmds_channel/video_data [6]}),
    .c({\tx/tmds_gen[2]$tmds_channel/add0_syn_6 [0],\tx/tmds_gen[2]$tmds_channel/video_data [7]}),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 ,\tx/tmds_gen[2]$tmds_channel/q_m_b[5]_syn_2 }),
    .f({\tx/tmds_gen[2]$tmds_channel/q_m_b[5]_syn_2 ,\tx/tmds_gen[2]$tmds_channel/lt0_syn_16 }));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(160)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("SUB_CARRY"),
    .INIT_LUT0(16'b0000000000000101),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[2]$tmds_channel/sub2_syn_32  (
    .a({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1],1'b0}),
    .b({\tx/tmds_gen[2]$tmds_channel/N0q_m07 [1],open_n10316}),
    .fco(\tx/tmds_gen[2]$tmds_channel/sub2_syn_21 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[2]$tmds_channel/sub2_syn_35  (
    .a(\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [3:2]),
    .b(\tx/tmds_gen[2]$tmds_channel/N0q_m07 [3:2]),
    .fci(\tx/tmds_gen[2]$tmds_channel/sub2_syn_21 ),
    .fco(\tx/tmds_gen[2]$tmds_channel/sub2_syn_23 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/sub2_syn_32"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[2]$tmds_channel/sub2_syn_37  (
    .fci(\tx/tmds_gen[2]$tmds_channel/sub2_syn_23 ),
    .f({open_n10388,\tx/tmds_gen[2]$tmds_channel/acc_add_b5 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(74)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("SUB_CARRY"),
    .INIT_LUT0(16'b0000000000000101),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[2]$tmds_channel/sub3_syn_32  (
    .a({\tx/tmds_gen[2]$tmds_channel/N0q_m07 [1],1'b0}),
    .b({\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [1],open_n10394}),
    .fco(\tx/tmds_gen[2]$tmds_channel/sub3_syn_21 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[2]$tmds_channel/sub3_syn_35  (
    .a(\tx/tmds_gen[2]$tmds_channel/N0q_m07 [3:2]),
    .b(\tx/tmds_gen[2]$tmds_channel/N1q_m07_b [3:2]),
    .fci(\tx/tmds_gen[2]$tmds_channel/sub3_syn_21 ),
    .fco(\tx/tmds_gen[2]$tmds_channel/sub3_syn_23 ));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_MSLICE #(
    //.MACRO("tx/tmds_gen[2]$tmds_channel/sub3_syn_32"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("SUB"),
    .INIT_LUT0(16'b1001100110011010),
    .INIT_LUT1(16'b1001100110011010),
    .MODE("RIPPLE"))
    \tx/tmds_gen[2]$tmds_channel/sub3_syn_37  (
    .fci(\tx/tmds_gen[2]$tmds_channel/sub3_syn_23 ),
    .f({open_n10466,\tx/tmds_gen[2]$tmds_channel/acc_add_b4 [4]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(79)
  EG_PHY_LSLICE #(
    //.LUTF0("~(B*~(~C*~(D@A)))"),
    //.LUTF1("~(~C*B*~D)"),
    //.LUTG0("~(B*~(~C*~(D@A)))"),
    //.LUTG1("~(~C*B*~D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011101100110111),
    .INIT_LUTF1(16'b1111111111110011),
    .INIT_LUTG0(16'b0011101100110111),
    .INIT_LUTG1(16'b1111111111110011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/tmds_reg[1]_syn_4  (
    .a({open_n10472,\tx/tmds_gen[2]$tmds_channel/mux7_syn_275 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_283 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_296 }),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_301 ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[2]$tmds_channel/mux7_syn_299 ,\tx/tmds_gen[2]$tmds_channel/video_data [0]}),
    .q(\tx/tmds_gen[2]$tmds_channel/tmds [1:0]));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(~C*~(D@A)))"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D)"),
    //.LUTG0("~(~B*~(~C*~(D@A)))"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100111011001101),
    .INIT_LUTF1(16'b0011001101010010),
    .INIT_LUTG0(16'b1100111011001101),
    .INIT_LUTG1(16'b0011001101010010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .REG1_REGSET("SET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/tmds_reg[4]_syn_4  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_275 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_275 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_291 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_306 }),
    .c({\tx/tmds_gen[2]$tmds_channel/q_out_b3 [4],\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 }),
    .q({\tx/tmds_gen[2]$tmds_channel/tmds [4],\tx/tmds_gen[2]$tmds_channel/tmds [2]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~(C*~(~D*~(A)*~(0)+~D*A*~(0)+~(~D)*A*0+~D*A*0)))"),
    //.LUTF1("~(~B*~(~D*~(0@C@A)))"),
    //.LUTG0("(~B*~(C*~(~D*~(A)*~(1)+~D*A*~(1)+~(~D)*A*1+~D*A*1)))"),
    //.LUTG1("~(~B*~(~D*~(1@C@A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000001100110011),
    .INIT_LUTF1(16'b1100110011101101),
    .INIT_LUTG0(16'b0010001100100011),
    .INIT_LUTG1(16'b1100110011011110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .REG1_REGSET("SET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/tmds_reg[6]_syn_4  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_275 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_243 }),
    .b({\tx/tmds_gen[2]$tmds_channel/mux7_syn_273 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_224 }),
    .c({\tx/tmds_gen[2]$tmds_channel/q_m_b[5]_syn_2 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[2]$tmds_channel/control_data [0]}),
    .e({\tx/tmds_gen[2]$tmds_channel/video_data [6],\tx/mode [0]}),
    .q({\tx/tmds_gen[2]$tmds_channel/tmds [6],\tx/tmds_gen[2]$tmds_channel/tmds [8]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~(~C*(0@D@A)))"),
    //.LUTF1("~(~C*~(~D*(B@A)))"),
    //.LUTG0("~(~B*~(~C*(1@D@A)))"),
    //.LUTG1("~(~C*~(~D*(B@A)))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100110111001110),
    .INIT_LUTF1(16'b1111000011110110),
    .INIT_LUTG0(16'b1100111011001101),
    .INIT_LUTG1(16'b1111000011110110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/tmds_gen[2]$tmds_channel/tmds_reg[7]_syn_4  (
    .a({\tx/tmds_gen[2]$tmds_channel/mux7_syn_269 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_269 }),
    .b({\tx/tmds_gen[2]$tmds_channel/lt0_syn_16 ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_311 }),
    .c({\tx/tmds_gen[2]$tmds_channel/mux7_syn_280 ,\tx/tmds_gen[0]$tmds_channel/acc_b1_n }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[0]$tmds_channel/acc_b1_n ,\tx/tmds_gen[2]$tmds_channel/mux7_syn_226 }),
    .e({open_n10537,\tx/tmds_gen[2]$tmds_channel/video_data [3]}),
    .q({\tx/tmds_gen[2]$tmds_channel/tmds [7],\tx/tmds_gen[2]$tmds_channel/tmds [3]}));  // ../../../rtl/p1/hdmi_core/tmds_channel.sv(158)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*D)"),
    //.LUTG0("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000000000),
    .INIT_LUTG0(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$data_island_preamble_reg_syn_5  (
    .c({open_n10562,\tx/true_hdmi_output$data_island_preamble_n4 }),
    .clk(\tx/clk_pixel ),
    .d({open_n10564,\tx/true_hdmi_output$data_island_preamble_n5 }),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({open_n10586,\tx/true_hdmi_output$data_island_preamble }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(282)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@(B*D))"),
    //.LUTF1("(C@D)"),
    //.LUTG0("(C@(B*D))"),
    //.LUTG1("(C@D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0011110011110000),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b0011110011110000),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/counter_reg[0]_syn_7  (
    .b({open_n10589,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/data_island_period ,\tx/true_hdmi_output$packet_assembler/data_island_period }),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [1]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(15)
  EG_PHY_MSLICE #(
    //.LUT0("(D@(C*B*A))"),
    //.LUT1("~(~D*C*~(B*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0111111110000000),
    .INIT_LUT1(16'b1111111101001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/mux13_syn_129  (
    .a({\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/data_island_period }),
    .c({\tx/true_hdmi_output$packet_assembler/data_island_period ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/serializer/reset_dup_234 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39],open_n10625}),
    .q({open_n10629,\tx/true_hdmi_output$packet_assembler/counter [3]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(69)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~(D*C)*~(~0*A))"),
    //.LUTF1("(D*~(~B*~(C*A)))"),
    //.LUTG0("(~B*~(D*C)*~(~1*A))"),
    //.LUTG1("(D*~(~B*~(C*A)))"),
    .INIT_LUTF0(16'b0000000100010001),
    .INIT_LUTF1(16'b1110110000000000),
    .INIT_LUTG0(16'b0000001100110011),
    .INIT_LUTG1(16'b1110110000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_29  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_packet/header_n1 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_22 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_4 }),
    .e({open_n10632,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/mux0_syn_56 ,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_10 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(C*~(~D*~(~B*~A)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b1111000000010000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_34  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 ,open_n10653}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 ,\tx/serializer/lane[1]$shift [6]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_4 ,\tx/tmds_gen[1]$tmds_channel/tmds [4]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_6 ,open_n10667}),
    .q({open_n10671,\tx/serializer/lane[1]$shift [4]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*D)"),
    //.LUT1("(~D*(B*~(A)*~(C)+B*A*~(C)+~(B)*A*C+B*A*C))"),
    .INIT_LUT0(16'b0000111100000000),
    .INIT_LUT1(16'b0000000010101100),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_36  (
    .a({\tx/true_hdmi_output$packet_assembler/mux0_syn_56 ,open_n10672}),
    .b({\tx/true_hdmi_output$packet_assembler/mux0_syn_55 ,open_n10673}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .d({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 }),
    .f({\tx/true_hdmi_output$packet_assembler/mux9_syn_42 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(47)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D*C*A*~(~0*B))"),
    //.LUTF1("(C*~(~A*~(D*B)))"),
    //.LUTG0("(~D*C*A*~(~1*B))"),
    //.LUTG1("(C*~(~A*~(D*B)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000000100000),
    .INIT_LUTF1(16'b1110000010100000),
    .INIT_LUTG0(16'b0000000010100000),
    .INIT_LUTG1(16'b1110000010100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_137  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_12 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_2 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [10],\tx/true_hdmi_output$packet_picker/packet_type [0]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_picker/packet_type [1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_2 ,\tx/true_hdmi_output$packet_picker/packet_type [2]}),
    .e({open_n10695,\tx/true_hdmi_output$packet_picker/packet_type [7]}),
    .mi({open_n10697,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [4]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_14 ,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_2 }),
    .q({open_n10712,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [4]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(1*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b0101111100111111),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_139  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [22],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [23]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [20],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [21]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n10715,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_28 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_31 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(1*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b0101111100111111),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_141  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [2],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [22]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [20]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n10738,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_18 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_2 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTF1("(D*(B*~(A)*~(C)+B*A*~(C)+~(B)*A*C+B*A*C))"),
    //.LUTG0("(1*C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG1("(D*(B*~(A)*~(C)+B*A*~(C)+~(B)*A*C+B*A*C))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1010110000000000),
    .INIT_LUTG0(16'b1010000011000000),
    .INIT_LUTG1(16'b1010110000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_144  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [14],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [23]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [21]}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d(\tx/true_hdmi_output$packet_assembler/counter [1:0]),
    .e({open_n10761,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_12 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_53 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(~1*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUTF0(16'b0101111100111111),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_147  (
    .a(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [19:18]),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [17:16]),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n10784,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_49 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_30 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D))"),
    //.LUTF1("(D*(C@B))"),
    //.LUTG0("(~1*(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+A*~(B)*C*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+A*~(B)*~(C)*D+~(A)*~(B)*C*D+A*~(B)*C*D))"),
    //.LUTG1("(D*(C@B))"),
    .INIT_LUTF0(16'b0011001011110011),
    .INIT_LUTF1(16'b0011110000000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b0011110000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_150  (
    .a({open_n10805,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_77 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_20 }),
    .c({\tx/true_hdmi_output$packet_picker/packet_type [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .e({open_n10808,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_22 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_81 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~B*~A*~(D*C))"),
    //.LUTF1("(D*~(~B*~(C*A)))"),
    //.LUTG0("(~1*~B*~A*~(D*C))"),
    //.LUTG1("(D*~(~B*~(C*A)))"),
    .INIT_LUTF0(16'b0000000100010001),
    .INIT_LUTF1(16'b1110110000000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1110110000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_153  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [8],\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_18 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_20 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_22 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .e({open_n10831,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_42 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_24 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(B*~A*~(0*C)))"),
    //.LUTF1("(~B*A*~(D*C))"),
    //.LUTG0("(D*~(B*~A*~(1*C)))"),
    //.LUTG1("(~B*A*~(D*C))"),
    .INIT_LUTF0(16'b1011101100000000),
    .INIT_LUTF1(16'b0000001000100010),
    .INIT_LUTG0(16'b1111101100000000),
    .INIT_LUTG1(16'b0000001000100010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_155  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_27 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_80 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_18 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_78 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }),
    .e({open_n10854,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_26 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_82 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~A*~((C*~B))*~(D)+~A*(C*~B)*~(D)+~(~A)*(C*~B)*D+~A*(C*~B)*D))"),
    //.LUTF1("(C*~(B*D))"),
    //.LUTG0("(~1*(~A*~((C*~B))*~(D)+~A*(C*~B)*~(D)+~(~A)*(C*~B)*D+~A*(C*~B)*D))"),
    //.LUTG1("(C*~(B*D))"),
    .INIT_LUTF0(16'b0011000001010101),
    .INIT_LUTF1(16'b0011000011110000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b0011000011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_158  (
    .a({open_n10875,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_6 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_77 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .e({open_n10878,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_10 ,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_8 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+A*B*C*~(D)*0)"),
    //.LUTF1("(~0*~(D*~C)*~(B*~A))"),
    //.LUTG0("(~(A)*B*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+A*B*C*~(D)*1)"),
    //.LUTG1("(~1*~(D*~C)*~(B*~A))"),
    .INIT_LUTF0(16'b1111110011111100),
    .INIT_LUTF1(16'b1011000010111011),
    .INIT_LUTG0(16'b0000000011111010),
    .INIT_LUTG1(16'b0000000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_161  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_59 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_70 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_61 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_79 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_81 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .e({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_83 ,\tx/true_hdmi_output$packet_assembler/mux2_syn_39 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+A*B*~(C)*~(D)*0+A*~(B)*C*~(D)*0+A*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(D*~(~C*~(B*A)))"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+A*B*~(C)*~(D)*1+A*~(B)*C*~(D)*1+A*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(D*~(~C*~(B*A)))"),
    .INIT_LUTF0(16'b1100110000001111),
    .INIT_LUTF1(16'b1111100000000000),
    .INIT_LUTG0(16'b1111111110101010),
    .INIT_LUTG1(16'b1111100000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_163  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [8],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_134 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_138 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_154 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .e({open_n10923,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_8 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_140 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*(~(~C*~B)*~(A)*~(D)+~(~C*~B)*A*~(D)+~(~(~C*~B))*A*D+~(~C*~B)*A*D))"),
    //.LUTF1("(~(~D*~C*~B)*~(A)*~(0)+~(~D*~C*~B)*A*~(0)+~(~(~D*~C*~B))*A*0+~(~D*~C*~B)*A*0)"),
    //.LUTG0("(~1*(~(~C*~B)*~(A)*~(D)+~(~C*~B)*A*~(D)+~(~(~C*~B))*A*D+~(~C*~B)*A*D))"),
    //.LUTG1("(~(~D*~C*~B)*~(A)*~(1)+~(~D*~C*~B)*A*~(1)+~(~(~D*~C*~B))*A*1+~(~D*~C*~B)*A*1)"),
    .INIT_LUTF0(16'b1010101011111100),
    .INIT_LUTF1(16'b1111111111111100),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1010101010101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_166  (
    .a({\tx/true_hdmi_output$packet_assembler/mux2_syn_39 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_54 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_83 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_14 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_75 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_42 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_87 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .e(\tx/true_hdmi_output$packet_assembler/counter [4:3]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_44 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*~(~C*B)*~(~D*A))"),
    //.LUTF1("(~A*~(D*~C*~B))"),
    //.LUTG0("(1*~(~C*B)*~(~D*A))"),
    //.LUTG1("(~A*~(D*~C*~B))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0101010001010101),
    .INIT_LUTG0(16'b1111001101010001),
    .INIT_LUTG1(16'b0101010001010101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_168  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_32 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_59 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_28 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_61 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_15 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_112 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_114 }),
    .e({open_n10968,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_34 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_116 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("~(0@D@C@B@A)"),
    //.LUTF1("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTG0("~(1@D@C@B@A)"),
    //.LUTG1("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .INIT_LUTF0(16'b1001011001101001),
    .INIT_LUTF1(16'b0000111111001010),
    .INIT_LUTG0(16'b0110100110010110),
    .INIT_LUTG1(16'b0000111111001010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_170  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [11],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_124 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [9],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [9]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_55 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [8]}),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [15]}),
    .e({open_n10991,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [14]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_57 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_126 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0@D@C@B@A)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG0("(1@D@C@B@A)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    .INIT_LUTF0(16'b0110100110010110),
    .INIT_LUTF1(16'b0101001100001111),
    .INIT_LUTG0(16'b1001011001101001),
    .INIT_LUTG1(16'b0101001100001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_172  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [15],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_35 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [13],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_37 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [23]}),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [22]}),
    .e({open_n11014,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [21]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_55 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_39 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("~(0@D@C@B@A)"),
    //.LUT1("~(1@D@C@B@A)"),
    .INIT_LUT0(16'b1001011001101001),
    .INIT_LUT1(16'b0110100110010110),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_174  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_63 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_63 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_65 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_65 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [23],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [23]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [22],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [22]}),
    .mi({open_n11047,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [21]}),
    .fx({open_n11052,\tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[0]_n29 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(C@D)"),
    //.LUTG1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111111110000),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b0000111111110000),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_176  (
    .c({\tx/true_hdmi_output$packet_assembler/bch[0] [57],\tx/true_hdmi_output$packet_assembler/bch[3] [56]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0]_b2_n ,\tx/true_hdmi_output$packet_assembler/mux7_syn_51 }),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_91 ,\tx/true_hdmi_output$packet_assembler/parity_next[3] [7]}),
    .q({open_n11078,\tx/true_hdmi_output$packet_assembler/bch[3] [62]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~B*D)"),
    //.LUT1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011000000000000),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_178  (
    .b({open_n11081,\tx/true_hdmi_output$packet_picker/packet_type [2]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_picker/packet_type [7]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_57 ,\tx/true_hdmi_output$packet_picker/packet_type [1]}),
    .mi({open_n11093,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [8]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_59 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 }),
    .q({open_n11097,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [8]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*~(D*~C*B))"),
    //.LUTF1("(~C*~(~B*~D))"),
    //.LUTG0("(~A*~(D*~C*B))"),
    //.LUTG1("(~C*~(~B*~D))"),
    .INIT_LUTF0(16'b0101000101010101),
    .INIT_LUTF1(16'b0000111100001100),
    .INIT_LUTG0(16'b0101000101010101),
    .INIT_LUTG1(16'b0000111100001100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_180  (
    .a({open_n11098,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_2 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 }),
    .c(\tx/true_hdmi_output$packet_assembler/counter [1:0]),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_49 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_51 ,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_4 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTF1("(D@C@B@A)"),
    //.LUTG0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG1("(D@C@B@A)"),
    .INIT_LUTF0(16'b1010000011000000),
    .INIT_LUTF1(16'b0110100110010110),
    .INIT_LUTG0(16'b1010000011000000),
    .INIT_LUTG1(16'b0110100110010110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_183  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [15],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [15]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [14],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [13]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [19],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [18],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_65 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_106 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUTF0(16'b1010000011000000),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b1010000011000000),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_185  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [3],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [3]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [1]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_79 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_364 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUT1("~(D@C@B@A)"),
    .INIT_LUT0(16'b1010000011000000),
    .INIT_LUT1(16'b1001011001101001),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_187  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [13],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [3]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [17],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [16],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [20],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_63 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_261 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*~A*~(D*B))"),
    //.LUT1("(~C*~B*D)"),
    .INIT_LUT0(16'b0000000100000101),
    .INIT_LUT1(16'b0000001100000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_189  (
    .a({open_n11191,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_136 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_114 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_30 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_32 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_138 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~B*~((~C*~A))*~(D)+~B*(~C*~A)*~(D)+~(~B)*(~C*~A)*D+~B*(~C*~A)*D)"),
    //.LUTF1("(D@C@B@A)"),
    //.LUTG0("~(~B*~((~C*~A))*~(D)+~B*(~C*~A)*~(D)+~(~B)*(~C*~A)*D+~B*(~C*~A)*D)"),
    //.LUTG1("(D@C@B@A)"),
    .INIT_LUTF0(16'b1111101011001100),
    .INIT_LUTF1(16'b0110100110010110),
    .INIT_LUTG0(16'b1111101011001100),
    .INIT_LUTG1(16'b0110100110010110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_191  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [11],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_106 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [10],\tx/true_hdmi_output$packet_assembler/mux14_syn_166 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [9],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [8],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_68 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_154 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~B*A*~(D*C))"),
    //.LUT1("(D*~(~C*~(~B*~A)))"),
    .INIT_LUT0(16'b0000001000100010),
    .INIT_LUT1(16'b1111000100000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_195  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_73 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_61 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_59 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_49 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_53 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_75 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_73 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C)"),
    //.LUT1("(~A*~(D*C*B))"),
    .INIT_LUT0(16'b1100111111000000),
    .INIT_LUT1(16'b0001010101010101),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_197  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_44 ,open_n11256}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_132 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_40 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_130 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_46 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_134 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~A*~((~C*~B))*~(D)+~A*(~C*~B)*~(D)+~(~A)*(~C*~B)*D+~A*(~C*~B)*D)"),
    //.LUTF1("(D*~(~C*~B*A))"),
    //.LUTG0("~(~A*~((~C*~B))*~(D)+~A*(~C*~B)*~(D)+~(~A)*(~C*~B)*D+~A*(~C*~B)*D)"),
    //.LUTG1("(D*~(~C*~B*A))"),
    .INIT_LUTF0(16'b1111110010101010),
    .INIT_LUTF1(16'b1111110100000000),
    .INIT_LUTG0(16'b1111110010101010),
    .INIT_LUTG1(16'b1111110100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_200  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_85 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_59 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_79 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_51 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_45 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_53 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_87 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_61 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(~C*~B*A))"),
    //.LUTF1("(~C*~D)"),
    //.LUTG0("(D*~(~C*~B*A))"),
    //.LUTG1("(~C*~D)"),
    .INIT_LUTF0(16'b1111110100000000),
    .INIT_LUTF1(16'b0000000000001111),
    .INIT_LUTG0(16'b1111110100000000),
    .INIT_LUTG1(16'b0000000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_204  (
    .a({open_n11301,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_47 }),
    .b({open_n11302,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_261 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_77 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_59 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*D)"),
    //.LUTG0("(~C*D)"),
    .INIT_LUTF0(16'b0000111100000000),
    .INIT_LUTG0(16'b0000111100000000),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_206  (
    .c({open_n11331,\tx/true_hdmi_output$packet_picker/packet_type [0]}),
    .d({open_n11334,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 }),
    .f({open_n11352,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_20 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*(0@D@B@A))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(C*(1@D@B@A))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1001000001100000),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b0110000010010000),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_203  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [23],\tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[0]_n29 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [21],\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_68 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [12]}),
    .e({open_n11359,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_40 }),
    .mi({open_n11361,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_114 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_70 }),
    .q({open_n11376,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(~1*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUTF0(16'b0101111100111111),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_205  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [19],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [19]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [17],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [17]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n11379,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_112 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_29 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTF1("(D*~C*B*A)"),
    //.LUTG0("(1*C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG1("(D*~C*B*A)"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0000100000000000),
    .INIT_LUTG0(16'b1010000011000000),
    .INIT_LUTG1(16'b0000100000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_207  (
    .a({\tx/true_hdmi_output$packet_picker/eq2_syn_29 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [23]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_packet/audio_sample_word_present [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [21]}),
    .c({\tx/true_hdmi_output$packet_picker/packet_type [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_picker/packet_type [1],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n11402,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_44 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(1*C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG1("~(C@D)"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b1010000011000000),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_210  (
    .a({open_n11423,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [14]}),
    .b({open_n11424,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [12]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [22],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [23],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n11427,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_120 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_67 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+A*~(B)*C*~(D)*0+A*B*C*~(D)*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(~D*~(~A*~(C*B)))"),
    //.LUTG0("(~(A)*B*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+A*~(B)*C*~(D)*1+A*B*C*~(D)*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(~D*~(~A*~(C*B)))"),
    .INIT_LUTF0(16'b1110110010101100),
    .INIT_LUTF1(16'b0000000011101010),
    .INIT_LUTG0(16'b1110000010101100),
    .INIT_LUTG1(16'b0000000011101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_212  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_packet/mux0_syn_27 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .e({open_n11450,\tx/true_hdmi_output$packet_picker/packet_type [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_95 ,\tx/true_hdmi_output$packet_assembler/mux0_syn_55 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(~B*~A*~(D*C)))"),
    //.LUTF1("(~B*~(~C*~D))"),
    //.LUTG0("(~1*~(~B*~A*~(D*C)))"),
    //.LUTG1("(~B*~(~C*~D))"),
    .INIT_LUTF0(16'b1111111011101110),
    .INIT_LUTF1(16'b0011001100110000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b0011001100110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_215  (
    .a({open_n11471,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_63 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_67 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_65 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [10]}),
    .e({open_n11474,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_69 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_88 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~B*~A*~(~0*D))"),
    //.LUTF1("(D*~(~B*~(C*~A)))"),
    //.LUTG0("(C*~B*~A*~(~1*D))"),
    //.LUTG1("(D*~(~B*~(C*~A)))"),
    .INIT_LUTF0(16'b0000000000010000),
    .INIT_LUTF1(16'b1101110000000000),
    .INIT_LUTG0(16'b0001000000010000),
    .INIT_LUTG1(16'b1101110000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_220  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_91 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_14 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_8 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_10 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_23 }),
    .e({open_n11497,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_93 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_16 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~(~A*~(D*~C))*~(B)*~(0)+~(~A*~(D*~C))*B*~(0)+~(~(~A*~(D*~C)))*B*0+~(~A*~(D*~C))*B*0)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("~(~(~A*~(D*~C))*~(B)*~(1)+~(~A*~(D*~C))*B*~(1)+~(~(~A*~(D*~C)))*B*1+~(~A*~(D*~C))*B*1)"),
    //.LUTG1("(C*D)"),
    .INIT_LUTF0(16'b0101000001010101),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0011001100110011),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_225  (
    .a({open_n11518,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_8 }),
    .b({open_n11519,\tx/true_hdmi_output$packet_assembler/mux9_syn_42 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_10 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }),
    .e({open_n11522,\tx/true_hdmi_output$packet_assembler/counter [4]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_15 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~A*~(0*~(~D*~C*B)))"),
    //.LUT1("(~A*~(1*~(~D*~C*B)))"),
    .INIT_LUT0(16'b0101010101010101),
    .INIT_LUT1(16'b0000000000000100),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_227  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_116 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_116 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_47 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_47 }),
    .c({\tx/true_hdmi_output$packet_assembler/mux14_syn_158 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_158 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .mi({open_n11555,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 }),
    .fx({open_n11560,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_118 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(0@D@C@B@A)"),
    //.LUT1("(1@D@C@B@A)"),
    .INIT_LUT0(16'b0110100110010110),
    .INIT_LUT1(16'b1001011001101001),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_231  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_126 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_126 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_122 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_122 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_120 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_120 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [17],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [17]}),
    .mi({open_n11575,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [16]}),
    .fx({open_n11580,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_128 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUT1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111111001010),
    .INIT_LUT1(16'b1010000011000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_233  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [11],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [10]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [9],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [8]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_9 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({open_n11594,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/mux14_syn_166 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_11 }),
    .q({open_n11598,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C@(B*D))"),
    //.LUT1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011110011110000),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_235  (
    .b({open_n11601,\tx/true_hdmi_output$packet_assembler/data_island_period }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 ,open_n11615}),
    .q({open_n11619,\tx/true_hdmi_output$packet_assembler/counter [2]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~D)"),
    //.LUT1("(~C*~D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000011111111),
    .INIT_LUT1(16'b0000000000001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_237  (
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_45 ,open_n11624}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_43 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_47 ,open_n11637}),
    .q({open_n11641,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*~(D*C*B))"),
    //.LUTF1("(C*~(~B*D))"),
    //.LUTG0("(~A*~(D*C*B))"),
    //.LUTG1("(C*~(~B*D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0001010101010101),
    .INIT_LUTF1(16'b1100000011110000),
    .INIT_LUTG0(16'b0001010101010101),
    .INIT_LUTG1(16'b1100000011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_239  (
    .a({open_n11642,\tx/true_hdmi_output$packet_picker/audio_sample_packet/mux0_syn_27 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_31 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_49 ,\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4]}),
    .mi({open_n11647,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [10]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_91 }),
    .q({open_n11662,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [10]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTF1("(~C*~D)"),
    //.LUTG0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG1("(~C*~D)"),
    .INIT_LUTF0(16'b1010000011000000),
    .INIT_LUTF1(16'b0000000000001111),
    .INIT_LUTG0(16'b1010000011000000),
    .INIT_LUTG1(16'b0000000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_242  (
    .a({open_n11663,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [22]}),
    .b({open_n11664,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [20]}),
    .c({\tx/true_hdmi_output$packet_picker/packet_type [7],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_picker/packet_type [2],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_picker/eq2_syn_29 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_6 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUT1("(~D*~A*~(C*B))"),
    .INIT_LUT0(16'b1010000011000000),
    .INIT_LUT1(16'b0000000000010101),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_245  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_63 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [18]}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [16]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [10],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_23 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_65 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_80 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUT1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUT0(16'b1010000011000000),
    .INIT_LUT1(16'b1010000011000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_248  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [3],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [22]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [20]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/mux14_syn_158 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_74 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(~(~D*B)*~(C*~A))"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(~(~D*B)*~(C*~A))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1010111100100011),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1010111100100011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_254  (
    .a({\tx/true_hdmi_output$packet_assembler/mux14_syn_154 ,open_n11729}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_53 ,\tx/serializer/lane[1]$shift [8]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 ,\tx/tmds_gen[1]$tmds_channel/tmds [6]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/mux14_syn_158 ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/mux14_syn_146 ,open_n11747}),
    .q({open_n11751,\tx/serializer/lane[1]$shift [6]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_256  (
    .b({open_n11754,\tx/serializer/lane[2]$shift [6]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 ,\tx/tmds_gen[2]$tmds_channel/tmds [4]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_39 ,open_n11772}),
    .q({open_n11776,\tx/serializer/lane[2]$shift [4]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(~D*~(~B*~(A)*~(C)+~B*A*~(C)+~(~B)*A*C+~B*A*C))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b0000000001011100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_258  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_69 ,open_n11777}),
    .b({\tx/true_hdmi_output$packet_assembler/mux15_syn_151 ,\tx/serializer/lane[1]$shift [9]}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/tmds_gen[1]$tmds_channel/tmds [7]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_72 ,open_n11791}),
    .q({open_n11795,\tx/serializer/lane[1]$shift [7]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C*D)"),
    //.LUT1("(~C*~D)"),
    .INIT_LUT0(16'b1111000000000000),
    .INIT_LUT1(16'b0000000000001111),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_261  (
    .c(\tx/true_hdmi_output$packet_assembler/counter [2:1]),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_53 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*D)"),
    //.LUTF1("~((~C*~B)*~(A)*~(D)+(~C*~B)*A*~(D)+~((~C*~B))*A*D+(~C*~B)*A*D)"),
    //.LUTG0("(C*D)"),
    //.LUTG1("~((~C*~B)*~(A)*~(D)+(~C*~B)*A*~(D)+~((~C*~B))*A*D+(~C*~B)*A*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000000000),
    .INIT_LUTF1(16'b0101010111111100),
    .INIT_LUTG0(16'b1111000000000000),
    .INIT_LUTG1(16'b0101010111111100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_263  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_99 ,open_n11820}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_80 ,open_n11821}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 ,\tx/tmds_gen[1]$tmds_channel/tmds [9]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_156 ,open_n11839}),
    .q({open_n11843,\tx/serializer/lane[1]$shift [9]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~A*~(D*C))"),
    //.LUTF1("(~C*~(B*(D@A)))"),
    //.LUTG0("(~B*~A*~(D*C))"),
    //.LUTG1("(~C*~(B*(D@A)))"),
    .INIT_LUTF0(16'b0000000100010001),
    .INIT_LUTF1(16'b0000101100000111),
    .INIT_LUTG0(16'b0000000100010001),
    .INIT_LUTG1(16'b0000101100000111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_268  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_128 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_74 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/mux0_syn_27 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_130 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_99 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~D)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(~C*~D)"),
    //.LUTG1("(C*D)"),
    .INIT_LUTF0(16'b0000000000001111),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0000000000001111),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_272  (
    .c({\tx/true_hdmi_output$packet_picker/packet_type [0],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_57 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_61 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUT1("(D@C@B@A)"),
    .INIT_LUT0(16'b1111100101100000),
    .INIT_LUT1(16'b0110100110010110),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_276  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [19],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [18],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [21],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [4]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [20],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [4]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_122 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [4]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~D)"),
    //.LUTF1("(C*~(~B*~D))"),
    //.LUTG0("(C*~D)"),
    //.LUTG1("(C*~(~B*~D))"),
    .INIT_LUTF0(16'b0000000011110000),
    .INIT_LUTF1(16'b1111000011000000),
    .INIT_LUTG0(16'b0000000011110000),
    .INIT_LUTG1(16'b1111000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_279  (
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_95 ,open_n11918}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_93 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_97 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("~((~C*~B)*~(A)*~(D)+(~C*~B)*A*~(D)+~((~C*~B))*A*D+(~C*~B)*A*D)"),
    //.LUT1("(~B*~A*~(D*~C))"),
    .INIT_LUT0(16'b0101010111111100),
    .INIT_LUT1(16'b0001000000010001),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_282  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_72 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_46 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_84 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_16 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_76 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_24 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_82 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_86 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_37 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("~(A*~(~D*~(B*~(C)*~(0)+B*C*~(0)+~(B)*C*0+B*C*0)))"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("~(A*~(~D*~(B*~(C)*~(1)+B*C*~(1)+~(B)*C*1+B*C*1)))"),
    //.LUTG1("~(C@D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0101010101110111),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b0101010101011111),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_103  (
    .a({open_n11963,\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_15 }),
    .b({open_n11964,\tx/true_hdmi_output$packet_data[0]_syn_4 }),
    .c({\tx/true_hdmi_output$packet_assembler/bch[2] [57],\tx/true_hdmi_output$packet_data[0]_syn_8 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n }),
    .e({open_n11966,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_66 ,open_n11981}),
    .q({open_n11985,\tx/tmds_gen[0]$tmds_channel/data_island_data [2]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(~1*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTG1("(C*D)"),
    .INIT_LUTF0(16'b0101111100111111),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_105  (
    .a({open_n11986,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [18]}),
    .b({open_n11987,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [16]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_11 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n11990,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_260 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_4 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTF1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUTG0("(~1*~(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D)))"),
    //.LUTG1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUTF0(16'b0101111100111111),
    .INIT_LUTF1(16'b1010000011000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1010000011000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_109  (
    .a(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [19:18]),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [17:16]),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .e({open_n12013,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_42 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_4 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+A*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+~(A)*~(B)*C*D*0+~(A)*B*C*D*0)"),
    //.LUTF1("(D@C@B@A)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+A*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+~(A)*~(B)*C*D*1+~(A)*B*C*D*1)"),
    //.LUTG1("(D@C@B@A)"),
    .INIT_LUTF0(16'b0000001100001111),
    .INIT_LUTF1(16'b0110100110010110),
    .INIT_LUTG0(16'b0101010111111111),
    .INIT_LUTG1(16'b0110100110010110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_112  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_39 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [2]}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_33 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [0]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [12],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/header_n1 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .e({open_n12036,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[2] [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_23 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(~B*A*~(0*C)))"),
    //.LUTF1("~((~D*~C*~B)*~(A)*~(0)+(~D*~C*~B)*A*~(0)+~((~D*~C*~B))*A*0+(~D*~C*~B)*A*0)"),
    //.LUTG0("(D*~(~B*A*~(1*C)))"),
    //.LUTG1("~((~D*~C*~B)*~(A)*~(1)+(~D*~C*~B)*A*~(1)+~((~D*~C*~B))*A*1+(~D*~C*~B)*A*1)"),
    .INIT_LUTF0(16'b1101110100000000),
    .INIT_LUTF1(16'b1111111111111100),
    .INIT_LUTG0(16'b1111110100000000),
    .INIT_LUTG1(16'b0101010101010101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_114  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_56 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_27 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_63 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_151 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_61 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_59 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 }),
    .e({\tx/true_hdmi_output$packet_assembler/counter [4],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_84 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~(~(~C*~A)*~(D)*~(0)+~(~C*~A)*D*~(0)+~(~(~C*~A))*D*0+~(~C*~A)*D*0))"),
    //.LUTF1("(D*~C*~B*~A)"),
    //.LUTG0("(~B*~(~(~C*~A)*~(D)*~(1)+~(~C*~A)*D*~(1)+~(~(~C*~A))*D*1+~(~C*~A)*D*1))"),
    //.LUTG1("(D*~C*~B*~A)"),
    .INIT_LUTF0(16'b0000000100000001),
    .INIT_LUTF1(16'b0000000100000000),
    .INIT_LUTG0(16'b0000000000110011),
    .INIT_LUTG1(16'b0000000100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_117  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_6 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_42 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_15 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_44 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .e({open_n12081,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_19 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_46 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(D*C*B)*~(~0*A))"),
    //.LUTF1("(~B*~(0*~(~C*~(D*A))))"),
    //.LUTG0("(~(D*C*B)*~(~1*A))"),
    //.LUTG1("(~B*~(1*~(~C*~(D*A))))"),
    .INIT_LUTF0(16'b0001010101010101),
    .INIT_LUTF1(16'b0011001100110011),
    .INIT_LUTG0(16'b0011111111111111),
    .INIT_LUTG1(16'b0000000100000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_119  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[2] [0],\tx/true_hdmi_output$packet_assembler/mux14_syn_354 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_54 ,\tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[3] [0]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }),
    .e({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_56 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_39 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~0*~(~D*B)*~(C*A))"),
    //.LUT1("(~1*~(~D*B)*~(C*A))"),
    .INIT_LUT0(16'b0101111100010011),
    .INIT_LUT1(16'b0000000000000000),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_121  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_52 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_52 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_53 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_53 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 }),
    .d({\tx/true_hdmi_output$packet_assembler/mux14_syn_261 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_261 }),
    .mi({open_n12136,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .fx({open_n12141,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_63 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(0*~(~D*~(~A*~(~C*B))))"),
    //.LUT1("(1*~(~D*~(~A*~(~C*B))))"),
    .INIT_LUT0(16'b0000000000000000),
    .INIT_LUT1(16'b1111111101010001),
    .MODE("LOGIC"),
    .MSFXMUX("ON"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_123  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_59 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_59 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_61 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_61 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_42 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_42 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_44 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_44 }),
    .mi({open_n12156,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }),
    .fx({open_n12161,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_61 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D@(C*B*A))"),
    //.LUTF1("~((C*~B)*~(A)*~(D)+(C*~B)*A*~(D)+~((C*~B))*A*D+(C*~B)*A*D)"),
    //.LUTG0("(D@(C*B*A))"),
    //.LUTG1("~((C*~B)*~(A)*~(D)+(C*~B)*A*~(D)+~((C*~B))*A*D+(C*~B)*A*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0111111110000000),
    .INIT_LUTF1(16'b0101010111001111),
    .INIT_LUTG0(16'b0111111110000000),
    .INIT_LUTG1(16'b0101010111001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_126  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_27 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_29 ,\tx/true_hdmi_output$packet_assembler/data_island_period }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [4],\tx/true_hdmi_output$packet_assembler/counter [4]}),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({\tx/true_hdmi_output$packet_assembler/mux5_syn_55 ,open_n12181}),
    .q({open_n12185,\tx/true_hdmi_output$packet_assembler/counter [4]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D)"),
    //.LUTF1("(D*~A*~(~C*B))"),
    //.LUTG0("(~D)"),
    //.LUTG1("(D*~A*~(~C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000011111111),
    .INIT_LUTF1(16'b0101000100000000),
    .INIT_LUTG0(16'b0000000011111111),
    .INIT_LUTG1(16'b0101000100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_128  (
    .a({\tx/true_hdmi_output$packet_assembler/mux15_syn_260 ,open_n12186}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_23 ,open_n12187}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [1],open_n12188}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/serializer/toggle }),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_25 ,open_n12206}),
    .q({open_n12210,\tx/serializer/toggle }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUT1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    .INIT_LUT0(16'b0101001100001111),
    .INIT_LUT1(16'b0101001100001111),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_131  (
    .a(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [15:14]),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [13:12]),
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_48 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_9 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUT1("(~A*~(D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000011001100),
    .INIT_LUT1(16'b0001010101010101),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_135  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_15 ,open_n12231}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 ,\tx/serializer/lane[2]$shift [9]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_packet/header_n1 ,\tx/tmds_gen[2]$tmds_channel/tmds [7]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_17 ,open_n12245}),
    .q({open_n12249,\tx/serializer/lane[2]$shift [7]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("(~D*(A*~(B)*~(C)+A*B*~(C)+~(A)*B*C+A*B*C))"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("(~D*(A*~(B)*~(C)+A*B*~(C)+~(A)*B*C+A*B*C))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b0000000011001010),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b0000000011001010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_137  (
    .a({\tx/true_hdmi_output$packet_assembler/mux15_syn_260 ,open_n12250}),
    .b({\tx/true_hdmi_output$packet_assembler/mux15_syn_261 ,\tx/serializer/lane[2]$shift [8]}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/tmds_gen[2]$tmds_channel/tmds [6]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_233 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_15 ,open_n12268}),
    .q({open_n12272,\tx/serializer/lane[2]$shift [6]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*D)"),
    //.LUTF1("(~A*~(D*~(C*B)))"),
    //.LUTG0("(C*D)"),
    //.LUTG1("(~A*~(D*~(C*B)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000000000),
    .INIT_LUTF1(16'b0100000001010101),
    .INIT_LUTG0(16'b1111000000000000),
    .INIT_LUTG1(16'b0100000001010101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_139  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_21 ,open_n12273}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_27 ,open_n12274}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_23 ,\tx/tmds_gen[1]$tmds_channel/tmds [8]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 ,\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_29 ,open_n12292}),
    .q({open_n12296,\tx/serializer/lane[1]$shift [8]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*~(D*~C*~B))"),
    //.LUTF1("(~B*~(C*D))"),
    //.LUTG0("(~A*~(D*~C*~B))"),
    //.LUTG1("(~B*~(C*D))"),
    .INIT_LUTF0(16'b0101010001010101),
    .INIT_LUTF1(16'b0000001100110011),
    .INIT_LUTG0(16'b0101010001010101),
    .INIT_LUTG1(16'b0000001100110011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_142  (
    .a({open_n12297,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_4 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_6 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_50 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_52 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_261 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~B*~(D*~C*~A))"),
    //.LUTF1("(~D*~(A*~(B)*~(C)+A*B*~(C)+~(A)*B*C+A*B*C))"),
    //.LUTG0("(~B*~(D*~C*~A))"),
    //.LUTG1("(~D*~(A*~(B)*~(C)+A*B*~(C)+~(A)*B*C+A*B*C))"),
    .INIT_LUTF0(16'b0011001000110011),
    .INIT_LUTF1(16'b0000000000110101),
    .INIT_LUTG0(16'b0011001000110011),
    .INIT_LUTG1(16'b0000000000110101),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_144  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_52 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_28 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_46 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_30 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_54 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_54 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUT1("~(D@C@B@A)"),
    .INIT_LUT0(16'b0000111111001010),
    .INIT_LUT1(16'b1001011001101001),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_147  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [11],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [11]}),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [10:9]),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [9],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_48 }),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [8],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_33 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_50 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@D)"),
    //.LUTF1("(~D*~A*~(~C*B))"),
    //.LUTG0("(C@D)"),
    //.LUTG1("(~D*~A*~(~C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111111110000),
    .INIT_LUTF1(16'b0000000001010001),
    .INIT_LUTG0(16'b0000111111110000),
    .INIT_LUTG1(16'b0000000001010001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_149  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_25 ,open_n12366}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_23 ,open_n12367}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/serializer/sync }),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/serializer/meta }),
    .sr(\tx/serializer/reset ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_27 ,\tx/serializer/lane[0]$shift_b_n }),
    .q({open_n12388,\tx/serializer/lane[3]$shift [3]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~B*~(D*~(C@A)))"),
    //.LUT1("(D*~A*~(~C*B))"),
    .INIT_LUT0(16'b0001001000110011),
    .INIT_LUT1(16'b0101000100000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_151  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_19 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_128 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_91 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_132 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D@C@B@A)"),
    //.LUTF1("~(D@C@B@A)"),
    //.LUTG0("(D@C@B@A)"),
    //.LUTG1("~(D@C@B@A)"),
    .INIT_LUTF0(16'b0110100110010110),
    .INIT_LUTF1(16'b1001011001101001),
    .INIT_LUTG0(16'b0110100110010110),
    .INIT_LUTG1(16'b1001011001101001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_155  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [13],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [15]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [17],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [14]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [16],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [19]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [20],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [18]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_37 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*~(~D*B)*~(~C*A))"),
    //.LUTF1("(D*~A*~(~C*B))"),
    //.LUTG0("(1*~(~D*B)*~(~C*A))"),
    //.LUTG1("(D*~A*~(~C*B))"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b0101000100000000),
    .INIT_LUTG0(16'b1111010100110001),
    .INIT_LUTG1(16'b0101000100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_101  (
    .a({\tx/true_hdmi_output$packet_assembler/mux15_syn_366 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_2 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_23 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_4 }),
    .c({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_15 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_2 }),
    .e({open_n12435,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_13 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_6 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*C*~B*~A)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(D*C*~B*~A)"),
    //.LUTG1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0001000000000000),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0001000000000000),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("MI"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_103  (
    .a({open_n12456,\tx/true_hdmi_output$packet_picker/packet_type [0]}),
    .b({open_n12457,\tx/true_hdmi_output$packet_picker/packet_type [1]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_picker/packet_type [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_10 ,\tx/true_hdmi_output$packet_picker/packet_type [7]}),
    .mi({open_n12462,reset_pipe[2]}),
    .sr(reset_async),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_366 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_6 }),
    .q({open_n12477,\tx/serializer/reset_dup_235 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C@D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(C@D)"),
    //.LUTG1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111111110000),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b0000111111110000),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_105  (
    .c({\tx/true_hdmi_output$packet_assembler/bch[3] [57],\tx/true_hdmi_output$packet_assembler/bch[3] [59]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[3]_b2_n ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3] [7]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_54 ,open_n12498}),
    .q({open_n12502,\tx/true_hdmi_output$packet_assembler/bch[3] [57]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("~(~C*~D)"),
    //.LUT1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111111111110000),
    .INIT_LUT1(16'b0101001100001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_107  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [15],open_n12503}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [13],open_n12504}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_picker/audio_sample_packet/audio_sample_word_present [0]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_33 ,open_n12518}),
    .q({open_n12522,\tx/true_hdmi_output$packet_picker/audio_sample_packet/audio_sample_word_present [0]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTF1("(D@C@B@A)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG1("(D@C@B@A)"),
    .INIT_LUTF0(16'b0101001100001111),
    .INIT_LUTF1(16'b0110100110010110),
    .INIT_LUTG0(16'b0101001100001111),
    .INIT_LUTG1(16'b0110100110010110),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_110  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [8],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [14]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [15],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [12]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [14],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [13],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_22 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_8 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    //.LUT1("(C*(B*~(A)*~(D)+B*A*~(D)+~(B)*A*D+B*A*D))"),
    .INIT_LUT0(16'b1010000011000000),
    .INIT_LUT1(16'b1010000011000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_113  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [2],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [2]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [0]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_362 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_151 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*B*D)"),
    //.LUTF1("~(D@C@B@A)"),
    //.LUTG0("(~C*B*D)"),
    //.LUTG1("~(D@C@B@A)"),
    .INIT_LUTF0(16'b0000110000000000),
    .INIT_LUTF1(16'b1001011001101001),
    .INIT_LUTG0(16'b0000110000000000),
    .INIT_LUTG1(16'b1001011001101001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_115  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [19],open_n12567}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [18],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [17],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [20],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [8]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_24 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_63 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUT1("(A*~(B)*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*B*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .INIT_LUT0(16'b0000111111001010),
    .INIT_LUT1(16'b0000111111001010),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_118  (
    .a(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [11:10]),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [9:8]),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_33 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_8 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_35 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_10 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~D)"),
    //.LUTF1("(D*~(~C*~B*A))"),
    //.LUTG0("(C*~D)"),
    //.LUTG1("(D*~(~C*~B*A))"),
    .INIT_LUTF0(16'b0000000011110000),
    .INIT_LUTF1(16'b1111110100000000),
    .INIT_LUTG0(16'b0000000011110000),
    .INIT_LUTG1(16'b1111110100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_120  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_31 ,open_n12612}),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_37 ,open_n12613}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_55 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_21 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_55 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_48 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_59 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("~((~C*~B)*~(A)*~(D)+(~C*~B)*A*~(D)+~((~C*~B))*A*D+(~C*~B)*A*D)"),
    //.LUT1("~((C*~B)*~(A)*~(D)+(C*~B)*A*~(D)+~((C*~B))*A*D+(C*~B)*A*D)"),
    .INIT_LUT0(16'b0101010111111100),
    .INIT_LUT1(16'b0101010111001111),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_122  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_39 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_26 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_46 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_34 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_50 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_39 }),
    .d({\tx/true_hdmi_output$packet_assembler/counter [4],\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3]_b2_n ,\tx/true_hdmi_output$packet_assembler/mux15_syn_46 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*~(~B*D))"),
    //.LUTF1("(A*~(D*~C*~B))"),
    //.LUTG0("(~C*~(~B*D))"),
    //.LUTG1("(A*~(D*~C*~B))"),
    .INIT_LUTF0(16'b0000110000001111),
    .INIT_LUTF1(16'b1010100010101010),
    .INIT_LUTG0(16'b0000110000001111),
    .INIT_LUTG1(16'b1010100010101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_125  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_44 ,open_n12658}),
    .b({\tx/true_hdmi_output$packet_assembler/mux14_syn_360 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_364 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 ,\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_51 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_53 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_46 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_44 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(~C*~B*A))"),
    //.LUTF1("(~A*~(B*~(~D*C)))"),
    //.LUTG0("(D*~(~C*~B*A))"),
    //.LUTG1("(~A*~(B*~(~D*C)))"),
    .INIT_LUTF0(16'b1111110100000000),
    .INIT_LUTF1(16'b0001000101010001),
    .INIT_LUTG0(16'b1111110100000000),
    .INIT_LUTG1(16'b0001000101010001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_128  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_42 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_47 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_48 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_41 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_29 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_364 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_57 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_4 }),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_50 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_42 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D@C@B@A)"),
    //.LUTF1("~(D@C@B@A)"),
    //.LUTG0("(D@C@B@A)"),
    //.LUTG1("~(D@C@B@A)"),
    .INIT_LUTF0(16'b0110100110010110),
    .INIT_LUTF1(16'b1001011001101001),
    .INIT_LUTG0(16'b0110100110010110),
    .INIT_LUTG1(16'b1001011001101001),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_130  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [11],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [11]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [10],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [10]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [9],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [13]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [12]}),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_20 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_124 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(D@C@B@A)"),
    .INIT_LUT0(16'b0110100110010110),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_132  (
    .a({open_n12731,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [16]}),
    .b({open_n12732,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [23]}),
    .c({open_n12733,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [22]}),
    .d({open_n12736,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [21]}),
    .f({open_n12750,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_26 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(D@C@B@A)"),
    //.LUTG0("(D@C@B@A)"),
    .INIT_LUTF0(16'b0110100110010110),
    .INIT_LUTG0(16'b0110100110010110),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_134  (
    .a({open_n12756,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_20 }),
    .b({open_n12757,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_22 }),
    .c({open_n12758,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_24 }),
    .d({open_n12761,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_26 }),
    .f({open_n12779,\tx/true_hdmi_output$packet_picker/audio_sample_packet/parity_bit[3] [0]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(0*~(D*C))*~(~B*~A))"),
    //.LUTF1("(A*~((~C*~(~D*B)))*~(0)+A*(~C*~(~D*B))*~(0)+~(A)*(~C*~(~D*B))*0+A*(~C*~(~D*B))*0)"),
    //.LUTG0("(~(1*~(D*C))*~(~B*~A))"),
    //.LUTG1("(A*~((~C*~(~D*B)))*~(1)+A*(~C*~(~D*B))*~(1)+~(A)*(~C*~(~D*B))*1+A*(~C*~(~D*B))*1)"),
    .INIT_LUTF0(16'b1110111011101110),
    .INIT_LUTF1(16'b1010101010101010),
    .INIT_LUTG0(16'b1110000000000000),
    .INIT_LUTG1(16'b0000111100000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_92  (
    .a({\tx/true_hdmi_output$packet_assembler/mux14_syn_360 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_112 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_29 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_31 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_19 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [23]}),
    .e(\tx/true_hdmi_output$packet_assembler/counter [2:1]),
    .f({\tx/true_hdmi_output$packet_assembler/mux14_syn_354 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_136 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(0*~D*C*B*~A)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(1*~D*C*B*~A)"),
    //.LUTG1("(C*D)"),
    .INIT_LUTF0(16'b0000000000000000),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0000000001000000),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_94  (
    .a({open_n12807,\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n }),
    .b({open_n12808,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_2 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_17 ,\tx/true_hdmi_output$packet_picker/eq2_syn_29 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_35 ,\tx/true_hdmi_output$packet_picker/packet_type [0]}),
    .e({open_n12811,\tx/true_hdmi_output$packet_picker/packet_type [1]}),
    .f({\tx/true_hdmi_output$packet_assembler/mux14_syn_360 ,\tx/true_hdmi_output$packet_picker/frame_counter_b1_n }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(A*~((~C*~(~D*B)))*~(0)+A*(~C*~(~D*B))*~(0)+~(A)*(~C*~(~D*B))*0+A*(~C*~(~D*B))*0)"),
    //.LUTG0("(~(A)*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(A*~((~C*~(~D*B)))*~(1)+A*(~C*~(~D*B))*~(1)+~(A)*(~C*~(~D*B))*1+A*(~C*~(~D*B))*1)"),
    .INIT_LUTF0(16'b0101010101010000),
    .INIT_LUTF1(16'b1010101010101010),
    .INIT_LUTG0(16'b1111001100000000),
    .INIT_LUTG1(16'b0000111100000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_97  (
    .a({\tx/true_hdmi_output$packet_assembler/mux15_syn_366 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_13 }),
    .b({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_27 }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_4 ,\tx/true_hdmi_output$packet_assembler/mux15_syn_362 }),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 ,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .e({\tx/true_hdmi_output$packet_assembler/counter [2],\tx/true_hdmi_output$packet_assembler/counter [3]}),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_360 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_16 }));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(51)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUT1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0101001100001111),
    .INIT_LUT1(16'b0000111110101100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[10]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/bch[0] [56],\tx/true_hdmi_output$packet_assembler/bch[0] [62]}),
    .b({\tx/true_hdmi_output$packet_assembler/bch[0] [58],\tx/true_hdmi_output$packet_assembler/bch[0] [60]}),
    .c({\tx/true_hdmi_output$packet_data[1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/bch[1] [60],\tx/true_hdmi_output$packet_assembler/bch[1] [62]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_56 ,\tx/true_hdmi_output$packet_data[1]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[1] [58],\tx/true_hdmi_output$packet_assembler/bch[1] [60]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTF1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0101001100001111),
    .INIT_LUTF1(16'b0000111110101100),
    .INIT_LUTG0(16'b0101001100001111),
    .INIT_LUTG1(16'b0000111110101100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[13]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/bch[1] [56],\tx/true_hdmi_output$packet_assembler/bch[2] [62]}),
    .b({\tx/true_hdmi_output$packet_assembler/bch[1] [58],\tx/true_hdmi_output$packet_assembler/bch[2] [60]}),
    .c({\tx/true_hdmi_output$packet_data[2]_syn_2 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/bch[1] [63],\tx/true_hdmi_output$packet_assembler/bch[2] [61]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_158 ,\tx/true_hdmi_output$packet_data[3]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[1] [61],\tx/true_hdmi_output$packet_assembler/bch[2] [59]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(C@D)"),
    //.LUT1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111111110000),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[14]_syn_4  (
    .c({\tx/true_hdmi_output$packet_assembler/bch[1] [56],\tx/true_hdmi_output$packet_assembler/bch[2] [56]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_103 ,\tx/true_hdmi_output$packet_assembler/mux5_syn_55 }),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next[1] [7],\tx/true_hdmi_output$packet_assembler/parity_next[2] [7]}),
    .q({\tx/true_hdmi_output$packet_assembler/bch[1] [62],\tx/true_hdmi_output$packet_assembler/bch[2] [62]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("~(C@D)"),
    //.LUTF1("(C@D)"),
    //.LUTG0("~(C@D)"),
    //.LUTG1("(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000001111),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b1111000000001111),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[17]_syn_4  (
    .c(\tx/true_hdmi_output$packet_assembler/bch[2] [59:58]),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[2] [7],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_66 }),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .q(\tx/true_hdmi_output$packet_assembler/bch[2] [57:56]));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("~(C@D)"),
    //.LUT1("(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000000001111),
    .INIT_LUT1(16'b0000111111110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[1]_syn_4  (
    .c(\tx/true_hdmi_output$packet_assembler/bch[0] [59:58]),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[0] [7],\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_91 }),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .q(\tx/true_hdmi_output$packet_assembler/bch[0] [57:56]));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTF1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0101001100001111),
    .INIT_LUTF1(16'b0000111110101100),
    .INIT_LUTG0(16'b0101001100001111),
    .INIT_LUTG1(16'b0000111110101100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[20]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/bch[2] [56],\tx/true_hdmi_output$packet_assembler/bch[0] [63]}),
    .b({\tx/true_hdmi_output$packet_assembler/bch[2] [58],\tx/true_hdmi_output$packet_assembler/bch[0] [61]}),
    .c({\tx/true_hdmi_output$packet_data[3]_syn_2 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/bch[2] [62],\tx/true_hdmi_output$packet_assembler/bch[2] [63]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_263 ,\tx/true_hdmi_output$packet_data[5]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[2] [60],\tx/true_hdmi_output$packet_assembler/bch[2] [61]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("~(C@D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("~(C@D)"),
    //.LUTG1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000001111),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b1111000000001111),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[24]_syn_4  (
    .c({\tx/true_hdmi_output$packet_assembler/bch[3] [58],\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_54 }),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[3][1]_syn_54 ,\tx/true_hdmi_output$packet_assembler/parity_next[3] [7]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({open_n12986,\tx/true_hdmi_output$packet_assembler/parity_next_next[3] [7]}),
    .q({\tx/true_hdmi_output$packet_assembler/bch[3] [56],\tx/true_hdmi_output$packet_assembler/bch[3] [63]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTF1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTG0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTG1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111110101100),
    .INIT_LUTF1(16'b0000111110101100),
    .INIT_LUTG0(16'b0000111110101100),
    .INIT_LUTG1(16'b0000111110101100),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[26]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/bch[1] [57],\tx/true_hdmi_output$packet_assembler/bch[2] [57]}),
    .b({\tx/true_hdmi_output$packet_assembler/bch[1] [59],\tx/true_hdmi_output$packet_assembler/bch[2] [59]}),
    .c({\tx/true_hdmi_output$packet_data[6]_syn_4 ,\tx/true_hdmi_output$packet_data[7]_syn_2 }),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/bch[3] [60],\tx/true_hdmi_output$packet_assembler/bch[3] [61]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/mux14_syn_157 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_260 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[3] [58],\tx/true_hdmi_output$packet_assembler/bch[3] [59]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUT1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0101001100001111),
    .INIT_LUT1(16'b0101001100001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[28]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/bch[1] [63],\tx/true_hdmi_output$packet_assembler/bch[2] [63]}),
    .b({\tx/true_hdmi_output$packet_assembler/bch[1] [61],\tx/true_hdmi_output$packet_assembler/bch[2] [61]}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/bch[3] [62],\tx/true_hdmi_output$packet_assembler/bch[3] [63]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_data[6]_syn_4 ,\tx/true_hdmi_output$packet_data[7]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[3] [60],\tx/true_hdmi_output$packet_assembler/bch[3] [61]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(C@D)"),
    //.LUT1("(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111111110000),
    .INIT_LUT1(16'b0000111111110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[32]_syn_4  (
    .c({\tx/true_hdmi_output$packet_assembler/parity[4] [1],\tx/true_hdmi_output$packet_assembler/parity[4] [2]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next[4] [7],\tx/true_hdmi_output$packet_assembler/parity_next[4] [7]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .q({\tx/true_hdmi_output$packet_assembler/parity[4] [0],\tx/true_hdmi_output$packet_assembler/parity[4] [1]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*C*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*C*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0101001100001111),
    .INIT_LUTF1(16'b1111000001010011),
    .INIT_LUTG0(16'b0101001100001111),
    .INIT_LUTG1(16'b1111000001010011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[35]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity[4] [0],\tx/true_hdmi_output$packet_assembler/parity[4] [3]}),
    .b({\tx/true_hdmi_output$packet_assembler/parity[4] [1],\tx/true_hdmi_output$packet_assembler/parity[4] [2]}),
    .c({\tx/true_hdmi_output$packet_data[0]_syn_2 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/parity[4] [4],\tx/true_hdmi_output$packet_assembler/parity[4] [5]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_data[0]_syn_4 ,\tx/true_hdmi_output$packet_data[0]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/parity[4] [3],\tx/true_hdmi_output$packet_assembler/parity[4] [4]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUT1("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*~(B)*C*~(D)+~(A)*B*C*~(D)+~(A)*~(B)*C*D+A*~(B)*C*D+~(A)*B*C*D+A*B*C*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0101001100001111),
    .INIT_LUT1(16'b1111000001010011),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[37]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity[4] [4],\tx/true_hdmi_output$packet_assembler/parity[4] [7]}),
    .b({\tx/true_hdmi_output$packet_assembler/parity[4] [5],\tx/true_hdmi_output$packet_assembler/parity[4] [6]}),
    .c({\tx/true_hdmi_output$packet_data[0]_syn_6 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/parity[4] [6],\tx/true_hdmi_output$packet_assembler/parity[4] [7]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_data[0]_syn_8 ,\tx/true_hdmi_output$packet_data[0]_syn_6 }),
    .q({\tx/true_hdmi_output$packet_assembler/parity[4] [5],\tx/true_hdmi_output$packet_assembler/parity[4] [6]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTF1("~(C@D)"),
    //.LUTG0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUTG1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0101001100001111),
    .INIT_LUTF1(16'b1111000000001111),
    .INIT_LUTG0(16'b0101001100001111),
    .INIT_LUTG1(16'b1111000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[39]_syn_4  (
    .a({open_n13071,\tx/true_hdmi_output$packet_assembler/bch[3] [63]}),
    .b({open_n13072,\tx/true_hdmi_output$packet_assembler/bch[3] [61]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity[4] [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next[4][1]_syn_15 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({open_n13076,\tx/true_hdmi_output$packet_assembler/parity[4] [3]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next[4] [7],\tx/true_hdmi_output$packet_data[8]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/parity[4] [7],\tx/true_hdmi_output$packet_assembler/parity[4] [2]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTF1("(C@D)"),
    //.LUTG0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUTG1("(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111110101100),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b0000111110101100),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[3]_syn_4  (
    .a({open_n13091,\tx/true_hdmi_output$packet_assembler/bch[3] [57]}),
    .b({open_n13092,\tx/true_hdmi_output$packet_assembler/bch[3] [59]}),
    .c({\tx/true_hdmi_output$packet_assembler/bch[1] [57],\tx/true_hdmi_output$packet_data[8]_syn_2 }),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_142 ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi(\tx/true_hdmi_output$packet_assembler/bch[0] [61:60]),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_144 ,\tx/true_hdmi_output$packet_assembler/mux14_syn_363 }),
    .q(\tx/true_hdmi_output$packet_assembler/bch[0] [59:58]));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUT1("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0101001100001111),
    .INIT_LUT1(16'b0000111110101100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[4]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/bch[3] [56],\tx/true_hdmi_output$packet_assembler/bch[3] [62]}),
    .b({\tx/true_hdmi_output$packet_assembler/bch[3] [58],\tx/true_hdmi_output$packet_assembler/bch[3] [60]}),
    .c({\tx/true_hdmi_output$packet_data[4]_syn_2 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [1],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({\tx/true_hdmi_output$packet_assembler/bch[0] [62],\tx/true_hdmi_output$packet_assembler/bch[0] [63]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/mux15_syn_369 ,\tx/true_hdmi_output$packet_data[4]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[0] [60],\tx/true_hdmi_output$packet_assembler/bch[0] [61]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+A*~(B)*C*~(D)+A*B*C*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*B*~(C)*D+A*B*~(C)*D)"),
    //.LUT1("(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111110101100),
    .INIT_LUT1(16'b0000111111110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[6]_syn_4  (
    .a({open_n13123,\tx/true_hdmi_output$packet_assembler/bch[0] [57]}),
    .b({open_n13124,\tx/true_hdmi_output$packet_assembler/bch[0] [59]}),
    .c({\tx/true_hdmi_output$packet_assembler/bch[0] [56],\tx/true_hdmi_output$packet_data[5]_syn_2 }),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next[0]_b2_n ,\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({open_n13135,\tx/true_hdmi_output$packet_assembler/bch[1] [61]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next[0] [7],\tx/true_hdmi_output$packet_assembler/mux14_syn_54 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[0] [62],\tx/true_hdmi_output$packet_assembler/bch[1] [59]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("(~(A)*~(B)*~(C)*~(D)+A*~(B)*~(C)*~(D)+~(A)*B*~(C)*~(D)+A*B*~(C)*~(D)+~(A)*~(B)*~(C)*D+A*~(B)*~(C)*D+~(A)*~(B)*C*D+~(A)*B*C*D)"),
    //.LUT1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0101001100001111),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[7]_syn_4  (
    .a({open_n13139,\tx/true_hdmi_output$packet_assembler/bch[1] [62]}),
    .b({open_n13140,\tx/true_hdmi_output$packet_assembler/bch[1] [60]}),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_91 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next[0] [7],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .mi({open_n13151,\tx/true_hdmi_output$packet_assembler/bch[2] [60]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[0] [7],\tx/true_hdmi_output$packet_data[2]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_assembler/bch[0] [63],\tx/true_hdmi_output$packet_assembler/bch[2] [58]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_MSLICE #(
    //.LUT0("~(C@D)"),
    //.LUT1("~(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111000000001111),
    .INIT_LUT1(16'b1111000000001111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[8]_syn_4  (
    .c({\tx/true_hdmi_output$packet_assembler/bch[1] [58],\tx/true_hdmi_output$packet_assembler/parity_next[1] [7]}),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_144 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_144 }),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({open_n13171,\tx/true_hdmi_output$packet_assembler/parity_next_next[1] [7]}),
    .q({\tx/true_hdmi_output$packet_assembler/bch[1] [56],\tx/true_hdmi_output$packet_assembler/bch[1] [63]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("~(C@D)"),
    //.LUTF1("(C@D)"),
    //.LUTG0("~(C@D)"),
    //.LUTG1("(C@D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000001111),
    .INIT_LUTF1(16'b0000111111110000),
    .INIT_LUTG0(16'b1111000000001111),
    .INIT_LUTG1(16'b0000111111110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_assembler/parity_reg[9]_syn_4  (
    .c({\tx/true_hdmi_output$packet_assembler/bch[1] [59],\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_66 }),
    .ce(\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1] [7],\tx/true_hdmi_output$packet_assembler/parity_next[2] [7]}),
    .sr(\tx/true_hdmi_output$packet_assembler/mux13_syn_2 [39]),
    .f({open_n13195,\tx/true_hdmi_output$packet_assembler/parity_next_next[2] [7]}),
    .q({\tx/true_hdmi_output$packet_assembler/bch[1] [57],\tx/true_hdmi_output$packet_assembler/bch[2] [63]}));  // ../../../rtl/p1/hdmi_core/packet_assembler.sv(67)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTF1("~(C*D)"),
    //.LUTG0("(B*~(C)*~(D)+B*C*~(D)+~(B)*C*D+B*C*D)"),
    //.LUTG1("~(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000011001100),
    .INIT_LUTF1(16'b0000111111111111),
    .INIT_LUTG0(16'b1111000011001100),
    .INIT_LUTG1(16'b0000111111111111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_data[6]_syn_10  (
    .b({open_n13201,\tx/serializer/lane[0]$shift [8]}),
    .c({\tx/true_hdmi_output$packet_assembler/counter [4],\tx/tmds_gen[0]$tmds_channel/tmds [6]}),
    .clk(\tx/serializer/clk_pixel_x5 ),
    .d({\tx/true_hdmi_output$packet_assembler/counter [3],\tx/serializer/lane[0]$shift_b_n }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n ,open_n13219}),
    .q({open_n13223,\tx/serializer/lane[0]$shift [6]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  EG_PHY_LSLICE #(
    //.LUTF0("~(C*~D)"),
    //.LUTG0("~(C*~D)"),
    .INIT_LUTF0(16'b1111111100001111),
    .INIT_LUTG0(16'b1111111100001111),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_data[6]_syn_12  (
    .c({open_n13228,\tx/true_hdmi_output$packet_assembler/counter [2]}),
    .d({open_n13231,\tx/true_hdmi_output$packet_assembler/parity[0]_b5_n }),
    .f({open_n13249,\tx/true_hdmi_output$packet_assembler/parity[0]_b3_n }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(317)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/add1_syn_47"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("ADD_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/add1_syn_47  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2],1'b0}),
    .b({1'b1,open_n13255}),
    .clk(\tx/clk_pixel ),
    .mi(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [15:14]),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .fco(\tx/true_hdmi_output$packet_picker/add1_syn_32 ),
    .q(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [15:14]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/add1_syn_47"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/add1_syn_50  (
    .a(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4:3]),
    .b(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/add1_syn_32 ),
    .f(\tx/true_hdmi_output$packet_picker/frame_counter_b5 [2:1]),
    .fco(\tx/true_hdmi_output$packet_picker/add1_syn_34 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/add1_syn_47"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/add1_syn_53  (
    .a(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [6:5]),
    .b(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/add1_syn_34 ),
    .f(\tx/true_hdmi_output$packet_picker/frame_counter_b5 [4:3]),
    .fco(\tx/true_hdmi_output$packet_picker/add1_syn_36 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/add1_syn_47"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/add1_syn_55  (
    .a({open_n13319,\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [7]}),
    .b({open_n13320,1'b0}),
    .fci(\tx/true_hdmi_output$packet_picker/add1_syn_36 ),
    .f({open_n13339,\tx/true_hdmi_output$packet_picker/frame_counter_b5 [5]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_47"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("ADD_CARRY"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_47  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control ,1'b0}),
    .b({1'b1,open_n13345}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .mi(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [14:13]),
    .sr(\tx/serializer/reset_dup_235 ),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_32 ),
    .q(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [22:21]));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_47"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_50  (
    .a(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [2:1]),
    .b(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_32 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [2:1]),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_34 ));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_47"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_53  (
    .a(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [4:3]),
    .b(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_34 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [4:3]),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_36 ));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_47"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("ADD"),
    .INIT_LUT0(16'b0110011001101010),
    .INIT_LUT1(16'b0110011001101010),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_55  (
    .a({open_n13408,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [5]}),
    .b({open_n13409,1'b0}),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add0_syn_36 ),
    .f({open_n13428,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [5]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(41)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122"),
    //.R_POSITION("X0Y0Z0"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'h000A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [1],1'b0}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [2],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [0]}),
    .c(2'b00),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d(2'b01),
    .e(2'b01),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [10],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [8]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [1],open_n13446}),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_104 ),
    .fx({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [2],open_n13447}),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [18],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [16]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122"),
    //.R_POSITION("X0Y0Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_123  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [5],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [3]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [6],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [4]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_104 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [5],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [3]}),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_108 ),
    .fx({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [6],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [4]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122"),
    //.R_POSITION("X0Y1Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_124  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [9],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [7]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [10],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [8]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_108 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [9],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [7]}),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_112 ),
    .fx({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [10],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [8]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122"),
    //.R_POSITION("X0Y1Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_125  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [13],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [11]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [14],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [12]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_112 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [13],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [11]}),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_116 ),
    .fx({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [14],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [12]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122"),
    //.R_POSITION("X0Y2Z0"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_126  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [17],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [15]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [18],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [16]}),
    .c(2'b00),
    .d(2'b00),
    .e(2'b00),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_116 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [17],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [15]}),
    .fco(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_120 ),
    .fx({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [18],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [16]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_122"),
    //.R_POSITION("X0Y2Z1"),
    .DEMUX0("E"),
    .DEMUX1("E"),
    .INIT_LUTF0(16'hA55A),
    .INIT_LUTF1(16'hA55A),
    .INIT_LUTG0(16'hC33C),
    .INIT_LUTG1(16'hC33C),
    .LSFMUX0("SUM"),
    .LSFMUX1("SUM"),
    .LSFXMUX0("SUM"),
    .LSFXMUX1("SUM"),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_127  (
    .a({open_n13520,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [19]}),
    .c(2'b00),
    .d({open_n13525,1'b0}),
    .fci(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/add1_syn_120 ),
    .f({open_n13542,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [19]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(34)
  EG_PHY_MSLICE #(
    //.LUT0("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    //.LUT1("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0100010101000000),
    .INIT_LUT1(16'b0100010101000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_reg[1]_syn_9  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [1],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [4]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [1],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [4]}),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [1],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [4]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    //.LUTF1("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    //.LUTG0("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    //.LUTG1("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0100010101000000),
    .INIT_LUTF1(16'b0100010101000000),
    .INIT_LUTG0(16'b0100010101000000),
    .INIT_LUTG1(16'b0100010101000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_reg[3]_syn_9  (
    .a({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [3],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [5]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [3],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [5]}),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [3],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [5]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D)"),
    //.LUTG0("(~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000011111111),
    .INIT_LUTG0(16'b0000000011111111),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[0]_syn_4  (
    .clk(\tx/clk_pixel ),
    .d({open_n13597,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [0]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({open_n13614,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter[0]_syn_2 }),
    .q({open_n13618,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [0]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[11]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [11],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [7]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [11],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [7]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("~(~C*~D)"),
    //.LUTF1("(~C*~(B*D))"),
    //.LUTG0("~(~C*~D)"),
    //.LUTG1("(~C*~(B*D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111111110000),
    .INIT_LUTF1(16'b0000001100001111),
    .INIT_LUTG0(16'b1111111111110000),
    .INIT_LUTG1(16'b0000001100001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[16]_syn_4  (
    .b({\tx/true_hdmi_output$packet_picker/frame_counter_b4_n ,open_n13645}),
    .c({\tx/serializer/reset_dup_235 ,\tx/serializer/reset_dup_235 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/frame_counter_b1_n ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 }),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [16],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [17]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]}),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [16],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [17]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D*~C*~B*~A)"),
    //.LUTF1("(~C*~B*~D)"),
    //.LUTG0("(~D*~C*~B*~A)"),
    //.LUTG1("(~C*~B*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000000000001),
    .INIT_LUTF1(16'b0000000000000011),
    .INIT_LUTG0(16'b0000000000000001),
    .INIT_LUTG1(16'b0000000000000011),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[19]_syn_4  (
    .a({open_n13664,\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [3]}),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [6:5]),
    .c(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [7:6]),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [7]}),
    .mi(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [19:18]),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_29 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_31 }),
    .q(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [19:18]));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*~(B*(C*D*~(0)+~(C)*~(D)*0+C*~(D)*0)))"),
    //.LUTF1("(~C*~(A*(D*~(0)*~(B)+D*0*~(B)+~(D)*0*B+D*0*B)))"),
    //.LUTG0("(~A*~(B*(C*D*~(1)+~(C)*~(D)*1+C*~(D)*1)))"),
    //.LUTG1("(~C*~(A*(D*~(1)*~(B)+D*1*~(B)+~(D)*1*B+D*1*B)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0001010101010101),
    .INIT_LUTF1(16'b0000110100001111),
    .INIT_LUTG0(16'b0101010100010001),
    .INIT_LUTG1(16'b0000010100000111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[3]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_43 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_33 }),
    .c(\tx/true_hdmi_output$packet_assembler/counter [1:0]),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [16],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .e({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [18],\tx/true_hdmi_output$packet_picker/packet_type [0]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [3],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [1]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_78 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_85 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [3],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [1]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~A*~(B*(D*~(0)*~(C)+D*0*~(C)+~(D)*0*C+D*0*C)))"),
    //.LUTF1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTG0("(~A*~(B*(D*~(1)*~(C)+D*1*~(C)+~(D)*1*C+D*1*C)))"),
    //.LUTG1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0101000101010101),
    .INIT_LUTF1(16'b1010100000100000),
    .INIT_LUTG0(16'b0001000100010101),
    .INIT_LUTG1(16'b1010100000100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[5]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_25 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [16],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [18],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [24]}),
    .e({open_n13700,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [28]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [5],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [6]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[2][1]_syn_2 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_27 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [5],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [6]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*D)"),
    //.LUTF1("(C*D)"),
    //.LUTG0("(~C*D)"),
    //.LUTG1("(C*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111100000000),
    .INIT_LUTF1(16'b1111000000000000),
    .INIT_LUTG0(16'b0000111100000000),
    .INIT_LUTG1(16'b1111000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_reg[9]_syn_4  (
    .c({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 }),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [9],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [2]}),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_13 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [9],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [2]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(~C*A*(D*~(0)*~(B)+D*0*~(B)+~(D)*0*B+D*0*B))"),
    //.LUTF1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTG0("(~C*A*(D*~(1)*~(B)+D*1*~(B)+~(D)*1*B+D*1*B))"),
    //.LUTG1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000001000000000),
    .INIT_LUTF1(16'b1010100000100000),
    .INIT_LUTG0(16'b0000101000001000),
    .INIT_LUTG1(16'b1010100000100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[0]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [21],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [23],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [25]}),
    .e({open_n13738,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [27]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter[0]_syn_2 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [1]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_55 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_43 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [24],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [25]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTF1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTG0("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTG1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1010100000100000),
    .INIT_LUTF1(16'b1010100000100000),
    .INIT_LUTG0(16'b1010100000100000),
    .INIT_LUTG1(16'b1010100000100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[12]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_11 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [9],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [26]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [11],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [30]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [12],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [4]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_49 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_25 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [20],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [28]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(B*A*(D*~(0)*~(C)+D*0*~(C)+~(D)*0*C+D*0*C))"),
    //.LUTF1("(~C*D)"),
    //.LUTG0("(B*A*(D*~(1)*~(C)+D*1*~(C)+~(D)*1*C+D*1*C))"),
    //.LUTG1("(~C*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000100000000000),
    .INIT_LUTF1(16'b0000111100000000),
    .INIT_LUTG0(16'b1000100010000000),
    .INIT_LUTG1(16'b0000111100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[16]_syn_4  (
    .a({open_n13771,\tx/true_hdmi_output$packet_picker/eq2_syn_29 }),
    .b({open_n13772,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_7 }),
    .c({\tx/true_hdmi_output$packet_picker/packet_type [1],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/packet_type [0],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [8]}),
    .e({open_n13773,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [10]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [16],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [6]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_7 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_23 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [8],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [30]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_MSLICE #(
    //.LUT0("(D*C*B*A)"),
    //.LUT1("(C*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1000000000000000),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[18]_syn_4  (
    .a({open_n13789,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio }),
    .b({open_n13790,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control }),
    .c({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_7 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [1]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/eq2_syn_29 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [2]}),
    .mi(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [18:17]),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_reg[5]_syn_6 }),
    .q(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [10:9]));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~C*B*A)"),
    //.LUTF1("(A*(B*C*~(D)+~(B)*~(C)*D))"),
    //.LUTG0("(D*~C*B*A)"),
    //.LUTG1("(A*(B*C*~(D)+~(B)*~(C)*D))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000100000000000),
    .INIT_LUTF1(16'b0000001010000000),
    .INIT_LUTG0(16'b0000100000000000),
    .INIT_LUTG1(16'b0000001010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[19]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_29 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_reg[5]_syn_6 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [3],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [3]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [4]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [5],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [5]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [19],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [15]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_packet/mux0_syn_27 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [11],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [23]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*A*(D*~(0)*~(B)+D*0*~(B)+~(D)*0*B+D*0*B))"),
    //.LUTF1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTG0("(C*A*(D*~(1)*~(B)+D*1*~(B)+~(D)*1*B+D*1*B))"),
    //.LUTG1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0010000000000000),
    .INIT_LUTF1(16'b1010100000100000),
    .INIT_LUTG0(16'b1010000010000000),
    .INIT_LUTG1(16'b1010100000100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[2]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [17],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [19],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [29]}),
    .e({open_n13821,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [31]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [2],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [3]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_57 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_45 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [26],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [27]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*D)"),
    //.LUT1("(~C*~B*D)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000111100000000),
    .INIT_LUT1(16'b0000001100000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[5]_syn_4  (
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2],open_n13839}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_31 ,\tx/true_hdmi_output$packet_assembler/counter [0]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [5],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [11]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_packet/header_n1 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_2 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [29],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [19]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*C*~B*A)"),
    //.LUTF1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    //.LUTG0("(D*C*~B*A)"),
    //.LUTG1("(A*(C*~(D)*~(B)+C*D*~(B)+~(C)*D*B+C*D*B))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0010000000000000),
    .INIT_LUTF1(16'b1010100000100000),
    .INIT_LUTG0(16'b0010000000000000),
    .INIT_LUTG1(16'b1010100000100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_reg[7]_syn_4  (
    .a({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_9 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_31 }),
    .b({\tx/true_hdmi_output$packet_assembler/counter [0],\tx/true_hdmi_output$packet_assembler/counter [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [20],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [22],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4]}),
    .mi({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [7],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [9]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_assembler/parity_next_next[1][1]_syn_15 ,\tx/true_hdmi_output$packet_assembler/parity_next_next[0][1]_syn_40 }),
    .q({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [31],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/sub[0] [17]}));  // ../../../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv(27)
  EG_PHY_MSLICE #(
    //.LUT0("(~D)"),
    //.LUT1("(~D*(C@B))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000011111111),
    .INIT_LUT1(16'b0000000000111100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n_syn_4  (
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],open_n13872}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],open_n13873}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap_i1_syn_2 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/serializer/reset_dup_235 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ,open_n13886}),
    .q({open_n13890,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap }));
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTG0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .INIT_LUTF0(16'b1111100101100000),
    .INIT_LUTG0(16'b1111100101100000),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0][10]_syn_4  (
    .a({open_n13891,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({open_n13892,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({open_n13893,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [10]}),
    .d({open_n13896,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [10]}),
    .f({open_n13914,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [10]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTF1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTG0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTG1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .INIT_LUTF0(16'b1111100101100000),
    .INIT_LUTF1(16'b1111100101100000),
    .INIT_LUTG0(16'b1111100101100000),
    .INIT_LUTG1(16'b1111100101100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0][11]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [11],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [8]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [11],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [8]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [11],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [8]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUT1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .INIT_LUT0(16'b1111100101100000),
    .INIT_LUT1(16'b1111100101100000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0][12]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [12]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [13]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [13]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUT1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .INIT_LUT0(16'b1111100101100000),
    .INIT_LUT1(16'b1111100101100000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0][14]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [12]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [14],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [15]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [14],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [15]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_MSLICE #(
    //.LUT0("~(~B*~(C*D))"),
    //.LUT1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111110011001100),
    .INIT_LUT1(16'b1111100101100000),
    .MODE("LOGIC"),
    .REG0_REGSET("SET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0][9]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],open_n13984}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/tmds_gen[0]$tmds_channel/mux9_syn_228 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [9],\tx/tmds_gen[2]$tmds_channel/mux7_syn_218 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [9],\tx/tmds_gen[0]$tmds_channel/mux9_syn_218 }),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [9],open_n13998}),
    .q({open_n14002,\tx/tmds_gen[0]$tmds_channel/tmds [9]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUT1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1111100101100000),
    .INIT_LUT1(16'b1111100101100000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1][1]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [0]}),
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .d(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [1:0]),
    .mi({open_n14013,\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [12]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [0]}),
    .q({open_n14017,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [12]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUT1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .INIT_LUT0(16'b1111100101100000),
    .INIT_LUT1(16'b1111100101100000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1][2]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [2],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [3]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [2],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [3]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [2],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [3]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_LSLICE #(
    //.LUTF0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTF1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTG0("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTG1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .INIT_LUTF0(16'b1111100101100000),
    .INIT_LUTF1(16'b1111100101100000),
    .INIT_LUTG0(16'b1111100101100000),
    .INIT_LUTG1(16'b1111100101100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1][5]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [5],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [6]}),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [5],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [6]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [5],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [6]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_LSLICE #(
    //.LUTF0("~(B*~A*~(D*~C))"),
    //.LUTF1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    //.LUTG0("~(B*~A*~(D*~C))"),
    //.LUTG1("(D*~(C)*~((B@A))+D*C*~((B@A))+~(D)*C*(B@A)+D*C*(B@A))"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1011111110111011),
    .INIT_LUTF1(16'b1111100101100000),
    .INIT_LUTG0(16'b1011111110111011),
    .INIT_LUTG1(16'b1111100101100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1][7]_syn_4  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/tmds_gen[1]$tmds_channel/mux7_syn_286 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],\tx/tmds_gen[1]$tmds_channel/mux7_syn_271 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [7],\tx/tmds_gen[1]$tmds_channel/mux7_syn_288 }),
    .ce(\tx/tmds_gen[2]$tmds_channel/mux7_syn_216 ),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [7],\tx/mode [1]}),
    .f({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [7],open_n14079}),
    .q({open_n14083,\tx/tmds_gen[1]$tmds_channel/tmds [1]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(86)
  EG_PHY_MSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_reg[0]_syn_3  (
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .mi({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [0],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [3]}),
    .sr(\tx/serializer/reset_dup_234 ),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [3]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(69)
  EG_PHY_LSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_reg[10]_syn_3  (
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .mi({open_n14118,\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [10]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({open_n14135,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[0] [10]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(69)
  EG_PHY_MSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_reg[17]_syn_3  (
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .mi({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [2]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [2]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(69)
  EG_PHY_LSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_reg[20]_syn_3  (
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .mi({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [4],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [6]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [4],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [6]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(69)
  EG_PHY_LSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_reg[21]_syn_3  (
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .mi({open_n14197,\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [5]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({open_n14214,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [5]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(69)
  EG_PHY_MSLICE #(
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_reg[24]_syn_3  (
    .ce(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio ),
    .clk(\tx/clk_pixel ),
    .mi({\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [8],\tx/true_hdmi_output$packet_picker/audio_sample_word[1] [9]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [8],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer[1] [9]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(69)
  EG_PHY_MSLICE #(
    //.LUT0("(D*(C@B))"),
    //.LUT1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0011110000000000),
    .INIT_LUT1(16'b1010001010000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/frame_counter_reg[3]_syn_9  (
    .a({\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 ,open_n14238}),
    .b({\tx/true_hdmi_output$packet_picker/frame_counter_b1_n ,\tx/true_hdmi_output$packet_picker/frame_counter_b1_n }),
    .c({\tx/true_hdmi_output$packet_picker/frame_counter_b5 [1],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [3],\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 }),
    .q(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [3:2]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(129)
  EG_PHY_MSLICE #(
    //.LUT0("(~A*(D*~(B)*~(C)+D*B*~(C)+~(D)*B*C+D*B*C))"),
    //.LUT1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0100010101000000),
    .INIT_LUT1(16'b1010001010000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/frame_counter_reg[4]_syn_9  (
    .a({\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]}),
    .b({\tx/true_hdmi_output$packet_picker/frame_counter_b1_n ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_b4 [2]}),
    .c({\tx/true_hdmi_output$packet_picker/frame_counter_b5 [2],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [2]}),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4],\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter [2]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(129)
  EG_PHY_MSLICE #(
    //.LUT0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUT1("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1010001010000000),
    .INIT_LUT1(16'b1010001010000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_14  (
    .a({\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 ,\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 }),
    .b({\tx/true_hdmi_output$packet_picker/frame_counter_b1_n ,\tx/true_hdmi_output$packet_picker/frame_counter_b1_n }),
    .c({\tx/true_hdmi_output$packet_picker/frame_counter_b5 [3],\tx/true_hdmi_output$packet_picker/frame_counter_b5 [5]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [5],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [7]}),
    .q({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [5],\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [7]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(129)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    //.LUTG0("(A*(D*~(C)*~(B)+D*C*~(B)+~(D)*C*B+D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1010001010000000),
    .INIT_LUTG0(16'b1010001010000000),
    .LSFMUX0("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/frame_counter_reg[6]_syn_9  (
    .a({open_n14296,\tx/true_hdmi_output$packet_picker/frame_counter_reg[5]_syn_7 }),
    .b({open_n14297,\tx/true_hdmi_output$packet_picker/frame_counter_b1_n }),
    .c({open_n14298,\tx/true_hdmi_output$packet_picker/frame_counter_b5 [4]}),
    .clk(\tx/clk_pixel ),
    .d({open_n14300,\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [6]}),
    .q({open_n14323,\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [6]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(129)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/lt0_syn_27"),
    //.R_POSITION("X0Y0Z0"),
    .ALUTYPE("A_LE_B_CARRY"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0000000000001010),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/lt0_syn_27  (
    .a(2'b11),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [2],open_n14324}),
    .clk(\tx/clk_pixel ),
    .mi(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter_b2 [13:12]),
    .sr(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/mux6_syn_2 [0]),
    .fco(\tx/true_hdmi_output$packet_picker/lt0_syn_6 ),
    .q(\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/cycle_time_stamp_counter [13:12]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/lt0_syn_27"),
    //.R_POSITION("X0Y0Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/lt0_syn_30  (
    .a(2'b11),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [4:3]),
    .fci(\tx/true_hdmi_output$packet_picker/lt0_syn_6 ),
    .fco(\tx/true_hdmi_output$packet_picker/lt0_syn_10 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/lt0_syn_27"),
    //.R_POSITION("X0Y1Z0"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/lt0_syn_33  (
    .a(2'b01),
    .b(\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [6:5]),
    .fci(\tx/true_hdmi_output$packet_picker/lt0_syn_10 ),
    .fco(\tx/true_hdmi_output$packet_picker/lt0_syn_14 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/lt0_syn_27"),
    //.R_POSITION("X0Y1Z1"),
    .ALUTYPE("A_LE_B"),
    .INIT_LUT0(16'b1001100110011100),
    .INIT_LUT1(16'b1001100110011100),
    .MODE("RIPPLE"))
    \tx/true_hdmi_output$packet_picker/lt0_syn_36  (
    .a(2'b01),
    .b({1'b1,\tx/true_hdmi_output$packet_picker/audio_sample_packet/frame_counter [7]}),
    .fci(\tx/true_hdmi_output$packet_picker/lt0_syn_14 ),
    .f({\tx/true_hdmi_output$packet_picker/frame_counter_b4_n ,open_n14410}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(137)
  EG_PHY_MSLICE #(
    //.LUT0("(C@(~B*D))"),
    //.LUT1("(~D*~(~C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100001111110000),
    .INIT_LUT1(16'b0000000011111100),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/packet_type_reg[0]_syn_12  (
    .b({\tx/true_hdmi_output$packet_picker/packet_enable ,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1]}),
    .c({\tx/true_hdmi_output$packet_picker/packet_type [0],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_23 ,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_picker/packet_type_reg[0]_syn_6 ,open_n14431}),
    .q({open_n14435,\tx/true_hdmi_output$packet_picker/samples_remaining [1]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(~(0*~B)*~(~D*A)))"),
    //.LUTF1("(C*~(~A*~(D*~B)))"),
    //.LUTG0("(C*~(~(1*~B)*~(~D*A)))"),
    //.LUTG1("(C*~(~A*~(D*~B)))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000010100000),
    .INIT_LUTF1(16'b1011000010100000),
    .INIT_LUTG0(16'b0011000010110000),
    .INIT_LUTG1(16'b1011000010100000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/packet_type_reg[7]_syn_12  (
    .a({\tx/true_hdmi_output$packet_picker/packet_type_reg[7]_syn_6 ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 }),
    .b({\tx/true_hdmi_output$packet_picker/packet_enable ,\tx/true_hdmi_output$packet_picker/packet_enable }),
    .c({\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/packet_type [7],\tx/true_hdmi_output$packet_picker/audio_info_frame_sent }),
    .e({open_n14437,\tx/true_hdmi_output$packet_picker/packet_type [2]}),
    .q({\tx/true_hdmi_output$packet_picker/packet_type [7],\tx/true_hdmi_output$packet_picker/packet_type [2]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(~B*~(~D*A)))"),
    //.LUTF1("(A*~(D*C*B))"),
    //.LUTG0("(C*~(~B*~(~D*A)))"),
    //.LUTG1("(A*~(D*C*B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1100000011100000),
    .INIT_LUTF1(16'b0010101010101010),
    .INIT_LUTG0(16'b1100000011100000),
    .INIT_LUTG1(16'b0010101010101010),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/packet_type_reg[7]_syn_14  (
    .a({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_27 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_info_frame_sent ,\tx/true_hdmi_output$packet_picker/packet_type_reg[0]_syn_6 }),
    .c({\tx/true_hdmi_output$packet_picker/auxiliary_video_information_info_frame_sent ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent }),
    .f({\tx/true_hdmi_output$packet_picker/packet_type_reg[7]_syn_6 ,open_n14476}),
    .q({open_n14480,\tx/true_hdmi_output$packet_picker/packet_type [0]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  // address_offset=0;data_offset=24;depth=8;width=4;num_section=1;width_per_section=4;section_size=48;working_depth=2048;working_width=4;working_numbyte=1;mode_ecc=0;address_step=1;bytes_in_per_section=1;
  // tx/true_hdmi_output$packet_picker/ramread0_syn_5_8x48
  EG_PHY_BRAM #(
    .CEBMUX("1"),
    .CSA0("1"),
    .CSA1("1"),
    .CSA2("1"),
    .CSB0("1"),
    .CSB1("1"),
    .CSB2("SIG"),
    .DATA_WIDTH_A("4"),
    .DATA_WIDTH_B("18"),
    .MODE("PDPW8K"),
    .OCEAMUX("1"),
    .OCEBMUX("1"),
    .REGMODE_A("NOREG"),
    .REGMODE_B("NOREG"),
    .RESETMODE("ASYNC"),
    .RSTAMUX("0"),
    .RSTBMUX("0"),
    .WEAMUX("1"),
    .WEBMUX("0"),
    .WRITEMODE_A("NORMAL"),
    .WRITEMODE_B("NORMAL"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_109  (
    .addra({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],2'b11}),
    .addrb({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ,4'b1111}),
    .cea(\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ),
    .clka(\tx/clk_pixel ),
    .clkb(\tx/clk_pixel ),
    .csb({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ,open_n14485,open_n14486}),
    .dia({open_n14487,open_n14488,open_n14489,open_n14490,open_n14491,4'b0000}),
    .doa({open_n14507,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [3:0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [3:0]}),
    .dob({open_n14508,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [3:0],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [3:0]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  // address_offset=0;data_offset=32;depth=8;width=4;num_section=1;width_per_section=4;section_size=48;working_depth=2048;working_width=4;working_numbyte=1;mode_ecc=0;address_step=1;bytes_in_per_section=1;
  // tx/true_hdmi_output$packet_picker/ramread0_syn_5_8x48
  EG_PHY_BRAM #(
    .CEBMUX("1"),
    .CSA0("1"),
    .CSA1("1"),
    .CSA2("1"),
    .CSB0("1"),
    .CSB1("1"),
    .CSB2("SIG"),
    .DATA_WIDTH_A("4"),
    .DATA_WIDTH_B("18"),
    .MODE("PDPW8K"),
    .OCEAMUX("1"),
    .OCEBMUX("1"),
    .REGMODE_A("NOREG"),
    .REGMODE_B("NOREG"),
    .RESETMODE("ASYNC"),
    .RSTAMUX("0"),
    .RSTBMUX("0"),
    .WEAMUX("1"),
    .WEBMUX("0"),
    .WRITEMODE_A("NORMAL"),
    .WRITEMODE_B("NORMAL"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_143  (
    .addra({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],2'b11}),
    .addrb({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ,4'b1111}),
    .cea(\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ),
    .clka(\tx/clk_pixel ),
    .clkb(\tx/clk_pixel ),
    .csb({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ,open_n14513,open_n14514}),
    .dia({open_n14515,open_n14516,open_n14517,open_n14518,open_n14519,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [3:1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [0]}),
    .doa({open_n14535,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [11:8],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [11:8]}),
    .dob({open_n14536,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [11:8],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [11:8]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  // address_offset=0;data_offset=36;depth=8;width=4;num_section=1;width_per_section=4;section_size=48;working_depth=2048;working_width=4;working_numbyte=1;mode_ecc=0;address_step=1;bytes_in_per_section=1;
  // tx/true_hdmi_output$packet_picker/ramread0_syn_5_8x48
  EG_PHY_BRAM #(
    .CEBMUX("1"),
    .CSA0("1"),
    .CSA1("1"),
    .CSA2("1"),
    .CSB0("1"),
    .CSB1("1"),
    .CSB2("SIG"),
    .DATA_WIDTH_A("4"),
    .DATA_WIDTH_B("18"),
    .MODE("PDPW8K"),
    .OCEAMUX("1"),
    .OCEBMUX("1"),
    .REGMODE_A("NOREG"),
    .REGMODE_B("NOREG"),
    .RESETMODE("ASYNC"),
    .RSTAMUX("0"),
    .RSTBMUX("0"),
    .WEAMUX("1"),
    .WEBMUX("0"),
    .WRITEMODE_A("NORMAL"),
    .WRITEMODE_B("NORMAL"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_160  (
    .addra({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],2'b11}),
    .addrb({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ,4'b1111}),
    .cea(\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ),
    .clka(\tx/clk_pixel ),
    .clkb(\tx/clk_pixel ),
    .csb({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ,open_n14541,open_n14542}),
    .dia({open_n14543,open_n14544,open_n14545,open_n14546,open_n14547,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [7:4]}),
    .doa({open_n14563,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [15:12],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [15:12]}),
    .dob({open_n14564,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [15:12],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [15:12]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  // address_offset=0;data_offset=40;depth=8;width=4;num_section=1;width_per_section=4;section_size=48;working_depth=2048;working_width=4;working_numbyte=1;mode_ecc=0;address_step=1;bytes_in_per_section=1;
  // tx/true_hdmi_output$packet_picker/ramread0_syn_5_8x48
  EG_PHY_BRAM #(
    .CEBMUX("1"),
    .CSA0("1"),
    .CSA1("1"),
    .CSA2("1"),
    .CSB0("1"),
    .CSB1("1"),
    .CSB2("SIG"),
    .DATA_WIDTH_A("4"),
    .DATA_WIDTH_B("18"),
    .MODE("PDPW8K"),
    .OCEAMUX("1"),
    .OCEBMUX("1"),
    .REGMODE_A("NOREG"),
    .REGMODE_B("NOREG"),
    .RESETMODE("ASYNC"),
    .RSTAMUX("0"),
    .RSTBMUX("0"),
    .WEAMUX("1"),
    .WEBMUX("0"),
    .WRITEMODE_A("NORMAL"),
    .WRITEMODE_B("NORMAL"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_177  (
    .addra({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],2'b11}),
    .addrb({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ,4'b1111}),
    .cea(\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ),
    .clka(\tx/clk_pixel ),
    .clkb(\tx/clk_pixel ),
    .csb({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ,open_n14569,open_n14570}),
    .dia({open_n14571,open_n14572,open_n14573,open_n14574,open_n14575,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [11:9],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [8]}),
    .doa({open_n14591,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [19:16],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [19:16]}),
    .dob({open_n14592,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [19:16],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [19:16]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  // address_offset=0;data_offset=44;depth=8;width=4;num_section=1;width_per_section=4;section_size=48;working_depth=2048;working_width=4;working_numbyte=1;mode_ecc=0;address_step=1;bytes_in_per_section=1;
  // tx/true_hdmi_output$packet_picker/ramread0_syn_5_8x48
  EG_PHY_BRAM #(
    .CEBMUX("1"),
    .CSA0("1"),
    .CSA1("1"),
    .CSA2("1"),
    .CSB0("1"),
    .CSB1("1"),
    .CSB2("SIG"),
    .DATA_WIDTH_A("4"),
    .DATA_WIDTH_B("18"),
    .MODE("PDPW8K"),
    .OCEAMUX("1"),
    .OCEBMUX("1"),
    .REGMODE_A("NOREG"),
    .REGMODE_B("NOREG"),
    .RESETMODE("ASYNC"),
    .RSTAMUX("0"),
    .RSTBMUX("0"),
    .WEAMUX("1"),
    .WEBMUX("0"),
    .WRITEMODE_A("NORMAL"),
    .WRITEMODE_B("NORMAL"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_194  (
    .addra({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],2'b11}),
    .addrb({8'b00000000,\tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ,4'b1111}),
    .cea(\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n ),
    .clka(\tx/clk_pixel ),
    .clkb(\tx/clk_pixel ),
    .csb({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ,open_n14597,open_n14598}),
    .dia({open_n14599,open_n14600,open_n14601,open_n14602,open_n14603,\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [15:12]}),
    .doa({open_n14619,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[1][1] [23:20],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[0][1] [23:20]}),
    .dob({open_n14620,\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[3][1] [23:20],\tx/true_hdmi_output$packet_picker/audio_sample_word_packet[2][1] [23:20]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_223"),
    //.R_POSITION("X0Y0Z0"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_223  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_233 [1:0]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_226 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_229 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_228 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_227 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [1:0]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_223"),
    //.R_POSITION("X0Y0Z1"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_224  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_233 [3:2]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_226 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_229 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_228 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_227 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [3:2]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_223"),
    //.R_POSITION("X0Y0Z2"),
    .MODE("RAMW"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_225  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [2],\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [3],1'b0}),
    .e({open_n14644,\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n }),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_233 ),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_226 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_229 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_228 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_227 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_237"),
    //.R_POSITION("X0Y0Z0"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_237  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_247 [1:0]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_240 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_243 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_242 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_241 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [5:4]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_237"),
    //.R_POSITION("X0Y0Z1"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_238  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_247 [3:2]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_240 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_243 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_242 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_241 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [7:6]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_237"),
    //.R_POSITION("X0Y0Z2"),
    .MODE("RAMW"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_239  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [4],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [5],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [6],\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [7],1'b0}),
    .e({open_n14679,\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n }),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_247 ),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_240 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_243 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_242 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_241 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_251"),
    //.R_POSITION("X0Y0Z0"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_251  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_261 [1:0]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_254 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_257 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_256 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_255 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [9:8]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_251"),
    //.R_POSITION("X0Y0Z1"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_252  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_261 [3:2]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_254 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_257 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_256 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_255 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [11:10]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_251"),
    //.R_POSITION("X0Y0Z2"),
    .MODE("RAMW"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_253  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[1] [8],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [9],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [10],\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [11],1'b0}),
    .e({open_n14714,\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n }),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_261 ),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_254 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_257 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_256 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_255 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_265"),
    //.R_POSITION("X0Y0Z0"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_265  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_275 [1:0]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_268 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_271 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_270 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_269 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [13:12]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_265"),
    //.R_POSITION("X0Y0Z1"),
    .MODE("DPRAM"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_266  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .d(2'b00),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_275 [3:2]),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_268 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_271 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_270 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_269 ),
    .f(\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0]_b [15:14]));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_LSLICE #(
    //.MACRO("tx/true_hdmi_output$packet_picker/ramread0_syn_265"),
    //.R_POSITION("X0Y0Z2"),
    .MODE("RAMW"))
    \tx/true_hdmi_output$packet_picker/ramread0_syn_267  (
    .a({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [12],\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0]}),
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [13],\tx/true_hdmi_output$packet_picker/samples_remaining [1]}),
    .c({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [14],\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_mux[0] [15],1'b0}),
    .e({open_n14749,\tx/true_hdmi_output$packet_picker/audio_sample_word_buffer_n }),
    .dpram_di(\tx/true_hdmi_output$packet_picker/ramread0_syn_275 ),
    .dpram_mode(\tx/true_hdmi_output$packet_picker/ramread0_syn_268 ),
    .dpram_waddr(\tx/true_hdmi_output$packet_picker/ramread0_syn_271 ),
    .dpram_wclk(\tx/true_hdmi_output$packet_picker/ramread0_syn_270 ),
    .dpram_we(\tx/true_hdmi_output$packet_picker/ramread0_syn_269 ));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(186)
  EG_PHY_MSLICE #(
    //.LUT0("(C*~(~A*~(D*~B)))"),
    //.LUT1("(~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1011000010100000),
    .INIT_LUT1(16'b0000000011111111),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/sample_buffer_current_n3_syn_4  (
    .a({open_n14761,\tx/true_hdmi_output$packet_picker/packet_type_reg[1]_syn_6 }),
    .b({open_n14762,\tx/true_hdmi_output$packet_picker/packet_enable }),
    .c({open_n14763,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/sample_buffer_current ,\tx/true_hdmi_output$packet_picker/packet_type [1]}),
    .f({\tx/true_hdmi_output$packet_picker/sample_buffer_current_n3 ,open_n14778}),
    .q({open_n14782,\tx/true_hdmi_output$packet_picker/packet_type [1]}));
  EG_PHY_LSLICE #(
    //.LUTF0("(C@D)"),
    //.LUTF1("(C*~B*D)"),
    //.LUTG0("(C@D)"),
    //.LUTG1("(C*~B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000111111110000),
    .INIT_LUTF1(16'b0011000000000000),
    .INIT_LUTG0(16'b0000111111110000),
    .INIT_LUTG1(16'b0011000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/sample_buffer_ready_reg_syn_13  (
    .b({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [1],open_n14785}),
    .c({\tx/true_hdmi_output$packet_picker/samples_remaining [1],\tx/true_hdmi_output$packet_picker/sample_buffer_current }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/audio_sample_word_transfer_control_synchronizer_chain [0],\tx/true_hdmi_output$packet_picker/sample_buffer_ready_reg_syn_7 }),
    .sr(\tx/serializer/reset_dup_235 ),
    .f({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_reg_syn_7 ,open_n14803}),
    .q({open_n14807,\tx/true_hdmi_output$packet_picker/sample_buffer_current }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(98)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D*~(~A*~(~C*B)))"),
    //.LUTF1("(C*B*D)"),
    //.LUTG0("(~D*~(~A*~(~C*B)))"),
    //.LUTG1("(C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000010101110),
    .INIT_LUTF1(16'b1100000000000000),
    .INIT_LUTG0(16'b0000000010101110),
    .INIT_LUTG1(16'b1100000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/sample_buffer_used_reg_syn_5  (
    .a({open_n14808,\tx/true_hdmi_output$packet_picker/sample_buffer_ready_reg_syn_7 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 ,\tx/true_hdmi_output$packet_picker/sample_buffer_ready }),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_ready ,\tx/true_hdmi_output$packet_picker/sample_buffer_used }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_23 ,\tx/serializer/reset_dup_235 }),
    .f({\tx/true_hdmi_output$packet_picker/sample_buffer_ready_syn_6 ,open_n14827}),
    .q({\tx/true_hdmi_output$packet_picker/sample_buffer_used ,\tx/true_hdmi_output$packet_picker/sample_buffer_ready }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(D*C*B*A))"),
    //.LUTF1("(~C*~D)"),
    //.LUTG0("(~1*~(D*C*B*A))"),
    //.LUTG1("(~C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0111111111111111),
    .INIT_LUTF1(16'b0000000000001111),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b0000000000001111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_42  (
    .a({open_n14831,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_19 }),
    .b({open_n14832,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_11 }),
    .c({\tx/cx [4],\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_13 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/cx [0],\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_15 }),
    .e({open_n14834,\tx/serializer/reset_dup_232 }),
    .mi({open_n14836,\tx/rgb [1]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_8 ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .q({open_n14851,\tx/tmds_gen[0]$tmds_channel/video_data [1]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~0*~(D*C*B*A))"),
    //.LUTF1("(D*C*B*A)"),
    //.LUTG0("(~1*~(D*C*B*A))"),
    //.LUTG1("(D*C*B*A)"),
    .INIT_LUTF0(16'b0111111111111111),
    .INIT_LUTF1(16'b1000000000000000),
    .INIT_LUTG0(16'b0000000000000000),
    .INIT_LUTG1(16'b1000000000000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_44  (
    .a({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_17 ,\tx/cx [5]}),
    .b({lt0_syn_18,\tx/cx [6]}),
    .c({\tx/cy [1],\tx/cx [7]}),
    .d({\tx/cy [4],\tx/cx [8]}),
    .e({open_n14854,\tx/cx [9]}),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_19 ,rgb_b16_n}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*~(~D*~(B*~(0*C))))"),
    //.LUTF1("(~C*D)"),
    //.LUTG0("(A*~(~D*~(B*~(1*C))))"),
    //.LUTG1("(~C*D)"),
    .INIT_LUTF0(16'b1010101010001000),
    .INIT_LUTF1(16'b0000111100000000),
    .INIT_LUTG0(16'b1010101000001000),
    .INIT_LUTG1(16'b0000111100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_46  (
    .a({open_n14875,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_23 }),
    .b({open_n14876,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent }),
    .c({\tx/true_hdmi_output$packet_picker/sample_buffer_ready ,\tx/true_hdmi_output$packet_picker/auxiliary_video_information_info_frame_sent }),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_23 ,\tx/true_hdmi_output$packet_picker/sample_buffer_ready }),
    .e({open_n14879,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent }),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 ,\tx/true_hdmi_output$packet_picker/packet_type_reg[1]_syn_6 }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*~(D)*~((B*A))+C*D*~((B*A))+~(C)*D*(B*A)+C*D*(B*A))"),
    //.LUTF1("(D*~(C@B))"),
    //.LUTG0("(C*~(D)*~((B*A))+C*D*~((B*A))+~(C)*D*(B*A)+C*D*(B*A))"),
    //.LUTG1("(D*~(C@B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111100001110000),
    .INIT_LUTF1(16'b1100001100000000),
    .INIT_LUTG0(16'b1111100001110000),
    .INIT_LUTG1(16'b1100001100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_48  (
    .a({open_n14900,\tx/true_hdmi_output$packet_picker/packet_enable }),
    .b({\tx/true_hdmi_output$packet_picker/last_clk_audio_counter_wrap ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .c({\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap ,\tx/true_hdmi_output$packet_picker/last_clk_audio_counter_wrap }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/packet_enable ,\tx/true_hdmi_output$packet_picker/audio_clock_regeneration_packet/clk_audio_counter_wrap }),
    .sr(\tx/serializer/reset_dup_234 ),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_23 ,open_n14918}),
    .q({open_n14922,\tx/true_hdmi_output$packet_picker/last_clk_audio_counter_wrap }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(~D)"),
    //.LUTF1("(~D*C*B*A)"),
    //.LUTG0("(~D)"),
    //.LUTG1("(~D*C*B*A)"),
    .CEMUX("CE"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b0000000011111111),
    .INIT_LUTF1(16'b0000000010000000),
    .INIT_LUTG0(16'b0000000011111111),
    .INIT_LUTG1(16'b0000000010000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_50  (
    .a({\tx/cx [5],open_n14923}),
    .b({\tx/cx [6],open_n14924}),
    .c({\tx/cy [2],open_n14925}),
    .ce(\tx/cx_b3_n ),
    .clk(\tx/clk_pixel ),
    .d({\tx/cy [5],\tx/cy [0]}),
    .sr(\tx/mux12_syn_2 [9]),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_17 ,open_n14942}),
    .q({open_n14946,\tx/cy [0]}));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(~D*~(C*A)))"),
    //.LUT1("(C*B*D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100110010000000),
    .INIT_LUT1(16'b1100000000000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_52  (
    .a({open_n14947,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 }),
    .b({\tx/true_hdmi_output$packet_picker/audio_info_frame_sent ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .c({\tx/true_hdmi_output$packet_picker/auxiliary_video_information_info_frame_sent ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 ,\tx/true_hdmi_output$packet_picker/auxiliary_video_information_info_frame_sent }),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_27 ,open_n14962}),
    .q({open_n14966,\tx/true_hdmi_output$packet_picker/auxiliary_video_information_info_frame_sent }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(B*~(~C*~D))"),
    //.LUT1("(B*~(~C*~D))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1100110011000000),
    .INIT_LUT1(16'b1100110011000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("ASYNC"),
    .SRMUX("0"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_54  (
    .b({\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent_n3_syn_2 }),
    .c({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_27 ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_25 }),
    .q({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent ,\tx/true_hdmi_output$packet_picker/audio_info_frame_sent }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(D*~C*B*A)"),
    //.LUT1("(D*C*B*A)"),
    .INIT_LUT0(16'b0000100000000000),
    .INIT_LUT1(16'b1000000000000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_56  (
    .a({\tx/add5_syn_21 ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_11 }),
    .b({\tx/cx [0],lt3_syn_24}),
    .c({\tx/cx [4],\tx/cx [7]}),
    .d(\tx/cx [9:8]),
    .f({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_11 ,\tx/cx_b3_n }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_MSLICE #(
    //.LUT0("(~C*B*D)"),
    .INIT_LUT0(16'b0000110000000000),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_60  (
    .b({open_n15010,\tx/cy [3]}),
    .c({open_n15011,\tx/cy [9]}),
    .d({open_n15014,\tx/cy [0]}),
    .f({open_n15028,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_15 }));  // ../../../rtl/p1/hdmi_core/packet_picker.sv(160)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*D)"),
    //.LUTF1("(C*~D)"),
    //.LUTG0("(C*D)"),
    //.LUTG1("(C*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111000000000000),
    .INIT_LUTF1(16'b0000000011110000),
    .INIT_LUTG0(16'b1111000000000000),
    .INIT_LUTG1(16'b0000000011110000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("SET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$video_guard_reg_syn_5  (
    .c({\tx/true_hdmi_output$video_guard_n6 ,\tx/true_hdmi_output$data_island_period_instantaneous_n2 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$video_preamble_n1_syn_2 ,\tx/true_hdmi_output$data_island_period_instantaneous_n3 }),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({open_n15055,\tx/true_hdmi_output$data_island_period_instantaneous }),
    .q({\tx/true_hdmi_output$video_guard ,\tx/true_hdmi_output$packet_assembler/data_island_period }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(248)
  EG_PHY_MSLICE #(
    //.LUT0("~(~C*~(B*D))"),
    //.LUT1("(~C*~D)"),
    .INIT_LUT0(16'b1111110011110000),
    .INIT_LUT1(16'b0000000000001111),
    .MODE("LOGIC"))
    \tx/true_hdmi_output$video_preamble_n1_syn_6  (
    .b({open_n15061,\tx/cy_b4_n }),
    .c({\tx/true_hdmi_output$video_guard_n9 ,\tx/serializer/reset_dup_229 }),
    .d({\tx/cy_b4_n ,\tx/cx_b3_n }),
    .f({\tx/true_hdmi_output$video_preamble_n1_syn_2 ,\tx/mux12_syn_2 [9]}));
  EG_PHY_MSLICE #(
    //.LUT0("~(D*C*B*A)"),
    //.LUT1("(C*~B*~D)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b0111111111111111),
    .INIT_LUT1(16'b0000000000110000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("F"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/true_hdmi_output$video_preamble_reg_syn_5  (
    .a({open_n15082,\tx/data_island_data_b_n_syn_2 }),
    .b({\tx/true_hdmi_output$video_guard_n6 ,lt0_syn_18}),
    .c({\tx/true_hdmi_output$video_preamble_n4 ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_8 }),
    .clk(\tx/clk_pixel ),
    .d({\tx/true_hdmi_output$video_preamble_n1_syn_2 ,lt3_syn_24}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/true_hdmi_output$video_preamble ,\tx/tmds_gen[0]$tmds_channel/data_island_data [3]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(248)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[10]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/rgb [10],\tx/rgb [8]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/tmds_gen[1]$tmds_channel/video_data [2],\tx/tmds_gen[1]$tmds_channel/video_data [0]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[11]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/rgb [11],\tx/rgb [9]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/tmds_gen[1]$tmds_channel/video_data [3],\tx/tmds_gen[1]$tmds_channel/video_data [1]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[12]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/rgb [12],\tx/rgb [13]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/tmds_gen[1]$tmds_channel/video_data [4],\tx/tmds_gen[1]$tmds_channel/video_data [5]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[15]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi(\tx/rgb [15:14]),
    .sr(\tx/serializer/reset_dup_232 ),
    .q(\tx/tmds_gen[1]$tmds_channel/video_data [7:6]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[16]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({\tx/rgb [16],\tx/rgb [17]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({\tx/tmds_gen[2]$tmds_channel/video_data [0],\tx/tmds_gen[2]$tmds_channel/video_data [1]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    //.LUTF0("(A*B*~(C)*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+A*B*C*D*~(0)+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+A*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+A*B*~(C)*D*0+~(A)*~(B)*C*D*0+A*~(B)*C*D*0+~(A)*B*C*D*0+A*B*C*D*0)"),
    //.LUTF1("(~(A)*~(B)*~(C)*~(D)*~(0)+A*~(B)*~(C)*~(D)*~(0)+~(A)*B*~(C)*~(D)*~(0)+A*B*~(C)*~(D)*~(0)+~(A)*~(B)*C*~(D)*~(0)+A*~(B)*C*~(D)*~(0)+~(A)*B*C*~(D)*~(0)+A*B*C*~(D)*~(0)+~(A)*~(B)*~(C)*D*~(0)+A*~(B)*~(C)*D*~(0)+~(A)*B*~(C)*D*~(0)+A*B*~(C)*D*~(0)+~(A)*~(B)*C*D*~(0)+A*~(B)*C*D*~(0)+~(A)*B*C*D*~(0)+~(A)*~(B)*~(C)*~(D)*0+A*~(B)*~(C)*~(D)*0+~(A)*B*~(C)*~(D)*0+A*B*~(C)*~(D)*0+~(A)*~(B)*C*~(D)*0+A*~(B)*C*~(D)*0+~(A)*B*C*~(D)*0+~(A)*~(B)*~(C)*D*0+A*~(B)*~(C)*D*0+~(A)*B*~(C)*D*0+~(A)*~(B)*C*D*0)"),
    //.LUTG0("(A*B*~(C)*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+A*B*C*D*~(1)+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+A*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+A*B*~(C)*D*1+~(A)*~(B)*C*D*1+A*~(B)*C*D*1+~(A)*B*C*D*1+A*B*C*D*1)"),
    //.LUTG1("(~(A)*~(B)*~(C)*~(D)*~(1)+A*~(B)*~(C)*~(D)*~(1)+~(A)*B*~(C)*~(D)*~(1)+A*B*~(C)*~(D)*~(1)+~(A)*~(B)*C*~(D)*~(1)+A*~(B)*C*~(D)*~(1)+~(A)*B*C*~(D)*~(1)+A*B*C*~(D)*~(1)+~(A)*~(B)*~(C)*D*~(1)+A*~(B)*~(C)*D*~(1)+~(A)*B*~(C)*D*~(1)+A*B*~(C)*D*~(1)+~(A)*~(B)*C*D*~(1)+A*~(B)*C*D*~(1)+~(A)*B*C*D*~(1)+~(A)*~(B)*~(C)*~(D)*1+A*~(B)*~(C)*~(D)*1+~(A)*B*~(C)*~(D)*1+A*B*~(C)*~(D)*1+~(A)*~(B)*C*~(D)*1+A*~(B)*C*~(D)*1+~(A)*B*C*~(D)*1+~(A)*~(B)*~(C)*D*1+A*~(B)*~(C)*D*1+~(A)*B*~(C)*D*1+~(A)*~(B)*C*D*1)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111011101000),
    .INIT_LUTF1(16'b0111111111111111),
    .INIT_LUTG0(16'b1111111111111110),
    .INIT_LUTG1(16'b0001011101111111),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[20]_syn_4  (
    .a({\tx/tmds_gen[1]$tmds_channel/video_data [0],\tx/tmds_gen[1]$tmds_channel/video_data [0]}),
    .b({\tx/tmds_gen[1]$tmds_channel/video_data [1],\tx/tmds_gen[1]$tmds_channel/video_data [1]}),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [2],\tx/tmds_gen[1]$tmds_channel/video_data [2]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [6],\tx/tmds_gen[1]$tmds_channel/video_data [6]}),
    .e({\tx/tmds_gen[1]$tmds_channel/video_data [7],\tx/tmds_gen[1]$tmds_channel/video_data [7]}),
    .mi(\tx/rgb [20:19]),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[1]$tmds_channel/mux7_syn_214 ,\tx/tmds_gen[1]$tmds_channel/mux7_syn_219 }),
    .q(\tx/tmds_gen[2]$tmds_channel/video_data [4:3]));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[22]_syn_3  (
    .clk(\tx/clk_pixel ),
    .mi({open_n15268,\tx/rgb [22]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .q({open_n15274,\tx/tmds_gen[2]$tmds_channel/video_data [6]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_MSLICE #(
    //.LUT0("~(D@C@B@A)"),
    //.LUT1("(D*B*~(C)+D*~(B)*C+~(D)*B*C+D*B*C)"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUT0(16'b1001011001101001),
    .INIT_LUT1(16'b1111110011000000),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("MI"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[23]_syn_4  (
    .a({open_n15275,\tx/tmds_gen[1]$tmds_channel/video_data [1]}),
    .b(\tx/tmds_gen[1]$tmds_channel/video_data [4:3]),
    .c({\tx/tmds_gen[1]$tmds_channel/video_data [5],\tx/tmds_gen[1]$tmds_channel/video_data [5]}),
    .clk(\tx/clk_pixel ),
    .d({\tx/tmds_gen[1]$tmds_channel/video_data [3],\tx/tmds_gen[1]$tmds_channel/video_data [7]}),
    .mi({\tx/rgb [23],\tx/rgb [18]}),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\tx/tmds_gen[1]$tmds_channel/add0_syn_6 [1],\tx/tmds_gen[1]$tmds_channel/sub1_syn_22 }),
    .q({\tx/tmds_gen[2]$tmds_channel/video_data [7],\tx/tmds_gen[2]$tmds_channel/video_data [2]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    //.LUTF0("(~(~B*~A)*~((0@D))*~(C)+~(~B*~A)*(0@D)*~(C)+~(~(~B*~A))*(0@D)*C+~(~B*~A)*(0@D)*C)"),
    //.LUTF1("(D*~(C*~B))"),
    //.LUTG0("(~(~B*~A)*~((1@D))*~(C)+~(~B*~A)*(1@D)*~(C)+~(~(~B*~A))*(1@D)*C+~(~B*~A)*(1@D)*C)"),
    //.LUTG1("(D*~(C*~B))"),
    .CEMUX("1"),
    .CLKMUX("CLK"),
    .DFFMODE("FF"),
    .INIT_LUTF0(16'b1111111000001110),
    .INIT_LUTF1(16'b1100111100000000),
    .INIT_LUTG0(16'b0000111011111110),
    .INIT_LUTG1(16'b1100111100000000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"),
    .REG0_REGSET("RESET"),
    .REG0_SD("F"),
    .REG1_REGSET("RESET"),
    .REG1_SD("MI"),
    .SRMODE("SYNC"),
    .SRMUX("SR"))
    \tx/video_data_reg[3]_syn_4  (
    .a({open_n15290,\rgb_b1[7]_syn_6 }),
    .b({lt0_syn_18,\rgb_b1[7]_syn_15 }),
    .c({\tx/cx [9],pattern_sync[1]}),
    .clk(\tx/clk_pixel ),
    .d({rgb_b3_n,\tx/cx [7]}),
    .e({open_n15292,\tx/cy [7]}),
    .mi({\tx/rgb [3],open_n15294}),
    .sr(\tx/serializer/reset_dup_232 ),
    .f({\rgb_b1[7]_syn_4 ,open_n15306}),
    .q({\tx/tmds_gen[0]$tmds_channel/video_data [3],\tx/rgb [7]}));  // ../../../rtl/p1/hdmi_core/hdmi.sv(321)
  EG_PHY_LSLICE #(
    //.LUTF0("(C*B*D)"),
    //.LUTF1("(~D*~C*B*A)"),
    //.LUTG0("(C*B*D)"),
    //.LUTG1("(~D*~C*B*A)"),
    .INIT_LUTF0(16'b1100000000000000),
    .INIT_LUTF1(16'b0000000000001000),
    .INIT_LUTG0(16'b1100000000000000),
    .INIT_LUTG1(16'b0000000000001000),
    .LSFMUX0("FUNC5"),
    .LSFMUX1("FUNC5"),
    .MODE("LOGIC"))
    \tx/vsync_syn_11  (
    .a({\tx/vsync_syn_2 ,open_n15310}),
    .b({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_15 ,\tx/cy [7]}),
    .c({\tx/cy [2],\tx/cy [8]}),
    .d({\tx/cy [4],\tx/cy [6]}),
    .f({\tx/vsync_syn_4 ,\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_13 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(95)
  EG_PHY_MSLICE #(
    //.LUT0("(~D*~C*~B*~A)"),
    //.LUT1("(C*D)"),
    .INIT_LUT0(16'b0000000000000001),
    .INIT_LUT1(16'b1111000000000000),
    .MODE("LOGIC"))
    \tx/vsync_syn_9  (
    .a({open_n15335,\tx/cx [1]}),
    .b({open_n15336,\tx/cx [2]}),
    .c({\tx/cy [5],\tx/cx [3]}),
    .d({\tx/true_hdmi_output$packet_picker/source_product_description_info_frame_sent_reg_syn_13 ,\tx/cx [9]}),
    .f({\tx/vsync_syn_2 ,\tx/data_island_data_b_n_syn_2 }));  // ../../../rtl/p1/hdmi_core/hdmi.sv(95)
  EG_PHY_PAD #(
    //.HYSTERESIS("OFF"),
    //.LOCATION("F12"),
    //.PCICLAMP("OFF"),
    //.PULLMODE("PULLUP"),
    .IDDRMODE("OFF"),
    .IDDRPIPEMODE("NONE"),
    .INCEMUX("1"),
    .INPCLKMUX("CLK"),
    .INRSTMUX("RST"),
    .IN_DFFMODE("FF"),
    .IN_REGSET("SET"),
    .IOTYPE("LVCMOS33"),
    .MODE("IN"),
    .SRMODE("SYNC"),
    .TSMUX("1"))
    uart_rx_syn_6 (
    .ipad(uart_rx),
    .ipclk(\tx/clk_pixel ),
    .rst(\tx/serializer/reset_dup_228 ),
    .diq({open_n15367,open_n15368,open_n15369,rx_sync[0]}));  // ../../../rtl/p1/dmz_p1_top.sv(3)
  EG_PHY_PAD #(
    //.LOCATION("D12"),
    //.PULLMODE("NONE"),
    //.SLEWRATE("SLOW"),
    .DO_DFFMODE("FF"),
    .DO_REGSET("SET"),
    .DRIVE("8"),
    .IOTYPE("LVCMOS33"),
    .MODE("OUT"),
    .ODDRMODE("OFF"),
    .OUTCEMUX("1"),
    .OUTRSTMUX("RST"),
    .OUTSCLKMUX("CLK"),
    .SRMODE("SYNC"),
    .TSMUX("0"))
    uart_tx_syn_6 (
    .do({open_n15373,open_n15374,open_n15375,rx_sync[0]}),
    .osclk(\tx/clk_pixel ),
    .rst(\tx/serializer/reset_dup_228 ),
    .opad(uart_tx));  // ../../../rtl/p1/dmz_p1_top.sv(3)

endmodule 

