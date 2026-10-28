// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scene_visual.h for the primary calling header

#include "Vtb_scene_visual__pch.h"
#include "Vtb_scene_visual___024root.h"

VlCoroutine Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__0(Vtb_scene_visual___024root* vlSelf);
VlCoroutine Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__1(Vtb_scene_visual___024root* vlSelf);
VlCoroutine Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__2(Vtb_scene_visual___024root* vlSelf);

void Vtb_scene_visual___024root___eval_initial(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_initial\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__2(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_scene_visual.sv", 
                                             3);
        vlSelfRef.tb_scene_visual__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_scene_visual__DOT__clk)));
    }
}

void Vtb_scene_visual___024root___act_sequent__TOP__0(Vtb_scene_visual___024root* vlSelf);

void Vtb_scene_visual___024root___eval_act(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_act\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_scene_visual___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_scene_visual___024root___act_sequent__TOP__0(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___act_sequent__TOP__0\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_l 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__left))
                       ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_scene_visual__DOT__left)))
                       : (IData)(vlSelfRef.tb_scene_visual__DOT__left)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_r 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__right))
                       ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_scene_visual__DOT__right)))
                       : (IData)(vlSelfRef.tb_scene_visual__DOT__right)));
}

void Vtb_scene_visual___024root___nba_sequent__TOP__0(Vtb_scene_visual___024root* vlSelf);

void Vtb_scene_visual___024root___eval_nba(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_nba\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_scene_visual___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_scene_visual___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_scene_visual___024root___nba_sequent__TOP__0(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___nba_sequent__TOP__0\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_scene_visual__DOT__scene__DOT__es;
    __Vdly__tb_scene_visual__DOT__scene__DOT__es = 0;
    CData/*1:0*/ __Vdly__tb_scene_visual__DOT__scene__DOT__vs;
    __Vdly__tb_scene_visual__DOT__scene__DOT__vs = 0;
    CData/*0:0*/ __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual;
    __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual = 0;
    CData/*4:0*/ __Vdly__tb_scene_visual__DOT__pl;
    __Vdly__tb_scene_visual__DOT__pl = 0;
    CData/*0:0*/ __Vdly__tb_scene_visual__DOT__visual__DOT__front;
    __Vdly__tb_scene_visual__DOT__visual__DOT__front = 0;
    CData/*0:0*/ __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready;
    __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready = 0;
    CData/*6:0*/ __Vdly__tb_scene_visual__DOT__visual__DOT__wp;
    __Vdly__tb_scene_visual__DOT__visual__DOT__wp = 0;
    CData/*3:0*/ __Vdly__tb_scene_visual__DOT__visual__DOT__decimate;
    __Vdly__tb_scene_visual__DOT__visual__DOT__decimate = 0;
    SData/*15:0*/ __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l;
    __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l = 0;
    SData/*15:0*/ __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r;
    __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r = 0;
    CData/*4:0*/ __Vdly__tb_scene_visual__DOT__pr;
    __Vdly__tb_scene_visual__DOT__pr = 0;
    CData/*7:0*/ __VdlyVal__tb_scene_visual__DOT__visual__DOT__wave__v0;
    __VdlyVal__tb_scene_visual__DOT__visual__DOT__wave__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_scene_visual__DOT__visual__DOT__wave__v0;
    __VdlyDim0__tb_scene_visual__DOT__visual__DOT__wave__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_scene_visual__DOT__visual__DOT__wave__v0;
    __VdlySet__tb_scene_visual__DOT__visual__DOT__wave__v0 = 0;
    // Body
    __Vdly__tb_scene_visual__DOT__pl = vlSelfRef.tb_scene_visual__DOT__pl;
    __Vdly__tb_scene_visual__DOT__pr = vlSelfRef.tb_scene_visual__DOT__pr;
    __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l 
        = vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l;
    __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r 
        = vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r;
    __Vdly__tb_scene_visual__DOT__scene__DOT__vs = vlSelfRef.tb_scene_visual__DOT__scene__DOT__vs;
    __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual 
        = vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_visual;
    __VdlySet__tb_scene_visual__DOT__visual__DOT__wave__v0 = 0U;
    __Vdly__tb_scene_visual__DOT__visual__DOT__front 
        = vlSelfRef.tb_scene_visual__DOT__visual__DOT__front;
    __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready 
        = vlSelfRef.tb_scene_visual__DOT__visual__DOT__page_ready;
    __Vdly__tb_scene_visual__DOT__visual__DOT__wp = vlSelfRef.tb_scene_visual__DOT__visual__DOT__wp;
    __Vdly__tb_scene_visual__DOT__visual__DOT__decimate 
        = vlSelfRef.tb_scene_visual__DOT__visual__DOT__decimate;
    __Vdly__tb_scene_visual__DOT__scene__DOT__es = vlSelfRef.tb_scene_visual__DOT__scene__DOT__es;
    if (((((~ (IData)(vlSelfRef.tb_scene_visual__DOT__reset)) 
           & (IData)(vlSelfRef.tb_scene_visual__DOT__ce)) 
          & (~ (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__page_ready))) 
         & (0xfU == (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__decimate)))) {
        __VdlyVal__tb_scene_visual__DOT__visual__DOT__wave__v0 
            = (0xffU & ((IData)(vlSelfRef.tb_scene_visual__DOT__left) 
                        >> 8U));
        __VdlyDim0__tb_scene_visual__DOT__visual__DOT__wave__v0 
            = ((0x80U & ((~ (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__front)) 
                         << 7U)) | (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wp));
        __VdlySet__tb_scene_visual__DOT__visual__DOT__wave__v0 = 1U;
    }
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q 
        = vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave
        [(2U | ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__front) 
                << 7U))];
    if (vlSelfRef.tb_scene_visual__DOT__reset) {
        __Vdly__tb_scene_visual__DOT__pl = 0U;
        __Vdly__tb_scene_visual__DOT__pr = 0U;
        __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l = 0U;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l 
            = __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l;
        __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r = 0U;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r 
            = __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r;
        __Vdly__tb_scene_visual__DOT__visual__DOT__front = 0U;
        __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready = 0U;
        __Vdly__tb_scene_visual__DOT__visual__DOT__wp = 0U;
        __Vdly__tb_scene_visual__DOT__visual__DOT__decimate = 0U;
    } else {
        if (vlSelfRef.tb_scene_visual__DOT__ce) {
            if (((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_l) 
                 > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l))) {
                __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l 
                    = vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_l;
            }
            if (((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_r) 
                 > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r))) {
                __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r 
                    = vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_r;
            }
            __Vdly__tb_scene_visual__DOT__visual__DOT__decimate 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__decimate)));
            if (((~ (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__page_ready)) 
                 & (0xfU == (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__decimate)))) {
                if ((0x7fU == (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wp))) {
                    __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready = 1U;
                } else {
                    __Vdly__tb_scene_visual__DOT__visual__DOT__wp 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wp)));
                }
            }
        }
        if (vlSelfRef.tb_scene_visual__DOT__frame) {
            __Vdly__tb_scene_visual__DOT__pl = (0x1fU 
                                                & (((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_l) 
                                                    >= (IData)(vlSelfRef.tb_scene_visual__DOT__pl))
                                                    ? (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_l)
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.tb_scene_visual__DOT__pl))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelfRef.tb_scene_visual__DOT__pl) 
                                                     - (IData)(1U)))));
            __Vdly__tb_scene_visual__DOT__pr = (0x1fU 
                                                & (((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_r) 
                                                    >= (IData)(vlSelfRef.tb_scene_visual__DOT__pr))
                                                    ? (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_r)
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.tb_scene_visual__DOT__pr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelfRef.tb_scene_visual__DOT__pr) 
                                                     - (IData)(1U)))));
            if (vlSelfRef.tb_scene_visual__DOT__ce) {
                __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l 
                    = vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_l;
                __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r 
                    = vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_r;
            } else {
                __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l = 0U;
                __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r = 0U;
            }
            if (vlSelfRef.tb_scene_visual__DOT__visual__DOT__page_ready) {
                __Vdly__tb_scene_visual__DOT__visual__DOT__front 
                    = (1U & (~ (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__front)));
                __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready = 0U;
                __Vdly__tb_scene_visual__DOT__visual__DOT__wp = 0U;
            }
        }
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l 
            = __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_l;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r 
            = __Vdly__tb_scene_visual__DOT__visual__DOT__maximum_r;
    }
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__decimate 
        = __Vdly__tb_scene_visual__DOT__visual__DOT__decimate;
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__wp 
        = __Vdly__tb_scene_visual__DOT__visual__DOT__wp;
    if (__VdlySet__tb_scene_visual__DOT__visual__DOT__wave__v0) {
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave[__VdlyDim0__tb_scene_visual__DOT__visual__DOT__wave__v0] 
            = __VdlyVal__tb_scene_visual__DOT__visual__DOT__wave__v0;
    }
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__front 
        = __Vdly__tb_scene_visual__DOT__visual__DOT__front;
    if (vlSelfRef.tb_scene_visual__DOT__reset) {
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__tick = 0U;
        __Vdly__tb_scene_visual__DOT__scene__DOT__vs = 0U;
        __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual = 1U;
        vlSelfRef.tb_scene_visual__DOT__visible = 1U;
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__vs 
            = __Vdly__tb_scene_visual__DOT__scene__DOT__vs;
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_visual 
            = __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual;
        vlSelfRef.tb_scene_visual__DOT__ink = 0U;
        vlSelfRef.tb_scene_visual__DOT__shade = 0U;
        vlSelfRef.tb_scene_visual__DOT__color = 0U;
    } else {
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__tick 
            = ((IData)(vlSelfRef.tb_scene_visual__DOT__emergency)
                ? ((7U == vlSelfRef.tb_scene_visual__DOT__scene__DOT__tick)
                    ? 0U : (0x1ffffffU & ((IData)(1U) 
                                          + vlSelfRef.tb_scene_visual__DOT__scene__DOT__tick)))
                : 0U);
        __Vdly__tb_scene_visual__DOT__scene__DOT__vs 
            = ((2U & ((IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__vs) 
                      << 1U)) | (IData)(vlSelfRef.tb_scene_visual__DOT__hide));
        if (vlSelfRef.tb_scene_visual__DOT__frame) {
            vlSelfRef.tb_scene_visual__DOT__visible 
                = ((IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_visual) 
                   & (~ ((IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__vs) 
                         >> 1U)));
        }
        if (vlSelfRef.tb_scene_visual__DOT__cv) {
            if ((1U & (~ ((0x51U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)) 
                          || (0x71U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)))))) {
                if ((1U & (~ ((0x58U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)) 
                              || (0x78U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)))))) {
                    if (((0x5aU == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)) 
                         || (0x7aU == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)))) {
                        __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual 
                            = (1U & (~ (IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_visual)));
                    }
                }
            }
        }
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__vs 
            = __Vdly__tb_scene_visual__DOT__scene__DOT__vs;
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_visual 
            = __Vdly__tb_scene_visual__DOT__scene__DOT__soft_visual;
        if ((((((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__en) 
                & (0x40U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))) 
               & (0x240U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))) 
              & (0x160U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py))) 
             & (0x1a0U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py)))) {
            vlSelfRef.tb_scene_visual__DOT__shade = 1U;
            vlSelfRef.tb_scene_visual__DOT__ink = 0U;
            vlSelfRef.tb_scene_visual__DOT__color = 0x304050U;
            if ((0x178U == (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py))) {
                vlSelfRef.tb_scene_visual__DOT__ink = 1U;
                vlSelfRef.tb_scene_visual__DOT__color = 0x405060U;
            }
            if ((((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__valid_page) 
                  & (0x190U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py))) 
                 & (((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py) 
                     == (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_y)) 
                    | (VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py)) 
                       == ((IData)(1U) + VL_EXTENDS_II(32,11, (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_y))))))) {
                vlSelfRef.tb_scene_visual__DOT__ink = 1U;
                vlSelfRef.tb_scene_visual__DOT__color = 0x50ffffU;
            }
            if (((0x194U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py)) 
                 & (0x19cU > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__py)))) {
                if ((((0x40U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px)) 
                      & (0x138U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))) 
                     & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px) 
                        < ((IData)(0x40U) + ((IData)(vlSelfRef.tb_scene_visual__DOT__ll) 
                                             << 3U))))) {
                    vlSelfRef.tb_scene_visual__DOT__ink = 1U;
                    vlSelfRef.tb_scene_visual__DOT__color = 0x40df70U;
                }
                if ((((0x148U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px)) 
                      & (0x240U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))) 
                     & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px) 
                        < ((IData)(0x148U) + ((IData)(vlSelfRef.tb_scene_visual__DOT__rr) 
                                              << 3U))))) {
                    vlSelfRef.tb_scene_visual__DOT__ink = 1U;
                    vlSelfRef.tb_scene_visual__DOT__color = 0xffb050U;
                }
                if (((((0x40U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px)) 
                       & (0x138U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))) 
                      & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px) 
                         == ((IData)(0x3fU) + ((IData)(vlSelfRef.tb_scene_visual__DOT__pl) 
                                               << 3U)))) 
                     | (((0x148U <= (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px)) 
                         & (0x240U > (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))) 
                        & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px) 
                           == ((IData)(0x147U) + ((IData)(vlSelfRef.tb_scene_visual__DOT__pr) 
                                                  << 3U)))))) {
                    vlSelfRef.tb_scene_visual__DOT__ink = 1U;
                    vlSelfRef.tb_scene_visual__DOT__color = 0xffffffU;
                }
            }
        } else {
            vlSelfRef.tb_scene_visual__DOT__shade = 0U;
            vlSelfRef.tb_scene_visual__DOT__ink = 0U;
            vlSelfRef.tb_scene_visual__DOT__color = 0x304050U;
        }
    }
    vlSelfRef.tb_scene_visual__DOT__pl = __Vdly__tb_scene_visual__DOT__pl;
    vlSelfRef.tb_scene_visual__DOT__pr = __Vdly__tb_scene_visual__DOT__pr;
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_y 
        = (0x7ffU & ((IData)(0x178U) - VL_SHIFTRS_III(11,11,32, 
                                                      ((0x700U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q) 
                                                                          >> 7U)))) 
                                                           << 8U)) 
                                                       | (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q)), 3U)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__en 
        = ((1U & (~ (IData)(vlSelfRef.tb_scene_visual__DOT__reset))) 
           && (IData)(vlSelfRef.tb_scene_visual__DOT__en));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__valid_page 
        = ((1U & (~ (IData)(vlSelfRef.tb_scene_visual__DOT__reset))) 
           && (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__has_page));
    if (vlSelfRef.tb_scene_visual__DOT__reset) {
        __Vdly__tb_scene_visual__DOT__scene__DOT__es = 0U;
        vlSelfRef.tb_scene_visual__DOT__emergency = 0U;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__px = 0U;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__py = 0U;
        vlSelfRef.tb_scene_visual__DOT__ll = 0U;
        vlSelfRef.tb_scene_visual__DOT__rr = 0U;
        vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_alert = 0U;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__has_page = 0U;
    } else {
        __Vdly__tb_scene_visual__DOT__scene__DOT__es 
            = ((2U & ((IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__es) 
                      << 1U)) | (IData)(vlSelfRef.tb_scene_visual__DOT__es));
        if (vlSelfRef.tb_scene_visual__DOT__frame) {
            vlSelfRef.tb_scene_visual__DOT__emergency 
                = (IData)((((IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__es) 
                            >> 1U) | (IData)(vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_alert)));
            vlSelfRef.tb_scene_visual__DOT__ll = vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_l;
            vlSelfRef.tb_scene_visual__DOT__rr = vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_r;
        }
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__px = 0x48U;
        vlSelfRef.tb_scene_visual__DOT__visual__DOT__py = 0x188U;
        if (vlSelfRef.tb_scene_visual__DOT__cv) {
            if (((0x51U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)) 
                 || (0x71U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)))) {
                vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_alert = 1U;
            } else if (((0x58U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)) 
                        || (0x78U == (IData)(vlSelfRef.tb_scene_visual__DOT__cmd)))) {
                vlSelfRef.tb_scene_visual__DOT__scene__DOT__soft_alert = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_scene_visual__DOT__frame) 
             & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__page_ready))) {
            vlSelfRef.tb_scene_visual__DOT__visual__DOT__has_page = 1U;
        }
    }
    vlSelfRef.tb_scene_visual__DOT__scene__DOT__es 
        = __Vdly__tb_scene_visual__DOT__scene__DOT__es;
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_l 
        = ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l))
            ? 0x1fU : (0x1fU & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l) 
                                >> 0xaU)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_r 
        = ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r))
            ? 0x1fU : (0x1fU & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r) 
                                >> 0xaU)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__page_ready 
        = __Vdly__tb_scene_visual__DOT__visual__DOT__page_ready;
}

void Vtb_scene_visual___024root___timing_resume(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___timing_resume\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb567af9f__0.resume(
                                                   "@(negedge tb_scene_visual.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_scene_visual___024root___timing_commit(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___timing_commit\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb567af9f__0.commit(
                                                   "@(negedge tb_scene_visual.clk)");
    }
}

void Vtb_scene_visual___024root___eval_triggers__act(Vtb_scene_visual___024root* vlSelf);

bool Vtb_scene_visual___024root___eval_phase__act(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_phase__act\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_scene_visual___024root___eval_triggers__act(vlSelf);
    Vtb_scene_visual___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_scene_visual___024root___timing_resume(vlSelf);
        Vtb_scene_visual___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_scene_visual___024root___eval_phase__nba(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_phase__nba\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_scene_visual___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_visual___024root___dump_triggers__nba(Vtb_scene_visual___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_visual___024root___dump_triggers__act(Vtb_scene_visual___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_scene_visual___024root___eval(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_scene_visual___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_scene_visual.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_scene_visual___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_scene_visual.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_scene_visual___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_scene_visual___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_scene_visual___024root___eval_debug_assertions(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_debug_assertions\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
