// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_trigger.h for the primary calling header

#include "Vtb_trigger__pch.h"
#include "Vtb_trigger__Syms.h"
#include "Vtb_trigger___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_trigger___024root___eval_initial__TOP__Vtiming__0(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_trigger__DOT__n;
    tb_trigger__DOT__n = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_trigger.clk)", 
                                                         "sim/system\tb_trigger.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_trigger.clk)", 
                                                         "sim/system\tb_trigger.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_trigger.clk)", 
                                                         "sim/system\tb_trigger.sv", 
                                                         21);
    co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_trigger.clk)", 
                                                         "sim/system\tb_trigger.sv", 
                                                         21);
    vlSelfRef.tb_trigger__DOT__reset = 0U;
    vlSelfRef.tb_trigger__DOT__ce = 1U;
    tb_trigger__DOT__n = 0U;
    while (VL_GTS_III(32, 0x2ee0U, tb_trigger__DOT__n)) {
        vlSelfRef.tb_trigger__DOT__sample = (0xffffU 
                                             & VL_RTOI_I_D(
                                                           (1.20000000000000000e+04 
                                                            * 
                                                            sin(
                                                                ((6.28318530718000012e+00 
                                                                  * 
                                                                  VL_ISTOR_D_I(32, 
                                                                               ((IData)(0x11U) 
                                                                                + tb_trigger__DOT__n))) 
                                                                 / 48.0)))));
        vlSelfRef.tb_trigger__DOT__ft = (0x31fU == 
                                         VL_MODDIVS_III(32, tb_trigger__DOT__n, (IData)(0x320U)));
        co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_trigger.clk)", 
                                                             "sim/system\tb_trigger.sv", 
                                                             23);
        tb_trigger__DOT__n = ((IData)(1U) + tb_trigger__DOT__n);
    }
    if (VL_UNLIKELY(((VL_GTS_III(32, 5U, vlSelfRef.tb_trigger__DOT__starts) 
                      | VL_GTS_III(32, 5U, vlSelfRef.tb_trigger__DOT__swaps))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_trigger.sv:25: Assertion failed in %Ntb_trigger: No repeat acquisitions\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_trigger.sv", 25, "", false);
    }
    vlSelfRef.tb_trigger__DOT__periodic_test = 0U;
    vlSelfRef.tb_trigger__DOT__sample = 0U;
    vlSelfRef.tb_trigger__DOT__ft = 0U;
    tb_trigger__DOT__n = 0U;
    while (VL_GTS_III(32, 0x1964U, tb_trigger__DOT__n)) {
        vlSelfRef.tb_trigger__DOT__ft = (0x31fU == 
                                         VL_MODDIVS_III(32, tb_trigger__DOT__n, (IData)(0x320U)));
        co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_trigger.clk)", 
                                                             "sim/system\tb_trigger.sv", 
                                                             27);
        tb_trigger__DOT__n = ((IData)(1U) + tb_trigger__DOT__n);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__capturing)) 
                      & (0xfffU == (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_trigger.sv:28: Assertion failed in %Ntb_trigger: AUTO fallback stalled\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_trigger.sv", 28, "", false);
    }
    if (VL_UNLIKELY(((0U == vlSelfRef.tb_trigger__DOT__fallback_starts)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_trigger.sv:29: Assertion failed in %Ntb_trigger: Silence did not auto-trigger\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_trigger.sv", 29, "", false);
    }
    vlSelfRef.tb_trigger__DOT__trig = 0U;
    tb_trigger__DOT__n = 0U;
    while (VL_GTS_III(32, 0x9c4U, tb_trigger__DOT__n)) {
        vlSelfRef.tb_trigger__DOT__ft = (0x31fU == 
                                         VL_MODDIVS_III(32, tb_trigger__DOT__n, (IData)(0x320U)));
        co_await vlSelfRef.__VtrigSched_h2dc543e8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_trigger.clk)", 
                                                             "sim/system\tb_trigger.sv", 
                                                             30);
        tb_trigger__DOT__n = ((IData)(1U) + tb_trigger__DOT__n);
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__wp)) 
                      & (~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_trigger.sv:31: Assertion failed in %Ntb_trigger: Free capture stopped\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_trigger.sv", 31, "", false);
    }
    VL_WRITEF_NX("PASS rising-zero trigger, repeated acquisitions=%0d frame swaps=%0d, silence AUTO fallback and free-running toggle\n",0,
                 32,vlSelfRef.tb_trigger__DOT__starts,
                 32,vlSelfRef.tb_trigger__DOT__swaps);
    VL_FINISH_MT("sim/system\\tb_trigger.sv", 32, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__act(Vtb_trigger___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_trigger___024root___eval_triggers__act(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_triggers__act\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_trigger__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_trigger__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_trigger__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_trigger__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_trigger__DOT__clk__0 
        = vlSelfRef.tb_trigger__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_trigger___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_trigger___024root___nba_sequent__TOP__0(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___nba_sequent__TOP__0\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_trigger__DOT__dut__DOT__capturing;
    __Vdly__tb_trigger__DOT__dut__DOT__capturing = 0;
    SData/*11:0*/ __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait;
    __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait = 0;
    CData/*0:0*/ __Vdly__tb_trigger__DOT__dut__DOT__front;
    __Vdly__tb_trigger__DOT__dut__DOT__front = 0;
    CData/*0:0*/ __Vdly__tb_trigger__DOT__dut__DOT__page_ready;
    __Vdly__tb_trigger__DOT__dut__DOT__page_ready = 0;
    CData/*6:0*/ __Vdly__tb_trigger__DOT__dut__DOT__wp;
    __Vdly__tb_trigger__DOT__dut__DOT__wp = 0;
    CData/*2:0*/ __Vdly__tb_trigger__DOT__dut__DOT__decimate;
    __Vdly__tb_trigger__DOT__dut__DOT__decimate = 0;
    // Body
    __Vdly__tb_trigger__DOT__dut__DOT__front = vlSelfRef.tb_trigger__DOT__dut__DOT__front;
    __Vdly__tb_trigger__DOT__dut__DOT__wp = vlSelfRef.tb_trigger__DOT__dut__DOT__wp;
    __Vdly__tb_trigger__DOT__dut__DOT__decimate = vlSelfRef.tb_trigger__DOT__dut__DOT__decimate;
    __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait 
        = vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait;
    __Vdly__tb_trigger__DOT__dut__DOT__capturing = vlSelfRef.tb_trigger__DOT__dut__DOT__capturing;
    __Vdly__tb_trigger__DOT__dut__DOT__page_ready = vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready;
    if ((1U & (~ (IData)(vlSelfRef.tb_trigger__DOT__reset)))) {
        if ((((IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__take_sample) 
              & (IData)(vlSelfRef.tb_trigger__DOT__trig)) 
             & (IData)(vlSelfRef.tb_trigger__DOT__periodic_test))) {
            if (VL_GTES_III(32, 1U, vlSelfRef.tb_trigger__DOT__starts)) {
                vlSelfRef.tb_trigger__DOT__reference_page[vlSelfRef.tb_trigger__DOT__dut__DOT__wp] 
                    = (0xfffU & ((IData)(vlSelfRef.tb_trigger__DOT__sample) 
                                 >> 4U));
            } else if (VL_UNLIKELY(((vlSelfRef.tb_trigger__DOT__reference_page
                                     [vlSelfRef.tb_trigger__DOT__dut__DOT__wp] 
                                     != (0xfffU & ((IData)(vlSelfRef.tb_trigger__DOT__sample) 
                                                   >> 4U)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_trigger.sv:13: Assertion failed in %Ntb_trigger: Phase moved across captures at point %0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),7,(IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__wp));
                VL_STOP_MT("sim/system\\tb_trigger.sv", 13, "", false);
            }
        }
        if (((IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__front) 
             != (IData)(vlSelfRef.tb_trigger__DOT__old_front))) {
            vlSelfRef.tb_trigger__DOT__swaps = ((IData)(1U) 
                                                + vlSelfRef.tb_trigger__DOT__swaps);
            vlSelfRef.tb_trigger__DOT__old_front = vlSelfRef.tb_trigger__DOT__dut__DOT__front;
        }
        if (((IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_start) 
             & (0xfffU == (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait)))) {
            vlSelfRef.tb_trigger__DOT__fallback_starts 
                = ((IData)(1U) + vlSelfRef.tb_trigger__DOT__fallback_starts);
        }
        if (((IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_start) 
             & (0xfffU != (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait)))) {
            if (VL_UNLIKELY(((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_trigger__DOT__sample))) 
                              | VL_LTS_III(32, 0x640U, 
                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_trigger__DOT__sample))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_trigger.sv:16: Assertion failed in %Ntb_trigger: Not rising zero crossing\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_trigger.sv", 16, "", false);
            }
            vlSelfRef.tb_trigger__DOT__starts = ((IData)(1U) 
                                                 + vlSelfRef.tb_trigger__DOT__starts);
        }
    }
    if (vlSelfRef.tb_trigger__DOT__reset) {
        __Vdly__tb_trigger__DOT__dut__DOT__capturing = 0U;
        vlSelfRef.tb_trigger__DOT__dut__DOT__negative_seen = 0U;
        __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait = 0U;
        __Vdly__tb_trigger__DOT__dut__DOT__front = 0U;
        __Vdly__tb_trigger__DOT__dut__DOT__page_ready = 0U;
        __Vdly__tb_trigger__DOT__dut__DOT__wp = 0U;
        __Vdly__tb_trigger__DOT__dut__DOT__decimate = 0U;
    } else {
        if (vlSelfRef.tb_trigger__DOT__ce) {
            if ((((IData)(vlSelfRef.tb_trigger__DOT__trig) 
                  & (~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__capturing))) 
                 & (~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready)))) {
                if ((0xfffU != (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait))) {
                    __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait)));
                }
                __Vdly__tb_trigger__DOT__dut__DOT__decimate = 0U;
                if (VL_GTS_III(16, 0xff80U, (IData)(vlSelfRef.tb_trigger__DOT__sample))) {
                    vlSelfRef.tb_trigger__DOT__dut__DOT__negative_seen = 1U;
                }
            } else {
                __Vdly__tb_trigger__DOT__dut__DOT__decimate 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__decimate)));
            }
            if (vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_start) {
                __Vdly__tb_trigger__DOT__dut__DOT__capturing = 1U;
                vlSelfRef.tb_trigger__DOT__dut__DOT__negative_seen = 0U;
                __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait = 0U;
                __Vdly__tb_trigger__DOT__dut__DOT__decimate = 0U;
            }
            if (vlSelfRef.tb_trigger__DOT__dut__DOT__take_sample) {
                if ((0x7fU == (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__wp))) {
                    __Vdly__tb_trigger__DOT__dut__DOT__page_ready = 1U;
                } else {
                    __Vdly__tb_trigger__DOT__dut__DOT__wp 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__wp)));
                }
            }
        }
        if (vlSelfRef.tb_trigger__DOT__ft) {
            if (vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready) {
                __Vdly__tb_trigger__DOT__dut__DOT__front 
                    = (1U & (~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__front)));
                __Vdly__tb_trigger__DOT__dut__DOT__page_ready = 0U;
                __Vdly__tb_trigger__DOT__dut__DOT__wp = 0U;
                __Vdly__tb_trigger__DOT__dut__DOT__capturing = 0U;
                vlSelfRef.tb_trigger__DOT__dut__DOT__negative_seen = 0U;
                __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait = 0U;
                __Vdly__tb_trigger__DOT__dut__DOT__decimate = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_trigger__DOT__trig) 
             != (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_mode_q))) {
            __Vdly__tb_trigger__DOT__dut__DOT__capturing = 0U;
            vlSelfRef.tb_trigger__DOT__dut__DOT__negative_seen = 0U;
            __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait = 0U;
            __Vdly__tb_trigger__DOT__dut__DOT__wp = 0U;
            __Vdly__tb_trigger__DOT__dut__DOT__page_ready = 0U;
            __Vdly__tb_trigger__DOT__dut__DOT__decimate = 0U;
        }
    }
    vlSelfRef.tb_trigger__DOT__dut__DOT__wp = __Vdly__tb_trigger__DOT__dut__DOT__wp;
    vlSelfRef.tb_trigger__DOT__dut__DOT__front = __Vdly__tb_trigger__DOT__dut__DOT__front;
    vlSelfRef.tb_trigger__DOT__dut__DOT__decimate = __Vdly__tb_trigger__DOT__dut__DOT__decimate;
    vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait 
        = __Vdly__tb_trigger__DOT__dut__DOT__trigger_wait;
    vlSelfRef.tb_trigger__DOT__dut__DOT__capturing 
        = __Vdly__tb_trigger__DOT__dut__DOT__capturing;
    vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready 
        = __Vdly__tb_trigger__DOT__dut__DOT__page_ready;
    vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_mode_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_trigger__DOT__reset))) 
           && (IData)(vlSelfRef.tb_trigger__DOT__trig));
}
