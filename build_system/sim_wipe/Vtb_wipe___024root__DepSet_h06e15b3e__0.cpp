// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wipe.h for the primary calling header

#include "Vtb_wipe__pch.h"
#include "Vtb_wipe__Syms.h"
#include "Vtb_wipe___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_wipe___024root___eval_initial__TOP__Vtiming__0(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__0__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__0__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__2__n;
    __Vtask_tb_wipe__DOT__cycles__2__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__4__n;
    __Vtask_tb_wipe__DOT__cycles__4__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__5__n;
    __Vtask_tb_wipe__DOT__cycles__5__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__7__n;
    __Vtask_tb_wipe__DOT__cycles__7__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__9__n;
    __Vtask_tb_wipe__DOT__cycles__9__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__10__n;
    __Vtask_tb_wipe__DOT__cycles__10__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__11__n;
    __Vtask_tb_wipe__DOT__cycles__11__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__13__n;
    __Vtask_tb_wipe__DOT__cycles__13__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__14__n;
    __Vtask_tb_wipe__DOT__cycles__14__n = 0;
    IData/*31:0*/ __Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_wipe__DOT__cycles__0__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__0__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__0__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__0__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_wipe__DOT__reset = 0U;
    vlSelfRef.tb_wipe__DOT__used = 0x7f8U;
    vlSelfRef.tb_wipe__DOT__lv = 1U;
    co_await vlSelfRef.__VtrigSched_hedfbcd30__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_wipe.clk)", 
                                                         "sim/system\tb_wipe.sv", 
                                                         21);
    while ((1U & (~ ((~ (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__video_req)) 
                     & (IData)(vlSelfRef.tb_wipe__DOT__req))))) {
        co_await vlSelfRef.__VtrigSched_hedfbcd30__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             21);
    }
    co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wipe.clk)", 
                                                         "sim/system\tb_wipe.sv", 
                                                         21);
    vlSelfRef.tb_wipe__DOT__lv = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_wipe__DOT__ack)))) {
        co_await vlSelfRef.__VtrigSched_hd4958d8b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_wipe.ack)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             21);
    }
    __Vtask_tb_wipe__DOT__cycles__2__n = 3U;
    __Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_wipe__DOT__cycles__2__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__2__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_wipe__DOT__used = 0U;
    VL_WRITEF_NX("FRAME begin step=%0d t=%0t\n",0,32,
                 vlSelfRef.tb_wipe__DOT__step,64,VL_TIME_UNITED_Q(1000),
                 -9);
    vlSelfRef.tb_wipe__DOT__monitor = 0U;
    vlSelfRef.tb_wipe__DOT__ft = (1U & (~ (IData)(vlSelfRef.tb_wipe__DOT__ft)));
    __Vtask_tb_wipe__DOT__cycles__4__n = 0x64U;
    __Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_wipe__DOT__cycles__4__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__4__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_wipe__DOT__monitor = 1U;
    vlSelfRef.tb_wipe__DOT__reads = 0U;
    __Vtask_tb_wipe__DOT__cycles__5__n = 0x2710U;
    __Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_wipe__DOT__cycles__5__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__5__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 0x1f4U, vlSelfRef.tb_wipe__DOT__reads)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:22: Assertion failed in %Ntb_wipe.frame: Read stream stopped\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_wipe.sv", 22, "", false);
    }
    vlSelfRef.tb_wipe__DOT__monitor = 0U;
    VL_WRITEF_NX("FRAME end step=%0d t=%0t\n",0,32,
                 vlSelfRef.tb_wipe__DOT__step,64,VL_TIME_UNITED_Q(1000),
                 -9);
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_wipe__DOT__display)) 
                             | (~ (IData)(vlSelfRef.tb_wipe__DOT__front))) 
                            | (1U != vlSelfRef.tb_wipe__DOT__swaps)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:24: Assertion failed in %Ntb_wipe: Initial frame must commit immediately\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_wipe.sv", 24, "", false);
    }
    vlSelfRef.tb_wipe__DOT__used = 0x7f8U;
    vlSelfRef.tb_wipe__DOT__lv = 1U;
    co_await vlSelfRef.__VtrigSched_hedfbcd30__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_wipe.clk)", 
                                                         "sim/system\tb_wipe.sv", 
                                                         21);
    while ((1U & (~ ((~ (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__video_req)) 
                     & (IData)(vlSelfRef.tb_wipe__DOT__req))))) {
        co_await vlSelfRef.__VtrigSched_hedfbcd30__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             21);
    }
    co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wipe.clk)", 
                                                         "sim/system\tb_wipe.sv", 
                                                         21);
    vlSelfRef.tb_wipe__DOT__lv = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_wipe__DOT__ack)))) {
        co_await vlSelfRef.__VtrigSched_hd4958d8b__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_wipe.ack)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             21);
    }
    __Vtask_tb_wipe__DOT__cycles__7__n = 3U;
    __Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_wipe__DOT__cycles__7__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__7__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_wipe__DOT__used = 0U;
    vlSelfRef.tb_wipe__DOT__step = 1U;
    while (VL_GTES_III(32, 0xaU, vlSelfRef.tb_wipe__DOT__step)) {
        VL_WRITEF_NX("FRAME begin step=%0d t=%0t\n",0,
                     32,vlSelfRef.tb_wipe__DOT__step,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_wipe__DOT__monitor = 0U;
        vlSelfRef.tb_wipe__DOT__ft = (1U & (~ (IData)(vlSelfRef.tb_wipe__DOT__ft)));
        __Vtask_tb_wipe__DOT__cycles__9__n = 0x64U;
        __Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_wipe__DOT__cycles__9__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wipe.clk)", 
                                                                 "sim/system\tb_wipe.sv", 
                                                                 20);
            __Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_wipe__DOT__cycles__9__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_wipe__DOT__monitor = 1U;
        vlSelfRef.tb_wipe__DOT__reads = 0U;
        __Vtask_tb_wipe__DOT__cycles__10__n = 0x2710U;
        __Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_wipe__DOT__cycles__10__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wipe.clk)", 
                                                                 "sim/system\tb_wipe.sv", 
                                                                 20);
            __Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_wipe__DOT__cycles__10__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        if (VL_UNLIKELY((VL_GTS_III(32, 0x1f4U, vlSelfRef.tb_wipe__DOT__reads)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:22: Assertion failed in %Ntb_wipe.frame: Read stream stopped\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_wipe.sv", 22, "", false);
        }
        vlSelfRef.tb_wipe__DOT__monitor = 0U;
        VL_WRITEF_NX("FRAME end step=%0d t=%0t\n",0,
                     32,vlSelfRef.tb_wipe__DOT__step,
                     64,VL_TIME_UNITED_Q(1000),-9);
        if (VL_UNLIKELY(((1U & ((1U != vlSelfRef.tb_wipe__DOT__swaps) 
                                | (~ (IData)(vlSelfRef.tb_wipe__DOT__front))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:27: Assertion failed in %Ntb_wipe: Premature frame commit\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_wipe.sv", 27, "", false);
        }
        vlSelfRef.tb_wipe__DOT__lv = 1U;
        __Vtask_tb_wipe__DOT__cycles__11__n = 0xaU;
        __Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_wipe__DOT__cycles__11__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_wipe.clk)", 
                                                                 "sim/system\tb_wipe.sv", 
                                                                 20);
            __Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_wipe__DOT__cycles__11__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__video_req)) 
                          & (IData)(vlSelfRef.tb_wipe__DOT__req))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:28: Assertion failed in %Ntb_wipe: Back frame overwritten during transition\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_wipe.sv", 28, "", false);
        }
        vlSelfRef.tb_wipe__DOT__lv = 0U;
        vlSelfRef.tb_wipe__DOT__step = ((IData)(1U) 
                                        + vlSelfRef.tb_wipe__DOT__step);
    }
    vlSelfRef.tb_wipe__DOT__step = 0xbU;
    VL_WRITEF_NX("FRAME begin step=%0d t=%0t\n",0,32,
                 vlSelfRef.tb_wipe__DOT__step,64,VL_TIME_UNITED_Q(1000),
                 -9);
    vlSelfRef.tb_wipe__DOT__monitor = 0U;
    vlSelfRef.tb_wipe__DOT__ft = (1U & (~ (IData)(vlSelfRef.tb_wipe__DOT__ft)));
    __Vtask_tb_wipe__DOT__cycles__13__n = 0x64U;
    __Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_wipe__DOT__cycles__13__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__13__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_wipe__DOT__monitor = 1U;
    vlSelfRef.tb_wipe__DOT__reads = 0U;
    __Vtask_tb_wipe__DOT__cycles__14__n = 0x2710U;
    __Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_wipe__DOT__cycles__14__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hedfbc5c1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wipe.clk)", 
                                                             "sim/system\tb_wipe.sv", 
                                                             20);
        __Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_wipe__DOT__cycles__14__tb_wipe__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((VL_GTS_III(32, 0x1f4U, vlSelfRef.tb_wipe__DOT__reads)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:22: Assertion failed in %Ntb_wipe.frame: Read stream stopped\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_wipe.sv", 22, "", false);
    }
    vlSelfRef.tb_wipe__DOT__monitor = 0U;
    VL_WRITEF_NX("FRAME end step=%0d t=%0t\n",0,32,
                 vlSelfRef.tb_wipe__DOT__step,64,VL_TIME_UNITED_Q(1000),
                 -9);
    if (VL_UNLIKELY((((2U != vlSelfRef.tb_wipe__DOT__swaps) 
                      | (IData)(vlSelfRef.tb_wipe__DOT__front))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:30: Assertion failed in %Ntb_wipe: Wipe did not finish\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_wipe.sv", 30, "", false);
    }
    VL_WRITEF_NX("PASS 10-step frame-boundary wipe, per-burst old/new bank selection, no early commit or back-frame overwrite\n",0);
    VL_FINISH_MT("sim/system\\tb_wipe.sv", 31, "");
}

VL_INLINE_OPT VlCoroutine Vtb_wipe___024root___eval_initial__TOP__Vtiming__1(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2540be400ULL, 
                                         nullptr, "sim/system\tb_wipe.sv", 
                                         33);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:33: Assertion failed in %Ntb_wipe: Wipe timeout state=%0# back=%0# display=%0# step=%0d lv=%0# used=%0# addr=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 2,(IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state),
                 1,vlSelfRef.tb_wipe__DOT__dut__DOT__back_ready,
                 1,(IData)(vlSelfRef.tb_wipe__DOT__display),
                 32,vlSelfRef.tb_wipe__DOT__step,1,
                 (IData)(vlSelfRef.tb_wipe__DOT__lv),
                 12,vlSelfRef.tb_wipe__DOT__used,18,
                 vlSelfRef.tb_wipe__DOT__dut__DOT__rd_addr);
    VL_STOP_MT("sim/system\\tb_wipe.sv", 33, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wipe___024root___dump_triggers__act(Vtb_wipe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_wipe___024root___eval_triggers__act(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_triggers__act\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_wipe__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_wipe__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_wipe__DOT__ack) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__ack__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__clk__0 
        = vlSelfRef.tb_wipe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__ack__0 
        = vlSelfRef.tb_wipe__DOT__ack;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_wipe___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_wipe___024root___nba_sequent__TOP__0(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___nba_sequent__TOP__0\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_wipe__DOT__dut__DOT__transition_active;
    __Vdly__tb_wipe__DOT__dut__DOT__transition_active = 0;
    SData/*8:0*/ __Vdly__tb_wipe__DOT__dut__DOT__wipe_words;
    __Vdly__tb_wipe__DOT__dut__DOT__wipe_words = 0;
    SData/*8:0*/ __Vdly__tb_wipe__DOT__dut__DOT__rd_x;
    __Vdly__tb_wipe__DOT__dut__DOT__rd_x = 0;
    CData/*1:0*/ __Vdly__tb_wipe__DOT__dut__DOT__state;
    __Vdly__tb_wipe__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_wipe__DOT__dut__DOT__last_frame;
    __Vdly__tb_wipe__DOT__dut__DOT__last_frame = 0;
    CData/*0:0*/ __Vdly__tb_wipe__DOT__dut__DOT__frame_pending;
    __Vdly__tb_wipe__DOT__dut__DOT__frame_pending = 0;
    CData/*5:0*/ __Vdly__tb_wipe__DOT__dut__DOT__flush;
    __Vdly__tb_wipe__DOT__dut__DOT__flush = 0;
    IData/*17:0*/ __Vdly__tb_wipe__DOT__dut__DOT__rd_addr;
    __Vdly__tb_wipe__DOT__dut__DOT__rd_addr = 0;
    CData/*0:0*/ __Vdly__tb_wipe__DOT__dut__DOT__back_ready;
    __Vdly__tb_wipe__DOT__dut__DOT__back_ready = 0;
    CData/*2:0*/ __Vdly__tb_wipe__DOT__dut__DOT__beat;
    __Vdly__tb_wipe__DOT__dut__DOT__beat = 0;
    CData/*0:0*/ __Vdly__tb_wipe__DOT__display;
    __Vdly__tb_wipe__DOT__display = 0;
    CData/*0:0*/ __Vdly__tb_wipe__DOT__front;
    __Vdly__tb_wipe__DOT__front = 0;
    IData/*31:0*/ __Vdly__tb_wipe__DOT__swaps;
    __Vdly__tb_wipe__DOT__swaps = 0;
    IData/*31:0*/ __Vdly__tb_wipe__DOT__dut__DOT__frames_written;
    __Vdly__tb_wipe__DOT__dut__DOT__frames_written = 0;
    IData/*31:0*/ __Vdly__tb_wipe__DOT__dut__DOT__dma_reads;
    __Vdly__tb_wipe__DOT__dut__DOT__dma_reads = 0;
    CData/*0:0*/ __Vdly__tb_wipe__DOT__dut__DOT__transaction_last;
    __Vdly__tb_wipe__DOT__dut__DOT__transaction_last = 0;
    // Body
    __Vdly__tb_wipe__DOT__dut__DOT__last_frame = vlSelfRef.tb_wipe__DOT__dut__DOT__last_frame;
    __Vdly__tb_wipe__DOT__dut__DOT__beat = vlSelfRef.tb_wipe__DOT__dut__DOT__beat;
    __Vdly__tb_wipe__DOT__swaps = vlSelfRef.tb_wipe__DOT__swaps;
    __Vdly__tb_wipe__DOT__dut__DOT__frames_written 
        = vlSelfRef.tb_wipe__DOT__dut__DOT__frames_written;
    __Vdly__tb_wipe__DOT__dut__DOT__dma_reads = vlSelfRef.tb_wipe__DOT__dut__DOT__dma_reads;
    __Vdly__tb_wipe__DOT__dut__DOT__transaction_last 
        = vlSelfRef.tb_wipe__DOT__dut__DOT__transaction_last;
    __Vdly__tb_wipe__DOT__dut__DOT__transition_active 
        = vlSelfRef.tb_wipe__DOT__dut__DOT__transition_active;
    __Vdly__tb_wipe__DOT__dut__DOT__wipe_words = vlSelfRef.tb_wipe__DOT__dut__DOT__wipe_words;
    __Vdly__tb_wipe__DOT__dut__DOT__rd_x = vlSelfRef.tb_wipe__DOT__dut__DOT__rd_x;
    __Vdly__tb_wipe__DOT__front = vlSelfRef.tb_wipe__DOT__front;
    __Vdly__tb_wipe__DOT__dut__DOT__state = vlSelfRef.tb_wipe__DOT__dut__DOT__state;
    __Vdly__tb_wipe__DOT__dut__DOT__frame_pending = vlSelfRef.tb_wipe__DOT__dut__DOT__frame_pending;
    __Vdly__tb_wipe__DOT__dut__DOT__flush = vlSelfRef.tb_wipe__DOT__dut__DOT__flush;
    __Vdly__tb_wipe__DOT__dut__DOT__back_ready = vlSelfRef.tb_wipe__DOT__dut__DOT__back_ready;
    __Vdly__tb_wipe__DOT__display = vlSelfRef.tb_wipe__DOT__display;
    __Vdly__tb_wipe__DOT__dut__DOT__rd_addr = vlSelfRef.tb_wipe__DOT__dut__DOT__rd_addr;
    if ((((IData)(vlSelfRef.tb_wipe__DOT__monitor) 
          & (IData)(vlSelfRef.tb_wipe__DOT__req)) & (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__video_req))) {
        vlSelfRef.tb_wipe__DOT__expected_bank = ((0xbU 
                                                  == vlSelfRef.tb_wipe__DOT__step)
                                                  ? 0U
                                                  : 
                                                 ((VL_LTS_III(32, 0U, vlSelfRef.tb_wipe__DOT__step) 
                                                   & (VL_MODDIV_III(32, 
                                                                    (0x3ffffU 
                                                                     & vlSelfRef.tb_wipe__DOT__addr), (IData)(0x140U)) 
                                                      < 
                                                      VL_SHIFTL_III(32,32,32, vlSelfRef.tb_wipe__DOT__step, 5U)))
                                                   ? 0U
                                                   : 1U));
        if (VL_UNLIKELY((((1U & (vlSelfRef.tb_wipe__DOT__addr 
                                 >> 0x12U)) != (IData)(vlSelfRef.tb_wipe__DOT__expected_bank))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:15: Assertion failed in %Ntb_wipe: Wipe bank mismatch step=%0d addr=%x front=%b swaps=%0# active=%b wipe=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_wipe__DOT__step,
                         21,vlSelfRef.tb_wipe__DOT__addr,
                         1,(IData)(vlSelfRef.tb_wipe__DOT__front),
                         32,vlSelfRef.tb_wipe__DOT__swaps,
                         1,(IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__transition_active),
                         9,vlSelfRef.tb_wipe__DOT__dut__DOT__wipe_words);
            VL_STOP_MT("sim/system\\tb_wipe.sv", 15, "", false);
        }
        vlSelfRef.tb_wipe__DOT__reads = ((IData)(1U) 
                                         + vlSelfRef.tb_wipe__DOT__reads);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_wipe__DOT__fault))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_wipe.sv:18: Assertion failed in %Ntb_wipe: Framebuffer fault\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_wipe.sv", 18, "", false);
    }
    if (vlSelfRef.tb_wipe__DOT__reset) {
        __Vdly__tb_wipe__DOT__dut__DOT__transition_active = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__wipe_words = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__rd_x = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__state = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__last_frame = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__frame_pending = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__flush = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__rd_addr = 0x25800U;
        __Vdly__tb_wipe__DOT__dut__DOT__back_ready = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__beat = 0U;
        __Vdly__tb_wipe__DOT__display = 0U;
        __Vdly__tb_wipe__DOT__front = 0U;
        __Vdly__tb_wipe__DOT__swaps = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__frames_written = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__dma_reads = 0U;
        vlSelfRef.tb_wipe__DOT__fault = 0U;
        vlSelfRef.tb_wipe__DOT__ack = 0U;
        __Vdly__tb_wipe__DOT__dut__DOT__transaction_last = 0U;
    } else {
        vlSelfRef.tb_wipe__DOT__ack = 0U;
        if (((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__ft2) 
             != (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__last_frame))) {
            __Vdly__tb_wipe__DOT__dut__DOT__last_frame 
                = vlSelfRef.tb_wipe__DOT__dut__DOT__ft2;
            __Vdly__tb_wipe__DOT__dut__DOT__frame_pending = 1U;
        }
        if ((0U != (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__flush))) {
            __Vdly__tb_wipe__DOT__dut__DOT__flush = 
                (0x3fU & ((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__flush) 
                          - (IData)(1U)));
        }
        if (((0U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state)) 
             & (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__frame_pending))) {
            __Vdly__tb_wipe__DOT__dut__DOT__frame_pending = 0U;
            if (vlSelfRef.tb_wipe__DOT__dut__DOT__enabled) {
                if (vlSelfRef.tb_wipe__DOT__dut__DOT__back_ready) {
                    if ((1U & ((~ (IData)(vlSelfRef.tb_wipe__DOT__display)) 
                               | ((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__transition_active) 
                                  & (0x140U <= (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__wipe_words)))))) {
                        __Vdly__tb_wipe__DOT__front 
                            = (1U & (~ (IData)(vlSelfRef.tb_wipe__DOT__front)));
                        __Vdly__tb_wipe__DOT__swaps 
                            = ((IData)(1U) + vlSelfRef.tb_wipe__DOT__swaps);
                        __Vdly__tb_wipe__DOT__dut__DOT__transition_active = 0U;
                        __Vdly__tb_wipe__DOT__dut__DOT__wipe_words = 0U;
                        __Vdly__tb_wipe__DOT__display = 1U;
                        __Vdly__tb_wipe__DOT__dut__DOT__back_ready = 0U;
                    } else if (vlSelfRef.tb_wipe__DOT__dut__DOT__transition_active) {
                        __Vdly__tb_wipe__DOT__dut__DOT__wipe_words 
                            = (0x1ffU & ((IData)(0x20U) 
                                         + (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__wipe_words)));
                    } else {
                        __Vdly__tb_wipe__DOT__dut__DOT__transition_active = 1U;
                        __Vdly__tb_wipe__DOT__dut__DOT__wipe_words = 0x20U;
                    }
                }
                __Vdly__tb_wipe__DOT__dut__DOT__flush = 0x1fU;
                __Vdly__tb_wipe__DOT__dut__DOT__rd_addr = 0U;
                __Vdly__tb_wipe__DOT__dut__DOT__rd_x = 0U;
            }
        } else if ((0U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_wipe__DOT__req) {
                if (vlSelfRef.tb_wipe__DOT__dut__DOT__video_req) {
                    __Vdly__tb_wipe__DOT__dut__DOT__state = 1U;
                } else {
                    __Vdly__tb_wipe__DOT__dut__DOT__state = 3U;
                    __Vdly__tb_wipe__DOT__dut__DOT__transaction_last = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_wipe__DOT__rsp) {
                __Vdly__tb_wipe__DOT__dut__DOT__rd_addr 
                    = (0x3ffffU & ((IData)(8U) + vlSelfRef.tb_wipe__DOT__dut__DOT__rd_addr));
                __Vdly__tb_wipe__DOT__dut__DOT__rd_x 
                    = ((0x138U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__rd_x))
                        ? 0U : (0x1ffU & ((IData)(8U) 
                                          + (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__rd_x))));
                __Vdly__tb_wipe__DOT__dut__DOT__dma_reads 
                    = ((IData)(1U) + vlSelfRef.tb_wipe__DOT__dut__DOT__dma_reads);
                __Vdly__tb_wipe__DOT__dut__DOT__beat = 0U;
                __Vdly__tb_wipe__DOT__dut__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state))) {
            if ((7U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__beat))) {
                __Vdly__tb_wipe__DOT__dut__DOT__state = 0U;
            } else {
                __Vdly__tb_wipe__DOT__dut__DOT__beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__beat)));
            }
        } else if ((3U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_wipe__DOT__rsp) {
                __Vdly__tb_wipe__DOT__dut__DOT__state = 0U;
                vlSelfRef.tb_wipe__DOT__ack = 1U;
                if (vlSelfRef.tb_wipe__DOT__dut__DOT__transaction_last) {
                    __Vdly__tb_wipe__DOT__dut__DOT__frames_written 
                        = ((IData)(1U) + vlSelfRef.tb_wipe__DOT__dut__DOT__frames_written);
                    __Vdly__tb_wipe__DOT__dut__DOT__back_ready = 1U;
                }
            }
        } else {
            vlSelfRef.tb_wipe__DOT__fault = 1U;
            __Vdly__tb_wipe__DOT__dut__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_wipe__DOT__dut__DOT__last_frame = __Vdly__tb_wipe__DOT__dut__DOT__last_frame;
    vlSelfRef.tb_wipe__DOT__dut__DOT__beat = __Vdly__tb_wipe__DOT__dut__DOT__beat;
    vlSelfRef.tb_wipe__DOT__dut__DOT__frames_written 
        = __Vdly__tb_wipe__DOT__dut__DOT__frames_written;
    vlSelfRef.tb_wipe__DOT__dut__DOT__dma_reads = __Vdly__tb_wipe__DOT__dut__DOT__dma_reads;
    vlSelfRef.tb_wipe__DOT__dut__DOT__transaction_last 
        = __Vdly__tb_wipe__DOT__dut__DOT__transaction_last;
    vlSelfRef.tb_wipe__DOT__swaps = __Vdly__tb_wipe__DOT__swaps;
    vlSelfRef.tb_wipe__DOT__dut__DOT__rd_x = __Vdly__tb_wipe__DOT__dut__DOT__rd_x;
    vlSelfRef.tb_wipe__DOT__dut__DOT__transition_active 
        = __Vdly__tb_wipe__DOT__dut__DOT__transition_active;
    vlSelfRef.tb_wipe__DOT__dut__DOT__wipe_words = __Vdly__tb_wipe__DOT__dut__DOT__wipe_words;
    vlSelfRef.tb_wipe__DOT__front = __Vdly__tb_wipe__DOT__front;
    vlSelfRef.tb_wipe__DOT__dut__DOT__state = __Vdly__tb_wipe__DOT__dut__DOT__state;
    vlSelfRef.tb_wipe__DOT__dut__DOT__frame_pending 
        = __Vdly__tb_wipe__DOT__dut__DOT__frame_pending;
    vlSelfRef.tb_wipe__DOT__dut__DOT__flush = __Vdly__tb_wipe__DOT__dut__DOT__flush;
    vlSelfRef.tb_wipe__DOT__dut__DOT__back_ready = __Vdly__tb_wipe__DOT__dut__DOT__back_ready;
    vlSelfRef.tb_wipe__DOT__display = __Vdly__tb_wipe__DOT__display;
    vlSelfRef.tb_wipe__DOT__dut__DOT__rd_addr = __Vdly__tb_wipe__DOT__dut__DOT__rd_addr;
    vlSelfRef.tb_wipe__DOT__dut__DOT__enabled = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_wipe__DOT__fault)));
    vlSelfRef.tb_wipe__DOT__rsp = vlSelfRef.tb_wipe__DOT__req;
    vlSelfRef.tb_wipe__DOT__dut__DOT__ft2 = ((1U & 
                                              (~ (IData)(vlSelfRef.tb_wipe__DOT__reset))) 
                                             && (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__ft1));
    vlSelfRef.tb_wipe__DOT__dut__DOT__ft1 = ((1U & 
                                              (~ (IData)(vlSelfRef.tb_wipe__DOT__reset))) 
                                             && (IData)(vlSelfRef.tb_wipe__DOT__ft));
}
