// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_audio_completion.h for the primary calling header

#include "Vtb_audio_completion__pch.h"
#include "Vtb_audio_completion__Syms.h"
#include "Vtb_audio_completion___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__0(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__0__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__0__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__1__n;
    __Vtask_tb_audio_completion__DOT__ticks__1__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__3__n;
    __Vtask_tb_audio_completion__DOT__ticks__3__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__4__n;
    __Vtask_tb_audio_completion__DOT__ticks__4__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__5__n;
    __Vtask_tb_audio_completion__DOT__ticks__5__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__6__n;
    __Vtask_tb_audio_completion__DOT__ticks__6__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__7__n;
    __Vtask_tb_audio_completion__DOT__ticks__7__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__8__n;
    __Vtask_tb_audio_completion__DOT__ticks__8__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__9__n;
    __Vtask_tb_audio_completion__DOT__ticks__9__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__11__n;
    __Vtask_tb_audio_completion__DOT__ticks__11__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__12__n;
    __Vtask_tb_audio_completion__DOT__ticks__12__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__13__n;
    __Vtask_tb_audio_completion__DOT__ticks__13__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__14__n;
    __Vtask_tb_audio_completion__DOT__ticks__14__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__16__n;
    __Vtask_tb_audio_completion__DOT__ticks__16__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__17__n;
    __Vtask_tb_audio_completion__DOT__ticks__17__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__18__n;
    __Vtask_tb_audio_completion__DOT__ticks__18__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__19__n;
    __Vtask_tb_audio_completion__DOT__ticks__19__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__20__n;
    __Vtask_tb_audio_completion__DOT__ticks__20__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__21__n;
    __Vtask_tb_audio_completion__DOT__ticks__21__n = 0;
    IData/*31:0*/ __Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_audio_completion__DOT__ticks__0__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__0__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__0__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__0__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__reset = 0U;
    vlSelfRef.tb_audio_completion__DOT__params = 0x600000004ULL;
    __Vtask_tb_audio_completion__DOT__ticks__1__n = 3U;
    __Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__1__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__1__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((3U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)) 
                      | (4U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:10: Assertion failed in %Ntb_audio_completion: must wait for new flush\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 10, "", false);
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__3__n = 5U;
    __Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__3__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__3__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__4__n = 2U;
    __Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__4__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__4__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((3U != (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:11: Assertion failed in %Ntb_audio_completion: not ready after flush\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 11, "", false);
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__5__n = 3U;
    __Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__5__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__5__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__6__n = 4U;
    __Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__6__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__6__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((3U != (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:12: Assertion failed in %Ntb_audio_completion: ended before last consumed pair\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 12, "", false);
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__7__n = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__7__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__7__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__8__n = 2U;
    __Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__8__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__8__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((3U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)) 
                      | (0x101U != (((4U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)) 
                                     << 8U) | (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__ticket))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:13: Assertion failed in %Ntb_audio_completion: missing true EOF\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 13, "", false);
    }
    vlSelfRef.tb_audio_completion__DOT__params = 0xb00000003ULL;
    __Vtask_tb_audio_completion__DOT__ticks__9__n = 3U;
    __Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__9__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__9__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__11__n = 5U;
    __Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__11__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__11__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__12__n = 2U;
    __Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__12__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__12__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__13__n = 0x28U;
    __Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__13__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__13__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 0U;
    if (VL_UNLIKELY((((3U != (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)) 
                      | (4U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:15: Assertion failed in %Ntb_audio_completion: loop spuriously completed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 15, "", false);
    }
    vlSelfRef.tb_audio_completion__DOT__params = 0xc00000000ULL;
    __Vtask_tb_audio_completion__DOT__ticks__14__n = 3U;
    __Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__14__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__14__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__16__n = 5U;
    __Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__16__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__16__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__17__n = 2U;
    __Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__17__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__17__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((3U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)) 
                      | (4U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:16: Assertion failed in %Ntb_audio_completion: stop not silent\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 16, "", false);
    }
    vlSelfRef.tb_audio_completion__DOT__params = 0x1200000002ULL;
    vlSelfRef.tb_audio_completion__DOT__flushing = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__18__n = 3U;
    __Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__18__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__18__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__flushing = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__19__n = 3U;
    __Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__19__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__19__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 1U;
    __Vtask_tb_audio_completion__DOT__ticks__20__n = 2U;
    __Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__20__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__20__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_audio_completion__DOT__pop = 0U;
    __Vtask_tb_audio_completion__DOT__ticks__21__n = 2U;
    __Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_audio_completion__DOT__ticks__21__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h570dfadf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_audio_completion.clk)", 
                                                             "sim/platform\tb_audio_completion.sv", 
                                                             6);
        __Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_audio_completion__DOT__ticks__21__tb_audio_completion__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((4U != (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state)) 
                      | (4U != (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__ticket)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_audio_completion.sv:18: Assertion failed in %Ntb_audio_completion: ticket/flush ordering\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_audio_completion.sv", 18, "", false);
    }
    VL_WRITEF_NX("PASS consumed-sample completion, pause gaps, flush/ticket ordering, loops and stop\n",0);
    VL_FINISH_MT("sim/platform\\tb_audio_completion.sv", 19, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_audio_completion___024root___dump_triggers__act(Vtb_audio_completion___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_audio_completion___024root___eval_triggers__act(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_triggers__act\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_audio_completion__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_audio_completion__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_audio_completion__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_audio_completion__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_audio_completion__DOT__clk__0 
        = vlSelfRef.tb_audio_completion__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_audio_completion___024root___dump_triggers__act(vlSelf);
    }
#endif
}
