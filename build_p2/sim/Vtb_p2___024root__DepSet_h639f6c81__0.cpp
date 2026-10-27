// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"
#include "Vtb_p2__Syms.h"
#include "Vtb_p2___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\tb_p2.sv", 
                                         46);
    vlSelfRef.tb_p2__DOT__reset = 0U;
    while ((5U != (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_hbb6245e2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_p2.bist.state))", 
                                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\tb_p2.sv", 
                                                             47);
    }
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"fault"})))) {
        if (VL_UNLIKELY((((((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
                            & (0U == vlSelfRef.tb_p2__DOT__errors)) 
                           | (4U != vlSelfRef.tb_p2__DOT__errors)) 
                          | (0x17U != vlSelfRef.tb_p2__DOT__bad))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:49: Assertion failed in %Ntb_p2: fault detection errors=%0# addr=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_p2__DOT__errors,
                         21,vlSelfRef.tb_p2__DOT__bad);
            VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 49, "", false);
        }
        VL_WRITEF_NX("PASS injected fault: errors=%0# first_addr=%0#\n",0,
                     32,vlSelfRef.tb_p2__DOT__errors,
                     21,vlSelfRef.tb_p2__DOT__bad);
        VL_FINISH_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 50, "");
    }
    if (VL_UNLIKELY(((! VL_TESTPLUSARGS_I(std::string{"fault"}))))) {
        if (VL_UNLIKELY(((1U & ((~ ((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
                                    & (0U == vlSelfRef.tb_p2__DOT__errors))) 
                                | (0x800000U != vlSelfRef.tb_p2__DOT__checked)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:53: Assertion failed in %Ntb_p2: BIST errors=%0# count=%0# first=%0# expected=%x actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_p2__DOT__errors,
                         32,vlSelfRef.tb_p2__DOT__checked,
                         21,vlSelfRef.tb_p2__DOT__bad,
                         32,vlSelfRef.tb_p2__DOT__expected,
                         32,vlSelfRef.tb_p2__DOT__actual);
            VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 53, "", false);
        }
        VL_WRITEF_NX("PASS BIST four patterns, checked=%0# refresh=%0#\n",0,
                     32,vlSelfRef.tb_p2__DOT__checked,
                     32,vlSelfRef.tb_p2__DOT__refreshes);
        while ((8U != vlSelfRef.tb_p2__DOT__display_frames)) {
            co_await vlSelfRef.__VtrigSched_hb1e89f5e__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (32'sh8 == tb_p2.display_frames))", 
                                                                 "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\tb_p2.sv", 
                                                                 55);
        }
        if (VL_UNLIKELY((((2U > vlSelfRef.tb_p2__DOT__swaps) 
                          | (IData)(vlSelfRef.tb_p2__DOT__fault))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:56: Assertion failed in %Ntb_p2: swap/fault\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 56, "", false);
        }
        VL_WRITEF_NX("PASS display frames=%0d pixels=%0d swaps=%0# refresh=%0# no underrun/tearing\n",0,
                     32,vlSelfRef.tb_p2__DOT__display_frames,
                     32,vlSelfRef.tb_p2__DOT__checked_pixels,
                     32,vlSelfRef.tb_p2__DOT__swaps,
                     32,vlSelfRef.tb_p2__DOT__refreshes);
        VL_FINISH_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 57, "");
    }
}

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1d1a94a2000ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\tb_p2.sv", 
                                         60);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:60: Assertion failed in %Ntb_p2: timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 60, "", false);
}

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__4____Vfork_1__1(Vtb_p2___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__4(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h9b19f549__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk)", 
                                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\sdram_model.sv", 
                                                             15);
        vlSelfRef.tb_p2__DOT__mem__DOT__cycle = ((IData)(1U) 
                                                 + vlSelfRef.tb_p2__DOT__mem__DOT__cycle);
        if (vlSelfRef.tb_p2__DOT__reset) {
            vlSelfRef.tb_p2__DOT__mem__DOT__delay_read = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__rd_left = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__wr_left = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__mode_set = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__ref_count = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__last_refresh 
                = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
            vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[0U] = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[1U] = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[2U] = 0U;
            vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[3U] = 0U;
        } else {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p2__DOT__mem__DOT__mode_set) 
                              & VL_LTS_III(32, 0x30cU, 
                                           (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                            - vlSelfRef.tb_p2__DOT__mem__DOT__last_refresh)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:19: Assertion failed in %Ntb_p2.mem: refresh overdue\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 19, "", false);
            }
            if ((0U != vlSelfRef.tb_p2__DOT__mem__DOT__wr_left)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_p2__DOT__oe)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:21: Assertion failed in %Ntb_p2.mem: missing write data\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 21, "", false);
                }
                vlSelfRef.tb_p2__DOT__mem__DOT__wr_left 
                    = (vlSelfRef.tb_p2__DOT__mem__DOT__wr_left 
                       - (IData)(1U));
                vlSelfRef.tb_p2__DOT__mem__DOT__mem[(0x1fffffU 
                                                     & vlSelfRef.tb_p2__DOT__mem__DOT__wr_address)] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[0U];
                if ((0U == vlSelfRef.tb_p2__DOT__mem__DOT__wr_left)) {
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[(3U 
                                                               & vlSelfRef.tb_p2__DOT__mem__DOT__bank_active)] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[(3U 
                                                               & vlSelfRef.tb_p2__DOT__mem__DOT__bank_active)] 
                        = ((IData)(1U) + vlSelfRef.tb_p2__DOT__mem__DOT__cycle);
                }
                vlSelfRef.tb_p2__DOT__mem__DOT__wr_address 
                    = ((IData)(1U) + vlSelfRef.tb_p2__DOT__mem__DOT__wr_address);
            }
            if ((0U != vlSelfRef.tb_p2__DOT__mem__DOT__delay_read)) {
                vlSelfRef.tb_p2__DOT__mem__DOT__delay_read 
                    = (vlSelfRef.tb_p2__DOT__mem__DOT__delay_read 
                       - (IData)(1U));
                if ((0U == vlSelfRef.tb_p2__DOT__mem__DOT__delay_read)) {
                    vlSelfRef.tb_p2__DOT__mem__DOT__rd_left = 8U;
                }
            }
            if ((0U != vlSelfRef.tb_p2__DOT__mem__DOT__rd_left)) {
                if (VL_UNLIKELY((vlSelfRef.tb_p2__DOT__oe))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:27: Assertion failed in %Ntb_p2.mem: DQ contention\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 27, "", false);
                }
                vlSelfRef.__Vintraval_h0133eed1__0 
                    = (vlSelfRef.tb_p2__DOT__mem__DOT__mem
                       [(0x1fffffU & vlSelfRef.tb_p2__DOT__mem__DOT__rd_address)] 
                       ^ (((IData)(vlSelfRef.tb_p2__DOT__mem__DOT__inject) 
                           & (0x17U == vlSelfRef.tb_p2__DOT__mem__DOT__rd_address))
                           ? 1U : 0U));
                Vtb_p2___024root___eval_initial__TOP__Vtiming__4____Vfork_1__1(vlSelf);
                vlSelfRef.tb_p2__DOT__mem__DOT__rd_address 
                    = ((IData)(1U) + vlSelfRef.tb_p2__DOT__mem__DOT__rd_address);
                vlSelfRef.tb_p2__DOT__mem__DOT__rd_left 
                    = (vlSelfRef.tb_p2__DOT__mem__DOT__rd_left 
                       - (IData)(1U));
                if ((0U == vlSelfRef.tb_p2__DOT__mem__DOT__rd_left)) {
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[(3U 
                                                               & vlSelfRef.tb_p2__DOT__mem__DOT__bank_active)] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[(3U 
                                                               & vlSelfRef.tb_p2__DOT__mem__DOT__bank_active)] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                }
            }
            if (vlSelfRef.tb_p2__DOT__ras) {
                if ((1U & (~ (IData)(vlSelfRef.tb_p2__DOT__cas)))) {
                    if (VL_UNLIKELY(((1U & ((0x400U 
                                             != (0x407U 
                                                 & (IData)(vlSelfRef.tb_p2__DOT__sa))) 
                                            | ((~ vlSelfRef.tb_p2__DOT__mem__DOT__open_bank
                                                [vlSelfRef.tb_p2__DOT__bank]) 
                                               | VL_GTS_III(32, 2U, 
                                                            (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                             - 
                                                             vlSelfRef.tb_p2__DOT__mem__DOT__last_active
                                                             [vlSelfRef.tb_p2__DOT__bank])))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:51: Assertion failed in %Ntb_p2.mem: READ/WRITE timing/address\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 51, "", false);
                    }
                    vlSelfRef.tb_p2__DOT__mem__DOT__bank_active 
                        = vlSelfRef.tb_p2__DOT__bank;
                    if (vlSelfRef.tb_p2__DOT__we) {
                        vlSelfRef.tb_p2__DOT__mem__DOT__rd_address 
                            = (((IData)(vlSelfRef.tb_p2__DOT__bank) 
                                << 0x13U) | ((vlSelfRef.tb_p2__DOT__mem__DOT__rows
                                              [vlSelfRef.tb_p2__DOT__bank] 
                                              << 8U) 
                                             | (0xffU 
                                                & (IData)(vlSelfRef.tb_p2__DOT__sa))));
                        vlSelfRef.tb_p2__DOT__mem__DOT__delay_read = 3U;
                    } else {
                        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_p2__DOT__oe)))))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:55: Assertion failed in %Ntb_p2.mem: first write beat\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 55, "", false);
                        }
                        vlSelfRef.tb_p2__DOT__mem__DOT__wr_address 
                            = (((IData)(vlSelfRef.tb_p2__DOT__bank) 
                                << 0x13U) | ((vlSelfRef.tb_p2__DOT__mem__DOT__rows
                                              [vlSelfRef.tb_p2__DOT__bank] 
                                              << 8U) 
                                             | (0xffU 
                                                & (IData)(vlSelfRef.tb_p2__DOT__sa))));
                        vlSelfRef.tb_p2__DOT__mem__DOT__mem[(0x1fffffU 
                                                             & vlSelfRef.tb_p2__DOT__mem__DOT__wr_address)] 
                            = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[0U];
                        vlSelfRef.tb_p2__DOT__mem__DOT__wr_address 
                            = ((IData)(1U) + vlSelfRef.tb_p2__DOT__mem__DOT__wr_address);
                        vlSelfRef.tb_p2__DOT__mem__DOT__wr_left = 7U;
                    }
                }
            } else if (vlSelfRef.tb_p2__DOT__cas) {
                if (vlSelfRef.tb_p2__DOT__we) {
                    if (VL_UNLIKELY(((1U & (((((~ (IData)(vlSelfRef.tb_p2__DOT__mem__DOT__mode_set)) 
                                               | vlSelfRef.tb_p2__DOT__mem__DOT__open_bank
                                               [vlSelfRef.tb_p2__DOT__bank]) 
                                              | VL_GTS_III(32, 2U, 
                                                           (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                            - 
                                                            vlSelfRef.tb_p2__DOT__mem__DOT__closed_at
                                                            [vlSelfRef.tb_p2__DOT__bank]))) 
                                             | VL_GTS_III(32, 4U, 
                                                          (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                           - vlSelfRef.tb_p2__DOT__mem__DOT__last_refresh))) 
                                            | VL_GTS_III(32, 2U, 
                                                         (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                          - vlSelfRef.tb_p2__DOT__mem__DOT__last_mrs))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:47: Assertion failed in %Ntb_p2.mem: ACT timing\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 47, "", false);
                    }
                    vlSelfRef.tb_p2__DOT__mem__DOT__rows[vlSelfRef.tb_p2__DOT__bank] 
                        = vlSelfRef.tb_p2__DOT__sa;
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[vlSelfRef.tb_p2__DOT__bank] = 1U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__last_active[vlSelfRef.tb_p2__DOT__bank] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                } else if ((0x400U & (IData)(vlSelfRef.tb_p2__DOT__sa))) {
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[0U] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[0U] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[1U] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[1U] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[2U] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[2U] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[3U] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[3U] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                } else {
                    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[vlSelfRef.tb_p2__DOT__bank] = 0U;
                    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[vlSelfRef.tb_p2__DOT__bank] 
                        = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                }
            } else if (vlSelfRef.tb_p2__DOT__we) {
                if (VL_UNLIKELY(((vlSelfRef.tb_p2__DOT__mem__DOT__open_bank
                                  [0U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_p2__DOT__mem__DOT__closed_at
                                                     [0U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_p2.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_p2__DOT__mem__DOT__open_bank
                                  [1U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_p2__DOT__mem__DOT__closed_at
                                                     [1U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_p2.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_p2__DOT__mem__DOT__open_bank
                                  [2U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_p2__DOT__mem__DOT__closed_at
                                                     [2U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_p2.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_p2__DOT__mem__DOT__open_bank
                                  [3U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_p2__DOT__mem__DOT__closed_at
                                                     [3U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_p2.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 4U, 
                                            (vlSelfRef.tb_p2__DOT__mem__DOT__cycle 
                                             - vlSelfRef.tb_p2__DOT__mem__DOT__last_refresh))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:39: Assertion failed in %Ntb_p2.mem: tRFC\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 39, "", false);
                }
                vlSelfRef.tb_p2__DOT__mem__DOT__last_refresh 
                    = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
                vlSelfRef.tb_p2__DOT__mem__DOT__ref_count 
                    = ((IData)(1U) + vlSelfRef.tb_p2__DOT__mem__DOT__ref_count);
            } else {
                if (VL_UNLIKELY((((VL_GTS_III(32, 8U, vlSelfRef.tb_p2__DOT__mem__DOT__ref_count) 
                                   | (0x33U != (IData)(vlSelfRef.tb_p2__DOT__sa))) 
                                  | (0U != (IData)(vlSelfRef.tb_p2__DOT__bank)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:43: Assertion failed in %Ntb_p2.mem: initialization/mode\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\sdram_model.sv", 43, "", false);
                }
                vlSelfRef.tb_p2__DOT__mem__DOT__mode_set = 1U;
                vlSelfRef.tb_p2__DOT__mem__DOT__last_mrs 
                    = vlSelfRef.tb_p2__DOT__mem__DOT__cycle;
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p2___024root___eval_triggers__act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_triggers__act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h2b560172__0;
    __Vtrigprevexpr_h2b560172__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h35df5846__0;
    __Vtrigprevexpr_h35df5846__0 = 0;
    // Body
    __Vtrigprevexpr_h2b560172__0 = (5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state));
    __Vtrigprevexpr_h35df5846__0 = (8U == vlSelfRef.tb_p2__DOT__display_frames);
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_p2__DOT__pclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__pclk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_p2__DOT__freset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__freset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_p2__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_p2__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(__Vtrigprevexpr_h2b560172__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h2b560172__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(__Vtrigprevexpr_h35df5846__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h35df5846__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__pclk__0 
        = vlSelfRef.tb_p2__DOT__pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__freset__0 
        = vlSelfRef.tb_p2__DOT__freset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk__0 
        = vlSelfRef.tb_p2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h2b560172__1 = __Vtrigprevexpr_h2b560172__0;
    vlSelfRef.__Vtrigprevexpr_h35df5846__1 = __Vtrigprevexpr_h35df5846__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__1(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__1\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__Vfuncout;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x = 0;
    SData/*8:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__f;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__f = 0;
    SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color = 0;
    SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__Vfuncout;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x = 0;
    SData/*8:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__f;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__f = 0;
    SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color;
    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color = 0;
    SData/*9:0*/ __Vdly__tb_p2__DOT__x;
    __Vdly__tb_p2__DOT__x = 0;
    // Body
    vlSelfRef.__Vdly__tb_p2__DOT__ft = vlSelfRef.tb_p2__DOT__ft;
    vlSelfRef.__Vdly__tb_p2__DOT__y = vlSelfRef.tb_p2__DOT__y;
    __Vdly__tb_p2__DOT__x = vlSelfRef.tb_p2__DOT__x;
    if ((((~ (IData)(vlSelfRef.tb_p2__DOT__reset)) 
          & ((IData)(vlSelfRef.tb_p2__DOT__dv) >> 1U)) 
         & (~ ((IData)(vlSelfRef.tb_p2__DOT__fr) >> 2U)))) {
        if (vlSelfRef.tb_p2__DOT__active) {
            if (VL_UNLIKELY((vlSelfRef.tb_p2__DOT__empty))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:39: Assertion failed in %Ntb_p2: FIFO underrun x=%0# y=%0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),10,
                             (IData)(vlSelfRef.tb_p2__DOT__x),
                             10,vlSelfRef.tb_p2__DOT__y);
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 39, "", false);
            }
            vlSelfRef.tb_p2__DOT__checked_pixels = 
                ((IData)(1U) + vlSelfRef.tb_p2__DOT__checked_pixels);
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p2__DOT__current_pixel) 
                              != ([&]() {
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__f 
                                        = vlSelfRef.tb_p2__DOT__frame_id;
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y 
                                        = (0x1ffU & (IData)(vlSelfRef.tb_p2__DOT__y));
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x 
                                        = vlSelfRef.tb_p2__DOT__x;
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color 
                                        = ((0x50U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                            ? 0xffffU
                                            : ((0xa0U 
                                                > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                                ? 0xffe0U
                                                : (
                                                   (0xf0U 
                                                    > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                                    ? 0x7ffU
                                                    : 
                                                   ((0x140U 
                                                     > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                                     ? 0x7e0U
                                                     : 
                                                    ((0x190U 
                                                      > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                                      ? 0xf81fU
                                                      : 
                                                     ((0x1e0U 
                                                       > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                                       ? 0xf800U
                                                       : 
                                                      ((0x230U 
                                                        > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))
                                                        ? 0x1fU
                                                        : 0U)))))));
                                    if ((1U & __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__f)) {
                                        __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color 
                                            = (0xffffU 
                                               & (~ (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color)));
                                    }
                                    if ((0x190U <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y))) {
                                        __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x) 
                                                   << 6U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y) 
                                                      << 2U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x) 
                                                        >> 4U))));
                                    }
                                    if (((((4U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x)) 
                                           | (0x27cU 
                                              <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x))) 
                                          | (4U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y))) 
                                         | (0x1dcU 
                                            <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y)))) {
                                        __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color = 0xffffU;
                                    }
                                    if ((((0xc8U <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y)) 
                                          & (0xf0U 
                                             > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__y))) 
                                         & ((0x1fU 
                                             & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__x) 
                                                >> 5U)) 
                                            == (0x1fU 
                                                & __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__f)))) {
                                        __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color = 0xffffU;
                                    }
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__Vfuncout 
                                        = __Vfunc_tb_p2__DOT__fb__DOT__pixel__0__color;
                                }(), (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__0__Vfuncout)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:40: Assertion failed in %Ntb_p2: pixel mismatch x=%0# y=%0# got=%x expected=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),10,
                             (IData)(vlSelfRef.tb_p2__DOT__x),
                             10,vlSelfRef.tb_p2__DOT__y,
                             16,(IData)(vlSelfRef.tb_p2__DOT__current_pixel),
                             16,([&]() {
                                __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__f 
                                    = vlSelfRef.tb_p2__DOT__frame_id;
                                __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y 
                                    = (0x1ffU & (IData)(vlSelfRef.tb_p2__DOT__y));
                                __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x 
                                    = vlSelfRef.tb_p2__DOT__x;
                                __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color 
                                    = ((0x50U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                        ? 0xffffU : 
                                       ((0xa0U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                         ? 0xffe0U : 
                                        ((0xf0U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                          ? 0x7ffU : 
                                         ((0x140U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                           ? 0x7e0U
                                           : ((0x190U 
                                               > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                               ? 0xf81fU
                                               : ((0x1e0U 
                                                   > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                                   ? 0xf800U
                                                   : 
                                                  ((0x230U 
                                                    > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))
                                                    ? 0x1fU
                                                    : 0U)))))));
                                if ((1U & __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__f)) {
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color 
                                        = (0xffffU 
                                           & (~ (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color)));
                                }
                                if ((0x190U <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y))) {
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x) 
                                               << 6U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y) 
                                                  << 2U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x) 
                                                    >> 4U))));
                                }
                                if (((((4U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x)) 
                                       | (0x27cU <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x))) 
                                      | (4U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y))) 
                                     | (0x1dcU <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y)))) {
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color = 0xffffU;
                                }
                                if ((((0xc8U <= (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y)) 
                                      & (0xf0U > (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__y))) 
                                     & ((0x1fU & ((IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__x) 
                                                  >> 5U)) 
                                        == (0x1fU & __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__f)))) {
                                    __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color = 0xffffU;
                                }
                                __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__Vfuncout 
                                    = __Vfunc_tb_p2__DOT__fb__DOT__pixel__1__color;
                            }(), (IData)(__Vfunc_tb_p2__DOT__fb__DOT__pixel__1__Vfuncout)));
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 40, "", false);
            }
        }
        if (((0x31fU == (IData)(vlSelfRef.tb_p2__DOT__x)) 
             & (0x1dfU == (IData)(vlSelfRef.tb_p2__DOT__y)))) {
            vlSelfRef.tb_p2__DOT__display_frames = 
                ((IData)(1U) + vlSelfRef.tb_p2__DOT__display_frames);
        }
    }
    if (vlSelfRef.tb_p2__DOT__reset) {
        vlSelfRef.tb_p2__DOT__dv = 0U;
        __Vdly__tb_p2__DOT__x = 0U;
        vlSelfRef.__Vdly__tb_p2__DOT__y = 0U;
        vlSelfRef.__Vdly__tb_p2__DOT__ft = 0U;
    } else {
        vlSelfRef.tb_p2__DOT__dv = ((2U & ((IData)(vlSelfRef.tb_p2__DOT__dv) 
                                           << 1U)) 
                                    | (IData)(vlSelfRef.tb_p2__DOT__valid));
        if ((0x31fU == (IData)(vlSelfRef.tb_p2__DOT__x))) {
            vlSelfRef.__Vdly__tb_p2__DOT__y = ((0x20cU 
                                                == (IData)(vlSelfRef.tb_p2__DOT__y))
                                                ? 0U
                                                : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_p2__DOT__y))));
            __Vdly__tb_p2__DOT__x = 0U;
        } else {
            __Vdly__tb_p2__DOT__x = (0x3ffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb_p2__DOT__x)));
        }
        if (((0U == (IData)(vlSelfRef.tb_p2__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_p2__DOT__y)))) {
            vlSelfRef.__Vdly__tb_p2__DOT__ft = (1U 
                                                & (~ (IData)(vlSelfRef.tb_p2__DOT__ft)));
        }
    }
    vlSelfRef.tb_p2__DOT__fo = vlSelfRef.tb_p2__DOT__fifo__DOT__mem
        [(0x7ffU & (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rn))];
    if ((4U & (IData)(vlSelfRef.tb_p2__DOT__fr))) {
        vlSelfRef.tb_p2__DOT__fifo__DOT__rp = 0U;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_p2__DOT__fifo__DOT__rp = vlSelfRef.tb_p2__DOT__fifo__DOT__rn;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wg2 = vlSelfRef.tb_p2__DOT__fifo__DOT__wg1;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wg1 = vlSelfRef.tb_p2__DOT__fifo__DOT__wgray;
    }
    vlSelfRef.tb_p2__DOT__x = __Vdly__tb_p2__DOT__x;
    vlSelfRef.tb_p2__DOT__current_pixel = (0xffffU 
                                           & ((1U & (IData)(vlSelfRef.tb_p2__DOT__x))
                                               ? (vlSelfRef.tb_p2__DOT__fo 
                                                  >> 0x10U)
                                               : vlSelfRef.tb_p2__DOT__fo));
}

extern const VlWide<8>/*255:0*/ Vtb_p2__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__2(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__2\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ tb_p2__DOT__used;
    tb_p2__DOT__used = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a = 0;
    CData/*1:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a = 0;
    CData/*1:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed = 0;
    CData/*4:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__state;
    __Vdly__tb_p2__DOT__ctrl__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__wait_count;
    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 0;
    SData/*15:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age;
    __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age = 0;
    CData/*3:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__init_refresh;
    __Vdly__tb_p2__DOT__ctrl__DOT__init_refresh = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__init_done;
    __Vdly__tb_p2__DOT__init_done = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__refreshes;
    __Vdly__tb_p2__DOT__refreshes = 0;
    CData/*2:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__beat;
    __Vdly__tb_p2__DOT__ctrl__DOT__beat = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write;
    __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_p2__DOT__ctrl__DOT__write_data;
    VL_ZERO_W(256, __Vdly__tb_p2__DOT__ctrl__DOT__write_data);
    CData/*2:0*/ __Vdly__tb_p2__DOT__bist__DOT__state;
    __Vdly__tb_p2__DOT__bist__DOT__state = 0;
    CData/*2:0*/ __Vdly__tb_p2__DOT__bist__DOT__beat;
    __Vdly__tb_p2__DOT__bist__DOT__beat = 0;
    CData/*1:0*/ __Vdly__tb_p2__DOT__bist__DOT__pattern;
    __Vdly__tb_p2__DOT__bist__DOT__pattern = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__bist__DOT__reading;
    __Vdly__tb_p2__DOT__bist__DOT__reading = 0;
    IData/*20:0*/ __Vdly__tb_p2__DOT__bist__DOT__address;
    __Vdly__tb_p2__DOT__bist__DOT__address = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__bist__DOT__hold_count;
    __Vdly__tb_p2__DOT__bist__DOT__hold_count = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__errors;
    __Vdly__tb_p2__DOT__errors = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__checked;
    __Vdly__tb_p2__DOT__checked = 0;
    CData/*1:0*/ __Vdly__tb_p2__DOT__fb__DOT__state;
    __Vdly__tb_p2__DOT__fb__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__fb__DOT__last_frame;
    __Vdly__tb_p2__DOT__fb__DOT__last_frame = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__fb__DOT__frame_pending;
    __Vdly__tb_p2__DOT__fb__DOT__frame_pending = 0;
    CData/*5:0*/ __Vdly__tb_p2__DOT__fb__DOT__flush;
    __Vdly__tb_p2__DOT__fb__DOT__flush = 0;
    IData/*17:0*/ __Vdly__tb_p2__DOT__fb__DOT__rd_addr;
    __Vdly__tb_p2__DOT__fb__DOT__rd_addr = 0;
    IData/*17:0*/ __Vdly__tb_p2__DOT__fb__DOT__wr_addr;
    __Vdly__tb_p2__DOT__fb__DOT__wr_addr = 0;
    SData/*8:0*/ __Vdly__tb_p2__DOT__fb__DOT__wr_x;
    __Vdly__tb_p2__DOT__fb__DOT__wr_x = 0;
    SData/*8:0*/ __Vdly__tb_p2__DOT__fb__DOT__wr_y;
    __Vdly__tb_p2__DOT__fb__DOT__wr_y = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__fb__DOT__back_ready;
    __Vdly__tb_p2__DOT__fb__DOT__back_ready = 0;
    CData/*7:0*/ __Vdly__tb_p2__DOT__fb__DOT__swap_timer;
    __Vdly__tb_p2__DOT__fb__DOT__swap_timer = 0;
    CData/*2:0*/ __Vdly__tb_p2__DOT__fb__DOT__beat;
    __Vdly__tb_p2__DOT__fb__DOT__beat = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__valid;
    __Vdly__tb_p2__DOT__valid = 0;
    CData/*0:0*/ __Vdly__tb_p2__DOT__front;
    __Vdly__tb_p2__DOT__front = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__swaps;
    __Vdly__tb_p2__DOT__swaps = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__written;
    __Vdly__tb_p2__DOT__written = 0;
    IData/*31:0*/ __Vdly__tb_p2__DOT__reads;
    __Vdly__tb_p2__DOT__reads = 0;
    IData/*31:0*/ __VdlyVal__tb_p2__DOT__fifo__DOT__mem__v0;
    __VdlyVal__tb_p2__DOT__fifo__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_p2__DOT__fifo__DOT__mem__v0;
    __VdlyDim0__tb_p2__DOT__fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_p2__DOT__fifo__DOT__mem__v0;
    __VdlySet__tb_p2__DOT__fifo__DOT__mem__v0 = 0;
    // Body
    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count;
    __Vdly__tb_p2__DOT__ctrl__DOT__init_refresh = vlSelfRef.tb_p2__DOT__ctrl__DOT__init_refresh;
    __Vdly__tb_p2__DOT__init_done = vlSelfRef.tb_p2__DOT__init_done;
    __Vdly__tb_p2__DOT__refreshes = vlSelfRef.tb_p2__DOT__refreshes;
    __Vdly__tb_p2__DOT__ctrl__DOT__beat = vlSelfRef.tb_p2__DOT__ctrl__DOT__beat;
    __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write 
        = vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_write;
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[0U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[1U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[2U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[3U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[4U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[5U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[6U];
    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U] = 
        vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[7U];
    __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age = vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age;
    __Vdly__tb_p2__DOT__ctrl__DOT__state = vlSelfRef.tb_p2__DOT__ctrl__DOT__state;
    __Vdly__tb_p2__DOT__bist__DOT__reading = vlSelfRef.tb_p2__DOT__bist__DOT__reading;
    __Vdly__tb_p2__DOT__bist__DOT__hold_count = vlSelfRef.tb_p2__DOT__bist__DOT__hold_count;
    __Vdly__tb_p2__DOT__checked = vlSelfRef.tb_p2__DOT__checked;
    __Vdly__tb_p2__DOT__errors = vlSelfRef.tb_p2__DOT__errors;
    __Vdly__tb_p2__DOT__bist__DOT__beat = vlSelfRef.tb_p2__DOT__bist__DOT__beat;
    __Vdly__tb_p2__DOT__bist__DOT__pattern = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vdly__tb_p2__DOT__bist__DOT__state = vlSelfRef.tb_p2__DOT__bist__DOT__state;
    __Vdly__tb_p2__DOT__bist__DOT__address = vlSelfRef.tb_p2__DOT__bist__DOT__address;
    __Vdly__tb_p2__DOT__fb__DOT__last_frame = vlSelfRef.tb_p2__DOT__fb__DOT__last_frame;
    __Vdly__tb_p2__DOT__fb__DOT__swap_timer = vlSelfRef.tb_p2__DOT__fb__DOT__swap_timer;
    __Vdly__tb_p2__DOT__fb__DOT__beat = vlSelfRef.tb_p2__DOT__fb__DOT__beat;
    __Vdly__tb_p2__DOT__swaps = vlSelfRef.tb_p2__DOT__swaps;
    __Vdly__tb_p2__DOT__reads = vlSelfRef.tb_p2__DOT__reads;
    __Vdly__tb_p2__DOT__fb__DOT__wr_addr = vlSelfRef.tb_p2__DOT__fb__DOT__wr_addr;
    __Vdly__tb_p2__DOT__front = vlSelfRef.tb_p2__DOT__front;
    __Vdly__tb_p2__DOT__fb__DOT__frame_pending = vlSelfRef.tb_p2__DOT__fb__DOT__frame_pending;
    __Vdly__tb_p2__DOT__fb__DOT__back_ready = vlSelfRef.tb_p2__DOT__fb__DOT__back_ready;
    __Vdly__tb_p2__DOT__fb__DOT__state = vlSelfRef.tb_p2__DOT__fb__DOT__state;
    __Vdly__tb_p2__DOT__fb__DOT__flush = vlSelfRef.tb_p2__DOT__fb__DOT__flush;
    __Vdly__tb_p2__DOT__valid = vlSelfRef.tb_p2__DOT__valid;
    __Vdly__tb_p2__DOT__fb__DOT__rd_addr = vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr;
    __Vdly__tb_p2__DOT__fb__DOT__wr_x = vlSelfRef.tb_p2__DOT__fb__DOT__wr_x;
    __Vdly__tb_p2__DOT__fb__DOT__wr_y = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
    __Vdly__tb_p2__DOT__written = vlSelfRef.tb_p2__DOT__written;
    __VdlySet__tb_p2__DOT__fifo__DOT__mem__v0 = 0U;
    if (((~ (IData)(vlSelfRef.tb_p2__DOT__reset)) & 
         (5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)))) {
        if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_p2__DOT__fv) 
                            & (IData)(vlSelfRef.tb_p2__DOT__req_ready)) 
                           & (~ (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req))) 
                          & ((1U & (vlSelfRef.tb_p2__DOT__fa_req 
                                    >> 0x12U)) == (IData)(vlSelfRef.tb_p2__DOT__front)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:30: Assertion failed in %Ntb_p2: writing front buffer\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 30, "", false);
        }
        if (((IData)(vlSelfRef.tb_p2__DOT__front) != (IData)(vlSelfRef.tb_p2__DOT__last_front))) {
            if (VL_UNLIKELY(((0x1e0U > (IData)(vlSelfRef.tb_p2__DOT__y))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_p2.sv:32: Assertion failed in %Ntb_p2: mid-frame swap\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 32, "", false);
            }
            vlSelfRef.tb_p2__DOT__last_front = vlSelfRef.tb_p2__DOT__front;
            vlSelfRef.tb_p2__DOT__frame_id = (vlSelfRef.tb_p2__DOT__written 
                                              - (IData)(1U));
        }
    }
    if (((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__push) 
         & (~ (IData)(vlSelfRef.tb_p2__DOT__freset)))) {
        __VdlyVal__tb_p2__DOT__fifo__DOT__mem__v0 = 
            (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat), 5U)))
               ? 0U : (vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[
                       (((IData)(0x1fU) + (0xffU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat), 5U))) 
                        >> 5U)] << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat), 5U))))) 
             | (vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[
                (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat), 5U) 
                       >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat), 5U))));
        __VdlyDim0__tb_p2__DOT__fifo__DOT__mem__v0 
            = (0x7ffU & (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wp));
        __VdlySet__tb_p2__DOT__fifo__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_p2__DOT__freset) {
        vlSelfRef.tb_p2__DOT__fifo__DOT__rg2 = 0U;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wgray = 0U;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wp = 0U;
        vlSelfRef.tb_p2__DOT__fifo__DOT__rg1 = 0U;
    } else {
        vlSelfRef.tb_p2__DOT__fifo__DOT__rg2 = vlSelfRef.tb_p2__DOT__fifo__DOT__rg1;
        vlSelfRef.tb_p2__DOT__fifo__DOT__wgray = (0xfffU 
                                                  & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wn), 1U) 
                                                     ^ (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wn)));
        vlSelfRef.tb_p2__DOT__fifo__DOT__wp = vlSelfRef.tb_p2__DOT__fifo__DOT__wn;
        vlSelfRef.tb_p2__DOT__fifo__DOT__rg1 = vlSelfRef.tb_p2__DOT__fifo__DOT__rgray;
    }
    if (__VdlySet__tb_p2__DOT__fifo__DOT__mem__v0) {
        vlSelfRef.tb_p2__DOT__fifo__DOT__mem[__VdlyDim0__tb_p2__DOT__fifo__DOT__mem__v0] 
            = __VdlyVal__tb_p2__DOT__fifo__DOT__mem__v0;
    }
    if (vlSelfRef.tb_p2__DOT__reset) {
        __Vdly__tb_p2__DOT__bist__DOT__state = 0U;
        __Vdly__tb_p2__DOT__bist__DOT__beat = 0U;
        __Vdly__tb_p2__DOT__bist__DOT__pattern = 0U;
        __Vdly__tb_p2__DOT__bist__DOT__reading = 0U;
        __Vdly__tb_p2__DOT__bist__DOT__address = 0U;
        __Vdly__tb_p2__DOT__bist__DOT__hold_count = 0U;
        __Vdly__tb_p2__DOT__errors = 0U;
        __Vdly__tb_p2__DOT__checked = 0U;
        vlSelfRef.tb_p2__DOT__bad = 0U;
        vlSelfRef.tb_p2__DOT__expected = 0U;
        vlSelfRef.tb_p2__DOT__actual = 0U;
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[0U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[1U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[2U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[3U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[4U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[5U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[6U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_p2__DOT__bist__DOT__read_data[7U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[7U];
    } else if ((0U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
        if (vlSelfRef.tb_p2__DOT__init_done) {
            __Vdly__tb_p2__DOT__bist__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
        if (vlSelfRef.tb_p2__DOT____Vcellinp__bist__req_ready) {
            __Vdly__tb_p2__DOT__bist__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
        if (vlSelfRef.tb_p2__DOT____Vcellinp__bist__rsp_valid) {
            if (vlSelfRef.tb_p2__DOT__bist__DOT__reading) {
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[0U] 
                    = vlSelfRef.tb_p2__DOT__rd[0U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[1U] 
                    = vlSelfRef.tb_p2__DOT__rd[1U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[2U] 
                    = vlSelfRef.tb_p2__DOT__rd[2U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[3U] 
                    = vlSelfRef.tb_p2__DOT__rd[3U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[4U] 
                    = vlSelfRef.tb_p2__DOT__rd[4U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[5U] 
                    = vlSelfRef.tb_p2__DOT__rd[5U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[6U] 
                    = vlSelfRef.tb_p2__DOT__rd[6U];
                vlSelfRef.tb_p2__DOT__bist__DOT__read_data[7U] 
                    = vlSelfRef.tb_p2__DOT__rd[7U];
                __Vdly__tb_p2__DOT__bist__DOT__beat = 0U;
                __Vdly__tb_p2__DOT__bist__DOT__state = 3U;
            } else if ((0x1ffff8U == vlSelfRef.tb_p2__DOT__bist__DOT__address)) {
                __Vdly__tb_p2__DOT__bist__DOT__address = 0U;
                __Vdly__tb_p2__DOT__bist__DOT__hold_count = 0x1387U;
                __Vdly__tb_p2__DOT__bist__DOT__state = 4U;
            } else {
                __Vdly__tb_p2__DOT__bist__DOT__address 
                    = (0x1fffffU & ((IData)(8U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
                __Vdly__tb_p2__DOT__bist__DOT__state = 1U;
            }
        }
    } else if ((3U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
        __Vdly__tb_p2__DOT__checked = ((IData)(1U) 
                                       + vlSelfRef.tb_p2__DOT__checked);
        if ((vlSelfRef.tb_p2__DOT__bist__DOT__actual 
             != vlSelfRef.tb_p2__DOT__bist__DOT__expected)) {
            if ((0xffffffffU != vlSelfRef.tb_p2__DOT__errors)) {
                __Vdly__tb_p2__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_p2__DOT__errors);
            }
            if ((0U == vlSelfRef.tb_p2__DOT__errors)) {
                vlSelfRef.tb_p2__DOT__bad = vlSelfRef.tb_p2__DOT__bist__DOT__check_addr;
                vlSelfRef.tb_p2__DOT__expected = vlSelfRef.tb_p2__DOT__bist__DOT__expected;
                vlSelfRef.tb_p2__DOT__actual = vlSelfRef.tb_p2__DOT__bist__DOT__actual;
            }
        }
        if ((7U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat))) {
            if ((0x1ffff8U == vlSelfRef.tb_p2__DOT__bist__DOT__address)) {
                if ((3U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__pattern))) {
                    __Vdly__tb_p2__DOT__bist__DOT__state = 5U;
                } else {
                    __Vdly__tb_p2__DOT__bist__DOT__pattern 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__pattern)));
                    __Vdly__tb_p2__DOT__bist__DOT__address = 0U;
                    __Vdly__tb_p2__DOT__bist__DOT__reading = 0U;
                    __Vdly__tb_p2__DOT__bist__DOT__state = 1U;
                }
            } else {
                __Vdly__tb_p2__DOT__bist__DOT__address 
                    = (0x1fffffU & ((IData)(8U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
                __Vdly__tb_p2__DOT__bist__DOT__state = 1U;
            }
        } else {
            __Vdly__tb_p2__DOT__bist__DOT__beat = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat)));
        }
    } else if ((4U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
        if ((0U == vlSelfRef.tb_p2__DOT__bist__DOT__hold_count)) {
            __Vdly__tb_p2__DOT__bist__DOT__reading = 1U;
            __Vdly__tb_p2__DOT__bist__DOT__state = 1U;
        } else {
            __Vdly__tb_p2__DOT__bist__DOT__hold_count 
                = (vlSelfRef.tb_p2__DOT__bist__DOT__hold_count 
                   - (IData)(1U));
        }
    }
    vlSelfRef.tb_p2__DOT__bist__DOT__hold_count = __Vdly__tb_p2__DOT__bist__DOT__hold_count;
    vlSelfRef.tb_p2__DOT__checked = __Vdly__tb_p2__DOT__checked;
    vlSelfRef.tb_p2__DOT__errors = __Vdly__tb_p2__DOT__errors;
    vlSelfRef.tb_p2__DOT__bist__DOT__beat = __Vdly__tb_p2__DOT__bist__DOT__beat;
    vlSelfRef.tb_p2__DOT__bist__DOT__pattern = __Vdly__tb_p2__DOT__bist__DOT__pattern;
    vlSelfRef.tb_p2__DOT__bist__DOT__actual = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.tb_p2__DOT__bist__DOT__read_data[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U))))) 
                                               | (vlSelfRef.tb_p2__DOT__bist__DOT__read_data[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U))));
    if (vlSelfRef.tb_p2__DOT__reset) {
        __Vdly__tb_p2__DOT__fb__DOT__state = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__last_frame = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__frame_pending = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__flush = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__rd_addr = 0x25800U;
        __Vdly__tb_p2__DOT__fb__DOT__wr_addr = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__wr_x = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__wr_y = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__back_ready = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__swap_timer = 0U;
        __Vdly__tb_p2__DOT__fb__DOT__beat = 0U;
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[0U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[1U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[2U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[3U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[4U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[5U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[6U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[7U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_p2__DOT__valid = 0U;
        __Vdly__tb_p2__DOT__front = 0U;
        __Vdly__tb_p2__DOT__swaps = 0U;
        __Vdly__tb_p2__DOT__written = 0U;
        __Vdly__tb_p2__DOT__reads = 0U;
        vlSelfRef.tb_p2__DOT__fault = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__ft2) 
             != (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__last_frame))) {
            __Vdly__tb_p2__DOT__fb__DOT__last_frame 
                = vlSelfRef.tb_p2__DOT__fb__DOT__ft2;
            __Vdly__tb_p2__DOT__fb__DOT__frame_pending = 1U;
        }
        if ((0U != (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush))) {
            __Vdly__tb_p2__DOT__fb__DOT__flush = (0x3fU 
                                                  & ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush) 
                                                     - (IData)(1U)));
        }
        if (((0U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state)) 
             & (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__frame_pending))) {
            __Vdly__tb_p2__DOT__fb__DOT__frame_pending = 0U;
            if (vlSelfRef.tb_p2__DOT__fb__DOT__enabled) {
                __Vdly__tb_p2__DOT__fb__DOT__flush = 0x1fU;
                __Vdly__tb_p2__DOT__fb__DOT__rd_addr = 0U;
                if ((1U > (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__swap_timer))) {
                    __Vdly__tb_p2__DOT__fb__DOT__swap_timer 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__swap_timer)));
                }
                if (((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__back_ready) 
                     & ((~ (IData)(vlSelfRef.tb_p2__DOT__valid)) 
                        | (1U <= (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__swap_timer))))) {
                    __Vdly__tb_p2__DOT__front = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_p2__DOT__front)));
                    __Vdly__tb_p2__DOT__swaps = ((IData)(1U) 
                                                 + vlSelfRef.tb_p2__DOT__swaps);
                    __Vdly__tb_p2__DOT__fb__DOT__swap_timer = 0U;
                    __Vdly__tb_p2__DOT__valid = 1U;
                    __Vdly__tb_p2__DOT__fb__DOT__back_ready = 0U;
                    __Vdly__tb_p2__DOT__fb__DOT__wr_addr = 0U;
                    __Vdly__tb_p2__DOT__fb__DOT__wr_x = 0U;
                    __Vdly__tb_p2__DOT__fb__DOT__wr_y = 0U;
                }
            }
        } else if ((0U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state))) {
            if (((IData)(vlSelfRef.tb_p2__DOT__fv) 
                 & ((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
                    & (IData)(vlSelfRef.tb_p2__DOT__req_ready)))) {
                __Vdly__tb_p2__DOT__fb__DOT__state 
                    = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req)
                        ? 1U : 3U);
            }
        } else if ((1U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state))) {
            if (vlSelfRef.tb_p2__DOT____Vcellinp__fb__rsp_valid) {
                __Vdly__tb_p2__DOT__fb__DOT__rd_addr 
                    = (0x3ffffU & ((IData)(8U) + vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr));
                __Vdly__tb_p2__DOT__reads = ((IData)(1U) 
                                             + vlSelfRef.tb_p2__DOT__reads);
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[0U] 
                    = vlSelfRef.tb_p2__DOT__rd[0U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[1U] 
                    = vlSelfRef.tb_p2__DOT__rd[1U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[2U] 
                    = vlSelfRef.tb_p2__DOT__rd[2U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[3U] 
                    = vlSelfRef.tb_p2__DOT__rd[3U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[4U] 
                    = vlSelfRef.tb_p2__DOT__rd[4U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[5U] 
                    = vlSelfRef.tb_p2__DOT__rd[5U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[6U] 
                    = vlSelfRef.tb_p2__DOT__rd[6U];
                vlSelfRef.tb_p2__DOT__fb__DOT__read_buffer[7U] 
                    = vlSelfRef.tb_p2__DOT__rd[7U];
                __Vdly__tb_p2__DOT__fb__DOT__beat = 0U;
                __Vdly__tb_p2__DOT__fb__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_p2__DOT__full)))) {
                if ((7U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat))) {
                    __Vdly__tb_p2__DOT__fb__DOT__state = 0U;
                } else {
                    __Vdly__tb_p2__DOT__fb__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__beat)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state))) {
            if (vlSelfRef.tb_p2__DOT____Vcellinp__fb__rsp_valid) {
                __Vdly__tb_p2__DOT__fb__DOT__state = 0U;
                if ((0x257f8U == vlSelfRef.tb_p2__DOT__fb__DOT__wr_addr)) {
                    __Vdly__tb_p2__DOT__written = ((IData)(1U) 
                                                   + vlSelfRef.tb_p2__DOT__written);
                    __Vdly__tb_p2__DOT__fb__DOT__back_ready = 1U;
                } else {
                    __Vdly__tb_p2__DOT__fb__DOT__wr_addr 
                        = (0x3ffffU & ((IData)(8U) 
                                       + vlSelfRef.tb_p2__DOT__fb__DOT__wr_addr));
                    if ((0x138U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x))) {
                        __Vdly__tb_p2__DOT__fb__DOT__wr_y 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_y)));
                        __Vdly__tb_p2__DOT__fb__DOT__wr_x = 0U;
                    } else {
                        __Vdly__tb_p2__DOT__fb__DOT__wr_x 
                            = (0x1ffU & ((IData)(8U) 
                                         + (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x)));
                    }
                }
            }
        } else {
            vlSelfRef.tb_p2__DOT__fault = 1U;
            __Vdly__tb_p2__DOT__fb__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_p2__DOT__fb__DOT__last_frame = __Vdly__tb_p2__DOT__fb__DOT__last_frame;
    vlSelfRef.tb_p2__DOT__fb__DOT__swap_timer = __Vdly__tb_p2__DOT__fb__DOT__swap_timer;
    vlSelfRef.tb_p2__DOT__swaps = __Vdly__tb_p2__DOT__swaps;
    vlSelfRef.tb_p2__DOT__reads = __Vdly__tb_p2__DOT__reads;
    vlSelfRef.tb_p2__DOT__fb__DOT__beat = __Vdly__tb_p2__DOT__fb__DOT__beat;
    vlSelfRef.tb_p2__DOT__fb__DOT__wr_addr = __Vdly__tb_p2__DOT__fb__DOT__wr_addr;
    vlSelfRef.tb_p2__DOT__front = __Vdly__tb_p2__DOT__front;
    vlSelfRef.tb_p2__DOT__fb__DOT__frame_pending = __Vdly__tb_p2__DOT__fb__DOT__frame_pending;
    vlSelfRef.tb_p2__DOT__fb__DOT__back_ready = __Vdly__tb_p2__DOT__fb__DOT__back_ready;
    vlSelfRef.tb_p2__DOT__full = ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wgray) 
                                  == ((0xc00U & ((~ 
                                                  ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rg2) 
                                                   >> 0xaU)) 
                                                 << 0xaU)) 
                                      | (0x3ffU & (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rg2))));
    vlSelfRef.tb_p2__DOT__fb__DOT__state = __Vdly__tb_p2__DOT__fb__DOT__state;
    vlSelfRef.tb_p2__DOT__fb__DOT__flush = __Vdly__tb_p2__DOT__fb__DOT__flush;
    vlSelfRef.tb_p2__DOT__valid = __Vdly__tb_p2__DOT__valid;
    vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr = __Vdly__tb_p2__DOT__fb__DOT__rd_addr;
    vlSelfRef.tb_p2__DOT__fb__DOT__wr_x = __Vdly__tb_p2__DOT__fb__DOT__wr_x;
    vlSelfRef.tb_p2__DOT__fb__DOT__wr_y = __Vdly__tb_p2__DOT__fb__DOT__wr_y;
    vlSelfRef.tb_p2__DOT__written = __Vdly__tb_p2__DOT__written;
    tb_p2__DOT__used = (0xfffU & ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wp) 
                                  - ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g 
                        = vlSelfRef.tb_p2__DOT__fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g)));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout))));
    if (vlSelfRef.tb_p2__DOT__reset) {
        __Vdly__tb_p2__DOT__ctrl__DOT__state = 0U;
        __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 0x270fU;
        __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age = 0U;
        __Vdly__tb_p2__DOT__ctrl__DOT__init_refresh = 0U;
        __Vdly__tb_p2__DOT__init_done = 0U;
        __Vdly__tb_p2__DOT__refreshes = 0U;
        vlSelfRef.tb_p2__DOT__rsp_valid = 0U;
        vlSelfRef.tb_p2__DOT__rd[0U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_p2__DOT__rd[1U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_p2__DOT__rd[2U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_p2__DOT__rd[3U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_p2__DOT__rd[4U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_p2__DOT__rd[5U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_p2__DOT__rd[6U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_p2__DOT__rd[7U] = Vtb_p2__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_p2__DOT__ctrl__DOT__beat = 0U;
        vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr = 0U;
        __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write = 0U;
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U] 
            = Vtb_p2__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.tb_p2__DOT__rsp_valid = 0U;
        if (((IData)(vlSelfRef.tb_p2__DOT__init_done) 
             & (0xffffU != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age)))) {
            __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age)));
        }
        if (((((((((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state = 1U;
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((1U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 2U;
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state = 3U;
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__init_refresh 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__init_refresh)));
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 4U;
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 3U;
            } else if ((4U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state 
                        = ((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__init_refresh))
                            ? 5U : 3U);
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 6U;
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((6U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state = 7U;
                    __Vdly__tb_p2__DOT__init_done = 1U;
                    __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age = 0U;
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0x186U <= (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 0x10U;
            } else if (((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))
                         ? (IData)(vlSelfRef.tb_p2__DOT__fv)
                         : (1U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)))) {
                if ((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr 
                        = vlSelfRef.tb_p2__DOT__fa_req;
                    __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write 
                        = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req)));
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U] 
                        = vlSelfRef.tb_p2__DOT__fd[0U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U] 
                        = vlSelfRef.tb_p2__DOT__fd[1U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U] 
                        = vlSelfRef.tb_p2__DOT__fd[2U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U] 
                        = vlSelfRef.tb_p2__DOT__fd[3U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U] 
                        = vlSelfRef.tb_p2__DOT__fd[4U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U] 
                        = vlSelfRef.tb_p2__DOT__fd[5U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U] 
                        = vlSelfRef.tb_p2__DOT__fd[6U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U] 
                        = vlSelfRef.tb_p2__DOT__fd[7U];
                } else {
                    vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr 
                        = vlSelfRef.tb_p2__DOT__bist__DOT__address;
                    __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write 
                        = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__reading)));
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U] 
                        = vlSelfRef.tb_p2__DOT__bd[0U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U] 
                        = vlSelfRef.tb_p2__DOT__bd[1U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U] 
                        = vlSelfRef.tb_p2__DOT__bd[2U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U] 
                        = vlSelfRef.tb_p2__DOT__bd[3U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U] 
                        = vlSelfRef.tb_p2__DOT__bd[4U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U] 
                        = vlSelfRef.tb_p2__DOT__bd[5U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U] 
                        = vlSelfRef.tb_p2__DOT__bd[6U];
                    __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U] 
                        = vlSelfRef.tb_p2__DOT__bd[7U];
                }
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 8U;
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                          | (9U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                         | (0xaU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                        | (0xbU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                       | (0xcU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                      | (0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                     | (0xeU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) 
                    | (0xfU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))) {
            if ((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 9U;
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((9U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__beat = 0U;
                    __Vdly__tb_p2__DOT__ctrl__DOT__state 
                        = ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_write)
                            ? 0xdU : 0xaU);
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0xaU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 0xbU;
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 2U;
            } else if ((0xbU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state = 0xcU;
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0xcU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__beat), 5U)), vlSelfRef.tb_p2__DOT__rd, vlSelfRef.tb_p2__DOT__ctrl__DOT__dq_capture);
                if ((7U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__beat))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state = 0xfU;
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 3U;
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__beat)));
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[1U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[2U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[3U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[4U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[5U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[6U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[7U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U] = 0U;
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 0xeU;
                __Vdly__tb_p2__DOT__ctrl__DOT__beat = 1U;
            } else if ((0xeU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[1U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[2U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[3U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[4U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[5U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[6U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U] 
                    = vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[7U];
                __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U] = 0U;
                if ((7U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__beat))) {
                    __Vdly__tb_p2__DOT__ctrl__DOT__state = 0xfU;
                    __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 3U;
                } else {
                    __Vdly__tb_p2__DOT__ctrl__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__beat)));
                }
            } else if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 7U;
                vlSelfRef.tb_p2__DOT__rsp_valid = 1U;
            } else {
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            __Vdly__tb_p2__DOT__refreshes = ((IData)(1U) 
                                             + vlSelfRef.tb_p2__DOT__refreshes);
            __Vdly__tb_p2__DOT__ctrl__DOT__state = 0x11U;
            __Vdly__tb_p2__DOT__ctrl__DOT__wait_count = 3U;
            __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age = 0U;
        } else if ((0x11U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_p2__DOT__ctrl__DOT__state = 7U;
            } else {
                __Vdly__tb_p2__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else {
            __Vdly__tb_p2__DOT__ctrl__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_p2__DOT__fifo__DOT__push = (((~ (IData)(vlSelfRef.tb_p2__DOT__full)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state))) 
                                             & (0U 
                                                == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush)));
    vlSelfRef.tb_p2__DOT__fb__DOT__ft2 = ((1U & (~ (IData)(vlSelfRef.tb_p2__DOT__reset))) 
                                          && (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__ft1));
    vlSelfRef.tb_p2__DOT__fifo__DOT__wn = (0xfffU & 
                                           ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wp) 
                                            + (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__push)));
    vlSelfRef.tb_p2__DOT__ctrl__DOT__wait_count = __Vdly__tb_p2__DOT__ctrl__DOT__wait_count;
    vlSelfRef.tb_p2__DOT__ctrl__DOT__init_refresh = __Vdly__tb_p2__DOT__ctrl__DOT__init_refresh;
    vlSelfRef.tb_p2__DOT__refreshes = __Vdly__tb_p2__DOT__refreshes;
    vlSelfRef.tb_p2__DOT__ctrl__DOT__beat = __Vdly__tb_p2__DOT__ctrl__DOT__beat;
    vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_write 
        = __Vdly__tb_p2__DOT__ctrl__DOT__transaction_write;
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[0U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[0U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[1U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[1U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[2U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[2U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[3U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[3U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[4U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[4U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[5U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[5U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[6U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[6U];
    vlSelfRef.tb_p2__DOT__ctrl__DOT__write_data[7U] 
        = __Vdly__tb_p2__DOT__ctrl__DOT__write_data[7U];
    vlSelfRef.tb_p2__DOT__init_done = __Vdly__tb_p2__DOT__init_done;
    vlSelfRef.tb_p2__DOT__bist__DOT__reading = __Vdly__tb_p2__DOT__bist__DOT__reading;
    vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age = __Vdly__tb_p2__DOT__ctrl__DOT__refresh_age;
    vlSelfRef.tb_p2__DOT__fb__DOT__video_req = ((IData)(vlSelfRef.tb_p2__DOT__valid) 
                                                & ((0x25800U 
                                                    > vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr) 
                                                   & (0x7f0U 
                                                      >= (IData)(tb_p2__DOT__used))));
    VL_ASSIGNSEL_WI(256,32,0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(1U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                           << 1U);
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x20U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(3U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(2U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x40U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(5U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(4U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x60U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(7U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(6U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x80U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(9U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(8U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0xa0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(0xbU) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(0xaU) 
                                     + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                        << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0xc0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(0xcU) 
                                     + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                        << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0xe0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(0xfU) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(0xeU) 
                                     + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                        << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    vlSelfRef.tb_p2__DOT__bist__DOT__state = __Vdly__tb_p2__DOT__bist__DOT__state;
    vlSelfRef.tb_p2__DOT__ctrl__DOT__state = __Vdly__tb_p2__DOT__ctrl__DOT__state;
    vlSelfRef.tb_p2__DOT__bist__DOT__address = __Vdly__tb_p2__DOT__bist__DOT__address;
    vlSelfRef.tb_p2__DOT__fb__DOT__ft1 = ((1U & (~ (IData)(vlSelfRef.tb_p2__DOT__reset))) 
                                          && (IData)(vlSelfRef.tb_p2__DOT__ft));
    vlSelfRef.tb_p2__DOT__fa_req = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req)
                                     ? (((IData)(vlSelfRef.tb_p2__DOT__front) 
                                         << 0x12U) 
                                        | vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr)
                                     : ((0x40000U & 
                                         ((~ (IData)(vlSelfRef.tb_p2__DOT__front)) 
                                          << 0x12U)) 
                                        | vlSelfRef.tb_p2__DOT__fb__DOT__wr_addr));
    vlSelfRef.tb_p2__DOT____Vcellinp__bist__rsp_valid 
        = ((5U != (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_p2__DOT__rsp_valid));
    vlSelfRef.tb_p2__DOT____Vcellinp__fb__rsp_valid 
        = ((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_p2__DOT__rsp_valid));
    vlSelfRef.tb_p2__DOT__fb__DOT__enabled = (IData)(
                                                     (((5U 
                                                        == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
                                                       & (~ (IData)(vlSelfRef.tb_p2__DOT__fault))) 
                                                      & (0U 
                                                         == vlSelfRef.tb_p2__DOT__errors)));
    vlSelfRef.tb_p2__DOT__ras = 1U;
    vlSelfRef.tb_p2__DOT__cas = 1U;
    vlSelfRef.tb_p2__DOT__we = 1U;
    vlSelfRef.tb_p2__DOT__oe = ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                                | (0xeU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)));
    vlSelfRef.tb_p2__DOT__sa = 0U;
    if ((1U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
        vlSelfRef.tb_p2__DOT__ras = 0U;
        vlSelfRef.tb_p2__DOT__we = 0U;
        vlSelfRef.tb_p2__DOT__sa = (0x400U | (IData)(vlSelfRef.tb_p2__DOT__sa));
    } else {
        if (((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_p2__DOT__ras = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_p2__DOT__ras = 0U;
        } else if ((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_p2__DOT__ras = 0U;
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__we = 0U;
                vlSelfRef.tb_p2__DOT__sa = 0x33U;
            } else {
                if ((8U != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    if ((0xaU != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                        if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                            vlSelfRef.tb_p2__DOT__we = 0U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__sa = (0x7ffU 
                                                & (vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr 
                                                   >> 8U));
                } else if ((0xaU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__sa = (0x400U 
                                                | (0xffU 
                                                   & vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr));
                } else if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__sa = (0x400U 
                                                | (0xffU 
                                                   & vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr));
                }
            }
        }
    }
    vlSelfRef.tb_p2__DOT__bank = (3U & (vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr 
                                        >> 0x13U));
    if ((1U != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
        if (((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_p2__DOT__cas = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_p2__DOT__cas = 0U;
        } else if ((8U != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            if ((0xaU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__cas = 0U;
            } else if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__cas = 0U;
            }
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__bank = 0U;
            }
        }
    }
    vlSelfRef.tb_p2__DOT__req_ready = ((7U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                                       & (0x186U > (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age)));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = vlSelfRef.tb_p2__DOT__bist__DOT__address;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[0U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[1U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(2U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[2U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(3U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[3U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(4U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[4U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(5U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[5U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(6U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[6U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(7U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[7U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    vlSelfRef.tb_p2__DOT__bist__DOT__check_addr = (0x1fffffU 
                                                   & (vlSelfRef.tb_p2__DOT__bist__DOT__address 
                                                      + (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat)));
    vlSelfRef.tb_p2__DOT__fv = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__enabled) 
                                & ((0U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state)) 
                                   & ((0U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush)) 
                                      & ((~ (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__frame_pending)) 
                                         & ((~ (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__back_ready)) 
                                            | (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req))))));
    vlSelfRef.tb_p2__DOT____Vcellinp__bist__req_ready 
        = ((5U != (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_p2__DOT__req_ready));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a 
        = vlSelfRef.tb_p2__DOT__bist__DOT__check_addr;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_p2__DOT__bist__DOT__expected = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout;
}
