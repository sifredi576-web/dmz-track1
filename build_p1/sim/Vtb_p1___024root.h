// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p1.h for the primary calling header

#ifndef VERILATED_VTB_P1___024ROOT_H_
#define VERILATED_VTB_P1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_p1__DOT__clk;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__pixel_clk;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__serial_clk;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__reset_async;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__reset;
        CData/*0:0*/ tb_p1__DOT__run_n;
        CData/*0:0*/ tb_p1__DOT__mute;
        CData/*0:0*/ tb_p1__DOT__pattern;
        CData/*3:0*/ tb_p1__DOT__leds;
        CData/*0:0*/ tb_p1__DOT__sample_seen;
        CData/*0:0*/ tb_p1__DOT__capturing;
        CData/*0:0*/ tb_p1__DOT__pending_load;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__locked;
        CData/*3:0*/ tb_p1__DOT__dut__DOT__reset_pipe;
        CData/*1:0*/ tb_p1__DOT__dut__DOT__mute_sync;
        CData/*1:0*/ tb_p1__DOT__dut__DOT__pattern_sync;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__sample_ce;
        CData/*2:0*/ tb_p1__DOT__dut__DOT__tmds;
        CData/*5:0*/ tb_p1__DOT__dut__DOT__tone__DOT__phase;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__hsync;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__vsync;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__video_data_period;
        CData/*2:0*/ tb_p1__DOT__dut__DOT__tx__DOT__mode;
        CData/*5:0*/ tb_p1__DOT__dut__DOT__tx__DOT__control_data;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_guard;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_preamble;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_guard;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__meta;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__sync;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT____Vcellout__lane__BRA__3__KET____DOT__ddr__q;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__ddr__DOT__rise_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__ddr__DOT__fall_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__ddr__DOT__rise_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__ddr__DOT__fall_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__ddr__DOT__rise_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__ddr__DOT__fall_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__ddr__DOT__rise_bit;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__ddr__DOT__fall_bit;
        CData/*7:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
        CData/*1:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
        CData/*1:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready;
        CData/*3:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet;
        CData/*7:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
        CData/*5:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc;
        CData/*3:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0;
    };
    struct {
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc;
        CData/*3:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc;
        CData/*3:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07;
        CData/*4:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0;
        CData/*0:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1;
        CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__pixel_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__reset_async__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__reset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__serial_clk__0;
        CData/*0:0*/ __Vtrigprevexpr_hc1916ac6__1;
        CData/*0:0*/ __Vtrigprevexpr_h227b1394__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_p1__DOT____Vlvbound_h96fa8192__0;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__x;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__y;
        SData/*15:0*/ tb_p1__DOT__dut__DOT__sample;
        SData/*11:0*/ tb_p1__DOT__dut__DOT__tx__DOT__data_island_data;
        SData/*8:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift;
        SData/*8:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__control_coding;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__terc4_coding;
        SData/*8:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__control_coding;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__terc4_coding;
        SData/*8:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__control_coding;
        SData/*9:0*/ tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__terc4_coding;
        SData/*8:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__0;
        SData/*8:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__0;
        SData/*8:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__0;
        SData/*8:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__1;
        SData/*8:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__1;
        SData/*8:0*/ __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__1;
        IData/*31:0*/ tb_p1__DOT__cycles;
        IData/*31:0*/ tb_p1__DOT__samples;
        IData/*31:0*/ tb_p1__DOT__frames;
        IData/*31:0*/ tb_p1__DOT__active;
        IData/*31:0*/ tb_p1__DOT__last_sample;
        IData/*31:0*/ tb_p1__DOT__delta;
    };
    struct {
        IData/*31:0*/ tb_p1__DOT__checksum;
        IData/*31:0*/ tb_p1__DOT__pcm_samples;
        IData/*31:0*/ tb_p1__DOT__nonzero_pcm;
        IData/*31:0*/ tb_p1__DOT__received_header;
        IData/*31:0*/ tb_p1__DOT__symbol_count;
        IData/*31:0*/ tb_p1__DOT__bit_index;
        IData/*23:0*/ tb_p1__DOT__dut__DOT__heartbeat;
        IData/*23:0*/ tb_p1__DOT__dut__DOT__rgb;
        IData/*24:0*/ tb_p1__DOT__dut__DOT__tone__DOT__accumulator;
        IData/*23:0*/ tb_p1__DOT__dut__DOT__tx__DOT__video_data;
        IData/*23:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header;
        IData/*19:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp;
        IData/*19:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 256> tb_p1__DOT__packets;
        VlUnpacked<SData/*15:0*/, 48> tb_p1__DOT__previous_samples;
        VlUnpacked<QData/*63:0*/, 4> tb_p1__DOT__received_sub;
        VlUnpacked<SData/*9:0*/, 4> tb_p1__DOT__expected;
        VlUnpacked<SData/*9:0*/, 4> tb_p1__DOT__pending;
        VlUnpacked<SData/*15:0*/, 2> tb_p1__DOT__dut__DOT__audio_words;
        VlUnpacked<SData/*9:0*/, 3> tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal;
        VlUnpacked<QData/*55:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub;
        VlUnpacked<SData/*9:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words;
        VlUnpacked<IData/*23:0*/, 256> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers;
        VlUnpacked<VlUnpacked<QData/*55:0*/, 4>, 256> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs;
        VlUnpacked<QData/*55:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub;
        VlUnpacked<SData/*15:0*/, 2> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*23:0*/, 2>, 4>, 2> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer;
        VlUnpacked<SData/*15:0*/, 2> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux;
        VlUnpacked<VlUnpacked<IData/*23:0*/, 2>, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet;
        VlUnpacked<QData/*55:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub;
        VlUnpacked<CData/*1:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit;
        VlUnpacked<CData/*1:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit;
        VlUnpacked<QData/*55:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub;
        VlUnpacked<QData/*55:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub;
        VlUnpacked<QData/*55:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub;
        VlUnpacked<CData/*1:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit;
        VlUnpacked<CData/*7:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter;
        VlUnpacked<CData/*7:0*/, 28> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes;
        VlUnpacked<CData/*7:0*/, 28> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes;
        VlUnpacked<CData/*7:0*/, 28> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes;
        VlUnpacked<CData/*7:0*/, 5> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity;
        VlUnpacked<CData/*7:0*/, 5> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next;
        VlUnpacked<CData/*7:0*/, 4> tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next;
        VlUnpacked<CData/*7:0*/, 28> __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__0;
        VlUnpacked<CData/*7:0*/, 28> __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__0;
        VlUnpacked<CData/*7:0*/, 28> __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__0;
        VlUnpacked<CData/*7:0*/, 28> __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__1;
        VlUnpacked<CData/*7:0*/, 28> __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__1;
        VlUnpacked<CData/*7:0*/, 28> __Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__1;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h25a6b4de__0;
    VlTriggerScheduler __VtrigSched_h864d5bac__0;
    VlTriggerScheduler __VtrigSched_had2ebf53__0;
    VlTriggerScheduler __VtrigSched_had2ebf12__0;
    VlTriggerVec<7> __VstlTriggered;
    VlTriggerVec<16> __VactTriggered;
    VlTriggerVec<16> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_p1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_p1___024root(Vtb_p1__Syms* symsp, const char* v__name);
    ~Vtb_p1___024root();
    VL_UNCOPYABLE(Vtb_p1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
