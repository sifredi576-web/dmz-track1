// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_overlay.h for the primary calling header

#include "Vtb_overlay__pch.h"
#include "Vtb_overlay___024root.h"

VlCoroutine Vtb_overlay___024root___eval_initial__TOP__Vtiming__0(Vtb_overlay___024root* vlSelf);

void Vtb_overlay___024root___eval_initial(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_initial\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_overlay___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_overlay___024root___act_sequent__TOP__0(Vtb_overlay___024root* vlSelf);

void Vtb_overlay___024root___eval_act(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_act\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_overlay___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_overlay___024root___act_sequent__TOP__0(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___act_sequent__TOP__0\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_overlay__DOT__dut__DOT__active;
    tb_overlay__DOT__dut__DOT__active = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__frx;
    tb_overlay__DOT__dut__DOT__frx = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__fry;
    tb_overlay__DOT__dut__DOT__fry = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__srx;
    tb_overlay__DOT__dut__DOT__srx = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__sry;
    tb_overlay__DOT__dut__DOT__sry = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__dxr;
    tb_overlay__DOT__dut__DOT__dxr = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__dyr;
    tb_overlay__DOT__dut__DOT__dyr = 0;
    CData/*3:0*/ tb_overlay__DOT__dut__DOT__value;
    tb_overlay__DOT__dut__DOT__value = 0;
    SData/*9:0*/ tb_overlay__DOT__dut__DOT__local_x;
    tb_overlay__DOT__dut__DOT__local_x = 0;
    CData/*5:0*/ tb_overlay__DOT__dut__DOT__slash;
    tb_overlay__DOT__dut__DOT__slash = 0;
    CData/*6:0*/ tb_overlay__DOT__dut__DOT__segments;
    tb_overlay__DOT__dut__DOT__segments = 0;
    // Body
    tb_overlay__DOT__dut__DOT__active = (IData)((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_overlay__DOT__s[0U])));
    tb_overlay__DOT__dut__DOT__srx = (0x3ffU & ((IData)(vlSelfRef.tb_overlay__DOT__x) 
                                                - (
                                                   (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                    << 0x1fU) 
                                                   | (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                      >> 1U))));
    tb_overlay__DOT__dut__DOT__sry = (0x3ffU & ((IData)(vlSelfRef.tb_overlay__DOT__y) 
                                                - (0x1ffU 
                                                   & (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                      >> 0xbU))));
    tb_overlay__DOT__dut__DOT__frx = (0x3ffU & ((IData)(vlSelfRef.tb_overlay__DOT__x) 
                                                - (
                                                   (vlSelfRef.tb_overlay__DOT__s[1U] 
                                                    << 2U) 
                                                   | (vlSelfRef.tb_overlay__DOT__s[0U] 
                                                      >> 0x1eU))));
    tb_overlay__DOT__dut__DOT__fry = (0x3ffU & ((IData)(vlSelfRef.tb_overlay__DOT__y) 
                                                - (0x1ffU 
                                                   & (vlSelfRef.tb_overlay__DOT__s[1U] 
                                                      >> 8U))));
    tb_overlay__DOT__dut__DOT__dyr = (0x3ffU & ((IData)(vlSelfRef.tb_overlay__DOT__y) 
                                                - (0x1ffU 
                                                   & ((vlSelfRef.tb_overlay__DOT__s[4U] 
                                                       << 1U) 
                                                      | (vlSelfRef.tb_overlay__DOT__s[3U] 
                                                         >> 0x1fU)))));
    tb_overlay__DOT__dut__DOT__dxr = (0x3ffU & ((IData)(vlSelfRef.tb_overlay__DOT__x) 
                                                - (
                                                   (vlSelfRef.tb_overlay__DOT__s[3U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.tb_overlay__DOT__s[3U] 
                                                      >> 0x15U))));
    vlSelfRef.tb_overlay__DOT__color = 0xffe56dU;
    if ((0x20U > (IData)(tb_overlay__DOT__dut__DOT__dxr))) {
        tb_overlay__DOT__dut__DOT__local_x = (0x3ffU 
                                              & (IData)(tb_overlay__DOT__dut__DOT__dxr));
        tb_overlay__DOT__dut__DOT__value = (0xfU & 
                                            ((vlSelfRef.tb_overlay__DOT__s[0U] 
                                              << 0xaU) 
                                             | (vlSelfRef.tb_overlay__DOT__s[0U] 
                                                >> 0x16U)));
    } else {
        tb_overlay__DOT__dut__DOT__local_x = (0x3ffU 
                                              & ((IData)(tb_overlay__DOT__dut__DOT__dxr) 
                                                 - (IData)(0x50U)));
        tb_overlay__DOT__dut__DOT__value = (0xfU & 
                                            ((vlSelfRef.tb_overlay__DOT__s[0U] 
                                              << 6U) 
                                             | (vlSelfRef.tb_overlay__DOT__s[0U] 
                                                >> 0x1aU)));
    }
    tb_overlay__DOT__dut__DOT__slash = (0x3fU & (((IData)(tb_overlay__DOT__dut__DOT__dxr) 
                                                  - (IData)(0x28U)) 
                                                 + (IData)(tb_overlay__DOT__dut__DOT__dyr)));
    tb_overlay__DOT__dut__DOT__segments = (((((((((0U 
                                                   == (IData)(tb_overlay__DOT__dut__DOT__value)) 
                                                  | (1U 
                                                     == (IData)(tb_overlay__DOT__dut__DOT__value))) 
                                                 | (2U 
                                                    == (IData)(tb_overlay__DOT__dut__DOT__value))) 
                                                | (3U 
                                                   == (IData)(tb_overlay__DOT__dut__DOT__value))) 
                                               | (4U 
                                                  == (IData)(tb_overlay__DOT__dut__DOT__value))) 
                                              | (5U 
                                                 == (IData)(tb_overlay__DOT__dut__DOT__value))) 
                                             | (6U 
                                                == (IData)(tb_overlay__DOT__dut__DOT__value))) 
                                            | (7U == (IData)(tb_overlay__DOT__dut__DOT__value)))
                                            ? ((0U 
                                                == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                ? 0x7eU
                                                : (
                                                   (1U 
                                                    == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                    ? 0x30U
                                                    : 
                                                   ((2U 
                                                     == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                     ? 0x6dU
                                                     : 
                                                    ((3U 
                                                      == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                      ? 0x79U
                                                      : 
                                                     ((4U 
                                                       == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                       ? 0x33U
                                                       : 
                                                      ((5U 
                                                        == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                        ? 0x5bU
                                                        : 
                                                       ((6U 
                                                         == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                         ? 0x5fU
                                                         : 0x70U)))))))
                                            : ((8U 
                                                == (IData)(tb_overlay__DOT__dut__DOT__value))
                                                ? 0x7fU
                                                : 0U));
    vlSelfRef.tb_overlay__DOT__ink = 0U;
    if ((((IData)(tb_overlay__DOT__dut__DOT__active) 
          & (0x280U > (IData)(vlSelfRef.tb_overlay__DOT__x))) 
         & (0x1e0U > (IData)(vlSelfRef.tb_overlay__DOT__y)))) {
        if (((((((((IData)((0x30U == (0x30U & vlSelfRef.tb_overlay__DOT__s[0U]))) 
                   & (0U != (0x1ffU & (vlSelfRef.tb_overlay__DOT__s[2U] 
                                       >> 0x14U)))) 
                  & (0U != (0x7fU & ((vlSelfRef.tb_overlay__DOT__s[3U] 
                                      << 3U) | (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                >> 0x1dU))))) 
                 & ((IData)(vlSelfRef.tb_overlay__DOT__x) 
                    >= (0x3ffU & (vlSelfRef.tb_overlay__DOT__s[2U] 
                                  >> 1U)))) & ((IData)(vlSelfRef.tb_overlay__DOT__y) 
                                               >= (0x1ffU 
                                                   & (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                      >> 0xbU)))) 
               & ((IData)(tb_overlay__DOT__dut__DOT__srx) 
                  < (0x1ffU & (vlSelfRef.tb_overlay__DOT__s[2U] 
                               >> 0x14U)))) & ((IData)(tb_overlay__DOT__dut__DOT__sry) 
                                               < (0x7fU 
                                                  & ((vlSelfRef.tb_overlay__DOT__s[3U] 
                                                      << 3U) 
                                                     | (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                        >> 0x1dU))))) 
             & (((((4U <= (IData)(tb_overlay__DOT__dut__DOT__srx)) 
                   & (7U > (IData)(tb_overlay__DOT__dut__DOT__srx))) 
                  | (((0x3ffU & ((IData)(7U) + (IData)(tb_overlay__DOT__dut__DOT__srx))) 
                      >= (0x1ffU & (vlSelfRef.tb_overlay__DOT__s[2U] 
                                    >> 0x14U))) & (
                                                   (0x3ffU 
                                                    & ((IData)(4U) 
                                                       + (IData)(tb_overlay__DOT__dut__DOT__srx))) 
                                                   < 
                                                   (0x1ffU 
                                                    & (vlSelfRef.tb_overlay__DOT__s[2U] 
                                                       >> 0x14U))))) 
                 | ((4U <= (IData)(tb_overlay__DOT__dut__DOT__sry)) 
                    & (7U > (IData)(tb_overlay__DOT__dut__DOT__sry)))) 
                | (((0x3ffU & ((IData)(7U) + (IData)(tb_overlay__DOT__dut__DOT__sry))) 
                    >= (0x7fU & ((vlSelfRef.tb_overlay__DOT__s[3U] 
                                  << 3U) | (vlSelfRef.tb_overlay__DOT__s[2U] 
                                            >> 0x1dU)))) 
                   & ((0x3ffU & ((IData)(4U) + (IData)(tb_overlay__DOT__dut__DOT__sry))) 
                      < (0x7fU & ((vlSelfRef.tb_overlay__DOT__s[3U] 
                                   << 3U) | (vlSelfRef.tb_overlay__DOT__s[2U] 
                                             >> 0x1dU)))))))) {
            vlSelfRef.tb_overlay__DOT__color = ((0x40U 
                                                 & vlSelfRef.tb_overlay__DOT__s[0U])
                                                 ? 
                                                ((0x80U 
                                                  & vlSelfRef.tb_overlay__DOT__s[0U])
                                                  ? 0x40ff80U
                                                  : 0xff6060U)
                                                 : 0x40e8ffU);
            vlSelfRef.tb_overlay__DOT__ink = 1U;
        }
        if ((((((((0U != (0x1ffU & (vlSelfRef.tb_overlay__DOT__s[1U] 
                                    >> 0x11U))) & (0U 
                                                   != 
                                                   (0x7fU 
                                                    & ((vlSelfRef.tb_overlay__DOT__s[2U] 
                                                        << 6U) 
                                                       | (vlSelfRef.tb_overlay__DOT__s[1U] 
                                                          >> 0x1aU))))) 
                 & ((IData)(vlSelfRef.tb_overlay__DOT__x) 
                    >= (0x3ffU & ((vlSelfRef.tb_overlay__DOT__s[1U] 
                                   << 2U) | (vlSelfRef.tb_overlay__DOT__s[0U] 
                                             >> 0x1eU))))) 
                & ((IData)(vlSelfRef.tb_overlay__DOT__y) 
                   >= (0x1ffU & (vlSelfRef.tb_overlay__DOT__s[1U] 
                                 >> 8U)))) & ((IData)(tb_overlay__DOT__dut__DOT__frx) 
                                              < (0x1ffU 
                                                 & (vlSelfRef.tb_overlay__DOT__s[1U] 
                                                    >> 0x11U)))) 
              & ((IData)(tb_overlay__DOT__dut__DOT__fry) 
                 < (0x7fU & ((vlSelfRef.tb_overlay__DOT__s[2U] 
                              << 6U) | (vlSelfRef.tb_overlay__DOT__s[1U] 
                                        >> 0x1aU))))) 
             & ((((2U > (IData)(tb_overlay__DOT__dut__DOT__frx)) 
                  | ((IData)(tb_overlay__DOT__dut__DOT__frx) 
                     >= (0x3ffU & ((0x1ffU & (vlSelfRef.tb_overlay__DOT__s[1U] 
                                              >> 0x11U)) 
                                   - (IData)(2U))))) 
                 | (2U > (IData)(tb_overlay__DOT__dut__DOT__fry))) 
                | ((IData)(tb_overlay__DOT__dut__DOT__fry) 
                   >= (0x3ffU & ((0x7fU & ((vlSelfRef.tb_overlay__DOT__s[2U] 
                                            << 6U) 
                                           | (vlSelfRef.tb_overlay__DOT__s[1U] 
                                              >> 0x1aU))) 
                                 - (IData)(2U))))))) {
            vlSelfRef.tb_overlay__DOT__color = 0xffe56dU;
            vlSelfRef.tb_overlay__DOT__ink = 1U;
        }
        if ((((((vlSelfRef.tb_overlay__DOT__s[0U] >> 3U) 
                & ((IData)(vlSelfRef.tb_overlay__DOT__x) 
                   >= (0x3ffU & (vlSelfRef.tb_overlay__DOT__s[3U] 
                                 >> 0x15U)))) & (0x70U 
                                                 > (IData)(tb_overlay__DOT__dut__DOT__dxr))) 
              & ((IData)(vlSelfRef.tb_overlay__DOT__y) 
                 >= (0x1ffU & ((vlSelfRef.tb_overlay__DOT__s[4U] 
                                << 1U) | (vlSelfRef.tb_overlay__DOT__s[3U] 
                                          >> 0x1fU))))) 
             & (0x20U > (IData)(tb_overlay__DOT__dut__DOT__dyr)))) {
            vlSelfRef.tb_overlay__DOT__color = 0xffffffU;
            if (((0x28U <= (IData)(tb_overlay__DOT__dut__DOT__dxr)) 
                 & (0x40U > (IData)(tb_overlay__DOT__dut__DOT__dxr)))) {
                if (((0x1cU <= (IData)(tb_overlay__DOT__dut__DOT__slash)) 
                     & (0x20U > (IData)(tb_overlay__DOT__dut__DOT__slash)))) {
                    vlSelfRef.tb_overlay__DOT__ink = 1U;
                }
            } else if ((((0x18U > (IData)(tb_overlay__DOT__dut__DOT__dxr)) 
                         | (0x50U <= (IData)(tb_overlay__DOT__dut__DOT__dxr))) 
                        & (0x18U > (IData)(tb_overlay__DOT__dut__DOT__local_x)))) {
                if ((((((((((IData)(tb_overlay__DOT__dut__DOT__segments) 
                            >> 6U) & (3U > (IData)(tb_overlay__DOT__dut__DOT__dyr))) 
                          | (((IData)(tb_overlay__DOT__dut__DOT__segments) 
                              >> 3U) & (0x1dU <= (IData)(tb_overlay__DOT__dut__DOT__dyr)))) 
                         | (((IData)(tb_overlay__DOT__dut__DOT__segments) 
                             & (0xeU <= (IData)(tb_overlay__DOT__dut__DOT__dyr))) 
                            & (0x11U > (IData)(tb_overlay__DOT__dut__DOT__dyr)))) 
                        | ((((IData)(tb_overlay__DOT__dut__DOT__segments) 
                             >> 1U) & (3U > (IData)(tb_overlay__DOT__dut__DOT__local_x))) 
                           & (0x10U > (IData)(tb_overlay__DOT__dut__DOT__dyr)))) 
                       | ((((IData)(tb_overlay__DOT__dut__DOT__segments) 
                            >> 2U) & (3U > (IData)(tb_overlay__DOT__dut__DOT__local_x))) 
                          & (0x10U <= (IData)(tb_overlay__DOT__dut__DOT__dyr)))) 
                      | ((((IData)(tb_overlay__DOT__dut__DOT__segments) 
                           >> 5U) & (0x15U <= (IData)(tb_overlay__DOT__dut__DOT__local_x))) 
                         & (0x10U > (IData)(tb_overlay__DOT__dut__DOT__dyr)))) 
                     | ((((IData)(tb_overlay__DOT__dut__DOT__segments) 
                          >> 4U) & (0x15U <= (IData)(tb_overlay__DOT__dut__DOT__local_x))) 
                        & (0x10U <= (IData)(tb_overlay__DOT__dut__DOT__dyr))))) {
                    vlSelfRef.tb_overlay__DOT__ink = 1U;
                }
            }
        }
    }
}

void Vtb_overlay___024root___eval_nba(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_nba\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_overlay___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_overlay___024root___timing_resume(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___timing_resume\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_overlay___024root___eval_triggers__act(Vtb_overlay___024root* vlSelf);

bool Vtb_overlay___024root___eval_phase__act(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_phase__act\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_overlay___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_overlay___024root___timing_resume(vlSelf);
        Vtb_overlay___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_overlay___024root___eval_phase__nba(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_phase__nba\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_overlay___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_overlay___024root___dump_triggers__nba(Vtb_overlay___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_overlay___024root___dump_triggers__act(Vtb_overlay___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_overlay___024root___eval(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_overlay___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_overlay.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_overlay___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_overlay.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_overlay___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_overlay___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_overlay___024root___eval_debug_assertions(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_debug_assertions\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
