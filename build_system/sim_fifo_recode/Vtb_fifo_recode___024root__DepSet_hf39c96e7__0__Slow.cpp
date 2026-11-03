// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_recode.h for the primary calling header

#include "Vtb_fifo_recode__pch.h"
#include "Vtb_fifo_recode___024root.h"

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_static__TOP(Vtb_fifo_recode___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_static(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_static\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fifo_recode___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__wclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__rclk__0 = 0U;
}

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_static__TOP(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_static__TOP\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_recode__DOT__wclk = 0U;
    vlSelfRef.tb_fifo_recode__DOT__rclk = 0U;
    vlSelfRef.tb_fifo_recode__DOT__wrst = 1U;
    vlSelfRef.tb_fifo_recode__DOT__rrst = 1U;
    vlSelfRef.tb_fifo_recode__DOT__phase = 0U;
    vlSelfRef.tb_fifo_recode__DOT__writes = 0U;
    vlSelfRef.tb_fifo_recode__DOT__reads = 0U;
    vlSelfRef.tb_fifo_recode__DOT__ws = 0x53a1U;
    vlSelfRef.tb_fifo_recode__DOT__rs = 0x71b9U;
    vlSelfRef.tb_fifo_recode__DOT__push = 0U;
    vlSelfRef.tb_fifo_recode__DOT__pop = 0U;
}

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_final(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_final\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__stl(Vtb_fifo_recode___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fifo_recode___024root___eval_phase__stl(Vtb_fifo_recode___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_settle(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_settle\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_recode___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_fifo_recode.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fifo_recode___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__stl(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___dump_triggers__stl\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo_recode___024root___stl_sequent__TOP__0(Vtb_fifo_recode___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_stl(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_stl\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_fifo_recode___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_fifo_recode___024root___stl_sequent__TOP__0(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___stl_sequent__TOP__0\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__0__i;
    __Vfunc_tb_fifo_recode__DOT__expected__0__i = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__address = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__4__g = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g = 0;
    // Body
    vlSelfRef.tb_fifo_recode__DOT__data1 = (vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rdata_raw 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rp)))));
    __Vfunc_tb_fifo_recode__DOT__expected__0__i = vlSelfRef.tb_fifo_recode__DOT__writes;
    __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout 
        = (0x5432abcdU ^ ((IData)(0x10203U) * __Vfunc_tb_fifo_recode__DOT__expected__0__i));
    vlSelfRef.tb_fifo_recode__DOT__input_data = __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout;
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
    vlSelfRef.tb_fifo_recode__DOT__empty0 = ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rgray) 
                                             == (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wg2));
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
    vlSelfRef.tb_fifo_recode__DOT__full0 = ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wgray) 
                                            == ((0xc00U 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg2) 
                                                      >> 0xaU)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rg2))));
    vlSelfRef.tb_fifo_recode__DOT__full1 = ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wgray) 
                                            == ((0xc00U 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg2) 
                                                      >> 0xaU)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rg2))));
    vlSelfRef.tb_fifo_recode__DOT__empty1 = ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rgray) 
                                             == (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wg2));
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty0)) 
                        & (IData)(vlSelfRef.tb_fifo_recode__DOT__pop))));
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__push 
        = ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__full0)) 
           & (IData)(vlSelfRef.tb_fifo_recode__DOT__push));
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__push 
        = ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__full1)) 
           & (IData)(vlSelfRef.tb_fifo_recode__DOT__push));
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1)) 
                        & (IData)(vlSelfRef.tb_fifo_recode__DOT__pop))));
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wp) 
                     + (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__push)));
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp) 
                     + (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__push)));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address 
        = (0x7ffU & (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rn));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g 
        = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address), 1U) 
                     ^ (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address)));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g 
        = ((0x3ffU & (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g)) 
           | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g)) 
                        ^ ((IData)(__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g) 
                           << 0xaU))));
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__Vfuncout 
        = __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g;
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__read_addr 
        = __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__Vfuncout;
}

VL_ATTR_COLD void Vtb_fifo_recode___024root___eval_triggers__stl(Vtb_fifo_recode___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fifo_recode___024root___eval_phase__stl(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_phase__stl\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fifo_recode___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fifo_recode___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__act(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___dump_triggers__act\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge tb_fifo_recode.wclk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_fifo_recode.rclk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_fifo_recode.wclk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_fifo_recode.rclk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__nba(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___dump_triggers__nba\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge tb_fifo_recode.wclk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_fifo_recode.rclk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_fifo_recode.wclk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_fifo_recode.rclk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo_recode___024root___ctor_var_reset(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___ctor_var_reset\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_fifo_recode__DOT__wclk = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__rclk = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__wrst = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__rrst = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__phase = VL_RAND_RESET_I(32);
    vlSelf->tb_fifo_recode__DOT__writes = VL_RAND_RESET_I(32);
    vlSelf->tb_fifo_recode__DOT__reads = VL_RAND_RESET_I(32);
    vlSelf->tb_fifo_recode__DOT__ws = VL_RAND_RESET_I(16);
    vlSelf->tb_fifo_recode__DOT__rs = VL_RAND_RESET_I(16);
    vlSelf->tb_fifo_recode__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__full0 = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__full1 = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__empty0 = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__empty1 = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__used0 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__used1 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_fifo_recode__DOT__input_data = VL_RAND_RESET_I(32);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__rdata_raw = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__wp = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__rp = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__wgray = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__rgray = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__rg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__rg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__wg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__wg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__rn = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT__wn = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__rdata_raw = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__wp = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__rp = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__wgray = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__rgray = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__rg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__rg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__wg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__wg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__rn = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__wn = VL_RAND_RESET_I(12);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__write_addr = VL_RAND_RESET_I(11);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT__read_addr = VL_RAND_RESET_I(11);
    vlSelf->tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__tb_fifo_recode__DOT__writes = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0 = VL_RAND_RESET_I(11);
    vlSelf->__VdlySet__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0 = VL_RAND_RESET_I(11);
    vlSelf->__VdlySet__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__wclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_recode__DOT__rclk__0 = VL_RAND_RESET_I(1);
}
