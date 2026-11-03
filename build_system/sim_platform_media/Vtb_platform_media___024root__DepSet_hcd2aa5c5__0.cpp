// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_platform_media.h for the primary calling header

#include "Vtb_platform_media__pch.h"
#include "Vtb_platform_media___024root.h"

VL_ATTR_COLD void Vtb_platform_media___024root___eval_initial__TOP(Vtb_platform_media___024root* vlSelf);
VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__0(Vtb_platform_media___024root* vlSelf);
VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__1(Vtb_platform_media___024root* vlSelf);
VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__2(Vtb_platform_media___024root* vlSelf);
VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__3(Vtb_platform_media___024root* vlSelf);

void Vtb_platform_media___024root___eval_initial(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_initial\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_platform_media___024root___eval_initial__TOP(vlSelf);
    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__2(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/platform\tb_platform_media.sv", 
                                             15);
        vlSelfRef.tb_platform_media__DOT__rclk = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_platform_media__DOT__rclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__3(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/platform\tb_platform_media.sv", 
                                             6);
        vlSelfRef.tb_platform_media__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__clk)));
    }
}

void Vtb_platform_media___024root___act_comb__TOP__0(Vtb_platform_media___024root* vlSelf);

void Vtb_platform_media___024root___eval_act(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_act\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3ffcULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_platform_media___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_platform_media___024root___act_comb__TOP__0(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___act_comb__TOP__0\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key = 0;
    // Body
    vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__flush) 
           | (IData)(vlSelfRef.tb_platform_media__DOT__reset));
    vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__rreset 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
           | ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
              >> 1U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
           & ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
              | ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                 | (IData)(((5U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                            & (0x200U == (0x780U & 
                                          vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])))))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid)
            ? 0xdU : ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key)
                       ? 0xcU : (IData)(vlSelfRef.tb_platform_media__DOT__action)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active) 
           & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid) 
              | ((IData)(vlSelfRef.tb_platform_media__DOT__ev) 
                 & ((0xaU <= (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                    | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key) 
                       | ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                          & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_tag) 
                             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus))))))));
}

void Vtb_platform_media___024root___nba_sequent__TOP__0(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_sequent__TOP__1(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_sequent__TOP__2(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_comb__TOP__0(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_sequent__TOP__3(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_comb__TOP__1(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_comb__TOP__2(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___nba_comb__TOP__3(Vtb_platform_media___024root* vlSelf);

void Vtb_platform_media___024root___eval_nba(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_nba\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_platform_media___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x3ffeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x3ffdULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x3ffeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_platform_media___024root___nba_comb__TOP__3(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vtb_platform_media__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_platform_media___024root___nba_sequent__TOP__1(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_sequent__TOP__1\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ tb_platform_media__DOT__dut__DOT__aux_requests;
    tb_platform_media__DOT__dut__DOT__aux_requests = 0;
    QData/*62:0*/ tb_platform_media__DOT__dut__DOT__aux_addresses;
    tb_platform_media__DOT__dut__DOT__aux_addresses = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__img_done;
    tb_platform_media__DOT__dut__DOT__img_done = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__img_bv;
    tb_platform_media__DOT__dut__DOT__img_bv = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2;
    tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2 = 0;
    SData/*9:0*/ tb_platform_media__DOT__dut__DOT__compositor__DOT__px;
    tb_platform_media__DOT__dut__DOT__compositor__DOT__px = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__126__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__129__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__129__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__130__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__130__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__131__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__132__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__133__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__133__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__134__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__134__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__135__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__135__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__136__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__137__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__137__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__138__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__139__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__139__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__140__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__140__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__141__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__142__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__142__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__143__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__143__Vfuncout = 0;
    VlWide<4>/*98:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value;
    VL_ZERO_W(99, __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value);
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__165__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__165__Vfuncout = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    // Body
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xbULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 2U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((7ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 3U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xe0ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 4U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xd0ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 5U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xb0ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 6U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0x70ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 7U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe00ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 8U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd00ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 9U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb00ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0xaU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x700ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0xbU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0xcU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0xdU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0xeU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x7000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0xfU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x10U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x11U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x12U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x13U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe00000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x14U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd00000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x15U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb00000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x16U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x700000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x19U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x1aU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x7000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x1bU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x1cU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x1fU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffeffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x20U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffdffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x21U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffbffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x22U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffff7ffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x23U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffefffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x24U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffdfffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x25U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffffbfffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x26U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffff7fffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x27U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffeffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x28U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffdffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x29U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffbffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x2aU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffff7ffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x2bU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffefffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x2cU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffdfffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x2dU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffffbfffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x2eU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffff7fffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x2fU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffeffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x30U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffdffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x31U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffbffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x32U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfff7ffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x33U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffefffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x34U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffdfffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x35U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xffbfffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x36U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xff7fffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x37U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfeffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x38U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfdffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x39U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfbffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x3aU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xf7ffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x3bU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xefffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x3cU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xdfffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x3dU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xbfffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x3eU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 0x3fU));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_name 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
    if (vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache[vlSelfRef.__VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0] 
            = vlSelfRef.__VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_done 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_platform_media__DOT__dut__DOT__img_done = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                                  & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_bv 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_platform_media__DOT__dut__DOT__img_bv = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                                & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_lba 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_start 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_start;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__img_lba 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__img_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_lba 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__config_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_lba 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_catalog_ready;
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 0U;
        vlSelfRef.tb_platform_media__DOT__selected = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait = 0U;
    } else if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))) {
        if (vlSelfRef.tb_platform_media__DOT__catalog) {
            if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 6U;
            } else if (vlSelfRef.tb_platform_media__DOT__mode) {
                if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__select_request) 
                     & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__requested_index) 
                        < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count)))) {
                    vlSelfRef.tb_platform_media__DOT__selected 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__requested_index;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 1U;
                }
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))) {
        if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 2U;
        } else {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait)));
        }
    } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))) {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 4U;
    } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 6U;
        } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_done) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 5U;
        }
    } else if (((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)) 
                || (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)))) {
        if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__select_request) 
              & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__requested_index) 
                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count))) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            vlSelfRef.tb_platform_media__DOT__selected 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__requested_index;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 1U;
        }
    } else {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state = 6U;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_count;
    vlSelfRef.tb_platform_media__DOT__mode = ((IData)(vlSelfRef.tb_platform_media__DOT__config_ready) 
                                              & ((2U 
                                                  == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_version)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_busy 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__img_ready));
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__sd_done 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_platform_media__DOT__dut__DOT__img_done));
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_platform_media__DOT__dut__DOT__img_bv));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_issue 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready) 
           & ((~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase) 
                  | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_found))) 
              & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name 
                  == vlSelfRef.tb_platform_media__DOT__dut__DOT__image_name) 
                 & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan) 
                    < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count)))));
    vlSelfRef.tb_platform_media__DOT__catalog = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready) 
                                                 & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__found)) 
                                                    | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_finished)));
    if (vlSelfRef.tb_platform_media__DOT__mode) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__select_request 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_select;
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__requested_index 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_index;
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__select_request = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__requested_index = 0U;
    }
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)))) {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
            = ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))
                ? 1U : 0U);
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_bytes;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__green = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_addr = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[0U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[1U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[2U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[3U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[4U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[5U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[6U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[7U] 
            = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_last = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_done = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_pixels = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 0U;
        if (((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)) 
             & (0x36U > vlSelfRef.tb_platform_media__DOT__dut__DOT__image_bytes))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 0xaU;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
        }
    } else if ((((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_error)) 
                 & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                & (0x11U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_error;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
    } else if (((((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                        || (0x11U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                       || (0x1fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                      | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                     | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                    | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                   | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                  | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                 | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                       || (0x11U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                      || (0x1fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))))) {
            if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_valid) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT____Vlvbound_h2fb5cc83__0 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q;
                    if (VL_LIKELY(((0x35U >= (0x3fU 
                                              & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position))))) {
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT____Vlvbound_h2fb5cc83__0;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 
                            = (0x3fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                        vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 1U;
                    }
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                    if ((0x35U == vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position)) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 2U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (((((0x4d42U != ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__129__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0U]);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__129__Vfuncout))) 
                       | (0x28U > ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__130__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                     [0x11U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0x10U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0xfU] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                      [0xeU]));
                                        }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__130__Vfuncout))) 
                      | (1U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__131__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1bU] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1aU]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__131__Vfuncout)))) 
                     | (0U != ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__132__Vfuncout 
                                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                             [0x21U] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x20U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1fU] 
                                               << 8U) 
                                              | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x1eU]));
                                }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__132__Vfuncout)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 8U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else if ((((((1U > ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__133__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0x15U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x14U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x13U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                        [0x12U]));
                                            }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__133__Vfuncout)) 
                               | (0x780U < ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__134__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0x15U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x14U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x13U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                        [0x12U]));
                                            }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__134__Vfuncout))) 
                              | (1U > vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)) 
                             | (0x438U < vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)) 
                            | ((0x18U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__135__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__135__Vfuncout))) 
                               & (0x20U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__136__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__136__Vfuncout)))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 9U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else if ((((0x36U > ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__137__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xdU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xcU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xbU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                  [0xaU]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__137__Vfuncout)) 
                             | (0x100000U < ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__138__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xdU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xcU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xbU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                  [0xaU]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__138__Vfuncout))) 
                            | ((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length)) 
                               < vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 0xaU;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__139__Vfuncout 
                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                             [0xdU] << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xcU] 
                                                 << 0x10U)) 
                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                               [0xbU] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                              [0xaU]));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__139__Vfuncout;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
                        = (0x7ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height);
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
                        = (((IData)(0x1e0U) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width)) 
                           >= ((IData)(0x280U) * (0x7ffU 
                                                  & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 3U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
                        = (0x7ffU & ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__140__Vfuncout 
                                    = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                         [0x15U] << 0x18U) 
                                        | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                           [0x14U] 
                                           << 0x10U)) 
                                       | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                           [0x13U] 
                                           << 8U) | 
                                          vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                          [0x12U]));
                            }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__140__Vfuncout));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
                        = (0x20U == ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__141__Vfuncout 
                                    = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                        [0x1dU] << 8U) 
                                       | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0x1cU]);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__141__Vfuncout)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
                        = (1U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                 [0x19U] >> 7U));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
                        = (3U & ((0x1ffcU & ((IData)(3U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes))) 
                                 - (([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__142__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0x15U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0x14U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0x13U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                  [0x12U]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__142__Vfuncout) 
                                    * ((0x20U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__143__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                      [0x1dU] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                     [0x1cU]);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__143__Vfuncout)))
                                        ? 4U : 3U))));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 4U;
            } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0x280U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
                            = ((0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled));
                    } else {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
                            = ((0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0x1e0U;
                    }
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad 
                    = (0x3ffU & (((IData)(0x280U) - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w)) 
                                 >> 1U));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
                    = (0x3ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  ((IData)(0x1e0U) 
                                                   - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U)
                                  : (((IData)(0x1e0U) 
                                      - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)) 
                                     - VL_SHIFTR_III(32,32,32, 
                                                     ((IData)(0x1e0U) 
                                                      - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U))));
                if ((0U != ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                             ? VL_SHIFTR_III(32,32,32, 
                                             ((IData)(0x1e0U) 
                                              - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U)
                             : (((IData)(0x1e0U) - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)) 
                                - VL_SHIFTR_III(32,32,32, 
                                                ((IData)(0x1e0U) 
                                                 - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U))))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 1U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_valid) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                    if ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                         >= vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length)) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 7U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                    } else if ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                                >= vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset)) {
                        if ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                = (3U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left) 
                                         - (IData)(1U)));
                            if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue 
                                = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q;
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 1U;
                        } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__green 
                                = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q;
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
                                = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba)
                                    ? 3U : 0U);
                            if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba)))) {
                                if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)) 
                                     == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width))) {
                                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
                                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
                                    if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding))) {
                                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                                    }
                                } else {
                                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)));
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)) 
                                 == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width))) {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
                                if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding))) {
                                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                                }
                            } else {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
                                    = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)));
                            }
                        }
                    }
                }
            } else if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows) 
                         < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)) 
                        & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y) 
                           == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y)))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
            }
        }
    } else if (((((((((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                      | (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                     | (0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                    | (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                   | (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                  | (0x10U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                 | (0xcU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                | (0xdU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_addr 
                = (0x3ffffU & (VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y), 8U) 
                               + VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y), 6U)));
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 9U;
        } else if ((9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xaU;
        } else if ((0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_pixels 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__image_pixels);
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                                 + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width)));
            }
            if ((1U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel))) {
                VL_ASSIGNSEL_WI(256,32,(0xe0U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel) 
                                                 << 4U)), vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data, 
                                (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565) 
                                  << 0x10U) | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel)));
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565;
            }
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x)));
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel)));
            if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
                    = ((0x27fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x))
                        ? 0xcU : ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
                                   ? 0xbU : 9U));
                if ((((0x1dfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                      & (0x27fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x))) 
                     & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished)))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0x1e0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_last 
                        = ((0x1dfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                           & (0x27fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xfU;
                }
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
                        ? 0xbU : 9U);
            }
        } else if ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                 >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                                 - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w)));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x)));
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 9U;
            }
        } else if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled)
                  ? (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))
                  : (IData)(vlSelfRef.tb_platform_media__DOT__lr))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x10U;
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_ack) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_last) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_done = 1U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x11U;
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_addr 
                        = (0x3ffffU & ((IData)(8U) 
                                       + vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
                }
            }
        } else if ((0xcU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)));
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished)
                        ? 8U : ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad))
                                 ? 8U : 6U));
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows)));
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows)) 
                     >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
                        = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                                     + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xdU;
                }
            }
        } else if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                    >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
                = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                             - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)));
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y)));
        } else {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                = (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y) 
                    == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y))
                    ? 8U : 0xeU);
        }
    } else if ((0xeU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
        if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y)) 
             < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y)));
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 6U;
        } else {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 1U;
            if ((0x1e0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_last = 1U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 1U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
            }
        }
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error = 0xffU;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_ready 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__img_ready) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__catalog));
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_done 
        = ((IData)(tb_platform_media__DOT__dut__DOT__img_done) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__catalog));
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid 
        = ((IData)(tb_platform_media__DOT__dut__DOT__img_bv) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__catalog));
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
            = ((IData)(vlSelfRef.tb_platform_media__DOT__catalog)
                ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__img_start)
                : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_start));
        tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2 
            = (1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__catalog)));
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start;
        tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2 = 0U;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change 
        = (((IData)(vlSelfRef.tb_platform_media__DOT__catalog) 
            & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__mode)) 
               & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_request))) 
           | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_select));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_error 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__image_bytes 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_bytes;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__image_pixels 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_pixels;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_ready 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__img_ready) 
           & (IData)(tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_done 
        = ((IData)(tb_platform_media__DOT__dut__DOT__img_done) 
           & (IData)(tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bv 
        = ((IData)(tb_platform_media__DOT__dut__DOT__img_bv) 
           & (IData)(tb_platform_media__DOT__dut__DOT____VdfgRegularize_h9452508d_0_2));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y 
        = (0x3ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row)) 
           & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
               >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad)) 
              & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
                 < (0x3ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w) 
                              + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad))))));
    vlSelfRef.tb_platform_media__DOT__image_error = 
        ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error))
          ? (((IData)(vlSelfRef.tb_platform_media__DOT__catalog) 
              & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count)))
              ? 5U : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error))
          : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__cancel 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_done) 
           | (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decode_error)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache
        [((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))
           ? 0U : (0x1ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos) 
                             + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_valid) 
                                & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_ready)))))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__reset)
            ? 0ULL : (0x1ffffffffULL & (VL_EXTEND_QI(33,32, 
                                                     ([&]() {
                            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__126__Vfuncout 
                                = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                     [0xdU] << 0x18U) 
                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0xcU] << 0x10U)) 
                                   | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0xbU] << 8U) 
                                      | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                      [0xaU]));
                        }(), __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__126__Vfuncout)) 
                                        + ((QData)((IData)(
                                                           (0x1ffcU 
                                                            & ((IData)(3U) 
                                                               + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes))))) 
                                           * (QData)((IData)(
                                                             (0x7ffU 
                                                              & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)))))));
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor = 1U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = 0ULL;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0U;
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 0U;
        if (((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy)))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 1U;
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                    = ((IData)(0x280U) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
            } else {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                    = ((IData)(0x1e0U) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
            }
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = 0ULL;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0U;
        } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem 
                = (0x1ffffffffULL & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take)
                                      ? (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
                                         - (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor)))
                                      : vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial));
            if ((0x1fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 1U;
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count)));
            }
        }
    }
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__page_begin))) {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__first = 1U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__x = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__y = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__address = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__final_burst = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__plane = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__row_offset = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_ack = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__wx = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__ww = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__dim = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__base = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__label = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid = 0U;
    } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_ack = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__first) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__x = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__y 
                            = ((0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr)
                                ? 0U : 0x1dfU);
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__first = 0U;
                    } else if (((vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr 
                                 == ((IData)(8U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr)) 
                                & (0x270U > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x)))) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__x 
                            = (0x3ffU & ((IData)(0x10U) 
                                         + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x)));
                    } else {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__y 
                            = (0x1ffU & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr 
                                          > vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y))
                                          : ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y) 
                                             - (IData)(1U))));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__x = 0U;
                    }
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__address 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__final_burst 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_last;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 1U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state 
                    = ((0U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                       >> 8U))) ? 7U
                        : 2U);
            } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 3U;
            } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                if ((1U & ((((((~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                   >> 6U)) | ((3U & 
                                               (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                                >> 3U)) 
                                              != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer))) 
                              | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y) 
                                 < (0x1ffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                              >> 0xaU)))) 
                             | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y) 
                                >= (0x3ffU & ((0x1ffU 
                                               & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                                  >> 0xaU)) 
                                              + (0x7fU 
                                                 & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                                     << 4U) 
                                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                                       >> 0x1cU))))))) 
                            | (((IData)(0xfU) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x)) 
                               < (0x3ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]))) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x) 
                              >= (0x7ffU & ((0x3ffU 
                                             & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]) 
                                            + (0x1ffU 
                                               & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                                  >> 0x13U)))))))) {
                    if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)) 
                         < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                    >> 8U)))) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 2U;
                    } else if ((3U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer))) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer)));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 2U;
                    } else {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 7U;
                    }
                } else {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__row_offset 
                        = (0xffffU & ((0xffffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y) 
                                                  - 
                                                  (0x1ffU 
                                                   & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                                      >> 0xaU)))) 
                                      * (0x1ffU & (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                                   >> 0x13U))));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__wx 
                        = (0x3ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]);
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__ww 
                        = (0x1ffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
                                     >> 0x13U));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__dim 
                        = (1U & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                    >> 5U)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__base 
                        = (0xfffffU & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[2U] 
                                        << 5U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                                  >> 0x1bU)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__label 
                        = (0xfffffU & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[3U] 
                                        << 0x11U) | 
                                       (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[2U] 
                                        >> 0xfU)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__plane = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__pixel_inside) {
                    if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid)) 
                               | (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag 
                                  != (0xfffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte))))) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 5U;
                    } else if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p))) {
                        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__plane) {
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)) 
                                 < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                            >> 8U)))) {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)));
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 2U;
                            } else if ((3U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer))) {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer 
                                    = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer)));
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index = 0U;
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 2U;
                            } else {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 7U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__plane = 1U;
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p = 0U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p)));
                    }
                } else if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__plane) {
                        if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)) 
                             < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                        >> 8U)))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)));
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 2U;
                        } else if ((3U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer)));
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index = 0U;
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 2U;
                        } else {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 7U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__plane = 1U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p = 0U;
                    }
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p)));
                }
            } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag 
                        = (0xfffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte);
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid = 1U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 4U;
                }
            } else if (vlSelfRef.tb_platform_media__DOT__lr) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 8U;
            }
        } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__lack) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_ack = 1U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 0U;
            }
        } else {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 0U;
        }
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_ack 
            = (1U & (IData)(vlSelfRef.tb_platform_media__DOT__lack));
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state = 0U;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q)
            : 0U);
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
    if (vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache[vlSelfRef.__VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0] 
            = vlSelfRef.__VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
    if (vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header[__VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
    vlSelfRef.tb_platform_media__DOT__lack = vlSelfRef.__Vdly__tb_platform_media__DOT__lack;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__first 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__first;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__y;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__page_begin 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__page_begin;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_last 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_last;
    vlSelfRef.tb_platform_media__DOT__lr = vlSelfRef.__Vdly__tb_platform_media__DOT__lr;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_addr;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__plane 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__plane;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__x;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__mode) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active));
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[0U];
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[1U];
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[2U];
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[3U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[3U];
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_4((6U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | (IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_4((7U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 1U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U] 
                 ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U] 
                    >> 2U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 2U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0x30U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 3U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0x38U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 4U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0x28U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 5U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x180U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 6U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x1c0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 7U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x140U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 8U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0xc00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 9U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0xe00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0xaU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0xa00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0xbU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x6000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0xcU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x7000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0xdU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x5000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0xeU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x30000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0xfU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x38000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x10U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x28000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x11U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x180000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x12U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x13U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x140000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x14U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x15U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x16U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x17U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x6000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x18U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x7000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x19U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x5000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1aU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x30000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x1bU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x38000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x1cU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x28000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1dU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & ((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U] 
                  >> 0x1fU) ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U]));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x1eU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & (VL_REDXOR_32((0xc0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U])) 
                 ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U]));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x1fU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & ((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[0U] 
                  >> 0x1eU) ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U]));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | (IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_4((0xcU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 1U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_4((0xeU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 2U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_4((0xaU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 3U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0x60U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 4U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0x70U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 5U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0x50U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 6U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x300U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 7U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x380U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 8U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x280U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 9U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x1800U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0xaU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x1c00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0xbU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x1400U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0xcU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0xc000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0xdU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0xe000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0xeU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0xa000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0xfU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x60000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x10U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x70000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x11U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x50000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x12U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x300000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x13U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x380000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x14U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x280000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x15U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x16U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x17U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x1400000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x18U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x19U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x1aU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1bU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x60000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x1cU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x70000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x1dU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x50000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1eU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U] 
                 ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U] 
                    >> 1U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x1fU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & (((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U] 
                   >> 0x1fU) ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U]) 
                 ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U] 
                    >> 1U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | (IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & ((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[1U] 
                  >> 0x1fU) ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U] 
                               >> 1U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 1U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0x18U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 2U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0x1cU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 3U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0x14U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 4U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0xc0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 5U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0xe0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 6U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0xa0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 7U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x600U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 8U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x700U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 9U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x500U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0xaU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x3000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0xbU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x3800U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0xcU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x2800U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0xdU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x18000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0xeU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0xfU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x14000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x10U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x11U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x12U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x13U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x600000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x14U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x700000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x15U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x500000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x16U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x3000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x17U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x3800000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x18U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x2800000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x19U));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x18000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x1aU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x1bU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x14000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1cU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0) 
              << 0x1dU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
              << 0x1eU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[2U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U]) 
           | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1fU));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_4((6U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[3U])));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U] 
        = ((6U & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U]) 
           | (7U & (IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h306b1b62__0)));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[3U]));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U] 
        = ((5U & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U]) 
           | (7U & ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd4835d22__0) 
                    << 1U)));
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0 
        = (1U & (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[3U] 
                 ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__value[3U] 
                    >> 2U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U] 
        = ((3U & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U]) 
           | (7U & ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hd48af1f5__0) 
                    << 2U)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U] 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[0U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[1U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[2U] 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[2U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[3U] 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_widget__163__Vfuncout[3U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_busy 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__cancel) 
               | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height 
        = ((0x80U & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
            [0x19U]) ? ((IData)(1U) + (~ ([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__122__Vfuncout 
                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                 [0x19U] << 0x18U) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                   [0x18U] << 0x10U)) 
                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                   [0x17U] << 8U) | 
                                  vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                  [0x16U]));
                    }(), vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__122__Vfuncout)))
            : ([&]() {
                vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__123__Vfuncout 
                    = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                         [0x19U] << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x18U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                           [0x17U] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                          [0x16U]));
            }(), vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__123__Vfuncout));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width 
        = (0x7ffU & ([&]() {
                vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__124__Vfuncout 
                    = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                         [0x15U] << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x14U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                           [0x13U] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                          [0x12U]));
            }(), vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__124__Vfuncout));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
        = (((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem)) 
            << 1U) | (QData)((IData)((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                                      >> 0x1fU))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_ready 
        = ((3U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
              | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))));
    tb_platform_media__DOT__dut__DOT__compositor__DOT__px 
        = (0x3ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x) 
                     + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p)));
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled) {
        vlSelfRef.tb_platform_media__DOT__ld[0U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[0U];
        vlSelfRef.tb_platform_media__DOT__ld[1U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[1U];
        vlSelfRef.tb_platform_media__DOT__ld[2U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[2U];
        vlSelfRef.tb_platform_media__DOT__ld[3U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[3U];
        vlSelfRef.tb_platform_media__DOT__ld[4U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[4U];
        vlSelfRef.tb_platform_media__DOT__ld[5U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[5U];
        vlSelfRef.tb_platform_media__DOT__ld[6U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[6U];
        vlSelfRef.tb_platform_media__DOT__ld[7U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[7U];
        vlSelfRef.tb_platform_media__DOT__la = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__address;
    } else {
        vlSelfRef.tb_platform_media__DOT__ld[0U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[0U];
        vlSelfRef.tb_platform_media__DOT__ld[1U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[1U];
        vlSelfRef.tb_platform_media__DOT__ld[2U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[2U];
        vlSelfRef.tb_platform_media__DOT__ld[3U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[3U];
        vlSelfRef.tb_platform_media__DOT__ld[4U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[4U];
        vlSelfRef.tb_platform_media__DOT__ld[5U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[5U];
        vlSelfRef.tb_platform_media__DOT__ld[6U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[6U];
        vlSelfRef.tb_platform_media__DOT__ld[7U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[7U];
        vlSelfRef.tb_platform_media__DOT__la = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_index 
        = (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled) 
            & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state)))
            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index)
            : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus));
    tb_platform_media__DOT__dut__DOT__aux_requests 
        = (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid) 
            << 2U) | ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled) 
                        & (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))) 
                       << 1U) | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__platform_boot__mem_valid)));
    if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)))) {
        if ((((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
              | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
             | (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[1U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[5U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[6U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[7U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U];
        }
        if ((0xdU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[1U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[3U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[4U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[5U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[6U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[7U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U];
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes 
        = (0x1fffU & ((0x20U == ([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__125__Vfuncout 
                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                [0x1dU] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                               [0x1cU]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__125__Vfuncout)))
                       ? VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width), 2U)
                       : ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width) 
                          + VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width), 1U))));
    if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)))) {
        if (((0x3dU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
             & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses) 
                >> 2U))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                = vlSelfRef.tb_platform_media__DOT__ard[0U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U] 
                = vlSelfRef.tb_platform_media__DOT__ard[1U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                = vlSelfRef.tb_platform_media__DOT__ard[2U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                = vlSelfRef.tb_platform_media__DOT__ard[3U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U] 
                = vlSelfRef.tb_platform_media__DOT__ard[4U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                = vlSelfRef.tb_platform_media__DOT__ard[5U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                = vlSelfRef.tb_platform_media__DOT__ard[6U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                = vlSelfRef.tb_platform_media__DOT__ard[7U];
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take 
        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
           >= (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__pixel_inside 
        = (((IData)(tb_platform_media__DOT__dut__DOT__compositor__DOT__px) 
            >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__wx)) 
           & ((IData)(tb_platform_media__DOT__dut__DOT__compositor__DOT__px) 
              < (0x7ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__wx) 
                           + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__ww)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
        = (0x1fffffU & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__plane)
                          ? vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__label
                          : vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__base) 
                        + VL_SHIFTL_III(21,21,32, (0xffffU 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__row_offset) 
                                                      + 
                                                      ((IData)(tb_platform_media__DOT__dut__DOT__compositor__DOT__px) 
                                                       - (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__wx)))), 1U)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__selected = 0U;
    vlSelfRef.tb_platform_media__DOT__aw = 0U;
    vlSelfRef.tb_platform_media__DOT__av = 0U;
    vlSelfRef.tb_platform_media__DOT__ad[0U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.tb_platform_media__DOT__ad[1U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.tb_platform_media__DOT__ad[2U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.tb_platform_media__DOT__ad[3U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.tb_platform_media__DOT__ad[4U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.tb_platform_media__DOT__ad[5U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.tb_platform_media__DOT__ad[6U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.tb_platform_media__DOT__ad[7U] = Vtb_platform_media__ConstPool__CONST_h9e67c271_0[7U];
    if (((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy)) 
         & ((IData)(tb_platform_media__DOT__dut__DOT__aux_requests) 
            >> 2U))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__selected = 2U;
        vlSelfRef.tb_platform_media__DOT__aw = 0U;
        vlSelfRef.tb_platform_media__DOT__av = 1U;
        vlSelfRef.tb_platform_media__DOT__ad[0U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[1U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[2U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[3U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[4U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[5U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[6U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[7U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT____Vlvbound_h2bd80f91__0 
            = vlSelfRef.tb_platform_media__DOT__ar;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus 
            = ((3U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus)) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT____Vlvbound_h2bd80f91__0) 
                  << 2U));
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy)) 
               & ((IData)(tb_platform_media__DOT__dut__DOT__aux_requests) 
                  >> 1U)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__selected = 1U;
        vlSelfRef.tb_platform_media__DOT__aw = 0U;
        vlSelfRef.tb_platform_media__DOT__av = 1U;
        vlSelfRef.tb_platform_media__DOT__ad[0U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[1U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[2U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[3U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[4U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[5U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[6U] = 0U;
        vlSelfRef.tb_platform_media__DOT__ad[7U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT____Vlvbound_h2bd80f91__0 
            = vlSelfRef.tb_platform_media__DOT__ar;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus 
            = ((5U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus)) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT____Vlvbound_h2bd80f91__0) 
                  << 1U));
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take));
    tb_platform_media__DOT__dut__DOT__aux_addresses 
        = (((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr)) 
            << 0x2aU) | (((QData)((IData)((0x1fffffU 
                                           & ((IData)(0x80000U) 
                                              + (0x3fff8U 
                                                 & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
                                                    >> 2U)))))) 
                          << 0x15U) | (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__address))));
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__165__Vfuncout 
        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                    >> 0x10U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vcellinp__ui__back_page 
        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__165__Vfuncout;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice_valid 
        = ((0xffU != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                      >> 0x18U)) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices_valid) 
                                    >> (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                              >> 0x18U))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice 
        = (3U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices) 
                 >> (0xeU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                             >> 0x17U))));
    vlSelfRef.tb_platform_media__DOT__aa = 0U;
    if (((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy)) 
         & ((IData)(tb_platform_media__DOT__dut__DOT__aux_requests) 
            >> 2U))) {
        vlSelfRef.tb_platform_media__DOT__aa = (0x1fffffU 
                                                & (IData)(
                                                          (tb_platform_media__DOT__dut__DOT__aux_addresses 
                                                           >> 0x2aU)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy)) 
               & ((IData)(tb_platform_media__DOT__dut__DOT__aux_requests) 
                  >> 1U)))) {
        vlSelfRef.tb_platform_media__DOT__aa = (0x1fffffU 
                                                & (IData)(
                                                          (tb_platform_media__DOT__dut__DOT__aux_addresses 
                                                           >> 0x15U)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy)) 
               & (IData)(tb_platform_media__DOT__dut__DOT__aux_requests)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__selected = 0U;
        vlSelfRef.tb_platform_media__DOT__aw = 1U;
        vlSelfRef.tb_platform_media__DOT__av = 1U;
        vlSelfRef.tb_platform_media__DOT__ad[0U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[0U];
        vlSelfRef.tb_platform_media__DOT__ad[1U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[1U];
        vlSelfRef.tb_platform_media__DOT__ad[2U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[2U];
        vlSelfRef.tb_platform_media__DOT__ad[3U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[3U];
        vlSelfRef.tb_platform_media__DOT__ad[4U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[4U];
        vlSelfRef.tb_platform_media__DOT__ad[5U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[5U];
        vlSelfRef.tb_platform_media__DOT__ad[6U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[6U];
        vlSelfRef.tb_platform_media__DOT__ad[7U] = 
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer[7U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT____Vlvbound_h2bd80f91__0 
            = vlSelfRef.tb_platform_media__DOT__ar;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus 
            = ((6U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus)) 
               | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT____Vlvbound_h2bd80f91__0));
        vlSelfRef.tb_platform_media__DOT__aa = (0x1fffffU 
                                                & (IData)(tb_platform_media__DOT__dut__DOT__aux_addresses));
    }
    vlSelfRef.tb_platform_media__DOT__ard[0U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[0U];
    vlSelfRef.tb_platform_media__DOT__ard[1U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[1U];
    vlSelfRef.tb_platform_media__DOT__ard[2U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[2U];
    vlSelfRef.tb_platform_media__DOT__ard[3U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[3U];
    vlSelfRef.tb_platform_media__DOT__ard[4U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[4U];
    vlSelfRef.tb_platform_media__DOT__ard[5U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[5U];
    vlSelfRef.tb_platform_media__DOT__ard[6U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[6U];
    vlSelfRef.tb_platform_media__DOT__ard[7U] = vlSelfRef.__Vdly__tb_platform_media__DOT__ard[7U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses = 0U;
    if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy) 
          & (IData)(vlSelfRef.tb_platform_media__DOT__ap)) 
         & (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__owner)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses 
            = (4U | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses));
    }
    if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy) 
          & (IData)(vlSelfRef.tb_platform_media__DOT__ap)) 
         & (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__owner)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses 
            = (2U | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses));
    }
    if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy) 
          & (IData)(vlSelfRef.tb_platform_media__DOT__ap)) 
         & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__owner)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses 
            = (1U | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses));
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state 
        = vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__browse_query 
        = ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))
            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query)
            : 0U);
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_sequent__TOP__2(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_sequent__TOP__2\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_platform_media__DOT__flush_sync;
    __Vdly__tb_platform_media__DOT__flush_sync = 0;
    CData/*1:0*/ __Vdly__tb_platform_media__DOT__prefill_sync;
    __Vdly__tb_platform_media__DOT__prefill_sync = 0;
    SData/*10:0*/ __Vdly__tb_platform_media__DOT__sample_div;
    __Vdly__tb_platform_media__DOT__sample_div = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__playing;
    __Vdly__tb_platform_media__DOT__playing = 0;
    // Body
    __Vdly__tb_platform_media__DOT__prefill_sync = vlSelfRef.tb_platform_media__DOT__prefill_sync;
    __Vdly__tb_platform_media__DOT__flush_sync = vlSelfRef.tb_platform_media__DOT__flush_sync;
    __Vdly__tb_platform_media__DOT__playing = vlSelfRef.tb_platform_media__DOT__playing;
    __Vdly__tb_platform_media__DOT__sample_div = vlSelfRef.tb_platform_media__DOT__sample_div;
    __Vdly__tb_platform_media__DOT__flush_sync = ((IData)(vlSelfRef.tb_platform_media__DOT__reset)
                                                   ? 3U
                                                   : 
                                                  (3U 
                                                   & ((2U 
                                                       & ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.tb_platform_media__DOT__flush))));
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
            >> 1U))) {
        __Vdly__tb_platform_media__DOT__prefill_sync = 0U;
        __Vdly__tb_platform_media__DOT__sample_div = 0U;
        __Vdly__tb_platform_media__DOT__playing = 0U;
    } else {
        __Vdly__tb_platform_media__DOT__prefill_sync 
            = ((2U & ((IData)(vlSelfRef.tb_platform_media__DOT__prefill_sync) 
                      << 1U)) | (0x200U <= (IData)(vlSelfRef.tb_platform_media__DOT__fifo_used)));
        __Vdly__tb_platform_media__DOT__sample_div 
            = ((IData)(vlSelfRef.tb_platform_media__DOT__sample_tick)
                ? 0U : (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__sample_div))));
        if ((((((IData)(vlSelfRef.tb_platform_media__DOT__sample_tick) 
                & (IData)(vlSelfRef.tb_platform_media__DOT__playing)) 
               & (IData)((vlSelfRef.tb_platform_media__DOT__params 
                          >> 0x21U))) & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x14U))) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__fifo_empty))) {
            vlSelfRef.tb_platform_media__DOT__underruns 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__underruns);
        }
        if (vlSelfRef.tb_platform_media__DOT__pop) {
            vlSelfRef.tb_platform_media__DOT__consumed 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__consumed);
        }
        if ((2U & (IData)(vlSelfRef.tb_platform_media__DOT__prefill_sync))) {
            __Vdly__tb_platform_media__DOT__playing = 1U;
        }
    }
    if (vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__rreset) {
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rp = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rp 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg2 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg1;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn), 1U) 
                         ^ (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn)));
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg1 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__wgray;
    }
    vlSelfRef.tb_platform_media__DOT__prefill_sync 
        = __Vdly__tb_platform_media__DOT__prefill_sync;
    vlSelfRef.tb_platform_media__DOT__flush_sync = __Vdly__tb_platform_media__DOT__flush_sync;
    vlSelfRef.tb_platform_media__DOT__playing = __Vdly__tb_platform_media__DOT__playing;
    vlSelfRef.tb_platform_media__DOT__sample_div = __Vdly__tb_platform_media__DOT__sample_div;
    vlSelfRef.tb_platform_media__DOT__sample_tick = 
        (0x411U == (IData)(vlSelfRef.tb_platform_media__DOT__sample_div));
    vlSelfRef.tb_platform_media__DOT__fifo_empty = 
        ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray) 
         == (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg2));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__0(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__0\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key = 0;
    // Body
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
           & ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
              | ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                 | (IData)(((5U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                            & (0x200U == (0x780U & 
                                          vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])))))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid)
            ? 0xdU : ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key)
                       ? 0xcU : (IData)(vlSelfRef.tb_platform_media__DOT__action)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active) 
           & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid) 
              | ((IData)(vlSelfRef.tb_platform_media__DOT__ev) 
                 & ((0xaU <= (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                    | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key) 
                       | ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                          & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_tag) 
                             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus))))))));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_sequent__TOP__3(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_sequent__TOP__3\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_platform_media__DOT__fifo_full;
    tb_platform_media__DOT__fifo_full = 0;
    CData/*0:0*/ tb_platform_media__DOT__fifo__DOT__push;
    tb_platform_media__DOT__fifo__DOT__push = 0;
    // Body
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[1U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[3U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading) 
               << 1U) | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active)));
    VL_ASSIGNBIT_WI(2U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__166__Vfuncout 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                               >> 0x18U);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__166__Vfuncout)) 
                           >> 1U)));
    VL_ASSIGNBIT_WI(3U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__167__Vfuncout 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                               >> 0x18U);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__167__Vfuncout)) 
                           >> 2U)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xffffff8fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (0xfffffff0U & ((((0xffU != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                          >> 0x18U)) 
                               & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered) 
                                  >> (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                            >> 0x18U)))) 
                              << 6U) | (((0xffU != 
                                          (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                           >> 0x18U)) 
                                         << 5U) | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice_valid) 
                                                   << 4U)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xfffff87fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (0xffffff80U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus) 
                              << 8U) | (((0xffU != 
                                          (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                           >> 0x18U)) 
                                         & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__correct) 
                                            >> (7U 
                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                   >> 0x18U)))) 
                                        << 7U))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xfc0007ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (0xfffff800U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score) 
                              << 0x16U) | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages) 
                                            << 0x10U) 
                                           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_current_page) 
                                              << 0xbU)))));
    VL_ASSIGNSEL_WI(160,4,0x1aU, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0xfU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__168__Vfuncout 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[5U] 
                                    >> 0x10U));
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__168__Vfuncout))));
    if (((0U != (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                         >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_tag) 
                                     == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
            = ((0x3fffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]))))) 
                  << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[1U] 
            = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]))))) 
                >> 2U) | ((IData)(((0x7ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U])))) 
                                   >> 0x20U)) << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U]) 
               | ((IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U])))) 
                           >> 0x20U)) >> 2U));
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice_valid) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U] 
            = ((1U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect
                          [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice]) 
                  << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[3U] 
            = ((0xfffffff0U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[3U]) 
               | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect
                           [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice]) 
                   >> 0x1fU) | ((IData)((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect
                                         [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice] 
                                         >> 0x20U)) 
                                << 1U)));
    }
    VL_ASSIGNSEL_WI(160,8,0x64U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0xffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__169__Vfuncout 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[3U] 
                           >> 0x10U);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__169__Vfuncout))));
    VL_ASSIGNSEL_WI(160,9,0x6cU, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0x1ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__170__Vfuncout 
                        = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[4U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__170__Vfuncout))));
    VL_ASSIGNSEL_WI(160,10,0x75U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0x3ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__171__Vfuncout 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[4U] 
                           >> 0x10U);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__171__Vfuncout))));
    VL_ASSIGNSEL_WI(160,9,0x7fU, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0x1ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__172__Vfuncout 
                        = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[5U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__172__Vfuncout))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xfffc00ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | (0xffffff00U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice) 
                              << 0x10U) | (((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error))
                                             ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error)
                                             : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error)) 
                                           << 8U))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xfffbffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active) 
               & ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                  | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice)))) 
              << 0x12U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xfff7ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | (((((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading))) 
                & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page) 
                   == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page))) 
               & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice))) 
              << 0x13U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xffefffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | ((((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                | (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice))) 
               | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__track_switching)) 
              << 0x14U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xffdfffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy) 
              << 0x15U));
    vlSelfRef.tb_platform_media__DOT__params = vlSelfRef.__Vdly__tb_platform_media__DOT__params;
    vlSelfRef.tb_platform_media__DOT__fifo_used = (0xfffU 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wp) 
                                                      - 
                                                      ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g 
                        = vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g)));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__g)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__57__Vfuncout))));
    vlSelfRef.tb_platform_media__DOT__flush = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change) 
                                               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop) 
                                                  | ((5U 
                                                      == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)) 
                                                     | (6U 
                                                        == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)))));
    vlSelfRef.tb_platform_media__DOT__pcm = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__flush)) 
                                             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__cancel 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_done) 
           | ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error)) 
              | (IData)(vlSelfRef.tb_platform_media__DOT__flush)));
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__wgray 
        = ((IData)(vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset)
            ? 0U : (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn), 1U) 
                              ^ (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__cancel) 
               | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)));
    tb_platform_media__DOT__fifo_full = ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wgray) 
                                         == ((0xc00U 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2) 
                                                   >> 0xaU)) 
                                                 << 0xaU)) 
                                             | (0x3ffU 
                                                & (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2))));
    vlSelfRef.tb_platform_media__DOT__pcm_ready = (1U 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__timed)
                                                       ? 
                                                      (~ (IData)(tb_platform_media__DOT__fifo_full))
                                                       : 
                                                      (0U 
                                                       == 
                                                       VL_MODDIVS_III(32, vlSelfRef.tb_platform_media__DOT__cycle, (IData)(0x3e8U)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__flush)) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__pcm_ready));
    tb_platform_media__DOT__fifo__DOT__push = ((~ (IData)(tb_platform_media__DOT__fifo_full)) 
                                               & ((IData)(vlSelfRef.tb_platform_media__DOT__timed) 
                                                  & ((IData)(vlSelfRef.tb_platform_media__DOT__pcm) 
                                                     & (IData)(vlSelfRef.tb_platform_media__DOT__pcm_ready))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_ready 
        = (((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
            | ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
               | ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                  | ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                     | ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                        | ((9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                           & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                              | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))))))) 
           & ((1U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)) 
              & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error))));
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wp) 
                     + (IData)(tb_platform_media__DOT__fifo__DOT__push)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_valid) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_ready));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__1(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__1\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__rreset 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
           | ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
              >> 1U));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__2(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__2\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_platform_media__DOT__pop = ((IData)(vlSelfRef.tb_platform_media__DOT__timed) 
                                             & ((0x411U 
                                                 == (IData)(vlSelfRef.tb_platform_media__DOT__sample_div)) 
                                                & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__fifo_empty)) 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__playing) 
                                                      & ((~ 
                                                          (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                                           >> 0x14U)) 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_platform_media__DOT__params 
                                                                    >> 0x21U)))))));
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_platform_media__DOT__fifo_empty)) 
                        & (IData)(vlSelfRef.tb_platform_media__DOT__pop))));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__3(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__3\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__flush) 
           | (IData)(vlSelfRef.tb_platform_media__DOT__reset));
}

void Vtb_platform_media___024root___timing_resume(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___timing_resume\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb2d186ba__0.resume(
                                                   "@(negedge tb_platform_media.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha3cdcb47__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__5__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd4662890__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__11__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb6cc545d__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__17__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc150bfff__0.resume(
                                                   "@( (32'sh12c < tb_platform_media.samples))");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he8547315__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__23__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6988ff1c__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__29__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h81b41fcf__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__35__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha09f7a4e__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__41__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hca21f424__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__47__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9b4296b8__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__53__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc16a3357__0.resume(
                                                   "@( (32'sh258 < tb_platform_media.samples))");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_platform_media___024root___timing_commit(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___timing_commit\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb2d186ba__0.commit(
                                                   "@(negedge tb_platform_media.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha3cdcb47__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__5__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd4662890__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__11__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb6cc545d__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__17__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc150bfff__0.commit(
                                                   "@( (32'sh12c < tb_platform_media.samples))");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he8547315__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__23__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x100ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6988ff1c__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__29__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x200ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h81b41fcf__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__35__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x400ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha09f7a4e__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__41__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x800ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hca21f424__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__47__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x1000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9b4296b8__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__53__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x2000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc16a3357__0.commit(
                                                   "@( (32'sh258 < tb_platform_media.samples))");
    }
}

void Vtb_platform_media___024root___eval_triggers__act(Vtb_platform_media___024root* vlSelf);

bool Vtb_platform_media___024root___eval_phase__act(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_phase__act\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<15> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_platform_media___024root___eval_triggers__act(vlSelf);
    Vtb_platform_media___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_platform_media___024root___timing_resume(vlSelf);
        Vtb_platform_media___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_platform_media___024root___eval_phase__nba(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_phase__nba\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_platform_media___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_platform_media___024root___dump_triggers__nba(Vtb_platform_media___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_platform_media___024root___dump_triggers__act(Vtb_platform_media___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_platform_media___024root___eval(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_platform_media___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_platform_media.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_platform_media___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_platform_media.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_platform_media___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_platform_media___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_platform_media___024root___eval_debug_assertions(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_debug_assertions\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
