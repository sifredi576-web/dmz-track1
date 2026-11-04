// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_widescreen.h for the primary calling header

#include "Vtb_widescreen__pch.h"
#include "Vtb_widescreen__Syms.h"
#include "Vtb_widescreen___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__0(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "sim/system\tb_widescreen.sv", 
                                         67);
    vlSelfRef.tb_widescreen__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2e90edd000ULL, 
                                         nullptr, "sim/system\tb_widescreen.sv", 
                                         67);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:67: Assertion failed in %Ntb_widescreen: wide test timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/system\\tb_widescreen.sv", 67, "", false);
}

VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1(Vtb_widescreen___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_hd6bf6cc8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_widescreen.mclk)", 
                                                             "sim/p2\sdram_model.sv", 
                                                             15);
        vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
            = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle);
        if (vlSelfRef.tb_widescreen__DOT__reset) {
            vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__mode_set = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__ref_count = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__last_refresh 
                = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[0U] = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[1U] = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[2U] = 0U;
            vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[3U] = 0U;
        } else {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_widescreen__DOT__mem__DOT__mode_set) 
                              & VL_LTS_III(32, 0x30cU, 
                                           (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                            - vlSelfRef.tb_widescreen__DOT__mem__DOT__last_refresh)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:19: Assertion failed in %Ntb_widescreen.mem: refresh overdue\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/p2\\sdram_model.sv", 19, "", false);
            }
            if ((0U != vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__oe)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:21: Assertion failed in %Ntb_widescreen.mem: missing write data\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 21, "", false);
                }
                vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left 
                    = (vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left 
                       - (IData)(1U));
                vlSelfRef.tb_widescreen__DOT__mem__DOT__mem[(0x1fffffU 
                                                             & vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address)] 
                    = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[0U];
                if (((0U == vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left) 
                     & (IData)(vlSelfRef.tb_widescreen__DOT__mem__DOT__auto_close))) {
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[(3U 
                                                                       & vlSelfRef.tb_widescreen__DOT__mem__DOT__bank_active)] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[(3U 
                                                                       & vlSelfRef.tb_widescreen__DOT__mem__DOT__bank_active)] 
                        = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle);
                }
                vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address 
                    = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address);
            }
            if ((0U != vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read)) {
                vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read 
                    = (vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read 
                       - (IData)(1U));
                if ((0U == vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read)) {
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left = 8U;
                }
            }
            if ((0U != vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left)) {
                if (VL_UNLIKELY((vlSelfRef.tb_widescreen__DOT__oe))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:27: Assertion failed in %Ntb_widescreen.mem: DQ contention\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 27, "", false);
                }
                vlSelfRef.__Vintraval_he798b52a__0 
                    = (vlSelfRef.tb_widescreen__DOT__mem__DOT__mem
                       [(0x1fffffU & vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_address)] 
                       ^ (((IData)(vlSelfRef.tb_widescreen__DOT__mem__DOT__inject) 
                           & (0x17U == vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_address))
                           ? 1U : 0U));
                Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1(vlSelf);
                vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_address 
                    = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_address);
                vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left 
                    = (vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left 
                       - (IData)(1U));
                if (((0U == vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left) 
                     & (IData)(vlSelfRef.tb_widescreen__DOT__mem__DOT__auto_close))) {
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[(3U 
                                                                       & vlSelfRef.tb_widescreen__DOT__mem__DOT__bank_active)] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[(3U 
                                                                       & vlSelfRef.tb_widescreen__DOT__mem__DOT__bank_active)] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                }
            }
            if (vlSelfRef.tb_widescreen__DOT__ras) {
                if ((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__cas)))) {
                    if (VL_UNLIKELY(((1U & (((~ vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank
                                              [vlSelfRef.tb_widescreen__DOT__bank]) 
                                             | VL_GTS_III(32, 2U, 
                                                          (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                           - 
                                                           vlSelfRef.tb_widescreen__DOT__mem__DOT__last_active
                                                           [vlSelfRef.tb_widescreen__DOT__bank]))) 
                                            | (0U != 
                                               (7U 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__sa)))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:51: Assertion failed in %Ntb_widescreen.mem: READ/WRITE timing/address\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("sim/p2\\sdram_model.sv", 51, "", false);
                    }
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__bank_active 
                        = vlSelfRef.tb_widescreen__DOT__bank;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__auto_close 
                        = (1U & ((IData)(vlSelfRef.tb_widescreen__DOT__sa) 
                                 >> 0xaU));
                    if (vlSelfRef.tb_widescreen__DOT__we) {
                        vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_address 
                            = (((IData)(vlSelfRef.tb_widescreen__DOT__bank) 
                                << 0x13U) | ((vlSelfRef.tb_widescreen__DOT__mem__DOT__rows
                                              [vlSelfRef.tb_widescreen__DOT__bank] 
                                              << 8U) 
                                             | (0xffU 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__sa))));
                        vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read = 3U;
                    } else {
                        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__oe)))))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:55: Assertion failed in %Ntb_widescreen.mem: first write beat\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p2\\sdram_model.sv", 55, "", false);
                        }
                        vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address 
                            = (((IData)(vlSelfRef.tb_widescreen__DOT__bank) 
                                << 0x13U) | ((vlSelfRef.tb_widescreen__DOT__mem__DOT__rows
                                              [vlSelfRef.tb_widescreen__DOT__bank] 
                                              << 8U) 
                                             | (0xffU 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__sa))));
                        vlSelfRef.tb_widescreen__DOT__mem__DOT__mem[(0x1fffffU 
                                                                     & vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address)] 
                            = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[0U];
                        vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address 
                            = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address);
                        vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left = 7U;
                    }
                }
            } else if (vlSelfRef.tb_widescreen__DOT__cas) {
                if (vlSelfRef.tb_widescreen__DOT__we) {
                    if (VL_UNLIKELY(((1U & (((((~ (IData)(vlSelfRef.tb_widescreen__DOT__mem__DOT__mode_set)) 
                                               | vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank
                                               [vlSelfRef.tb_widescreen__DOT__bank]) 
                                              | VL_GTS_III(32, 2U, 
                                                           (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                            - 
                                                            vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at
                                                            [vlSelfRef.tb_widescreen__DOT__bank]))) 
                                             | VL_GTS_III(32, 4U, 
                                                          (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                           - vlSelfRef.tb_widescreen__DOT__mem__DOT__last_refresh))) 
                                            | VL_GTS_III(32, 2U, 
                                                         (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                          - vlSelfRef.tb_widescreen__DOT__mem__DOT__last_mrs))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:47: Assertion failed in %Ntb_widescreen.mem: ACT timing\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("sim/p2\\sdram_model.sv", 47, "", false);
                    }
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__rows[vlSelfRef.tb_widescreen__DOT__bank] 
                        = vlSelfRef.tb_widescreen__DOT__sa;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[vlSelfRef.tb_widescreen__DOT__bank] = 1U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_active[vlSelfRef.tb_widescreen__DOT__bank] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                } else if ((0x400U & (IData)(vlSelfRef.tb_widescreen__DOT__sa))) {
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[0U] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[0U] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[1U] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[1U] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[2U] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[2U] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[3U] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[3U] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                } else {
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[vlSelfRef.tb_widescreen__DOT__bank] = 0U;
                    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[vlSelfRef.tb_widescreen__DOT__bank] 
                        = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                }
            } else if (vlSelfRef.tb_widescreen__DOT__we) {
                if (VL_UNLIKELY(((vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank
                                  [0U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at
                                                     [0U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_widescreen.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank
                                  [1U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at
                                                     [1U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_widescreen.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank
                                  [2U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at
                                                     [2U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_widescreen.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank
                                  [3U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at
                                                     [3U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_widescreen.mem.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 4U, 
                                            (vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle 
                                             - vlSelfRef.tb_widescreen__DOT__mem__DOT__last_refresh))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:39: Assertion failed in %Ntb_widescreen.mem: tRFC\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 39, "", false);
                }
                vlSelfRef.tb_widescreen__DOT__mem__DOT__last_refresh 
                    = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
                vlSelfRef.tb_widescreen__DOT__mem__DOT__ref_count 
                    = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__mem__DOT__ref_count);
            } else {
                if (VL_UNLIKELY((((VL_GTS_III(32, 8U, vlSelfRef.tb_widescreen__DOT__mem__DOT__ref_count) 
                                   | (0x33U != (IData)(vlSelfRef.tb_widescreen__DOT__sa))) 
                                  | (0U != (IData)(vlSelfRef.tb_widescreen__DOT__bank)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:43: Assertion failed in %Ntb_widescreen.mem: initialization/mode\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 43, "", false);
                }
                vlSelfRef.tb_widescreen__DOT__mem__DOT__mode_set = 1U;
                vlSelfRef.tb_widescreen__DOT__mem__DOT__last_mrs 
                    = vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle;
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__act(Vtb_widescreen___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_widescreen___024root___eval_triggers__act(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_triggers__act\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_widescreen__DOT__pclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__pclk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_widescreen__DOT__mclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__mclk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_widescreen__DOT__freset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__freset__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_widescreen__DOT__mclk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__mclk__0)));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__pclk__0 
        = vlSelfRef.tb_widescreen__DOT__pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__mclk__0 
        = vlSelfRef.tb_widescreen__DOT__mclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__freset__0 
        = vlSelfRef.tb_widescreen__DOT__freset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_widescreen___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__1(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__1\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_tb_widescreen__DOT__pixel__2__Vfuncout;
    __Vfunc_tb_widescreen__DOT__pixel__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__2__row;
    __Vfunc_tb_widescreen__DOT__pixel__2__row = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__2__col;
    __Vfunc_tb_widescreen__DOT__pixel__2__col = 0;
    SData/*15:0*/ __Vfunc_tb_widescreen__DOT__pixel__3__Vfuncout;
    __Vfunc_tb_widescreen__DOT__pixel__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__3__row;
    __Vfunc_tb_widescreen__DOT__pixel__3__row = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__3__col;
    __Vfunc_tb_widescreen__DOT__pixel__3__col = 0;
    CData/*5:0*/ __Vfunc_tb_widescreen__DOT__audio__DOT__sine__7__index;
    __Vfunc_tb_widescreen__DOT__audio__DOT__sine__7__index = 0;
    SData/*10:0*/ __Vdly__tb_widescreen__DOT__x;
    __Vdly__tb_widescreen__DOT__x = 0;
    SData/*9:0*/ __Vdly__tb_widescreen__DOT__y;
    __Vdly__tb_widescreen__DOT__y = 0;
    SData/*9:0*/ __Vdly__tb_widescreen__DOT__sx;
    __Vdly__tb_widescreen__DOT__sx = 0;
    CData/*1:0*/ __Vdly__tb_widescreen__DOT__mapper__DOT__hx;
    __Vdly__tb_widescreen__DOT__mapper__DOT__hx = 0;
    SData/*9:0*/ __Vdly__tb_widescreen__DOT__sy;
    __Vdly__tb_widescreen__DOT__sy = 0;
    CData/*1:0*/ __Vdly__tb_widescreen__DOT__mapper__DOT__vy;
    __Vdly__tb_widescreen__DOT__mapper__DOT__vy = 0;
    IData/*26:0*/ __Vdly__tb_widescreen__DOT__audio__DOT__accumulator;
    __Vdly__tb_widescreen__DOT__audio__DOT__accumulator = 0;
    CData/*5:0*/ __Vdly__tb_widescreen__DOT__audio__DOT__phase;
    __Vdly__tb_widescreen__DOT__audio__DOT__phase = 0;
    // Body
    __Vdly__tb_widescreen__DOT__audio__DOT__accumulator 
        = vlSelfRef.tb_widescreen__DOT__audio__DOT__accumulator;
    __Vdly__tb_widescreen__DOT__audio__DOT__phase = vlSelfRef.tb_widescreen__DOT__audio__DOT__phase;
    __Vdly__tb_widescreen__DOT__sx = vlSelfRef.tb_widescreen__DOT__sx;
    __Vdly__tb_widescreen__DOT__mapper__DOT__hx = vlSelfRef.tb_widescreen__DOT__mapper__DOT__hx;
    __Vdly__tb_widescreen__DOT__sy = vlSelfRef.tb_widescreen__DOT__sy;
    __Vdly__tb_widescreen__DOT__mapper__DOT__vy = vlSelfRef.tb_widescreen__DOT__mapper__DOT__vy;
    vlSelfRef.__Vdly__tb_widescreen__DOT__ft = vlSelfRef.tb_widescreen__DOT__ft;
    __Vdly__tb_widescreen__DOT__y = vlSelfRef.tb_widescreen__DOT__y;
    __Vdly__tb_widescreen__DOT__x = vlSelfRef.tb_widescreen__DOT__x;
    if ((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__reset)))) {
        vlSelfRef.tb_widescreen__DOT__cycles = ((IData)(1U) 
                                                + vlSelfRef.tb_widescreen__DOT__cycles);
        if (vlSelfRef.tb_widescreen__DOT__sample_ce) {
            if (VL_UNLIKELY(((((0U != vlSelfRef.tb_widescreen__DOT__last_sample) 
                               & (0x61aU != (vlSelfRef.tb_widescreen__DOT__cycles 
                                             - vlSelfRef.tb_widescreen__DOT__last_sample))) 
                              & (0x61bU != (vlSelfRef.tb_widescreen__DOT__cycles 
                                            - vlSelfRef.tb_widescreen__DOT__last_sample)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:46: Assertion failed in %Ntb_widescreen: 48kHz spacing\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_widescreen.sv", 46, "", false);
            }
            vlSelfRef.tb_widescreen__DOT__samples = 
                ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__samples);
            vlSelfRef.tb_widescreen__DOT__last_sample 
                = vlSelfRef.tb_widescreen__DOT__cycles;
        }
        if (vlSelfRef.tb_widescreen__DOT__area) {
            if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_widescreen__DOT__sx) 
                               != VL_DIV_III(32, VL_SHIFTL_III(32,32,32, 
                                                               ((IData)(vlSelfRef.tb_widescreen__DOT__x) 
                                                                - (IData)(0xa0U)), 1U), (IData)(3U))) 
                              | ((IData)(vlSelfRef.tb_widescreen__DOT__sy) 
                                 != VL_DIV_III(32, 
                                               VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_widescreen__DOT__y), 1U), (IData)(3U))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:50: Assertion failed in %Ntb_widescreen: mapper x=%0# y=%0# sx=%0# sy=%0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),11,
                             (IData)(vlSelfRef.tb_widescreen__DOT__x),
                             10,vlSelfRef.tb_widescreen__DOT__y,
                             10,(IData)(vlSelfRef.tb_widescreen__DOT__sx),
                             10,vlSelfRef.tb_widescreen__DOT__sy);
                VL_STOP_MT("sim/system\\tb_widescreen.sv", 50, "", false);
            }
            if (VL_UNLIKELY((((0x45dU > (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
                              & (((0x3ffU & ((IData)(vlSelfRef.tb_widescreen__DOT__sx) 
                                             + ((1U 
                                                 == (IData)(vlSelfRef.tb_widescreen__DOT__mapper__DOT__hx))
                                                 ? 2U
                                                 : 1U))) 
                                  != VL_DIV_III(32, 
                                                VL_SHIFTL_III(32,32,32, 
                                                              ((IData)(vlSelfRef.tb_widescreen__DOT__x) 
                                                               - (IData)(0x9eU)), 1U), (IData)(3U))) 
                                 | ((0x3ffU & ((IData)(2U) 
                                               + (IData)(vlSelfRef.tb_widescreen__DOT__sx))) 
                                    != VL_DIV_III(32, 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                ((IData)(vlSelfRef.tb_widescreen__DOT__x) 
                                                                 - (IData)(0x9dU)), 1U), (IData)(3U)))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:51: Assertion failed in %Ntb_widescreen: lookahead mapping\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_widescreen.sv", 51, "", false);
            }
            if ((IData)((((IData)(vlSelfRef.tb_widescreen__DOT__dv) 
                          >> 1U) & (~ ((IData)(vlSelfRef.tb_widescreen__DOT__fr) 
                                       >> 2U))))) {
                if (VL_UNLIKELY((vlSelfRef.tb_widescreen__DOT__empty))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:53: Assertion failed in %Ntb_widescreen: wide FIFO underrun x=%0# y=%0# reads=%0#\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 11,(IData)(vlSelfRef.tb_widescreen__DOT__x),
                                 10,vlSelfRef.tb_widescreen__DOT__y,
                                 32,vlSelfRef.tb_widescreen__DOT__reads);
                    VL_STOP_MT("sim/system\\tb_widescreen.sv", 53, "", false);
                }
                vlSelfRef.tb_widescreen__DOT__pixels 
                    = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__pixels);
                if ((1U & (IData)(vlSelfRef.tb_widescreen__DOT__x))) {
                    vlSelfRef.tb_widescreen__DOT__pops 
                        = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__pops);
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_widescreen__DOT__actual) 
                                  != ([&]() {
                                        __Vfunc_tb_widescreen__DOT__pixel__2__col 
                                            = ((IData)(vlSelfRef.tb_widescreen__DOT__x) 
                                               - (IData)(0xa0U));
                                        __Vfunc_tb_widescreen__DOT__pixel__2__row 
                                            = vlSelfRef.tb_widescreen__DOT__y;
                                        __Vfunc_tb_widescreen__DOT__pixel__2__Vfuncout 
                                            = (0xffffU 
                                               & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__2__row) 
                                                  + __Vfunc_tb_widescreen__DOT__pixel__2__col));
                                    }(), (IData)(__Vfunc_tb_widescreen__DOT__pixel__2__Vfuncout)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:54: Assertion failed in %Ntb_widescreen: wide pixel x=%0# y=%0# sx=%0# sy=%0# actual=%x expected=%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 11,(IData)(vlSelfRef.tb_widescreen__DOT__x),
                                 10,vlSelfRef.tb_widescreen__DOT__y,
                                 10,(IData)(vlSelfRef.tb_widescreen__DOT__sx),
                                 10,vlSelfRef.tb_widescreen__DOT__sy,
                                 16,(IData)(vlSelfRef.tb_widescreen__DOT__actual),
                                 16,([&]() {
                                    __Vfunc_tb_widescreen__DOT__pixel__3__col 
                                        = ((IData)(vlSelfRef.tb_widescreen__DOT__x) 
                                           - (IData)(0xa0U));
                                    __Vfunc_tb_widescreen__DOT__pixel__3__row 
                                        = vlSelfRef.tb_widescreen__DOT__y;
                                    __Vfunc_tb_widescreen__DOT__pixel__3__Vfuncout 
                                        = (0xffffU 
                                           & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__3__row) 
                                              + __Vfunc_tb_widescreen__DOT__pixel__3__col));
                                }(), (IData)(__Vfunc_tb_widescreen__DOT__pixel__3__Vfuncout)));
                    VL_STOP_MT("sim/system\\tb_widescreen.sv", 54, "", false);
                }
            }
        }
        if ((((0x671U == (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
              & (0x2cfU == (IData)(vlSelfRef.tb_widescreen__DOT__y))) 
             & ((IData)(vlSelfRef.tb_widescreen__DOT__dv) 
                >> 1U))) {
            vlSelfRef.tb_widescreen__DOT__frames = 
                ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__frames);
            if (VL_UNLIKELY((((vlSelfRef.tb_widescreen__DOT__pixels 
                               != VL_MULS_III(32, (IData)(0xa8c00U), vlSelfRef.tb_widescreen__DOT__frames)) 
                              | (vlSelfRef.tb_widescreen__DOT__pops 
                                 != VL_MULS_III(32, (IData)(0x54600U), vlSelfRef.tb_widescreen__DOT__frames)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:60: Assertion failed in %Ntb_widescreen: frame size mismatch\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_widescreen.sv", 60, "", false);
            }
            if (VL_UNLIKELY(((2U == vlSelfRef.tb_widescreen__DOT__frames)))) {
                if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_widescreen__DOT__fault) 
                                    | VL_GTS_III(32, 0x64U, vlSelfRef.tb_widescreen__DOT__aux_count)) 
                                   | (0x64U > vlSelfRef.tb_widescreen__DOT__refreshes)) 
                                  | VL_GTS_III(32, 0x3e8U, vlSelfRef.tb_widescreen__DOT__samples))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_widescreen.sv:62: Assertion failed in %Ntb_widescreen: refresh/audio coverage missing\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/system\\tb_widescreen.sv", 62, "", false);
                }
                VL_WRITEF_NX("PASS widescreen: %0d pixels, %0d packed pairs, two 1280x720 frames; actual SDRAM refresh + FIFO no underrun; 48kHz samples=%0d\n",0,
                             32,vlSelfRef.tb_widescreen__DOT__pixels,
                             32,vlSelfRef.tb_widescreen__DOT__pops,
                             32,vlSelfRef.tb_widescreen__DOT__samples);
                VL_FINISH_MT("sim/system\\tb_widescreen.sv", 63, "");
            }
        }
    }
    if (vlSelfRef.tb_widescreen__DOT__reset) {
        __Vdly__tb_widescreen__DOT__sx = 0U;
        __Vdly__tb_widescreen__DOT__mapper__DOT__hx = 0U;
        __Vdly__tb_widescreen__DOT__sy = 0U;
        __Vdly__tb_widescreen__DOT__mapper__DOT__vy = 0U;
        vlSelfRef.tb_widescreen__DOT__dv = 0U;
        __Vdly__tb_widescreen__DOT__x = 0U;
        __Vdly__tb_widescreen__DOT__y = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__ft = 0U;
        __Vdly__tb_widescreen__DOT__audio__DOT__accumulator = 0U;
        __Vdly__tb_widescreen__DOT__audio__DOT__phase = 0U;
        vlSelfRef.tb_widescreen__DOT__sample_ce = 0U;
    } else {
        if (((0xa0U > (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
             | (0x45fU <= (IData)(vlSelfRef.tb_widescreen__DOT__x)))) {
            __Vdly__tb_widescreen__DOT__sx = 0U;
            __Vdly__tb_widescreen__DOT__mapper__DOT__hx = 0U;
        } else if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__mapper__DOT__hx))) {
            __Vdly__tb_widescreen__DOT__mapper__DOT__hx = 1U;
        } else {
            __Vdly__tb_widescreen__DOT__mapper__DOT__hx 
                = ((1U == (IData)(vlSelfRef.tb_widescreen__DOT__mapper__DOT__hx))
                    ? 2U : 0U);
            __Vdly__tb_widescreen__DOT__sx = (0x3ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_widescreen__DOT__sx)));
        }
        if ((0x2d0U <= (IData)(vlSelfRef.tb_widescreen__DOT__y))) {
            __Vdly__tb_widescreen__DOT__sy = 0U;
            __Vdly__tb_widescreen__DOT__mapper__DOT__vy = 0U;
        } else if ((0x671U == (IData)(vlSelfRef.tb_widescreen__DOT__x))) {
            if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__mapper__DOT__vy))) {
                __Vdly__tb_widescreen__DOT__mapper__DOT__vy = 1U;
            } else {
                __Vdly__tb_widescreen__DOT__mapper__DOT__vy 
                    = ((1U == (IData)(vlSelfRef.tb_widescreen__DOT__mapper__DOT__vy))
                        ? 2U : 0U);
                __Vdly__tb_widescreen__DOT__sy = (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_widescreen__DOT__sy)));
            }
        }
        vlSelfRef.tb_widescreen__DOT__dv = ((2U & ((IData)(vlSelfRef.tb_widescreen__DOT__dv) 
                                                   << 1U)) 
                                            | (IData)(vlSelfRef.tb_widescreen__DOT__display_valid));
        if ((0x671U == (IData)(vlSelfRef.tb_widescreen__DOT__x))) {
            __Vdly__tb_widescreen__DOT__y = ((0x2edU 
                                              == (IData)(vlSelfRef.tb_widescreen__DOT__y))
                                              ? 0U : 
                                             (0x3ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_widescreen__DOT__y))));
            __Vdly__tb_widescreen__DOT__x = 0U;
        } else {
            __Vdly__tb_widescreen__DOT__x = (0x7ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_widescreen__DOT__x)));
        }
        if (((0U == (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
             & (0x2d0U == (IData)(vlSelfRef.tb_widescreen__DOT__y)))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__ft 
                = (1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__ft)));
        }
        vlSelfRef.tb_widescreen__DOT__sample_ce = 0U;
        if ((0x477ad40U <= vlSelfRef.tb_widescreen__DOT__audio__DOT__accumulator)) {
            __Vdly__tb_widescreen__DOT__audio__DOT__accumulator 
                = (0x7ffffffU & (vlSelfRef.tb_widescreen__DOT__audio__DOT__accumulator 
                                 - (IData)(0x477ad40U)));
            __Vfunc_tb_widescreen__DOT__audio__DOT__sine__7__index 
                = vlSelfRef.tb_widescreen__DOT__audio__DOT__phase;
            vlSelfRef.tb_widescreen__DOT__sample_ce = 1U;
            __Vdly__tb_widescreen__DOT__audio__DOT__phase 
                = ((0x2fU == (IData)(vlSelfRef.tb_widescreen__DOT__audio__DOT__phase))
                    ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_widescreen__DOT__audio__DOT__phase))));
        } else {
            __Vdly__tb_widescreen__DOT__audio__DOT__accumulator 
                = (0x7ffffffU & ((IData)(0xbb80U) + vlSelfRef.tb_widescreen__DOT__audio__DOT__accumulator));
        }
    }
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__rdata_raw 
        = vlSelfRef.tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem
        [vlSelfRef.tb_widescreen__DOT__fifo__DOT__read_addr];
    if ((4U & (IData)(vlSelfRef.tb_widescreen__DOT__fr))) {
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__rp = 0U;
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__rgray = 0U;
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__rp 
            = vlSelfRef.tb_widescreen__DOT__fifo__DOT__rn;
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg2 
            = vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg1;
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__rgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rn), 1U) 
                         ^ (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rn)));
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg1 
            = vlSelfRef.tb_widescreen__DOT__fifo__DOT__wgray;
    }
    vlSelfRef.tb_widescreen__DOT__mapper__DOT__hx = __Vdly__tb_widescreen__DOT__mapper__DOT__hx;
    vlSelfRef.tb_widescreen__DOT__sx = __Vdly__tb_widescreen__DOT__sx;
    vlSelfRef.tb_widescreen__DOT__mapper__DOT__vy = __Vdly__tb_widescreen__DOT__mapper__DOT__vy;
    vlSelfRef.tb_widescreen__DOT__sy = __Vdly__tb_widescreen__DOT__sy;
    vlSelfRef.tb_widescreen__DOT__y = __Vdly__tb_widescreen__DOT__y;
    vlSelfRef.tb_widescreen__DOT__x = __Vdly__tb_widescreen__DOT__x;
    vlSelfRef.tb_widescreen__DOT__area = ((0xa0U <= (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
                                          & ((0x460U 
                                              > (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
                                             & (0x2d0U 
                                                > (IData)(vlSelfRef.tb_widescreen__DOT__y))));
    vlSelfRef.tb_widescreen__DOT__actual = (0xffffU 
                                            & ((1U 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__x))
                                                ? (vlSelfRef.tb_widescreen__DOT__fifo__DOT__rdata_raw 
                                                   >> 0x10U)
                                                : vlSelfRef.tb_widescreen__DOT__fifo__DOT__rdata_raw));
    vlSelfRef.tb_widescreen__DOT__audio__DOT__accumulator 
        = __Vdly__tb_widescreen__DOT__audio__DOT__accumulator;
    vlSelfRef.tb_widescreen__DOT__audio__DOT__phase 
        = __Vdly__tb_widescreen__DOT__audio__DOT__phase;
    vlSelfRef.tb_widescreen__DOT__empty = ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rgray) 
                                           == (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg2));
}
