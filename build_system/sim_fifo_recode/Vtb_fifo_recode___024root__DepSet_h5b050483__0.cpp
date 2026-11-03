// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_recode.h for the primary calling header

#include "Vtb_fifo_recode__pch.h"
#include "Vtb_fifo_recode__Syms.h"
#include "Vtb_fifo_recode___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_fifo_recode__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_fifo_recode__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_fifo_recode__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_fifo_recode__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_fifo_recode__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_fifo_recode__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb_fifo_recode__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb_fifo_recode__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ tb_fifo_recode__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb_fifo_recode__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         40);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         40);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         40);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         40);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         40);
    vlSelfRef.tb_fifo_recode__DOT__wrst = 0U;
    vlSelfRef.tb_fifo_recode__DOT__rrst = 0U;
    tb_fifo_recode__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1388U;
    while (VL_LTS_III(32, 0U, tb_fifo_recode__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_recode.wclk)", 
                                                             "sim/platform\tb_fifo_recode.sv", 
                                                             41);
        tb_fifo_recode__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_fifo_recode__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__full1)) 
                             | (0x800U != vlSelfRef.tb_fifo_recode__DOT__writes)) 
                            | (0U != vlSelfRef.tb_fifo_recode__DOT__reads)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:42: Assertion failed in %Ntb_fifo_recode: full boundary\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 42, "", false);
    }
    vlSelfRef.tb_fifo_recode__DOT__phase = 1U;
    tb_fifo_recode__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x61a8U;
    while (VL_LTS_III(32, 0U, tb_fifo_recode__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_recode.wclk)", 
                                                             "sim/platform\tb_fifo_recode.sv", 
                                                             43);
        tb_fifo_recode__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_fifo_recode__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((VL_GTS_III(32, 0x1000U, vlSelfRef.tb_fifo_recode__DOT__writes) 
                      | VL_GTS_III(32, 0x800U, vlSelfRef.tb_fifo_recode__DOT__reads))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:44: Assertion failed in %Ntb_fifo_recode: insufficient wrap coverage\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 44, "", false);
    }
    vlSelfRef.tb_fifo_recode__DOT__phase = 2U;
    tb_fifo_recode__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x2710U;
    while (VL_LTS_III(32, 0U, tb_fifo_recode__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_he4fb7049__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_recode.rclk)", 
                                                             "sim/platform\tb_fifo_recode.sv", 
                                                             45);
        tb_fifo_recode__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_fifo_recode__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1)) 
                            | (vlSelfRef.tb_fifo_recode__DOT__reads 
                               != vlSelfRef.tb_fifo_recode__DOT__writes)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:46: Assertion failed in %Ntb_fifo_recode: drain lost samples\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 46, "", false);
    }
    vlSelfRef.tb_fifo_recode__DOT__wrst = 1U;
    vlSelfRef.tb_fifo_recode__DOT__rrst = 1U;
    vlSelfRef.tb_fifo_recode__DOT__phase = 0U;
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fifo_recode.wclk)", 
                                                         "sim/platform\tb_fifo_recode.sv", 
                                                         48);
    vlSelfRef.tb_fifo_recode__DOT__wrst = 0U;
    vlSelfRef.tb_fifo_recode__DOT__rrst = 0U;
    tb_fifo_recode__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x1388U;
    while (VL_LTS_III(32, 0U, tb_fifo_recode__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h085ef395__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_recode.wclk)", 
                                                             "sim/platform\tb_fifo_recode.sv", 
                                                             49);
        tb_fifo_recode__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_fifo_recode__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_recode__DOT__phase = 2U;
    tb_fifo_recode__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x1b58U;
    while (VL_LTS_III(32, 0U, tb_fifo_recode__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_he4fb7049__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_fifo_recode.rclk)", 
                                                             "sim/platform\tb_fifo_recode.sv", 
                                                             49);
        tb_fifo_recode__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb_fifo_recode__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (((0x800U != vlSelfRef.tb_fifo_recode__DOT__writes) 
                             | (0x800U != vlSelfRef.tb_fifo_recode__DOT__reads)) 
                            | (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:50: Assertion failed in %Ntb_fifo_recode: reset/refill\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 50, "", false);
    }
    VL_WRITEF_NX("PASS actual 2048-pair FIFO: full/empty, asynchronous clocks, random stalls, multiple wraps, data order and reset/refill against independent sequence and original FIFO\n",0);
    VL_FINISH_MT("sim/platform\\tb_fifo_recode.sv", 51, "");
}

VL_INLINE_OPT VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x77359400ULL, 
                                         nullptr, "sim/platform\tb_fifo_recode.sv", 
                                         53);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:53: Assertion failed in %Ntb_fifo_recode: timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 53, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__act(Vtb_fifo_recode___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo_recode___024root___eval_triggers__act(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_triggers__act\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__wclk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__wclk__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__rclk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__rclk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_fifo_recode__DOT__wclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__wclk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_fifo_recode__DOT__rclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__rclk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__wclk__0 
        = vlSelfRef.tb_fifo_recode__DOT__wclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__rclk__0 
        = vlSelfRef.tb_fifo_recode__DOT__rclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_recode___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_sequent__TOP__0(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_sequent__TOP__0\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g = 0;
    // Body
    vlSelfRef.__Vdly__tb_fifo_recode__DOT__writes = vlSelfRef.tb_fifo_recode__DOT__writes;
    vlSelfRef.__VdlySet__tb_fifo_recode__DOT__reference_fifo__DOT__ram9__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_fifo_recode__DOT__recoded_fifo__DOT__ram32__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_fifo_recode__DOT__wrst) {
        vlSelfRef.__Vdly__tb_fifo_recode__DOT__writes = 0U;
    } else {
        if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_fifo_recode__DOT__full0) 
                            != (IData)(vlSelfRef.tb_fifo_recode__DOT__full1)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__used0) 
                              != (IData)(vlSelfRef.tb_fifo_recode__DOT__used1))) 
                          | (0x800U < (IData)(vlSelfRef.tb_fifo_recode__DOT__used1)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:23: Assertion failed in %Ntb_fifo_recode: write state differs\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 23, "", false);
        }
        if (((IData)(vlSelfRef.tb_fifo_recode__DOT__push) 
             & (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__full1)))) {
            vlSelfRef.__Vdly__tb_fifo_recode__DOT__writes 
                = ((IData)(1U) + vlSelfRef.tb_fifo_recode__DOT__writes);
        }
    }
    if (((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__push) 
         & (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__wrst)))) {
        vlSelfRef.__VdlyVal__tb_fifo_recode__DOT__reference_fifo__DOT__ram9__DOT__mem__v0 
            = vlSelfRef.tb_fifo_recode__DOT__input_data;
        vlSelfRef.__VdlyDim0__tb_fifo_recode__DOT__reference_fifo__DOT__ram9__DOT__mem__v0 
            = (0x7ffU & (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wp));
        vlSelfRef.__VdlySet__tb_fifo_recode__DOT__reference_fifo__DOT__ram9__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__push) 
         & (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__wrst)))) {
        vlSelfRef.__VdlyVal__tb_fifo_recode__DOT__recoded_fifo__DOT__ram32__DOT__mem__v0 
            = (vlSelfRef.tb_fifo_recode__DOT__input_data 
               ^ (- (IData)((1U & (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp)))));
        vlSelfRef.__VdlyDim0__tb_fifo_recode__DOT__recoded_fifo__DOT__ram32__DOT__mem__v0 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__write_addr;
        vlSelfRef.__VdlySet__tb_fifo_recode__DOT__recoded_fifo__DOT__ram32__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_fifo_recode__DOT__wrst) {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg2 = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg2 = 0U;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wp = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp = 0U;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg1 = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg1 = 0U;
    } else {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg2 
            = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg1;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg2 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg1;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wp 
            = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wn;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wn;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg1 
            = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rgray;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg1 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rgray;
    }
    vlSelfRef.tb_fifo_recode__DOT__used0 = (0xfffU 
                                            & ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wp) 
                                               - ([&]() {
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g 
                        = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g)));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout))));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address 
        = (0x7ffU & (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g 
        = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address), 1U) 
                     ^ (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address)));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g 
        = ((0x3ffU & (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g)) 
           | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g)) 
                        ^ ((IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g) 
                           << 0xaU))));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__Vfuncout 
        = __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g;
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__write_addr 
        = __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__Vfuncout;
    vlSelfRef.tb_fifo_recode__DOT__used1 = (0xfffU 
                                            & ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp) 
                                               - ([&]() {
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g 
                        = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g)));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g)));
                    vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout))));
}

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_sequent__TOP__1(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_sequent__TOP__1\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__1__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__expected__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__1__i;
    __Vfunc_tb_fifo_recode__DOT__expected__1__i = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__2__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__expected__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__2__i;
    __Vfunc_tb_fifo_recode__DOT__expected__2__i = 0;
    IData/*31:0*/ __Vdly__tb_fifo_recode__DOT__reads;
    __Vdly__tb_fifo_recode__DOT__reads = 0;
    // Body
    __Vdly__tb_fifo_recode__DOT__reads = vlSelfRef.tb_fifo_recode__DOT__reads;
    if (vlSelfRef.tb_fifo_recode__DOT__rrst) {
        __Vdly__tb_fifo_recode__DOT__reads = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_fifo_recode__DOT__empty0) 
                          != (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:30: Assertion failed in %Ntb_fifo_recode: read state differs\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 30, "", false);
        }
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1)) 
                          & ((vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rdata_raw 
                              != vlSelfRef.tb_fifo_recode__DOT__data1) 
                             | (vlSelfRef.tb_fifo_recode__DOT__data1 
                                != ([&]() {
                                        __Vfunc_tb_fifo_recode__DOT__expected__1__i 
                                            = vlSelfRef.tb_fifo_recode__DOT__reads;
                                        __Vfunc_tb_fifo_recode__DOT__expected__1__Vfuncout 
                                            = (0x5432abcdU 
                                               ^ ((IData)(0x10203U) 
                                                  * __Vfunc_tb_fifo_recode__DOT__expected__1__i));
                                    }(), __Vfunc_tb_fifo_recode__DOT__expected__1__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:32: Assertion failed in %Ntb_fifo_recode: FIFO order/data mismatch reads=%0d got=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_recode__DOT__reads,
                         32,vlSelfRef.tb_fifo_recode__DOT__data1,
                         32,([&]() {
                            __Vfunc_tb_fifo_recode__DOT__expected__2__i 
                                = vlSelfRef.tb_fifo_recode__DOT__reads;
                            __Vfunc_tb_fifo_recode__DOT__expected__2__Vfuncout 
                                = (0x5432abcdU ^ ((IData)(0x10203U) 
                                                  * __Vfunc_tb_fifo_recode__DOT__expected__2__i));
                        }(), __Vfunc_tb_fifo_recode__DOT__expected__2__Vfuncout));
            VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 32, "", false);
        }
        if (((IData)(vlSelfRef.tb_fifo_recode__DOT__pop) 
             & (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1)))) {
            if (VL_UNLIKELY((VL_GTES_III(32, vlSelfRef.tb_fifo_recode__DOT__reads, vlSelfRef.tb_fifo_recode__DOT__writes)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_recode.sv:34: Assertion failed in %Ntb_fifo_recode: phantom sample\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/platform\\tb_fifo_recode.sv", 34, "", false);
            }
            __Vdly__tb_fifo_recode__DOT__reads = ((IData)(1U) 
                                                  + vlSelfRef.tb_fifo_recode__DOT__reads);
        }
    }
    if (vlSelfRef.tb_fifo_recode__DOT__rrst) {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rp = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rp = 0U;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rgray = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rgray = 0U;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg1 = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rp 
            = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rn;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rp 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rn;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg2 
            = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg1;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg2 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg1;
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rn), 1U) 
                         ^ (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rn)));
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rn), 1U) 
                         ^ (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rn)));
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg1 
            = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wgray;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg1 
            = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wgray;
    }
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rdata_raw 
        = vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__ram32__DOT__mem
        [vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__read_addr];
    vlSelfRef.tb_fifo_recode__DOT__reads = __Vdly__tb_fifo_recode__DOT__reads;
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rdata_raw 
        = vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__ram9__DOT__mem
        [(0x7ffU & (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rn))];
    vlSelfRef.tb_fifo_recode__DOT__data1 = (vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rdata_raw 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rp)))));
    vlSelfRef.tb_fifo_recode__DOT__empty0 = ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rgray) 
                                             == (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg2));
    vlSelfRef.tb_fifo_recode__DOT__empty1 = ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rgray) 
                                             == (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg2));
}
