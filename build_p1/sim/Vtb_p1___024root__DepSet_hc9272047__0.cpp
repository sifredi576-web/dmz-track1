// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1__Syms.h"
#include "Vtb_p1___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__0(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_p1__DOT__unnamedblk7__DOT__j;
    tb_p1__DOT__unnamedblk7__DOT__j = 0;
    // Body
    tb_p1__DOT__unnamedblk7__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, tb_p1__DOT__unnamedblk7__DOT__j)) {
        vlSelfRef.tb_p1__DOT__packets[(0xffU & tb_p1__DOT__unnamedblk7__DOT__j)] = 0U;
        tb_p1__DOT__unnamedblk7__DOT__j = ((IData)(1U) 
                                           + tb_p1__DOT__unnamedblk7__DOT__j);
    }
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                         121);
    vlSelfRef.tb_p1__DOT__run_n = 1U;
    while ((0xcd140U != vlSelfRef.tb_p1__DOT__cycles)) {
        co_await vlSelfRef.__VtrigSched_h25a6b4de__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'shcd140 == tb_p1.cycles))", 
                                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                                             122);
    }
    vlSelfRef.tb_p1__DOT__mute = 1U;
    vlSelfRef.tb_p1__DOT__pattern = 1U;
    while ((0x1339e0U != vlSelfRef.tb_p1__DOT__cycles)) {
        co_await vlSelfRef.__VtrigSched_h864d5bac__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'sh1339e0 == tb_p1.cycles))", 
                                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                                             123);
    }
    if (VL_UNLIKELY((((VL_GTS_III(32, 3U, vlSelfRef.tb_p1__DOT__frames) 
                       | VL_GTS_III(32, 0x972U, vlSelfRef.tb_p1__DOT__samples)) 
                      | VL_LTS_III(32, 0x974U, vlSelfRef.tb_p1__DOT__samples))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:124: Assertion failed in %Ntb_p1: counts frames=%0d samples=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_p1__DOT__frames,
                     32,vlSelfRef.tb_p1__DOT__samples);
        VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 124, "", false);
    }
    if (VL_UNLIKELY((((((VL_GTS_III(32, 0x28U, vlSelfRef.tb_p1__DOT__packets
                                    [1U]) | VL_GTS_III(32, 0x24eU, 
                                                       vlSelfRef.tb_p1__DOT__packets
                                                       [2U])) 
                        | VL_GTS_III(32, 2U, vlSelfRef.tb_p1__DOT__packets
                                     [0x82U])) | VL_GTS_III(32, 2U, 
                                                            vlSelfRef.tb_p1__DOT__packets
                                                            [0x83U])) 
                      | VL_GTS_III(32, 2U, vlSelfRef.tb_p1__DOT__packets
                                   [0x84U]))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:125: Assertion failed in %Ntb_p1: missing packets\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 125, "", false);
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 0x3e8U, vlSelfRef.tb_p1__DOT__nonzero_pcm)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:126: Assertion failed in %Ntb_p1: PCM unexpectedly silent\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 126, "", false);
    }
    VL_WRITEF_NX("PASS BCH parity, PCM format/nonzero=%0d of %0d, InfoFrame checksums, ACR N/CTS\nPASS frames=%0d samples=%0d serializer_symbols=%0d ACR=%0d PCM=%0d AVI=%0d SPD=%0d AUDIO_INFO=%0d\n",0,
                 32,vlSelfRef.tb_p1__DOT__nonzero_pcm,
                 32,vlSelfRef.tb_p1__DOT__pcm_samples,
                 32,vlSelfRef.tb_p1__DOT__frames,32,
                 vlSelfRef.tb_p1__DOT__samples,32,vlSelfRef.tb_p1__DOT__symbol_count,
                 32,vlSelfRef.tb_p1__DOT__packets[1U],
                 32,vlSelfRef.tb_p1__DOT__packets[2U],
                 32,vlSelfRef.tb_p1__DOT__packets[0x82U],
                 32,vlSelfRef.tb_p1__DOT__packets[0x83U],
                 32,vlSelfRef.tb_p1__DOT__packets[0x84U]);
    vlSelfRef.tb_p1__DOT__run_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x61a80ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                         129);
    vlSelfRef.tb_p1__DOT__run_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x5f5e100ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                         129);
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset) 
                            | (~ ((IData)(vlSelfRef.tb_p1__DOT__leds) 
                                  >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:130: Assertion failed in %Ntb_p1: reset recovery\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 130, "", false);
    }
    VL_WRITEF_NX("PASS reset recovery and mute\n",0);
    VL_FINISH_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 131, "");
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__1(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xdf8475800ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                         133);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:133: Assertion failed in %Ntb_p1: timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 133, "", false);
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__5(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_had2ebf53__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.dut.serial_clk)", 
                                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                                             34);
        if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
            vlSelfRef.tb_p1__DOT__capturing = 0U;
            vlSelfRef.tb_p1__DOT__pending_load = 0U;
            vlSelfRef.tb_p1__DOT__bit_index = 0U;
        } else {
            if (vlSelfRef.tb_p1__DOT__pending_load) {
                vlSelfRef.tb_p1__DOT__expected[0U] 
                    = vlSelfRef.tb_p1__DOT__pending
                    [0U];
                vlSelfRef.tb_p1__DOT__capturing = 1U;
                vlSelfRef.tb_p1__DOT__bit_index = 0U;
                vlSelfRef.tb_p1__DOT__symbol_count 
                    = ((IData)(1U) + vlSelfRef.tb_p1__DOT__symbol_count);
                vlSelfRef.tb_p1__DOT__expected[1U] 
                    = vlSelfRef.tb_p1__DOT__pending
                    [1U];
                vlSelfRef.tb_p1__DOT__expected[2U] 
                    = vlSelfRef.tb_p1__DOT__pending
                    [2U];
                vlSelfRef.tb_p1__DOT__expected[3U] 
                    = vlSelfRef.tb_p1__DOT__pending
                    [3U];
            }
            vlSelfRef.tb_p1__DOT__pending_load = ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__meta) 
                                                  ^ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__sync));
            if (vlSelfRef.tb_p1__DOT__pending_load) {
                vlSelfRef.tb_p1__DOT__pending[0U] = 
                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal
                    [0U];
                vlSelfRef.tb_p1__DOT__pending[1U] = 
                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal
                    [1U];
                vlSelfRef.tb_p1__DOT__pending[2U] = 
                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal
                    [2U];
                vlSelfRef.tb_p1__DOT__pending[3U] = 0x1fU;
            }
        }
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                             47);
        if (vlSelfRef.tb_p1__DOT__capturing) {
            if (VL_UNLIKELY((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tmds)) 
                              != ((9U >= (0xfU & vlSelfRef.tb_p1__DOT__bit_index)) 
                                  && (1U & (vlSelfRef.tb_p1__DOT__expected
                                            [0U] >> 
                                            (0xfU & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:49: Assertion failed in %Ntb_p1: serializer rise lane=0 bit=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_p1__DOT__bit_index);
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 49, "", false);
            }
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tmds) 
                                     >> 1U)) != ((9U 
                                                  >= 
                                                  (0xfU 
                                                   & vlSelfRef.tb_p1__DOT__bit_index)) 
                                                 && (1U 
                                                     & (vlSelfRef.tb_p1__DOT__expected
                                                        [1U] 
                                                        >> 
                                                        (0xfU 
                                                         & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:49: Assertion failed in %Ntb_p1: serializer rise lane=1 bit=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_p1__DOT__bit_index);
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 49, "", false);
            }
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tmds) 
                                     >> 2U)) != ((9U 
                                                  >= 
                                                  (0xfU 
                                                   & vlSelfRef.tb_p1__DOT__bit_index)) 
                                                 && (1U 
                                                     & (vlSelfRef.tb_p1__DOT__expected
                                                        [2U] 
                                                        >> 
                                                        (0xfU 
                                                         & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:49: Assertion failed in %Ntb_p1: serializer rise lane=2 bit=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_p1__DOT__bit_index);
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 49, "", false);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT____Vcellout__lane__BRA__3__KET____DOT__ddr__q) 
                              != ((9U >= (0xfU & vlSelfRef.tb_p1__DOT__bit_index)) 
                                  && (1U & (vlSelfRef.tb_p1__DOT__expected
                                            [3U] >> 
                                            (0xfU & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:50: Assertion failed in %Ntb_p1: clock rise\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 50, "", false);
            }
            vlSelfRef.tb_p1__DOT__bit_index = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__bit_index);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__6(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_had2ebf12__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.dut.serial_clk)", 
                                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                                             54);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                             55);
        if (((IData)(vlSelfRef.tb_p1__DOT__capturing) 
             & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)))) {
            if (VL_UNLIKELY((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tmds)) 
                              != ((9U >= (0xfU & vlSelfRef.tb_p1__DOT__bit_index)) 
                                  && (1U & (vlSelfRef.tb_p1__DOT__expected
                                            [0U] >> 
                                            (0xfU & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:57: Assertion failed in %Ntb_p1.unnamedblk2: serializer fall\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 57, "", false);
            }
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tmds) 
                                     >> 1U)) != ((9U 
                                                  >= 
                                                  (0xfU 
                                                   & vlSelfRef.tb_p1__DOT__bit_index)) 
                                                 && (1U 
                                                     & (vlSelfRef.tb_p1__DOT__expected
                                                        [1U] 
                                                        >> 
                                                        (0xfU 
                                                         & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:57: Assertion failed in %Ntb_p1.unnamedblk2: serializer fall\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 57, "", false);
            }
            if (VL_UNLIKELY((((1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tmds) 
                                     >> 2U)) != ((9U 
                                                  >= 
                                                  (0xfU 
                                                   & vlSelfRef.tb_p1__DOT__bit_index)) 
                                                 && (1U 
                                                     & (vlSelfRef.tb_p1__DOT__expected
                                                        [2U] 
                                                        >> 
                                                        (0xfU 
                                                         & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:57: Assertion failed in %Ntb_p1.unnamedblk2: serializer fall\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 57, "", false);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT____Vcellout__lane__BRA__3__KET____DOT__ddr__q) 
                              != ((9U >= (0xfU & vlSelfRef.tb_p1__DOT__bit_index)) 
                                  && (1U & (vlSelfRef.tb_p1__DOT__expected
                                            [3U] >> 
                                            (0xfU & vlSelfRef.tb_p1__DOT__bit_index)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:58: Assertion failed in %Ntb_p1: clock fall\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 58, "", false);
            }
            vlSelfRef.tb_p1__DOT__bit_index = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__bit_index);
            if ((0xaU == vlSelfRef.tb_p1__DOT__bit_index)) {
                vlSelfRef.tb_p1__DOT__capturing = 0U;
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__act(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p1___024root___eval_triggers__act(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_triggers__act\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_hc1916ac6__0;
    __Vtrigprevexpr_hc1916ac6__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h227b1394__0;
    __Vtrigprevexpr_h227b1394__0 = 0;
    // Body
    __Vtrigprevexpr_hc1916ac6__0 = (0xcd140U == vlSelfRef.tb_p1__DOT__cycles);
    __Vtrigprevexpr_h227b1394__0 = (0x1339e0U == vlSelfRef.tb_p1__DOT__cycles);
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__1.neq(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__1.neq(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes));
    vlSelfRef.__VactTriggered.setBit(5U, vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__1.neq(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes));
    vlSelfRef.__VactTriggered.setBit(6U, ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__pixel_clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__pixel_clk__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__pixel_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__pixel_clk__0))));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset_async) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__reset_async__0))));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.tb_p1__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__reset__0))));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__serial_clk__0))));
    vlSelfRef.__VactTriggered.setBit(0xcU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(__Vtrigprevexpr_hc1916ac6__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_hc1916ac6__1)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((IData)(__Vtrigprevexpr_h227b1394__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_h227b1394__1)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__serial_clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__1.assign(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__1.assign(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__1.assign(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__pixel_clk__0 
        = vlSelfRef.tb_p1__DOT__dut__DOT__pixel_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__reset_async__0 
        = vlSelfRef.tb_p1__DOT__dut__DOT__reset_async;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk__0 
        = vlSelfRef.tb_p1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__reset__0 
        = vlSelfRef.tb_p1__DOT__dut__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__dut__DOT__serial_clk__0 
        = vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk;
    vlSelfRef.__Vtrigprevexpr_hc1916ac6__1 = __Vtrigprevexpr_hc1916ac6__0;
    vlSelfRef.__Vtrigprevexpr_h227b1394__1 = __Vtrigprevexpr_h227b1394__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xdU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xeU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p1___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__5(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__5\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vfunc_tb_p1__DOT__ecc__0__Vfuncout;
    __Vfunc_tb_p1__DOT__ecc__0__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_tb_p1__DOT__ecc__0__body;
    __Vfunc_tb_p1__DOT__ecc__0__body = 0;
    IData/*31:0*/ __Vfunc_tb_p1__DOT__ecc__0__bits;
    __Vfunc_tb_p1__DOT__ecc__0__bits = 0;
    IData/*31:0*/ __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n;
    __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__ecc__0__e;
    __Vfunc_tb_p1__DOT__ecc__0__e = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__ecc__1__Vfuncout;
    __Vfunc_tb_p1__DOT__ecc__1__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_tb_p1__DOT__ecc__1__body;
    __Vfunc_tb_p1__DOT__ecc__1__body = 0;
    IData/*31:0*/ __Vfunc_tb_p1__DOT__ecc__1__bits;
    __Vfunc_tb_p1__DOT__ecc__1__bits = 0;
    IData/*31:0*/ __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n;
    __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__ecc__1__e;
    __Vfunc_tb_p1__DOT__ecc__1__e = 0;
    // Body
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        vlSelfRef.tb_p1__DOT__sample_seen = 0U;
    } else {
        vlSelfRef.tb_p1__DOT__cycles = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__cycles);
        if (VL_UNLIKELY((((0x320U <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                          | (0x20dU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:65: Assertion failed in %Ntb_p1: raster bounds\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 65, "", false);
        }
        if (((0x280U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
             & (0x1e0U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))) {
            vlSelfRef.tb_p1__DOT__active = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__active);
        }
        if (((0x31fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
             & (0x20cU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))) {
            vlSelfRef.tb_p1__DOT__frames = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__frames);
            if (VL_UNLIKELY(((VL_LTS_III(32, 1U, vlSelfRef.tb_p1__DOT__frames) 
                              & (0x4b000U != vlSelfRef.tb_p1__DOT__active))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:69: Assertion failed in %Ntb_p1: active pixels %0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_p1__DOT__active);
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 69, "", false);
            }
            vlSelfRef.tb_p1__DOT__active = 0U;
        }
        if (vlSelfRef.tb_p1__DOT__dut__DOT__sample_ce) {
            vlSelfRef.tb_p1__DOT__samples = ((IData)(1U) 
                                             + vlSelfRef.tb_p1__DOT__samples);
            vlSelfRef.tb_p1__DOT__delta = (vlSelfRef.tb_p1__DOT__cycles 
                                           - vlSelfRef.tb_p1__DOT__last_sample);
            if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_p1__DOT__sample_seen) 
                               & (0x208U != vlSelfRef.tb_p1__DOT__delta)) 
                              & (0x209U != vlSelfRef.tb_p1__DOT__delta))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:74: Assertion failed in %Ntb_p1: audio interval %0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_p1__DOT__delta);
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 74, "", false);
            }
            vlSelfRef.tb_p1__DOT__last_sample = vlSelfRef.tb_p1__DOT__cycles;
            vlSelfRef.tb_p1__DOT__sample_seen = 1U;
            if (VL_UNLIKELY((((VL_LTS_III(32, 0x30U, vlSelfRef.tb_p1__DOT__samples) 
                               & (~ (IData)(vlSelfRef.tb_p1__DOT__mute))) 
                              & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__sample) 
                                 != ((0x2fU >= (0x3fU 
                                                & VL_MODDIVS_III(32, 
                                                                 (vlSelfRef.tb_p1__DOT__samples 
                                                                  - (IData)(1U)), (IData)(0x30U))))
                                      ? vlSelfRef.tb_p1__DOT__previous_samples
                                     [(0x3fU & VL_MODDIVS_III(32, 
                                                              (vlSelfRef.tb_p1__DOT__samples 
                                                               - (IData)(1U)), (IData)(0x30U)))]
                                      : 0U)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:76: Assertion failed in %Ntb_p1: tone period\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 76, "", false);
            }
            vlSelfRef.tb_p1__DOT____Vlvbound_h96fa8192__0 
                = vlSelfRef.tb_p1__DOT__dut__DOT__sample;
            if (VL_LIKELY(((0x2fU >= (0x3fU & VL_MODDIVS_III(32, 
                                                             (vlSelfRef.tb_p1__DOT__samples 
                                                              - (IData)(1U)), (IData)(0x30U))))))) {
                vlSelfRef.tb_p1__DOT__previous_samples[(0x3fU 
                                                        & VL_MODDIVS_III(32, 
                                                                         (vlSelfRef.tb_p1__DOT__samples 
                                                                          - (IData)(1U)), (IData)(0x30U)))] 
                    = vlSelfRef.tb_p1__DOT____Vlvbound_h96fa8192__0;
            }
            if (VL_UNLIKELY(((VL_LTS_III(32, 0xfffU, 
                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__sample))) 
                              | VL_GTS_III(32, 0xfffff001U, 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__sample))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:78: Assertion failed in %Ntb_p1: amplitude\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 78, "", false);
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_p1__DOT__mute) 
                               & VL_LTS_III(32, 0xdbba0U, vlSelfRef.tb_p1__DOT__cycles)) 
                              & (0U != VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__sample))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:79: Assertion failed in %Ntb_p1: mute\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 79, "", false);
            }
        }
        if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period) {
            vlSelfRef.tb_p1__DOT__received_header = 
                (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) 
                  & vlSelfRef.tb_p1__DOT__received_header) 
                 | (0xffffffffULL & ((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data)) 
                                     << (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))));
            vlSelfRef.tb_p1__DOT__received_sub[0U] 
                = (((~ (1ULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [0U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 1U)))) 
                             << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))));
            vlSelfRef.tb_p1__DOT__received_sub[0U] 
                = (((~ (1ULL << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [0U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 5U)))) 
                             << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))));
            vlSelfRef.tb_p1__DOT__received_sub[1U] 
                = (((~ (1ULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [1U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 2U)))) 
                             << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))));
            vlSelfRef.tb_p1__DOT__received_sub[1U] 
                = (((~ (1ULL << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [1U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 6U)))) 
                             << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))));
            vlSelfRef.tb_p1__DOT__received_sub[2U] 
                = (((~ (1ULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [2U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 3U)))) 
                             << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))));
            vlSelfRef.tb_p1__DOT__received_sub[2U] 
                = (((~ (1ULL << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [2U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 7U)))) 
                             << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))));
            vlSelfRef.tb_p1__DOT__received_sub[3U] 
                = (((~ (1ULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [3U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 4U)))) 
                             << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))));
            vlSelfRef.tb_p1__DOT__received_sub[3U] 
                = (((~ (1ULL << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U))))) 
                    & vlSelfRef.tb_p1__DOT__received_sub
                    [3U]) | ((QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                               >> 8U)))) 
                             << (0x3fU & ((IData)(1U) 
                                          + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter), 1U)))));
            if ((0x1fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
                if (VL_UNLIKELY((((vlSelfRef.tb_p1__DOT__received_header 
                                   >> 0x18U) != ([&]() {
                                        __Vfunc_tb_p1__DOT__ecc__0__bits = 0x18U;
                                        __Vfunc_tb_p1__DOT__ecc__0__body 
                                            = (QData)((IData)(
                                                              (0xffffffU 
                                                               & vlSelfRef.tb_p1__DOT__received_header)));
                                        __Vfunc_tb_p1__DOT__ecc__0__e = 0U;
                                        __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n = 0U;
                                        while (VL_LTS_III(32, __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n, __Vfunc_tb_p1__DOT__ecc__0__bits)) {
                                            __Vfunc_tb_p1__DOT__ecc__0__e 
                                                = (0xffU 
                                                   & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__ecc__0__e), 1U) 
                                                      ^ 
                                                      ((1U 
                                                        & ((IData)(__Vfunc_tb_p1__DOT__ecc__0__e) 
                                                           ^ 
                                                           ((0x37U 
                                                             >= 
                                                             (0x3fU 
                                                              & __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n)) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (__Vfunc_tb_p1__DOT__ecc__0__body 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n)))))))
                                                        ? 0x83U
                                                        : 0U)));
                                            __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n 
                                                = ((IData)(1U) 
                                                   + __Vfunc_tb_p1__DOT__ecc__0__unnamedblk1__DOT__n);
                                        }
                                        __Vfunc_tb_p1__DOT__ecc__0__Vfuncout 
                                            = __Vfunc_tb_p1__DOT__ecc__0__e;
                                    }(), (IData)(__Vfunc_tb_p1__DOT__ecc__0__Vfuncout)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:88: Assertion failed in %Ntb_p1: header BCH\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 88, "", false);
                }
                if (VL_UNLIKELY((((0xffU & (IData)(
                                                   (vlSelfRef.tb_p1__DOT__received_sub
                                                    [0U] 
                                                    >> 0x38U))) 
                                  != ([&]() {
                                        __Vfunc_tb_p1__DOT__ecc__1__bits = 0x38U;
                                        __Vfunc_tb_p1__DOT__ecc__1__body 
                                            = (0xffffffffffffffULL 
                                               & vlSelfRef.tb_p1__DOT__received_sub
                                               [0U]);
                                        __Vfunc_tb_p1__DOT__ecc__1__e = 0U;
                                        __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n = 0U;
                                        while (VL_LTS_III(32, __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n, __Vfunc_tb_p1__DOT__ecc__1__bits)) {
                                            __Vfunc_tb_p1__DOT__ecc__1__e 
                                                = (0xffU 
                                                   & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__ecc__1__e), 1U) 
                                                      ^ 
                                                      ((1U 
                                                        & ((IData)(__Vfunc_tb_p1__DOT__ecc__1__e) 
                                                           ^ 
                                                           ((0x37U 
                                                             >= 
                                                             (0x3fU 
                                                              & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (__Vfunc_tb_p1__DOT__ecc__1__body 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)))))))
                                                        ? 0x83U
                                                        : 0U)));
                                            __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n 
                                                = ((IData)(1U) 
                                                   + __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n);
                                        }
                                        __Vfunc_tb_p1__DOT__ecc__1__Vfuncout 
                                            = __Vfunc_tb_p1__DOT__ecc__1__e;
                                    }(), (IData)(__Vfunc_tb_p1__DOT__ecc__1__Vfuncout)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:90: Assertion failed in %Ntb_p1.unnamedblk4: body BCH packet=%0x sub=0\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(0xffU & vlSelfRef.tb_p1__DOT__received_header));
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 90, "", false);
                }
                if (VL_UNLIKELY((((0xffU & (IData)(
                                                   (vlSelfRef.tb_p1__DOT__received_sub
                                                    [1U] 
                                                    >> 0x38U))) 
                                  != ([&]() {
                                        __Vfunc_tb_p1__DOT__ecc__1__bits = 0x38U;
                                        __Vfunc_tb_p1__DOT__ecc__1__body 
                                            = (0xffffffffffffffULL 
                                               & vlSelfRef.tb_p1__DOT__received_sub
                                               [1U]);
                                        __Vfunc_tb_p1__DOT__ecc__1__e = 0U;
                                        __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n = 0U;
                                        while (VL_LTS_III(32, __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n, __Vfunc_tb_p1__DOT__ecc__1__bits)) {
                                            __Vfunc_tb_p1__DOT__ecc__1__e 
                                                = (0xffU 
                                                   & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__ecc__1__e), 1U) 
                                                      ^ 
                                                      ((1U 
                                                        & ((IData)(__Vfunc_tb_p1__DOT__ecc__1__e) 
                                                           ^ 
                                                           ((0x37U 
                                                             >= 
                                                             (0x3fU 
                                                              & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (__Vfunc_tb_p1__DOT__ecc__1__body 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)))))))
                                                        ? 0x83U
                                                        : 0U)));
                                            __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n 
                                                = ((IData)(1U) 
                                                   + __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n);
                                        }
                                        __Vfunc_tb_p1__DOT__ecc__1__Vfuncout 
                                            = __Vfunc_tb_p1__DOT__ecc__1__e;
                                    }(), (IData)(__Vfunc_tb_p1__DOT__ecc__1__Vfuncout)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:90: Assertion failed in %Ntb_p1.unnamedblk4: body BCH packet=%0x sub=1\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(0xffU & vlSelfRef.tb_p1__DOT__received_header));
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 90, "", false);
                }
                if (VL_UNLIKELY((((0xffU & (IData)(
                                                   (vlSelfRef.tb_p1__DOT__received_sub
                                                    [2U] 
                                                    >> 0x38U))) 
                                  != ([&]() {
                                        __Vfunc_tb_p1__DOT__ecc__1__bits = 0x38U;
                                        __Vfunc_tb_p1__DOT__ecc__1__body 
                                            = (0xffffffffffffffULL 
                                               & vlSelfRef.tb_p1__DOT__received_sub
                                               [2U]);
                                        __Vfunc_tb_p1__DOT__ecc__1__e = 0U;
                                        __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n = 0U;
                                        while (VL_LTS_III(32, __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n, __Vfunc_tb_p1__DOT__ecc__1__bits)) {
                                            __Vfunc_tb_p1__DOT__ecc__1__e 
                                                = (0xffU 
                                                   & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__ecc__1__e), 1U) 
                                                      ^ 
                                                      ((1U 
                                                        & ((IData)(__Vfunc_tb_p1__DOT__ecc__1__e) 
                                                           ^ 
                                                           ((0x37U 
                                                             >= 
                                                             (0x3fU 
                                                              & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (__Vfunc_tb_p1__DOT__ecc__1__body 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)))))))
                                                        ? 0x83U
                                                        : 0U)));
                                            __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n 
                                                = ((IData)(1U) 
                                                   + __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n);
                                        }
                                        __Vfunc_tb_p1__DOT__ecc__1__Vfuncout 
                                            = __Vfunc_tb_p1__DOT__ecc__1__e;
                                    }(), (IData)(__Vfunc_tb_p1__DOT__ecc__1__Vfuncout)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:90: Assertion failed in %Ntb_p1.unnamedblk4: body BCH packet=%0x sub=2\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(0xffU & vlSelfRef.tb_p1__DOT__received_header));
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 90, "", false);
                }
                if (VL_UNLIKELY((((0xffU & (IData)(
                                                   (vlSelfRef.tb_p1__DOT__received_sub
                                                    [3U] 
                                                    >> 0x38U))) 
                                  != ([&]() {
                                        __Vfunc_tb_p1__DOT__ecc__1__bits = 0x38U;
                                        __Vfunc_tb_p1__DOT__ecc__1__body 
                                            = (0xffffffffffffffULL 
                                               & vlSelfRef.tb_p1__DOT__received_sub
                                               [3U]);
                                        __Vfunc_tb_p1__DOT__ecc__1__e = 0U;
                                        __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n = 0U;
                                        while (VL_LTS_III(32, __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n, __Vfunc_tb_p1__DOT__ecc__1__bits)) {
                                            __Vfunc_tb_p1__DOT__ecc__1__e 
                                                = (0xffU 
                                                   & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__ecc__1__e), 1U) 
                                                      ^ 
                                                      ((1U 
                                                        & ((IData)(__Vfunc_tb_p1__DOT__ecc__1__e) 
                                                           ^ 
                                                           ((0x37U 
                                                             >= 
                                                             (0x3fU 
                                                              & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)) 
                                                            && (1U 
                                                                & (IData)(
                                                                          (__Vfunc_tb_p1__DOT__ecc__1__body 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n)))))))
                                                        ? 0x83U
                                                        : 0U)));
                                            __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n 
                                                = ((IData)(1U) 
                                                   + __Vfunc_tb_p1__DOT__ecc__1__unnamedblk1__DOT__n);
                                        }
                                        __Vfunc_tb_p1__DOT__ecc__1__Vfuncout 
                                            = __Vfunc_tb_p1__DOT__ecc__1__e;
                                    }(), (IData)(__Vfunc_tb_p1__DOT__ecc__1__Vfuncout)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:90: Assertion failed in %Ntb_p1.unnamedblk4: body BCH packet=%0x sub=3\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(0xffU & vlSelfRef.tb_p1__DOT__received_header));
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 90, "", false);
                }
            }
        }
        if (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period) 
             & (0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)))) {
            vlSelfRef.tb_p1__DOT__packets[(0xffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header)] 
                = ((IData)(1U) + vlSelfRef.tb_p1__DOT__packets
                   [(0xffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header)]);
            if ((2U == (0xffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header))) {
                vlSelfRef.tb_p1__DOT__pcm_samples = 
                    ((IData)(1U) + vlSelfRef.tb_p1__DOT__pcm_samples);
                if ((0U != (0xffffffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [0U])))) {
                    vlSelfRef.tb_p1__DOT__nonzero_pcm 
                        = ((IData)(1U) + vlSelfRef.tb_p1__DOT__nonzero_pcm);
                }
                if (VL_UNLIKELY(((0xfU != (0xfU & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
                                                   >> 8U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:96: Assertion failed in %Ntb_p1: sample present\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 96, "", false);
                }
                if (VL_UNLIKELY((((0xffffffU & (IData)(
                                                       vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [0U])) 
                                  != (0xffffffU & (IData)(
                                                          (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                           [0U] 
                                                           >> 0x18U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:99: Assertion failed in %Ntb_p1.unnamedblk5: stereo mismatch\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 99, "", false);
                }
                vlSelfRef.tb_p1__DOT__pcm_samples = 
                    ((IData)(1U) + vlSelfRef.tb_p1__DOT__pcm_samples);
                if ((0U != (0xffffffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [1U])))) {
                    vlSelfRef.tb_p1__DOT__nonzero_pcm 
                        = ((IData)(1U) + vlSelfRef.tb_p1__DOT__nonzero_pcm);
                }
                if (VL_UNLIKELY((((0U != (0xffU & (IData)(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                          [0U]))) 
                                  | (0U != (0xffU & (IData)(
                                                            (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [0U] 
                                                             >> 0x18U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:100: Assertion failed in %Ntb_p1.unnamedblk5: PCM alignment\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 100, "", false);
                }
                vlSelfRef.tb_p1__DOT__pcm_samples = 
                    ((IData)(1U) + vlSelfRef.tb_p1__DOT__pcm_samples);
                if ((0U != (0xffffffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [2U])))) {
                    vlSelfRef.tb_p1__DOT__nonzero_pcm 
                        = ((IData)(1U) + vlSelfRef.tb_p1__DOT__nonzero_pcm);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                [0U]))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [0U] 
                                                                   >> 0x30U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:101: Assertion failed in %Ntb_p1.unnamedblk5: left parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 101, "", false);
                }
                vlSelfRef.tb_p1__DOT__pcm_samples = 
                    ((IData)(1U) + vlSelfRef.tb_p1__DOT__pcm_samples);
                if ((0U != (0xffffffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [3U])))) {
                    vlSelfRef.tb_p1__DOT__nonzero_pcm 
                        = ((IData)(1U) + vlSelfRef.tb_p1__DOT__nonzero_pcm);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                 [0U] 
                                                                 >> 0x18U)))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [0U] 
                                                                   >> 0x34U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:102: Assertion failed in %Ntb_p1.unnamedblk5: right parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 102, "", false);
                }
                if (VL_UNLIKELY(((1U & ((IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                 [0U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                   [0U] 
                                                   >> 0x34U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:103: Assertion failed in %Ntb_p1.unnamedblk5: invalid audio sample\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 103, "", false);
                }
                if (VL_UNLIKELY((((0xffffffU & (IData)(
                                                       vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [1U])) 
                                  != (0xffffffU & (IData)(
                                                          (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                           [1U] 
                                                           >> 0x18U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:99: Assertion failed in %Ntb_p1.unnamedblk5: stereo mismatch\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 99, "", false);
                }
                if (VL_UNLIKELY((((0U != (0xffU & (IData)(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                          [1U]))) 
                                  | (0U != (0xffU & (IData)(
                                                            (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [1U] 
                                                             >> 0x18U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:100: Assertion failed in %Ntb_p1.unnamedblk5: PCM alignment\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 100, "", false);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                [1U]))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [1U] 
                                                                   >> 0x30U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:101: Assertion failed in %Ntb_p1.unnamedblk5: left parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 101, "", false);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                 [1U] 
                                                                 >> 0x18U)))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [1U] 
                                                                   >> 0x34U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:102: Assertion failed in %Ntb_p1.unnamedblk5: right parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 102, "", false);
                }
                if (VL_UNLIKELY(((1U & ((IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                 [1U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                   [1U] 
                                                   >> 0x34U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:103: Assertion failed in %Ntb_p1.unnamedblk5: invalid audio sample\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 103, "", false);
                }
                if (VL_UNLIKELY((((0xffffffU & (IData)(
                                                       vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [2U])) 
                                  != (0xffffffU & (IData)(
                                                          (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                           [2U] 
                                                           >> 0x18U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:99: Assertion failed in %Ntb_p1.unnamedblk5: stereo mismatch\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 99, "", false);
                }
                if (VL_UNLIKELY((((0U != (0xffU & (IData)(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                          [2U]))) 
                                  | (0U != (0xffU & (IData)(
                                                            (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [2U] 
                                                             >> 0x18U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:100: Assertion failed in %Ntb_p1.unnamedblk5: PCM alignment\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 100, "", false);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                [2U]))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [2U] 
                                                                   >> 0x30U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:101: Assertion failed in %Ntb_p1.unnamedblk5: left parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 101, "", false);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                 [2U] 
                                                                 >> 0x18U)))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [2U] 
                                                                   >> 0x34U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:102: Assertion failed in %Ntb_p1.unnamedblk5: right parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 102, "", false);
                }
                if (VL_UNLIKELY(((1U & ((IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                 [2U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                   [2U] 
                                                   >> 0x34U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:103: Assertion failed in %Ntb_p1.unnamedblk5: invalid audio sample\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 103, "", false);
                }
                if (VL_UNLIKELY((((0xffffffU & (IData)(
                                                       vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [3U])) 
                                  != (0xffffffU & (IData)(
                                                          (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                           [3U] 
                                                           >> 0x18U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:99: Assertion failed in %Ntb_p1.unnamedblk5: stereo mismatch\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 99, "", false);
                }
                if (VL_UNLIKELY((((0U != (0xffU & (IData)(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                          [3U]))) 
                                  | (0U != (0xffU & (IData)(
                                                            (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [3U] 
                                                             >> 0x18U)))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:100: Assertion failed in %Ntb_p1.unnamedblk5: PCM alignment\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 100, "", false);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                [3U]))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [3U] 
                                                                   >> 0x30U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:101: Assertion failed in %Ntb_p1.unnamedblk5: left parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 101, "", false);
                }
                if (VL_UNLIKELY(((1U & (VL_REDXOR_32(
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                 [3U] 
                                                                 >> 0x18U)))) 
                                        ^ VL_REDXOR_32(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                                   [3U] 
                                                                   >> 0x34U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:102: Assertion failed in %Ntb_p1.unnamedblk5: right parity\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 102, "", false);
                }
                if (VL_UNLIKELY(((1U & ((IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                 [3U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                   [3U] 
                                                   >> 0x34U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:103: Assertion failed in %Ntb_p1.unnamedblk5: invalid audio sample\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 103, "", false);
                }
            }
            if ((0x80U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header)) {
                vlSelfRef.tb_p1__DOT__checksum = ((
                                                   (0xffU 
                                                    & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header) 
                                                   + 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
                                                       >> 8U))) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
                                                      >> 0x10U)));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [0U])));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 8U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x10U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x18U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x20U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x28U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x30U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [1U])));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [1U] 
                                                              >> 8U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [1U] 
                                                              >> 0x10U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [1U] 
                                                              >> 0x18U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [1U] 
                                                              >> 0x20U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [1U] 
                                                              >> 0x28U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [1U] 
                                                              >> 0x30U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [2U])));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [2U] 
                                                              >> 8U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [2U] 
                                                              >> 0x10U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [2U] 
                                                              >> 0x18U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [2U] 
                                                              >> 0x20U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [2U] 
                                                              >> 0x28U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [2U] 
                                                              >> 0x30U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                             [3U])));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [3U] 
                                                              >> 8U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [3U] 
                                                              >> 0x10U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [3U] 
                                                              >> 0x18U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [3U] 
                                                              >> 0x20U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [3U] 
                                                              >> 0x28U))));
                vlSelfRef.tb_p1__DOT__checksum = (vlSelfRef.tb_p1__DOT__checksum 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [3U] 
                                                              >> 0x30U))));
                if (VL_UNLIKELY(((0U != (0xffU & vlSelfRef.tb_p1__DOT__checksum))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:110: Assertion failed in %Ntb_p1: InfoFrame checksum type %0x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 8,(0xffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header));
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 110, "", false);
                }
            }
            if (((1U == (0xffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header)) 
                 & VL_LTS_III(32, 0x186a0U, vlSelfRef.tb_p1__DOT__cycles))) {
                if (VL_UNLIKELY(((0x1800U != ((0xf0000U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                               [0U] 
                                                               >> 0x30U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:113: Assertion failed in %Ntb_p1: ACR N\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 113, "", false);
                }
                if (VL_UNLIKELY(((0x61a8U != ((0xf0000U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                           [0U] 
                                                           >> 8U)) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((IData)(
                                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                               [0U] 
                                                               >> 0x18U))))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:114: Assertion failed in %Ntb_p1: ACR CTS packing\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 114, "", false);
                }
                if (VL_UNLIKELY(((0x61a8U != vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_p1.sv:115: Assertion failed in %Ntb_p1: CTS %0#\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 20,vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp);
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 115, "", false);
                }
            }
        }
    }
}
