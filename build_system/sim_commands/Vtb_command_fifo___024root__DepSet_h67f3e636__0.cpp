// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_command_fifo.h for the primary calling header

#include "Vtb_command_fifo__pch.h"
#include "Vtb_command_fifo___024root.h"

VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_command_fifo___024root* vlSelf);
VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_command_fifo___024root* vlSelf);
VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_command_fifo___024root* vlSelf);
VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__3(Vtb_command_fifo___024root* vlSelf);

void Vtb_command_fifo___024root___eval_initial(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_initial\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xbb8ULL, 
                                         nullptr, "sim/system\tb_command_fifo.sv", 
                                         5);
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/system\tb_command_fifo.sv", 
                                             5);
        vlSelfRef.tb_command_fifo__DOT__dst = (1U & 
                                               (~ (IData)(vlSelfRef.tb_command_fifo__DOT__dst)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__3(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "sim/system\tb_command_fifo.sv", 
                                             4);
        vlSelfRef.tb_command_fifo__DOT__src = (1U & 
                                               (~ (IData)(vlSelfRef.tb_command_fifo__DOT__src)));
    }
}

void Vtb_command_fifo___024root___act_sequent__TOP__0(Vtb_command_fifo___024root* vlSelf);

void Vtb_command_fifo___024root___eval_act(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_act\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_command_fifo___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_command_fifo___024root___act_sequent__TOP__0(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___act_sequent__TOP__0\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__push 
        = (((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray) 
            != ((6U & ((~ ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2) 
                           >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2)))) 
           & (IData)(vlSelfRef.tb_command_fifo__DOT__push));
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__wn = 
        (7U & ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wp) 
               + (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__push)));
}

void Vtb_command_fifo___024root___nba_sequent__TOP__0(Vtb_command_fifo___024root* vlSelf);
void Vtb_command_fifo___024root___nba_sequent__TOP__1(Vtb_command_fifo___024root* vlSelf);
void Vtb_command_fifo___024root___nba_sequent__TOP__2(Vtb_command_fifo___024root* vlSelf);

void Vtb_command_fifo___024root___eval_nba(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_nba\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_command_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_command_fifo___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_command_fifo___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_command_fifo___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_command_fifo___024root___nba_sequent__TOP__0(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___nba_sequent__TOP__0\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_command_fifo__DOT__dut__DOT__mem__v0 = 0U;
    if (((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__push) 
         & (~ (IData)(vlSelfRef.tb_command_fifo__DOT__reset)))) {
        vlSelfRef.__VdlyVal__tb_command_fifo__DOT__dut__DOT__mem__v0 
            = vlSelfRef.tb_command_fifo__DOT__data;
        vlSelfRef.__VdlyDim0__tb_command_fifo__DOT__dut__DOT__mem__v0 
            = (3U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wp));
        vlSelfRef.__VdlySet__tb_command_fifo__DOT__dut__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_command_fifo__DOT__reset) {
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2 = 0U;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__wp = 0U;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg1 = 0U;
    } else {
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2 
            = vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg1;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__wp 
            = vlSelfRef.tb_command_fifo__DOT__dut__DOT__wn;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg1 
            = vlSelfRef.tb_command_fifo__DOT__dut__DOT__rgray;
    }
}

VL_INLINE_OPT void Vtb_command_fifo___024root___nba_sequent__TOP__2(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___nba_sequent__TOP__2\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_command_fifo__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__mem[vlSelfRef.__VdlyDim0__tb_command_fifo__DOT__dut__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_command_fifo__DOT__dut__DOT__mem__v0;
    }
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray 
        = ((IData)(vlSelfRef.tb_command_fifo__DOT__reset)
            ? 0U : (7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wn), 1U) 
                          ^ (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wn))));
}

void Vtb_command_fifo___024root___timing_resume(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___timing_resume\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2a0bf16b__0.resume(
                                                   "@(negedge tb_command_fifo.src)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_command_fifo___024root___timing_commit(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___timing_commit\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2a0bf16b__0.commit(
                                                   "@(negedge tb_command_fifo.src)");
    }
}

void Vtb_command_fifo___024root___eval_triggers__act(Vtb_command_fifo___024root* vlSelf);

bool Vtb_command_fifo___024root___eval_phase__act(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_phase__act\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_command_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_command_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_command_fifo___024root___timing_resume(vlSelf);
        Vtb_command_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_command_fifo___024root___eval_phase__nba(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_phase__nba\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_command_fifo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__nba(Vtb_command_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__act(Vtb_command_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_command_fifo___024root___eval(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_command_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_command_fifo.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_command_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_command_fifo.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_command_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_command_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_command_fifo___024root___eval_debug_assertions(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_debug_assertions\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
