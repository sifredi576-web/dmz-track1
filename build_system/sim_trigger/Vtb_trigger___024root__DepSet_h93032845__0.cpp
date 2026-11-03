// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_trigger.h for the primary calling header

#include "Vtb_trigger__pch.h"
#include "Vtb_trigger___024root.h"

VlCoroutine Vtb_trigger___024root___eval_initial__TOP__Vtiming__0(Vtb_trigger___024root* vlSelf);
VlCoroutine Vtb_trigger___024root___eval_initial__TOP__Vtiming__1(Vtb_trigger___024root* vlSelf);

void Vtb_trigger___024root___eval_initial(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_initial\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trigger___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_trigger___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_trigger___024root___eval_initial__TOP__Vtiming__1(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_trigger.sv", 
                                             3);
        vlSelfRef.tb_trigger__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_trigger__DOT__clk)));
    }
}

void Vtb_trigger___024root___act_sequent__TOP__0(Vtb_trigger___024root* vlSelf);

void Vtb_trigger___024root___eval_act(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_act\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_trigger___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_trigger___024root___act_sequent__TOP__0(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___act_sequent__TOP__0\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_start 
        = ((IData)(vlSelfRef.tb_trigger__DOT__trig) 
           & ((~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__capturing)) 
              & ((~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready)) 
                 & ((IData)(vlSelfRef.tb_trigger__DOT__ce) 
                    & (((~ ((IData)(vlSelfRef.tb_trigger__DOT__sample) 
                            >> 0xfU)) & (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__negative_seen)) 
                       | (0xfffU == (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_wait)))))));
    vlSelfRef.tb_trigger__DOT__dut__DOT__take_sample 
        = ((IData)(vlSelfRef.tb_trigger__DOT__ce) & 
           ((~ (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__page_ready)) 
            & ((IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__trigger_start) 
               | (((~ (IData)(vlSelfRef.tb_trigger__DOT__trig)) 
                   | (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__capturing)) 
                  & (7U == (IData)(vlSelfRef.tb_trigger__DOT__dut__DOT__decimate))))));
}

void Vtb_trigger___024root___nba_sequent__TOP__0(Vtb_trigger___024root* vlSelf);

void Vtb_trigger___024root___eval_nba(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_nba\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_trigger___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_trigger___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_trigger___024root___timing_resume(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___timing_resume\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2dc543e8__0.resume(
                                                   "@(negedge tb_trigger.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_trigger___024root___timing_commit(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___timing_commit\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2dc543e8__0.commit(
                                                   "@(negedge tb_trigger.clk)");
    }
}

void Vtb_trigger___024root___eval_triggers__act(Vtb_trigger___024root* vlSelf);

bool Vtb_trigger___024root___eval_phase__act(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_phase__act\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_trigger___024root___eval_triggers__act(vlSelf);
    Vtb_trigger___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_trigger___024root___timing_resume(vlSelf);
        Vtb_trigger___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_trigger___024root___eval_phase__nba(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_phase__nba\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_trigger___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__nba(Vtb_trigger___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__act(Vtb_trigger___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_trigger___024root___eval(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_trigger___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_trigger.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_trigger___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_trigger.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_trigger___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_trigger___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_trigger___024root___eval_debug_assertions(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_debug_assertions\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
