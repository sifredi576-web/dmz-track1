// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_recode.h for the primary calling header

#include "Vtb_fifo_recode__pch.h"
#include "Vtb_fifo_recode___024root.h"

VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_recode___024root* vlSelf);
VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_recode___024root* vlSelf);
VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_recode___024root* vlSelf);
VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__3(Vtb_fifo_recode___024root* vlSelf);

void Vtb_fifo_recode___024root___eval_initial(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_initial\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__2(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2af8ULL, 
                                             nullptr, 
                                             "sim/platform\tb_fifo_recode.sv", 
                                             3);
        vlSelfRef.tb_fifo_recode__DOT__rclk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__rclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__3(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1b58ULL, 
                                             nullptr, 
                                             "sim/platform\tb_fifo_recode.sv", 
                                             3);
        vlSelfRef.tb_fifo_recode__DOT__wclk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_fifo_recode__DOT__wclk)));
    }
}

void Vtb_fifo_recode___024root___eval_act(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_act\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_fifo_recode___024root___nba_sequent__TOP__0(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___nba_sequent__TOP__1(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___nba_sequent__TOP__2(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___nba_sequent__TOP__3(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___nba_sequent__TOP__4(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___nba_comb__TOP__0(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___nba_comb__TOP__1(Vtb_fifo_recode___024root* vlSelf);

void Vtb_fifo_recode___024root___eval_nba(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_nba\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fifo_recode___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_sequent__TOP__2(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_sequent__TOP__2\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_recode__DOT__ws = ((0xfffeU & 
                                          ((IData)(vlSelfRef.tb_fifo_recode__DOT__ws) 
                                           << 1U)) 
                                         | (1U & VL_REDXOR_16(
                                                              (0xb400U 
                                                               & (IData)(vlSelfRef.tb_fifo_recode__DOT__ws)))));
    vlSelfRef.tb_fifo_recode__DOT__push = ((0U == vlSelfRef.tb_fifo_recode__DOT__phase)
                                            ? 1U : 
                                           ((1U == vlSelfRef.tb_fifo_recode__DOT__phase)
                                             ? (IData)(
                                                       (0U 
                                                        != 
                                                        (5U 
                                                         & (IData)(vlSelfRef.tb_fifo_recode__DOT__ws))))
                                             : 0U));
}

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_sequent__TOP__3(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_sequent__TOP__3\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_recode__DOT__rs = ((0xfffeU & 
                                          ((IData)(vlSelfRef.tb_fifo_recode__DOT__rs) 
                                           << 1U)) 
                                         | (1U & VL_REDXOR_16(
                                                              (0xb400U 
                                                               & (IData)(vlSelfRef.tb_fifo_recode__DOT__rs)))));
    vlSelfRef.tb_fifo_recode__DOT__pop = ((0U == vlSelfRef.tb_fifo_recode__DOT__phase)
                                           ? 0U : (
                                                   (1U 
                                                    == vlSelfRef.tb_fifo_recode__DOT__phase)
                                                    ? (IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelfRef.tb_fifo_recode__DOT__rs))))
                                                    : 1U));
}

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_sequent__TOP__4(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_sequent__TOP__4\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fifo_recode__DOT__expected__0__i;
    __Vfunc_tb_fifo_recode__DOT__expected__0__i = 0;
    // Body
    vlSelfRef.tb_fifo_recode__DOT__writes = vlSelfRef.__Vdly__tb_fifo_recode__DOT__writes;
    if (vlSelfRef.__VdlySet__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0) {
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__mem[vlSelfRef.__VdlyDim0__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0) {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__mem[vlSelfRef.__VdlyDim0__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0;
    }
    __Vfunc_tb_fifo_recode__DOT__expected__0__i = vlSelfRef.tb_fifo_recode__DOT__writes;
    __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout 
        = (0x5432abcdU ^ ((IData)(0x10203U) * __Vfunc_tb_fifo_recode__DOT__expected__0__i));
    vlSelfRef.tb_fifo_recode__DOT__input_data = __Vfunc_tb_fifo_recode__DOT__expected__0__Vfuncout;
    if (vlSelfRef.tb_fifo_recode__DOT__wrst) {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wgray = 0U;
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wgray = 0U;
    } else {
        vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wn), 1U) 
                         ^ (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wn)));
        vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wn), 1U) 
                         ^ (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wn)));
    }
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
}

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_comb__TOP__0(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_comb__TOP__0\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__Vfuncout;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__address = 0;
    SData/*10:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g;
    __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__physical_addr__5__g = 0;
    // Body
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty0)) 
                        & (IData)(vlSelfRef.tb_fifo_recode__DOT__pop))));
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__empty1)) 
                        & (IData)(vlSelfRef.tb_fifo_recode__DOT__pop))));
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

VL_INLINE_OPT void Vtb_fifo_recode___024root___nba_comb__TOP__1(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___nba_comb__TOP__1\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__push 
        = ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__full0)) 
           & (IData)(vlSelfRef.tb_fifo_recode__DOT__push));
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__push 
        = ((~ (IData)(vlSelfRef.tb_fifo_recode__DOT__full1)) 
           & (IData)(vlSelfRef.tb_fifo_recode__DOT__push));
    vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__wp) 
                     + (IData)(vlSelfRef.tb_fifo_recode__DOT__reference_fifo__DOT__push)));
    vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__wp) 
                     + (IData)(vlSelfRef.tb_fifo_recode__DOT__recoded_fifo__DOT__push)));
}

void Vtb_fifo_recode___024root___timing_resume(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___timing_resume\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h085ef395__0.resume(
                                                   "@(negedge tb_fifo_recode.wclk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he4fb7049__0.resume(
                                                   "@(negedge tb_fifo_recode.rclk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fifo_recode___024root___timing_commit(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___timing_commit\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h085ef395__0.commit(
                                                   "@(negedge tb_fifo_recode.wclk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he4fb7049__0.commit(
                                                   "@(negedge tb_fifo_recode.rclk)");
    }
}

void Vtb_fifo_recode___024root___eval_triggers__act(Vtb_fifo_recode___024root* vlSelf);

bool Vtb_fifo_recode___024root___eval_phase__act(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_phase__act\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo_recode___024root___eval_triggers__act(vlSelf);
    Vtb_fifo_recode___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fifo_recode___024root___timing_resume(vlSelf);
        Vtb_fifo_recode___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fifo_recode___024root___eval_phase__nba(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_phase__nba\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fifo_recode___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__nba(Vtb_fifo_recode___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_recode___024root___dump_triggers__act(Vtb_fifo_recode___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fifo_recode___024root___eval(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_fifo_recode___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_fifo_recode.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_fifo_recode___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_fifo_recode.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fifo_recode___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fifo_recode___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fifo_recode___024root___eval_debug_assertions(Vtb_fifo_recode___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_recode___024root___eval_debug_assertions\n"); );
    Vtb_fifo_recode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
