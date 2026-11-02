// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pair.h for the primary calling header

#include "Vtb_pair__pch.h"
#include "Vtb_pair__Syms.h"
#include "Vtb_pair___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_pair___024root___eval_initial__TOP__Vtiming__0(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__0__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__0__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__1__count;
    __Vtask_tb_pair__DOT__ticks__1__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__2__count;
    __Vtask_tb_pair__DOT__ticks__2__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__3__count;
    __Vtask_tb_pair__DOT__ticks__3__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__4__count;
    __Vtask_tb_pair__DOT__ticks__4__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__5__count;
    __Vtask_tb_pair__DOT__ticks__5__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__6__count;
    __Vtask_tb_pair__DOT__ticks__6__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__7__count;
    __Vtask_tb_pair__DOT__ticks__7__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__8__count;
    __Vtask_tb_pair__DOT__ticks__8__count = 0;
    IData/*31:0*/ __Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_pair__DOT__ticks__0__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__0__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__0__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__0__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_pair__DOT__reset = 0U;
    vlSelfRef.tb_pair__DOT__found = 1U;
    vlSelfRef.tb_pair__DOT__pi = 7U;
    __Vtask_tb_pair__DOT__ticks__1__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__1__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__1__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_pair__DOT__n)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:9: Assertion failed in %Ntb_pair: background changed\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 9, "", false);
    }
    vlSelfRef.tb_pair__DOT__enable = 1U;
    __Vtask_tb_pair__DOT__ticks__2__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__2__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__2__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((1U != vlSelfRef.tb_pair__DOT__n) 
                      | (7U != (IData)(vlSelfRef.tb_pair__DOT__idx)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:10: Assertion failed in %Ntb_pair: entry mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 10, "", false);
    }
    vlSelfRef.tb_pair__DOT__pi = 2U;
    __Vtask_tb_pair__DOT__ticks__3__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__3__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__3__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_pair__DOT__n)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:11: Assertion failed in %Ntb_pair: loading triggered early\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 11, "", false);
    }
    vlSelfRef.tb_pair__DOT__swaps = 1U;
    __Vtask_tb_pair__DOT__ticks__4__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__4__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__4__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((2U != vlSelfRef.tb_pair__DOT__n) 
                      | (2U != (IData)(vlSelfRef.tb_pair__DOT__idx)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:12: Assertion failed in %Ntb_pair: commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 12, "", false);
    }
    vlSelfRef.tb_pair__DOT__swaps = 2U;
    __Vtask_tb_pair__DOT__ticks__5__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__5__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__5__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((3U != vlSelfRef.tb_pair__DOT__n)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:13: Assertion failed in %Ntb_pair: same track did not restart\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 13, "", false);
    }
    vlSelfRef.tb_pair__DOT__found = 0U;
    vlSelfRef.tb_pair__DOT__swaps = 3U;
    __Vtask_tb_pair__DOT__ticks__6__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__6__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__6__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((3U != vlSelfRef.tb_pair__DOT__n)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:14: Assertion failed in %Ntb_pair: missing match changed track\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 14, "", false);
    }
    vlSelfRef.tb_pair__DOT__found = 1U;
    vlSelfRef.tb_pair__DOT__swaps = 4U;
    __Vtask_tb_pair__DOT__ticks__7__count = 5U;
    __Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__7__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__7__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_pair__DOT__enable = 0U;
    __Vtask_tb_pair__DOT__ticks__8__count = 0x28U;
    __Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_pair__DOT__ticks__8__count;
    while (VL_LTS_III(32, 0U, __Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h01d94f08__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pair.clk)", 
                                                             "sim/media\tb_pair.sv", 
                                                             7);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             7);
        __Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_pair__DOT__ticks__8__tb_pair__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((3U != vlSelfRef.tb_pair__DOT__n)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_pair.sv:15: Assertion failed in %Ntb_pair: cancel failed\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_pair.sv", 15, "", false);
    }
    VL_WRITEF_NX("PASS pair entry, commit-only, same track restart, no-match, cancellation\n",0);
    VL_FINISH_MT("sim/media\\tb_pair.sv", 16, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pair___024root___dump_triggers__act(Vtb_pair___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pair___024root___eval_triggers__act(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_triggers__act\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_pair__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pair__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pair__DOT__clk__0 
        = vlSelfRef.tb_pair__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pair___024root___dump_triggers__act(vlSelf);
    }
#endif
}
