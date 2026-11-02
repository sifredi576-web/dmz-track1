// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_osd_menu.h for the primary calling header

#include "Vtb_osd_menu__pch.h"
#include "Vtb_osd_menu___024root.h"

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_initial__TOP(Vtb_osd_menu___024root* vlSelf);
VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__0(Vtb_osd_menu___024root* vlSelf);
VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__1(Vtb_osd_menu___024root* vlSelf);
VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2(Vtb_osd_menu___024root* vlSelf);

void Vtb_osd_menu___024root___eval_initial(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_osd_menu___024root___eval_initial__TOP(vlSelf);
    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_osd_menu.sv", 
                                             3);
        vlSelfRef.tb_osd_menu__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__clk)));
    }
}

void Vtb_osd_menu___024root___act_comb__TOP__0(Vtb_osd_menu___024root* vlSelf);

void Vtb_osd_menu___024root___eval_act(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_act\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_osd_menu___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hab76c978_0;

VL_INLINE_OPT void Vtb_osd_menu___024root___act_comb__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___act_comb__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_osd_menu__DOT__menu__DOT__total = 
        ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
          ? (IData)(vlSelfRef.tb_osd_menu__DOT__wavs)
          : 4U);
    if ((0x31dU <= (IData)(vlSelfRef.tb_osd_menu__DOT__x))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(vlSelfRef.tb_osd_menu__DOT__x) 
               - (IData)(0x31dU));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_osd_menu__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__y))));
    } else {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(3U) + (IData)(vlSelfRef.tb_osd_menu__DOT__x));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_osd_menu__DOT__y));
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x 
        = (0x3ffU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                     + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0U;
    if (((((((((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                >> 4U))) | (1U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) | (3U == 
                                              (0x1fU 
                                               & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                  >> 4U)))) 
            | (7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (9U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
          | (0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (0xdU == 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                >> 4U))))) {
        if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 1U;
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 2U;
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 3U;
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 4U;
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 5U;
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 6U;
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 7U;
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 8U;
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 9U;
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xaU;
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xbU;
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xcU;
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xdU;
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xeU;
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x12U;
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x13U;
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x11U;
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)))) {
        if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x14U : 0x15U);
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x16U : ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course)
                                ? 0x17U : 0x18U));
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x19U : 0x1aU);
        } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x1bU : 0x1cU);
        } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x1dU;
        } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x1eU;
        } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x1fU : 0x20U);
        }
        if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                      & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x21U;
        } else if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                             & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x22U;
        }
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[0U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[0U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[1U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[1U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[2U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[3U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[4U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[5U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[6U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[7U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[8U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[9U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    if (((((((((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                >> 4U))) | (1U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) | (3U == 
                                              (0x1fU 
                                               & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                  >> 4U)))) 
            | (7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (9U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
          | (0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (0xdU == 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                >> 4U))))) {
        if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        if (((((((((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (7U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))) 
                  | (9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
                | (0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) | (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                     >> 4U))))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) ? 0x23U
                    : ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U))) ? 0x24U
                        : ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                            >> 4U)))
                            ? 0x25U : ((0xbU == (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))
                                        ? 0x26U : (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                        >> 4U)))
                                                    ? 0x27U
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                         >> 4U)))
                                                     ? 0x28U
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                          >> 4U)))
                                                      ? 0x29U
                                                      : 0x2aU)))))));
        }
    }
    if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xf8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0x14U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 0x10U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x180000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x30000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xe0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0xcU));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 8U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x6000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xc8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n 
                            = (0xfU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm);
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout))));
    }
    if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x800000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x8000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout) 
                  << 0x18U));
    }
    if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xb8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xa0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x300000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x2000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout) 
                  << 8U));
    }
    if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__source)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U] 
                = (0x54535400U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xe000000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] = 0x4d555445U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xf00000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
                = (0x4c440000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
                = (0x484fU | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x3c000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0xc000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0x58U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] = 0x4641494cU;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xf00000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
                = (0x57415600U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xe000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0xc000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  >> 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__name));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x8000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 8U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x4000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x10U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x2000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x18U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x20U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x800000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x28U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x400000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x30U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x200000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x38U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x100000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U] 
                = (0x574156U | (0xff000000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x70000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if ((IData)(((0x10U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))) 
                 & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = (0x49520000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
            = (0x5041U | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U]));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x3c000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)))) {
        if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
        if (((0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                       >> 4U)) == ((IData)(9U) + ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__cursor) 
                                                  << 1U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
                = (0x3e0000U | (0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x400000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if ((IData)(((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                     & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))))) {
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n 
                = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout 
                = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x4000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
                   | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout) 
                      << 0x10U));
        }
        if ((IData)(((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                     & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))))) {
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n 
                = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout 
                = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x4000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
                   | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout) 
                      << 0x10U));
        }
        if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                      & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                             & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        if (((((((((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (7U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))) 
                  | (9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
                | (0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) | (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                     >> 4U))))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                            >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0x118U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xd8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x18000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0x98U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x180000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
}

void Vtb_osd_menu___024root___nba_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf);
void Vtb_osd_menu___024root___nba_comb__TOP__0(Vtb_osd_menu___024root* vlSelf);

void Vtb_osd_menu___024root___eval_nba(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_nba\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_osd_menu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_osd_menu___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<16>/*511:0*/ Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0;
extern const VlWide<16>/*511:0*/ Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0;

VL_INLINE_OPT void Vtb_osd_menu___024root___nba_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___nba_sequent__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps = 0;
    IData/*31:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__timer;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0;
    CData/*1:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__pending;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0;
    CData/*0:0*/ __Vdly__tb_osd_menu__DOT__select_request;
    __Vdly__tb_osd_menu__DOT__select_request = 0;
    CData/*0:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__loading;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 0;
    CData/*1:0*/ __Vdly__tb_osd_menu__DOT__section;
    __Vdly__tb_osd_menu__DOT__section = 0;
    CData/*1:0*/ __Vdly__tb_osd_menu__DOT__cursor;
    __Vdly__tb_osd_menu__DOT__cursor = 0;
    CData/*0:0*/ __Vdly__tb_osd_menu__DOT__opened;
    __Vdly__tb_osd_menu__DOT__opened = 0;
    CData/*5:0*/ __Vdly__tb_osd_menu__DOT__query;
    __Vdly__tb_osd_menu__DOT__query = 0;
    SData/*9:0*/ __Vdly__tb_osd_menu__DOT__osd__DOT__scroll;
    __Vdly__tb_osd_menu__DOT__osd__DOT__scroll = 0;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    __Vdly__tb_osd_menu__DOT__section = vlSelfRef.tb_osd_menu__DOT__section;
    __Vdly__tb_osd_menu__DOT__cursor = vlSelfRef.tb_osd_menu__DOT__cursor;
    __Vdly__tb_osd_menu__DOT__opened = vlSelfRef.tb_osd_menu__DOT__opened;
    __Vdly__tb_osd_menu__DOT__query = vlSelfRef.tb_osd_menu__DOT__query;
    __Vdly__tb_osd_menu__DOT__osd__DOT__scroll = vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps 
        = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__last_swaps;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending 
        = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending;
    if (vlSelfRef.tb_osd_menu__DOT__select_request) {
        __Vdly__tb_osd_menu__DOT__select_request = 1U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__loading 
            = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading;
        vlSelfRef.tb_osd_menu__DOT__selections = ((IData)(1U) 
                                                  + vlSelfRef.tb_osd_menu__DOT__selections);
        vlSelfRef.tb_osd_menu__DOT__chosen = vlSelfRef.tb_osd_menu__DOT__selected;
    } else {
        __Vdly__tb_osd_menu__DOT__select_request = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__loading 
            = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading;
    }
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        __Vdly__tb_osd_menu__DOT__osd__DOT__scroll = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll 
            = __Vdly__tb_osd_menu__DOT__osd__DOT__scroll;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__we = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__se = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__name = 0ULL;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol = 8U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__img = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__con = 4U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri = 4U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode = 1U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__source = 1U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__cursor = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis = 1U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__course = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__section = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__q = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_osd_menu__DOT__y)))) {
            __Vdly__tb_osd_menu__DOT__osd__DOT__scroll 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__we = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__se = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__name = 0x202020324f4d4544ULL;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol = 8U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__img = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__con = 4U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri = 4U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm = 0x12345U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__source = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__cursor 
                = vlSelfRef.tb_osd_menu__DOT__cursor;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__course 
                = vlSelfRef.tb_osd_menu__DOT__course;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__section 
                = vlSelfRef.tb_osd_menu__DOT__section;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc = 2U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic = 4U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__q = 1U;
        }
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll 
            = __Vdly__tb_osd_menu__DOT__osd__DOT__scroll;
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__total = (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))
                                                    ? (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc)
                                                    : (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic));
    vlSelfRef.tb_osd_menu__DOT__color = ((IData)(vlSelfRef.tb_osd_menu__DOT__reset)
                                          ? 0U : ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__selected_q)
                                                   ? 0x60ffffU
                                                   : 0xffffffU));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__selected_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
           && (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__selected));
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        vlSelfRef.tb_osd_menu__DOT__ink = 0U;
        vlSelfRef.tb_osd_menu__DOT__shade = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
        __Vdly__tb_osd_menu__DOT__select_request = 0U;
        vlSelfRef.tb_osd_menu__DOT__selected = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 1U;
    } else {
        vlSelfRef.tb_osd_menu__DOT__ink = ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__area_q) 
                                           & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__font_row) 
                                              >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_x)))));
        vlSelfRef.tb_osd_menu__DOT__shade = ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__area_q) 
                                             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__shade_q));
        __Vdly__tb_osd_menu__DOT__select_request = 0U;
        if ((vlSelfRef.tb_osd_menu__DOT__swaps != vlSelfRef.tb_osd_menu__DOT__gallery__DOT__last_swaps)) {
            __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps 
                = vlSelfRef.tb_osd_menu__DOT__swaps;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 0U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
        } else if ((((~ (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading)) 
                     & (IData)(vlSelfRef.tb_osd_menu__DOT__autoplay)) 
                    & (0xee6b27fU > vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer))) {
            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer 
                = ((IData)(1U) + vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer);
        }
        if ((((~ (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading)) 
              & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__select_request))) 
             & ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending)) 
                | ((IData)(vlSelfRef.tb_osd_menu__DOT__autoplay) 
                   & (0xee6b27fU == vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer))))) {
            vlSelfRef.tb_osd_menu__DOT__selected = 
                ((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending))
                  ? (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index)
                  : ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending))
                      ? 3U : 1U));
            __Vdly__tb_osd_menu__DOT__select_request = 1U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 1U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
        }
        if (vlSelfRef.tb_osd_menu__DOT__cv) {
            if ((0x80U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                             & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 2U;
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                                if ((IData)(((0x80U 
                                              == (0xe0U 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                             & (4U 
                                                > (0x1fU 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                                }
                            } else {
                                __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 1U;
                            }
                        } else if ((IData)(((0x80U 
                                             == (0xe0U 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                            & (4U > 
                                               (0x1fU 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((IData)(((0x80U == 
                                          (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                         & (4U > (0x1fU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                            }
                        } else {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
                        }
                    } else if ((IData)(((0x80U == (0xe0U 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                        & (4U > (0x1fU 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                 & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
                } else if ((IData)(((0x80U == (0xe0U 
                                               & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                    & (4U > (0x1fU 
                                             & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                }
            } else if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
            }
        }
    }
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__last_swaps 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps;
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__timer;
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__pending;
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__loading;
    vlSelfRef.tb_osd_menu__DOT__select_request = __Vdly__tb_osd_menu__DOT__select_request;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__area_q = 
        ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
         && (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__area));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__shade_q = 
        ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
         && (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__shade));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__font_row 
        = vlSelfRef.tb_osd_menu__DOT__osd__DOT__font_rom
        [((0x3f8U & (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_used)
                       ? (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_char)
                       : (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_char)) 
                     << 3U)) | (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos) 
                                      >> 3U)))];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_x = 
        ((IData)(vlSelfRef.tb_osd_menu__DOT__reset)
          ? 0U : (7U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0 
        = ((([&]() {
                    vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__91__n 
                        = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total), (IData)(0xaU)));
                    vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__91__Vfuncout 
                        = (0xffU & ((IData)(0x30U) 
                                    + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__91__n)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__91__Vfuncout)) 
            << 8U) | ([&]() {
                vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__92__n 
                    = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total), (IData)(0xaU)));
                vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__92__Vfuncout 
                    = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__92__n)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__92__Vfuncout)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__selected 
        = ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
           && ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
               & ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U))) | (0xbU 
                                               == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U))))));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__area = ((1U 
                                                   & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
                                                  && ((0x280U 
                                                       > 
                                                       (0x3ffU 
                                                        & vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1)) 
                                                      & (0x1e0U 
                                                         > (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__shade = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
                                                   && (((4U 
                                                         > 
                                                         (0x1fU 
                                                          & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                             >> 4U))) 
                                                        | (0x1bU 
                                                           <= 
                                                           (0x1fU 
                                                            & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                               >> 4U)))) 
                                                       | (((((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
                                                             & (0x40U 
                                                                <= 
                                                                (0x3ffU 
                                                                 & vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1))) 
                                                            & (0x240U 
                                                               > 
                                                               (0x3ffU 
                                                                & vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1))) 
                                                           & (0x60U 
                                                              <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))) 
                                                          & (0x160U 
                                                             > (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_char 
        = vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom
        [(((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id) 
           << 6U) | (0x3fU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                              >> 4U)))];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_used 
        = ((IData)(vlSelfRef.tb_osd_menu__DOT__reset) 
           || (((0x1bU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (0x28U 
                                                <= 
                                                (0x3fU 
                                                 & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                    >> 4U)))) 
               | ((0x28U > (0x3fU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                     >> 4U))) & ((0x27U 
                                                  >= 
                                                  (0x3fU 
                                                   & ((IData)(0x27U) 
                                                      - 
                                                      (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                       >> 4U)))) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                                                                >> 
                                                                (0x3fU 
                                                                 & ((IData)(0x27U) 
                                                                    - 
                                                                    (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                     >> 4U))))))))));
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        __Vtemp_2[0U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0U];
        __Vtemp_2[1U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[1U];
        __Vtemp_2[2U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[2U];
        __Vtemp_2[3U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[3U];
        __Vtemp_2[4U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[4U];
        __Vtemp_2[5U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[5U];
        __Vtemp_2[6U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[6U];
        __Vtemp_2[7U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[7U];
        __Vtemp_2[8U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[8U];
        __Vtemp_2[9U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[9U];
        __Vtemp_2[0xaU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xaU];
        __Vtemp_2[0xbU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xbU];
        __Vtemp_2[0xcU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xcU];
        __Vtemp_2[0xdU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xdU];
        __Vtemp_2[0xeU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xeU];
        __Vtemp_2[0xfU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xfU];
    } else {
        __Vtemp_2[0U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0U];
        __Vtemp_2[1U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[1U];
        __Vtemp_2[2U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[2U];
        __Vtemp_2[3U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[3U];
        __Vtemp_2[4U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[4U];
        __Vtemp_2[5U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[5U];
        __Vtemp_2[6U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[6U];
        __Vtemp_2[7U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[7U];
        __Vtemp_2[8U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[8U];
        __Vtemp_2[9U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[9U];
        __Vtemp_2[0xaU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xaU];
        __Vtemp_2[0xbU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xbU];
        __Vtemp_2[0xcU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xcU];
        __Vtemp_2[0xdU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xdU];
        __Vtemp_2[0xeU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xeU];
        __Vtemp_2[0xfU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xfU];
    }
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        vlSelfRef.tb_osd_menu__DOT__autoplay = 1U;
        vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_char = 0x20U;
        __Vdly__tb_osd_menu__DOT__section = 0U;
        __Vdly__tb_osd_menu__DOT__cursor = 0U;
        __Vdly__tb_osd_menu__DOT__opened = 0U;
        __Vdly__tb_osd_menu__DOT__query = 0U;
        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
        vlSelfRef.tb_osd_menu__DOT__cb = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert = 0U;
    } else {
        if (vlSelfRef.tb_osd_menu__DOT__cv) {
            if ((0x80U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                             & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                    vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                        = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                                if ((IData)(((0x80U 
                                              == (0xe0U 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                             & (4U 
                                                > (0x1fU 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                    vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                                    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                        = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                                }
                            } else {
                                vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            }
                        } else if ((IData)(((0x80U 
                                             == (0xe0U 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                            & (4U > 
                                               (0x1fU 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((IData)(((0x80U == 
                                          (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                         & (4U > (0x1fU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                                vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                    = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                            }
                        } else {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                        }
                    } else if ((IData)(((0x80U == (0xe0U 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                        & (4U > (0x1fU 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                        vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                            = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                 & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                        vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                            = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                    }
                } else {
                    if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 1U;
                    } else if ((IData)(((0x80U == (0xe0U 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                        & (4U > (0x1fU 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    }
                }
            } else if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                    = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
            }
        }
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos 
            = ((0x38U & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         << 2U)) | (7U & ((0x1bU == 
                                           (0x1fU & 
                                            ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                             >> 4U)))
                                           ? ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                              >> 1U)
                                           : (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                              >> 1U))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_char 
            = (0xffU & ((0x1bU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                            >> 4U)))
                         ? (((0U == (0x1fU & (((IData)(0x1ffU) 
                                               - VL_SHIFTL_III(9,32,32, 
                                                               (0x3fU 
                                                                & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                   >> 4U)), 3U)) 
                                              - (IData)(7U))))
                              ? 0U : (__Vtemp_2[(((IData)(7U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (((IData)(0x1ffU) 
                                                       - 
                                                       VL_SHIFTL_III(9,32,32, 
                                                                     (0x3fU 
                                                                      & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                         >> 4U)), 3U)) 
                                                      - (IData)(7U)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((IData)(0x1ffU) 
                                                 - 
                                                 VL_SHIFTL_III(9,32,32, 
                                                               (0x3fU 
                                                                & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                   >> 4U)), 3U)) 
                                                - (IData)(7U)))))) 
                            | (__Vtemp_2[(0xfU & ((
                                                   ((IData)(0x1ffU) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, 
                                                                  (0x3fU 
                                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                      >> 4U)), 3U)) 
                                                   - (IData)(7U)) 
                                                  >> 5U))] 
                               >> (0x1fU & (((IData)(0x1ffU) 
                                             - VL_SHIFTL_III(9,32,32, 
                                                             (0x3fU 
                                                              & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                 >> 4U)), 3U)) 
                                            - (IData)(7U)))))
                         : ((0x28U > (0x3fU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                               >> 4U)))
                             ? ((0x13fU >= (0x1ffU 
                                            & (((IData)(0x13fU) 
                                                - VL_SHIFTL_III(9,32,32, 
                                                                (0x3fU 
                                                                 & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                    >> 4U)), 3U)) 
                                               - (IData)(7U))))
                                 ? (((0U == (0x1fU 
                                             & (((IData)(0x13fU) 
                                                 - 
                                                 VL_SHIFTL_III(9,32,32, 
                                                               (0x3fU 
                                                                & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                   >> 4U)), 3U)) 
                                                - (IData)(7U))))
                                      ? 0U : (vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[
                                              (((IData)(7U) 
                                                + (0x1ffU 
                                                   & (((IData)(0x13fU) 
                                                       - 
                                                       VL_SHIFTL_III(9,32,32, 
                                                                     (0x3fU 
                                                                      & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                         >> 4U)), 3U)) 
                                                      - (IData)(7U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0x13fU) 
                                                       - 
                                                       VL_SHIFTL_III(9,32,32, 
                                                                     (0x3fU 
                                                                      & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                         >> 4U)), 3U)) 
                                                      - (IData)(7U)))))) 
                                    | (vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[
                                       (0xfU & ((((IData)(0x13fU) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, 
                                                                (0x3fU 
                                                                 & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                    >> 4U)), 3U)) 
                                                 - (IData)(7U)) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0x13fU) 
                                             - VL_SHIFTL_III(9,32,32, 
                                                             (0x3fU 
                                                              & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                 >> 4U)), 3U)) 
                                            - (IData)(7U)))))
                                 : 0U) : 0x20U)));
        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
        if (vlSelfRef.tb_osd_menu__DOT__rv) {
            vlSelfRef.tb_osd_menu__DOT__cv = 1U;
            vlSelfRef.tb_osd_menu__DOT__cb = vlSelfRef.tb_osd_menu__DOT__rb;
            if ((0x80U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                  >> 5U)))) {
                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                    if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if ((4U == (7U 
                                                & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                   >> 5U)))) {
                                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
                                        if ((2U > (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                            __Vdly__tb_osd_menu__DOT__section 
                                                = (3U 
                                                   & ((0x7dU 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__rb))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__section))
                                                       : 
                                                      ((IData)(vlSelfRef.tb_osd_menu__DOT__section) 
                                                       - (IData)(1U))));
                                            __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                            __Vdly__tb_osd_menu__DOT__query 
                                                = (
                                                   (((0x7dU 
                                                      == (IData)(vlSelfRef.tb_osd_menu__DOT__rb)) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) 
                                                    | ((0x7bU 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__rb)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.tb_osd_menu__DOT__section))))
                                                    ? 0x20U
                                                    : 0U);
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                            vlSelfRef.tb_osd_menu__DOT__cv = 1U;
                                            vlSelfRef.tb_osd_menu__DOT__cb 
                                                = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                    ? 
                                                   ((0x7dU 
                                                     == (IData)(vlSelfRef.tb_osd_menu__DOT__rb))
                                                     ? 0x5dU
                                                     : 0x5bU)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                     ? 
                                                    ((0x7dU 
                                                      == (IData)(vlSelfRef.tb_osd_menu__DOT__rb))
                                                      ? 0x43U
                                                      : 0x63U)
                                                     : 0x44U));
                                        }
                                    } else {
                                        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
                                    }
                                } else if ((4U == (7U 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                      >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
                                        if ((2U > (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                            __Vdly__tb_osd_menu__DOT__section 
                                                = (3U 
                                                   & ((0x7dU 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__rb))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__section))
                                                       : 
                                                      ((IData)(vlSelfRef.tb_osd_menu__DOT__section) 
                                                       - (IData)(1U))));
                                            __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                            __Vdly__tb_osd_menu__DOT__query 
                                                = (
                                                   (((0x7dU 
                                                      == (IData)(vlSelfRef.tb_osd_menu__DOT__rb)) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) 
                                                    | ((0x7bU 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__rb)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.tb_osd_menu__DOT__section))))
                                                    ? 0x20U
                                                    : 0U);
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                            vlSelfRef.tb_osd_menu__DOT__cv = 1U;
                                            vlSelfRef.tb_osd_menu__DOT__cb 
                                                = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                    ? 
                                                   ((0x7dU 
                                                     == (IData)(vlSelfRef.tb_osd_menu__DOT__rb))
                                                     ? 0x5dU
                                                     : 0x5bU)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                     ? 
                                                    ((0x7dU 
                                                      == (IData)(vlSelfRef.tb_osd_menu__DOT__rb))
                                                      ? 0x43U
                                                      : 0x63U)
                                                     : 0x44U));
                                        }
                                    } else {
                                        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
                                    }
                                } else if ((4U == (7U 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                      >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if ((4U == (7U 
                                                & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                   >> 5U)))) {
                                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                                    }
                                } else if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                    __Vdly__tb_osd_menu__DOT__section 
                                        = (3U & ((IData)(vlSelfRef.tb_osd_menu__DOT__course)
                                                  ? 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.tb_osd_menu__DOT__section))
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_osd_menu__DOT__section))));
                                    __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                    __Vdly__tb_osd_menu__DOT__query 
                                        = ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__section))
                                            ? 0x20U
                                            : 0U);
                                } else {
                                    vlSelfRef.tb_osd_menu__DOT__cb = 0x43U;
                                }
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                  >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                                __Vdly__tb_osd_menu__DOT__query = 0U;
                                __Vdly__tb_osd_menu__DOT__section = 0U;
                                __Vdly__tb_osd_menu__DOT__cursor = 0U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                 >> 5U)))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                        if ((2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                            __Vdly__tb_osd_menu__DOT__cursor 
                                                = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                    ? 0U
                                                    : 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))));
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))) {
                                            __Vdly__tb_osd_menu__DOT__query 
                                                = (
                                                   (0x20U 
                                                    & (IData)(__Vdly__tb_osd_menu__DOT__query)) 
                                                   | (((0x3fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0x1fU 
                                                            & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))) 
                                                       >= (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))
                                                       ? 0U
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelfRef.tb_osd_menu__DOT__query)))));
                                        }
                                    } else {
                                        vlSelfRef.tb_osd_menu__DOT__cb = 0x5dU;
                                    }
                                } else if ((4U == (7U 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                      >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                  >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                if ((2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                    __Vdly__tb_osd_menu__DOT__cursor 
                                        = ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                            ? 2U : 
                                           (3U & ((IData)(vlSelfRef.tb_osd_menu__DOT__cursor) 
                                                  - (IData)(1U))));
                                } else if ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))) {
                                    __Vdly__tb_osd_menu__DOT__query 
                                        = ((0x20U & (IData)(__Vdly__tb_osd_menu__DOT__query)) 
                                           | (0x1fU 
                                              & ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(vlSelfRef.tb_osd_menu__DOT__query) 
                                                  - (IData)(1U)))));
                                }
                            } else {
                                vlSelfRef.tb_osd_menu__DOT__cb = 0x5bU;
                            }
                        } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                 >> 5U)))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                  >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else {
                                __Vdly__tb_osd_menu__DOT__opened 
                                    = (1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__opened)));
                                if (vlSelfRef.tb_osd_menu__DOT__course) {
                                    __Vdly__tb_osd_menu__DOT__section = 2U;
                                    __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                if ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                    vlSelfRef.tb_osd_menu__DOT__cb 
                                        = ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                            ? 0x5dU
                                            : ((1U 
                                                == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                ? 0x43U
                                                : 0x44U));
                                } else if ((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                    if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))) {
                                        vlSelfRef.tb_osd_menu__DOT__cb 
                                            = ((IData)(vlSelfRef.tb_osd_menu__DOT__course)
                                                ? 0x4aU
                                                : 0x57U);
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))) {
                                        vlSelfRef.tb_osd_menu__DOT__cb = 0x52U;
                                        __Vdly__tb_osd_menu__DOT__query = 0U;
                                        __Vdly__tb_osd_menu__DOT__section = 0U;
                                        __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                    } else {
                                        vlSelfRef.tb_osd_menu__DOT__cb = 0x41U;
                                    }
                                } else if (((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total)) 
                                            & ((IData)(vlSelfRef.tb_osd_menu__DOT__tag) 
                                               == (IData)(vlSelfRef.tb_osd_menu__DOT__query)))) {
                                    vlSelfRef.tb_osd_menu__DOT__cb 
                                        = ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
                                            ? (0xc0U 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))
                                            : (0x80U 
                                               | (0x1fU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__query))));
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else {
                                vlSelfRef.tb_osd_menu__DOT__cb = 0x44U;
                            }
                        } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                 >> 5U)))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                             >> 5U)))) {
                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                    }
                } else if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                    if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                          >> 5U)))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                  >> 5U)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                __Vdly__tb_osd_menu__DOT__section 
                                    = (3U & ((IData)(vlSelfRef.tb_osd_menu__DOT__course)
                                              ? ((2U 
                                                  == (IData)(vlSelfRef.tb_osd_menu__DOT__section))
                                                  ? 3U
                                                  : 2U)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_osd_menu__DOT__section))));
                                __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                __Vdly__tb_osd_menu__DOT__query 
                                    = ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__section))
                                        ? 0x20U : 0U);
                            } else {
                                vlSelfRef.tb_osd_menu__DOT__cb = 0x43U;
                            }
                        } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                 >> 5U)))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                              >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                            __Vdly__tb_osd_menu__DOT__query = 0U;
                            __Vdly__tb_osd_menu__DOT__section = 0U;
                            __Vdly__tb_osd_menu__DOT__cursor = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                    } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                             >> 5U)))) {
                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                    if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                    if ((2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                        __Vdly__tb_osd_menu__DOT__cursor 
                                            = ((2U 
                                                == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                ? 0U
                                                : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))));
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))) {
                                        __Vdly__tb_osd_menu__DOT__query 
                                            = ((0x20U 
                                                & (IData)(__Vdly__tb_osd_menu__DOT__query)) 
                                               | (((0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))) 
                                                   >= (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__query)))));
                                    }
                                } else {
                                    vlSelfRef.tb_osd_menu__DOT__cb = 0x5dU;
                                }
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                                 >> 5U)))) {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                              >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else {
                            __Vdly__tb_osd_menu__DOT__opened = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if (vlSelfRef.tb_osd_menu__DOT__opened) {
                            if ((2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                __Vdly__tb_osd_menu__DOT__cursor 
                                    = ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                        ? 2U : (3U 
                                                & ((IData)(vlSelfRef.tb_osd_menu__DOT__cursor) 
                                                   - (IData)(1U))));
                            } else if ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))) {
                                __Vdly__tb_osd_menu__DOT__query 
                                    = ((0x20U & (IData)(__Vdly__tb_osd_menu__DOT__query)) 
                                       | (0x1fU & (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))
                                                    ? 
                                                   ((IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelfRef.tb_osd_menu__DOT__query) 
                                                    - (IData)(1U)))));
                            }
                        } else {
                            vlSelfRef.tb_osd_menu__DOT__cb = 0x5bU;
                        }
                    } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                             >> 5U)))) {
                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                    if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                              >> 5U)))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else {
                            __Vdly__tb_osd_menu__DOT__opened 
                                = (1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__opened)));
                            if (vlSelfRef.tb_osd_menu__DOT__course) {
                                __Vdly__tb_osd_menu__DOT__section = 2U;
                                __Vdly__tb_osd_menu__DOT__cursor = 0U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if (vlSelfRef.tb_osd_menu__DOT__opened) {
                            if ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                vlSelfRef.tb_osd_menu__DOT__cb 
                                    = ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                        ? 0x5dU : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))
                                                    ? 0x43U
                                                    : 0x44U));
                            } else if ((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__section))) {
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                                if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))) {
                                    vlSelfRef.tb_osd_menu__DOT__cb 
                                        = ((IData)(vlSelfRef.tb_osd_menu__DOT__course)
                                            ? 0x4aU
                                            : 0x57U);
                                } else if ((1U == (IData)(vlSelfRef.tb_osd_menu__DOT__cursor))) {
                                    vlSelfRef.tb_osd_menu__DOT__cb = 0x52U;
                                    __Vdly__tb_osd_menu__DOT__query = 0U;
                                    __Vdly__tb_osd_menu__DOT__section = 0U;
                                    __Vdly__tb_osd_menu__DOT__cursor = 0U;
                                } else {
                                    vlSelfRef.tb_osd_menu__DOT__cb = 0x41U;
                                }
                            } else if (((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total)) 
                                        & ((IData)(vlSelfRef.tb_osd_menu__DOT__tag) 
                                           == (IData)(vlSelfRef.tb_osd_menu__DOT__query)))) {
                                vlSelfRef.tb_osd_menu__DOT__cb 
                                    = ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
                                        ? (0xc0U | 
                                           (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))
                                        : (0x80U | 
                                           (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__query))));
                                __Vdly__tb_osd_menu__DOT__opened = 0U;
                            }
                        } else {
                            vlSelfRef.tb_osd_menu__DOT__cb = 0x44U;
                        }
                    } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                             >> 5U)))) {
                        __Vdly__tb_osd_menu__DOT__opened = 0U;
                    }
                } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                         >> 5U)))) {
                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                }
            } else if ((4U == (7U & ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                     >> 5U)))) {
                __Vdly__tb_osd_menu__DOT__opened = 0U;
            }
        }
        if (((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_osd_menu__DOT__y)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened 
                = vlSelfRef.tb_osd_menu__DOT__show_menu;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert 
                = vlSelfRef.tb_osd_menu__DOT__show_alert;
        }
    }
    vlSelfRef.tb_osd_menu__DOT__opened = __Vdly__tb_osd_menu__DOT__opened;
    vlSelfRef.tb_osd_menu__DOT__section = __Vdly__tb_osd_menu__DOT__section;
    vlSelfRef.tb_osd_menu__DOT__cursor = __Vdly__tb_osd_menu__DOT__cursor;
    vlSelfRef.tb_osd_menu__DOT__query = __Vdly__tb_osd_menu__DOT__query;
}

VL_INLINE_OPT void Vtb_osd_menu___024root___nba_comb__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___nba_comb__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31dU <= (IData)(vlSelfRef.tb_osd_menu__DOT__x))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(vlSelfRef.tb_osd_menu__DOT__x) 
               - (IData)(0x31dU));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_osd_menu__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__y))));
    } else {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(3U) + (IData)(vlSelfRef.tb_osd_menu__DOT__x));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_osd_menu__DOT__y));
    }
    vlSelfRef.tb_osd_menu__DOT__menu__DOT__total = 
        ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
          ? (IData)(vlSelfRef.tb_osd_menu__DOT__wavs)
          : 4U);
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x 
        = (0x3ffU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                     + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0U;
    if (((((((((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                >> 4U))) | (1U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) | (3U == 
                                              (0x1fU 
                                               & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                  >> 4U)))) 
            | (7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (9U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
          | (0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (0xdU == 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                >> 4U))))) {
        if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 1U;
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 2U;
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 3U;
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 4U;
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 5U;
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 6U;
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 7U;
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 8U;
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 9U;
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xaU;
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xbU;
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xcU;
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xdU;
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xeU;
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x12U;
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x13U;
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x11U;
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)))) {
        if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x14U : 0x15U);
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x16U : ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course)
                                ? 0x17U : 0x18U));
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x19U : 0x1aU);
        } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x1bU : 0x1cU);
        } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x1dU;
        } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x1eU;
        } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x1fU : 0x20U);
        }
        if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                      & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x21U;
        } else if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                             & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x22U;
        }
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[0U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[0U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[1U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[1U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[2U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[3U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[4U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[5U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[6U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[7U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[8U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[9U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    if (((((((((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                >> 4U))) | (1U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) | (3U == 
                                              (0x1fU 
                                               & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                  >> 4U)))) 
            | (7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (9U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
          | (0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (0xdU == 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                >> 4U))))) {
        if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        if (((((((((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (7U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))) 
                  | (9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
                | (0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) | (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                     >> 4U))))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) ? 0x23U
                    : ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U))) ? 0x24U
                        : ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                            >> 4U)))
                            ? 0x25U : ((0xbU == (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))
                                        ? 0x26U : (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                        >> 4U)))
                                                    ? 0x27U
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                         >> 4U)))
                                                     ? 0x28U
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                          >> 4U)))
                                                      ? 0x29U
                                                      : 0x2aU)))))));
        }
    }
    if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xf8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0x14U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 0x10U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x180000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x30000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xe0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0xcU));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 8U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x6000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xc8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n 
                            = (0xfU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm);
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout))));
    }
    if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x800000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x8000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout) 
                  << 0x18U));
    }
    if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xb8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xa0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x300000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x2000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout) 
                  << 8U));
    }
    if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__source)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U] 
                = (0x54535400U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xe000000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] = 0x4d555445U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xf00000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
                = (0x4c440000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
                = (0x484fU | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x3c000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0xc000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0x58U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] = 0x4641494cU;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xf00000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
                = (0x57415600U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xe000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0xc000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  >> 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__name));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x8000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 8U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x4000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x10U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x2000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x18U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x20U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x800000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x28U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x400000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x30U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x200000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x38U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x100000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U] 
                = (0x574156U | (0xff000000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x70000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if ((IData)(((0x10U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))) 
                 & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = (0x49520000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
            = (0x5041U | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U]));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x3c000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)))) {
        if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
        if (((0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                       >> 4U)) == ((IData)(9U) + ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__cursor) 
                                                  << 1U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
                = (0x3e0000U | (0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x400000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if ((IData)(((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                     & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))))) {
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n 
                = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout 
                = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x4000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
                   | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout) 
                      << 0x10U));
        }
        if ((IData)(((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                     & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))))) {
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n 
                = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout 
                = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x4000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
                   | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout) 
                      << 0x10U));
        }
        if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                      & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                             & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        if (((((((((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (7U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))) 
                  | (9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
                | (0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) | (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                     >> 4U))))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                            >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0x118U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xd8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x18000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0x98U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x180000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
}

void Vtb_osd_menu___024root___timing_resume(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___timing_resume\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd4d1918e__0.resume(
                                                   "@(negedge tb_osd_menu.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd4d191cf__0.resume(
                                                   "@(posedge tb_osd_menu.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_osd_menu___024root___timing_commit(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___timing_commit\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd4d1918e__0.commit(
                                                   "@(negedge tb_osd_menu.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd4d191cf__0.commit(
                                                   "@(posedge tb_osd_menu.clk)");
    }
}

void Vtb_osd_menu___024root___eval_triggers__act(Vtb_osd_menu___024root* vlSelf);

bool Vtb_osd_menu___024root___eval_phase__act(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_phase__act\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_osd_menu___024root___eval_triggers__act(vlSelf);
    Vtb_osd_menu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_osd_menu___024root___timing_resume(vlSelf);
        Vtb_osd_menu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_osd_menu___024root___eval_phase__nba(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_phase__nba\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_osd_menu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__nba(Vtb_osd_menu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__act(Vtb_osd_menu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_osd_menu___024root___eval(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_osd_menu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_osd_menu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_osd_menu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_osd_menu.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_osd_menu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_osd_menu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_osd_menu___024root___eval_debug_assertions(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_debug_assertions\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
