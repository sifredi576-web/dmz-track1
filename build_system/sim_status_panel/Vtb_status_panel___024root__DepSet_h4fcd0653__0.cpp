// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_status_panel.h for the primary calling header

#include "Vtb_status_panel__pch.h"
#include "Vtb_status_panel___024root.h"

VL_ATTR_COLD void Vtb_status_panel___024root___eval_initial__TOP(Vtb_status_panel___024root* vlSelf);
VlCoroutine Vtb_status_panel___024root___eval_initial__TOP__Vtiming__0(Vtb_status_panel___024root* vlSelf);
VlCoroutine Vtb_status_panel___024root___eval_initial__TOP__Vtiming__1(Vtb_status_panel___024root* vlSelf);
VlCoroutine Vtb_status_panel___024root___eval_initial__TOP__Vtiming__2(Vtb_status_panel___024root* vlSelf);

void Vtb_status_panel___024root___eval_initial(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_initial\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_status_panel___024root___eval_initial__TOP(vlSelf);
    Vtb_status_panel___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_status_panel___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_status_panel___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_status_panel___024root___eval_initial__TOP__Vtiming__2(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_status_panel.sv", 
                                             3);
        vlSelfRef.tb_status_panel__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_status_panel__DOT__clk)));
    }
}

void Vtb_status_panel___024root___act_sequent__TOP__0(Vtb_status_panel___024root* vlSelf);

void Vtb_status_panel___024root___eval_act(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_act\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_status_panel___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_status_panel___024root___act_sequent__TOP__0(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___act_sequent__TOP__0\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31eU <= (IData)(vlSelfRef.tb_status_panel__DOT__x))) {
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x 
            = (0x7ffU & ((IData)(vlSelfRef.tb_status_panel__DOT__x) 
                         - (IData)(0x31eU)));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_status_panel__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_status_panel__DOT__y))));
    } else {
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_status_panel__DOT__x)));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_status_panel__DOT__y));
    }
    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0U;
    if (((((((((0U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                           + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                              - (IData)(0x80U)))) 
                                - (IData)(0x80U)) >> 4U))) 
               | (1U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                             + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                - (IData)(0x80U)))) 
                                  - (IData)(0x80U)) 
                                 >> 4U)))) | (2U == 
                                              (0xfU 
                                               & (((0x3ffU 
                                                    & ((IData)(0x80U) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                        - (IData)(0x80U)))) 
                                                   - (IData)(0x80U)) 
                                                  >> 4U)))) 
             | (3U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                           + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                              - (IData)(0x80U)))) 
                                - (IData)(0x80U)) >> 4U)))) 
            | (4U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                             - (IData)(0x80U)))) 
                               - (IData)(0x80U)) >> 4U)))) 
           | (5U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                         + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                            - (IData)(0x80U)))) 
                              - (IData)(0x80U)) >> 4U)))) 
          | (6U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                        + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                           - (IData)(0x80U)))) 
                             - (IData)(0x80U)) >> 4U)))) 
         | (7U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                       + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                          - (IData)(0x80U)))) 
                            - (IData)(0x80U)) >> 4U))))) {
        if ((0U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                        + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                           - (IData)(0x80U)))) 
                             - (IData)(0x80U)) >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 1U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 2U;
            }
        } else if ((1U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 3U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 4U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 5U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 6U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 7U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 2U;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 8U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 9U;
                }
            } else if ((4U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xaU;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xbU;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xcU;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 1U;
                }
            } else if ((0U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x12U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x13U;
            }
        } else if ((2U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 2U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xdU;
            }
        } else if ((3U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value 
                    = vlSelfRef.tb_status_panel__DOT__dut__DOT__vol;
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__Vfuncout 
                    = (((((((((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value)) 
                              | (1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                             | (2U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                            | (3U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                           | (4U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                          | (5U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                         | (6U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                        | (7U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value)))
                        ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                            ? 0x14U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                        ? 0x15U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                        : ((8U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                            ? 0x1cU : 0U));
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                    = vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__Vfuncout;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1dU;
            } else if ((2U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1cU;
            }
        } else if ((4U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xeU;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xfU;
            }
        } else if ((5U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value 
                    = vlSelfRef.tb_status_panel__DOT__dut__DOT__b;
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__Vfuncout 
                    = (((((((((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value)) 
                              | (1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                             | (2U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                            | (3U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                           | (4U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                          | (5U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                         | (6U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                        | (7U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value)))
                        ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                            ? 0x14U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                        ? 0x15U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                        : ((8U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                            ? 0x1cU : 0U));
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                    = vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__Vfuncout;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1dU;
            } else if ((2U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1cU;
            } else if ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                    = ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_up)
                        ? 0x1eU : 0x1fU);
            }
        } else if ((6U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x10U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x11U;
            }
        } else if ((0U == (3U & (((IData)(0x240U) + 
                                  ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                   - (IData)(0x240U))) 
                                 >> 4U)))) {
            vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value 
                = vlSelfRef.tb_status_panel__DOT__dut__DOT__c;
            vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__Vfuncout 
                = (((((((((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value)) 
                          | (1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                         | (2U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                        | (3U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                       | (4U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                      | (5U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                     | (6U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                    | (7U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value)))
                    ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                        ? 0x14U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                    ? 0x15U : ((2U 
                                                == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                    : ((8U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                        ? 0x1cU : 0U));
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                = vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__Vfuncout;
        } else if ((1U == (3U & (((IData)(0x240U) + 
                                  ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                   - (IData)(0x240U))) 
                                 >> 4U)))) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1dU;
        } else if ((2U == (3U & (((IData)(0x240U) + 
                                  ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                   - (IData)(0x240U))) 
                                 >> 4U)))) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1cU;
        } else if ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer))) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                = ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_up)
                    ? 0x1eU : 0x1fU);
        }
    }
}

void Vtb_status_panel___024root___nba_sequent__TOP__0(Vtb_status_panel___024root* vlSelf);
void Vtb_status_panel___024root___nba_sequent__TOP__1(Vtb_status_panel___024root* vlSelf);
void Vtb_status_panel___024root___nba_comb__TOP__0(Vtb_status_panel___024root* vlSelf);

void Vtb_status_panel___024root___eval_nba(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_nba\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_status_panel___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_status_panel___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_status_panel___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_status_panel___024root___nba_sequent__TOP__0(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___nba_sequent__TOP__0\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__tb_status_panel__DOT__dut__DOT__b_timer;
    __Vdly__tb_status_panel__DOT__dut__DOT__b_timer = 0;
    CData/*6:0*/ __Vdly__tb_status_panel__DOT__dut__DOT__c_timer;
    __Vdly__tb_status_panel__DOT__dut__DOT__c_timer = 0;
    // Body
    __Vdly__tb_status_panel__DOT__dut__DOT__b_timer 
        = vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer;
    __Vdly__tb_status_panel__DOT__dut__DOT__c_timer 
        = vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer;
    if (vlSelfRef.tb_status_panel__DOT__reset) {
        vlSelfRef.tb_status_panel__DOT__dut__DOT__vol = 8U;
        __Vdly__tb_status_panel__DOT__dut__DOT__b_timer = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__b_up = 0U;
        __Vdly__tb_status_panel__DOT__dut__DOT__c_timer = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__c_up = 0U;
        vlSelfRef.tb_status_panel__DOT__ink = 0U;
        vlSelfRef.tb_status_panel__DOT__shade = 0U;
        vlSelfRef.tb_status_panel__DOT__color = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__gx = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__px = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__py = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__b = 4U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__c = 4U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.tb_status_panel__DOT__dut__DOT__state = 4U;
    } else {
        vlSelfRef.tb_status_panel__DOT__ink = ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__area) 
                                               & (((((((1U 
                                                        <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__gx)) 
                                                       & (0xfU 
                                                          > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__gx))) 
                                                      & ((0xdU 
                                                          >= 
                                                          (0xfU 
                                                           & ((IData)(0xeU) 
                                                              - (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__gx)))) 
                                                         && (1U 
                                                             & ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__font_row) 
                                                                >> 
                                                                (0xfU 
                                                                 & ((IData)(0xeU) 
                                                                    - (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__gx))))))) 
                                                     | (0x240U 
                                                        == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__px))) 
                                                    | (0x27fU 
                                                       == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__px))) 
                                                   | (0x80U 
                                                      == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py))) 
                                                  | (0x11fU 
                                                     == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py))));
        vlSelfRef.tb_status_panel__DOT__shade = vlSelfRef.tb_status_panel__DOT__dut__DOT__area;
        vlSelfRef.tb_status_panel__DOT__color = ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__flash)
                                                  ? 0xffe56dU
                                                  : 
                                                 (((0x90U 
                                                    <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py)) 
                                                   & (0xa0U 
                                                      > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py)))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state_q))
                                                    ? 0x50ffb0U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state_q))
                                                     ? 0xff7070U
                                                     : 0xffcf70U))
                                                   : 0xc0eaffU));
        if (((((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__area) 
               & (0x248U <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__px))) 
              & (0x278U > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__px))) 
             & (((0x104U <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py)) 
                 & (0x108U > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py))) 
                | ((0x114U <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py)) 
                   & (0x118U > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py)))))) {
            vlSelfRef.tb_status_panel__DOT__ink = 1U;
            vlSelfRef.tb_status_panel__DOT__color = 
                ((0x110U > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__py))
                  ? ((((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__px) 
                       - (IData)(0x248U)) < (((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b) 
                                              << 2U) 
                                             + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b) 
                                                << 1U)))
                      ? ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer))
                          ? 0xffe56dU : 0x50cfffU) : 0x20344cU)
                  : ((((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__px) 
                       - (IData)(0x248U)) < (((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c) 
                                              << 2U) 
                                             + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c) 
                                                << 1U)))
                      ? ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer))
                          ? 0xffe56dU : 0x50cfffU) : 0x20344cU));
        }
        vlSelfRef.tb_status_panel__DOT__dut__DOT__gx 
            = (0xfU & (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__px 
            = (0x3ffU & ((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                            - (IData)(0x240U))));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__py 
            = (0x3ffU & ((IData)(0x80U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                           - (IData)(0x80U))));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__state_q 
            = vlSelfRef.tb_status_panel__DOT__dut__DOT__state;
        if (vlSelfRef.tb_status_panel__DOT__frame) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__vol 
                = vlSelfRef.tb_status_panel__DOT__volume;
            if (((IData)(vlSelfRef.tb_status_panel__DOT__b) 
                 != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b))) {
                __Vdly__tb_status_panel__DOT__dut__DOT__b_timer = 0x78U;
                vlSelfRef.tb_status_panel__DOT__dut__DOT__b_up 
                    = ((IData)(vlSelfRef.tb_status_panel__DOT__b) 
                       > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b));
            } else if ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer))) {
                __Vdly__tb_status_panel__DOT__dut__DOT__b_timer 
                    = (0x7fU & ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer) 
                                - (IData)(1U)));
            }
            if (((IData)(vlSelfRef.tb_status_panel__DOT__c) 
                 != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c))) {
                __Vdly__tb_status_panel__DOT__dut__DOT__c_timer = 0x78U;
                vlSelfRef.tb_status_panel__DOT__dut__DOT__c_up 
                    = ((IData)(vlSelfRef.tb_status_panel__DOT__c) 
                       > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c));
            } else if ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer))) {
                __Vdly__tb_status_panel__DOT__dut__DOT__c_timer 
                    = (0x7fU & ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer) 
                                - (IData)(1U)));
            }
            vlSelfRef.tb_status_panel__DOT__dut__DOT__b 
                = vlSelfRef.tb_status_panel__DOT__b;
            vlSelfRef.tb_status_panel__DOT__dut__DOT__c 
                = vlSelfRef.tb_status_panel__DOT__c;
            vlSelfRef.tb_status_panel__DOT__dut__DOT__state 
                = ((IData)(vlSelfRef.tb_status_panel__DOT__fault)
                    ? 6U : ((IData)(vlSelfRef.tb_status_panel__DOT__loading)
                             ? 4U : ((IData)(vlSelfRef.tb_status_panel__DOT__muted)
                                      ? 2U : ((IData)(vlSelfRef.tb_status_panel__DOT__paused)
                                               ? 1U
                                               : ((IData)(vlSelfRef.tb_status_panel__DOT__aenabled)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_status_panel__DOT__active)
                                                    ? 
                                                   ((IData)(vlSelfRef.tb_status_panel__DOT__ended)
                                                     ? 3U
                                                     : 0U)
                                                    : 4U)
                                                   : 5U)))));
        }
    }
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_row 
        = vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom
        [(((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph) 
           << 4U) | (0xfU & (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y)))];
    vlSelfRef.tb_status_panel__DOT__dut__DOT__area 
        = ((1U & (~ (IData)(vlSelfRef.tb_status_panel__DOT__reset))) 
           && ((IData)(vlSelfRef.tb_status_panel__DOT__en) 
               & ((0x240U <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x)) 
                  & ((0x280U > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x)) 
                     & ((0x80U <= (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y)) 
                        & (0x120U > (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y)))))));
    vlSelfRef.tb_status_panel__DOT__dut__DOT__flash 
        = ((1U & (~ (IData)(vlSelfRef.tb_status_panel__DOT__reset))) 
           && (((5U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                            + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                               - (IData)(0x80U)))) 
                                 - (IData)(0x80U)) 
                                >> 4U))) & (0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer))) 
               | ((7U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                              + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                 - (IData)(0x80U)))) 
                                   - (IData)(0x80U)) 
                                  >> 4U))) & (0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer)))));
    vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer 
        = __Vdly__tb_status_panel__DOT__dut__DOT__b_timer;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer 
        = __Vdly__tb_status_panel__DOT__dut__DOT__c_timer;
}

VL_INLINE_OPT void Vtb_status_panel___024root___nba_sequent__TOP__1(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___nba_sequent__TOP__1\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31eU <= (IData)(vlSelfRef.tb_status_panel__DOT__x))) {
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x 
            = (0x7ffU & ((IData)(vlSelfRef.tb_status_panel__DOT__x) 
                         - (IData)(0x31eU)));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_status_panel__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_status_panel__DOT__y))));
    } else {
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_status_panel__DOT__x)));
        vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_status_panel__DOT__y));
    }
}

VL_INLINE_OPT void Vtb_status_panel___024root___nba_comb__TOP__0(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___nba_comb__TOP__0\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0U;
    if (((((((((0U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                           + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                              - (IData)(0x80U)))) 
                                - (IData)(0x80U)) >> 4U))) 
               | (1U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                             + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                - (IData)(0x80U)))) 
                                  - (IData)(0x80U)) 
                                 >> 4U)))) | (2U == 
                                              (0xfU 
                                               & (((0x3ffU 
                                                    & ((IData)(0x80U) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                        - (IData)(0x80U)))) 
                                                   - (IData)(0x80U)) 
                                                  >> 4U)))) 
             | (3U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                           + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                              - (IData)(0x80U)))) 
                                - (IData)(0x80U)) >> 4U)))) 
            | (4U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                             - (IData)(0x80U)))) 
                               - (IData)(0x80U)) >> 4U)))) 
           | (5U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                         + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                            - (IData)(0x80U)))) 
                              - (IData)(0x80U)) >> 4U)))) 
          | (6U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                        + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                           - (IData)(0x80U)))) 
                             - (IData)(0x80U)) >> 4U)))) 
         | (7U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                       + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                          - (IData)(0x80U)))) 
                            - (IData)(0x80U)) >> 4U))))) {
        if ((0U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                        + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                           - (IData)(0x80U)))) 
                             - (IData)(0x80U)) >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 1U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 2U;
            }
        } else if ((1U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 3U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 4U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 5U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 6U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 7U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 2U;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 8U;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 9U;
                }
            } else if ((4U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xaU;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xbU;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__state))) {
                if ((0U == (3U & (((IData)(0x240U) 
                                   + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                      - (IData)(0x240U))) 
                                  >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xcU;
                } else if ((1U == (3U & (((IData)(0x240U) 
                                          + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                             - (IData)(0x240U))) 
                                         >> 4U)))) {
                    vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 1U;
                }
            } else if ((0U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x12U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x13U;
            }
        } else if ((2U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 2U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xdU;
            }
        } else if ((3U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value 
                    = vlSelfRef.tb_status_panel__DOT__dut__DOT__vol;
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__Vfuncout 
                    = (((((((((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value)) 
                              | (1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                             | (2U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                            | (3U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                           | (4U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                          | (5U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                         | (6U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))) 
                        | (7U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value)))
                        ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                            ? 0x14U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                        ? 0x15U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                        : ((8U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value))
                            ? 0x1cU : 0U));
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                    = vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__Vfuncout;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1dU;
            } else if ((2U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1cU;
            }
        } else if ((4U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xeU;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0xfU;
            }
        } else if ((5U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value 
                    = vlSelfRef.tb_status_panel__DOT__dut__DOT__b;
                vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__Vfuncout 
                    = (((((((((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value)) 
                              | (1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                             | (2U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                            | (3U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                           | (4U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                          | (5U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                         | (6U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))) 
                        | (7U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value)))
                        ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                            ? 0x14U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                        ? 0x15U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                        : ((8U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value))
                            ? 0x1cU : 0U));
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                    = vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__Vfuncout;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1dU;
            } else if ((2U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1cU;
            } else if ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_timer))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                    = ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__b_up)
                        ? 0x1eU : 0x1fU);
            }
        } else if ((6U == (0xfU & (((0x3ffU & ((IData)(0x80U) 
                                               + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_y) 
                                                  - (IData)(0x80U)))) 
                                    - (IData)(0x80U)) 
                                   >> 4U)))) {
            if ((0U == (3U & (((IData)(0x240U) + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                                  - (IData)(0x240U))) 
                              >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x10U;
            } else if ((1U == (3U & (((IData)(0x240U) 
                                      + ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                         - (IData)(0x240U))) 
                                     >> 4U)))) {
                vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x11U;
            }
        } else if ((0U == (3U & (((IData)(0x240U) + 
                                  ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                   - (IData)(0x240U))) 
                                 >> 4U)))) {
            vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value 
                = vlSelfRef.tb_status_panel__DOT__dut__DOT__c;
            vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__Vfuncout 
                = (((((((((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value)) 
                          | (1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                         | (2U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                        | (3U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                       | (4U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                      | (5U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                     | (6U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))) 
                    | (7U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value)))
                    ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                        ? 0x14U : ((1U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                    ? 0x15U : ((2U 
                                                == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                    : ((8U == (IData)(vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value))
                        ? 0x1cU : 0U));
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                = vlSelfRef.__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__Vfuncout;
        } else if ((1U == (3U & (((IData)(0x240U) + 
                                  ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                   - (IData)(0x240U))) 
                                 >> 4U)))) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1dU;
        } else if ((2U == (3U & (((IData)(0x240U) + 
                                  ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__physical_x) 
                                   - (IData)(0x240U))) 
                                 >> 4U)))) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph = 0x1cU;
        } else if ((0U != (IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_timer))) {
            vlSelfRef.tb_status_panel__DOT__dut__DOT__glyph 
                = ((IData)(vlSelfRef.tb_status_panel__DOT__dut__DOT__c_up)
                    ? 0x1eU : 0x1fU);
        }
    }
}

void Vtb_status_panel___024root___timing_resume(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___timing_resume\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h60d74859__0.resume(
                                                   "@(negedge tb_status_panel.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_status_panel___024root___timing_commit(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___timing_commit\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h60d74859__0.commit(
                                                   "@(negedge tb_status_panel.clk)");
    }
}

void Vtb_status_panel___024root___eval_triggers__act(Vtb_status_panel___024root* vlSelf);

bool Vtb_status_panel___024root___eval_phase__act(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_phase__act\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_status_panel___024root___eval_triggers__act(vlSelf);
    Vtb_status_panel___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_status_panel___024root___timing_resume(vlSelf);
        Vtb_status_panel___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_status_panel___024root___eval_phase__nba(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_phase__nba\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_status_panel___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__nba(Vtb_status_panel___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__act(Vtb_status_panel___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_status_panel___024root___eval(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_status_panel___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_status_panel.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_status_panel___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_status_panel.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_status_panel___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_status_panel___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_status_panel___024root___eval_debug_assertions(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_debug_assertions\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
