// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ui_keys.h for the primary calling header

#include "Vtb_ui_keys__pch.h"
#include "Vtb_ui_keys___024root.h"

VlCoroutine Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__0(Vtb_ui_keys___024root* vlSelf);
VlCoroutine Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__1(Vtb_ui_keys___024root* vlSelf);
VlCoroutine Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__2(Vtb_ui_keys___024root* vlSelf);

void Vtb_ui_keys___024root___eval_initial(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_initial\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__2(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/platform\tb_ui_keys.sv", 
                                             3);
        vlSelfRef.tb_ui_keys__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_ui_keys__DOT__clk)));
    }
}

void Vtb_ui_keys___024root___act_sequent__TOP__0(Vtb_ui_keys___024root* vlSelf);

void Vtb_ui_keys___024root___eval_act(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_act\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ui_keys___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtb_ui_keys__ConstPool__TABLE_h9335bfdc_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_ui_keys__ConstPool__TABLE_h5c1e1fad_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtb_ui_keys__ConstPool__TABLE_h5ca429ef_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtb_ui_keys__ConstPool__TABLE_hadf6aee6_0;

VL_INLINE_OPT void Vtb_ui_keys___024root___act_sequent__TOP__0(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___act_sequent__TOP__0\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__physical;
    tb_ui_keys__DOT__dut__DOT__physical = 0;
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__mapped;
    tb_ui_keys__DOT__dut__DOT__mapped = 0;
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__is_ui;
    tb_ui_keys__DOT__dut__DOT__is_ui = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_ui_keys__DOT__dut__DOT__uart_ui = 
        ((IData)(vlSelfRef.tb_ui_keys__DOT__uv) & (IData)(
                                                          ((0xd0U 
                                                            == 
                                                            (0xf0U 
                                                             & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))) 
                                                           & (((1U 
                                                                <= 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))) 
                                                               & (8U 
                                                                  >= 
                                                                  (0xfU 
                                                                   & (IData)(vlSelfRef.tb_ui_keys__DOT__ub)))) 
                                                              | ((0xaU 
                                                                  <= 
                                                                  (0xfU 
                                                                   & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))) 
                                                                 & (0xcU 
                                                                    >= 
                                                                    (0xfU 
                                                                     & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))))))));
    tb_ui_keys__DOT__dut__DOT__physical = ((IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__pending) 
                                           | (IData)(vlSelfRef.tb_ui_keys__DOT__kv));
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_ui_keys__DOT__menu) 
                      << 7U) | ((IData)(vlSelfRef.tb_ui_keys__DOT__active) 
                                << 6U)) | (((IData)(vlSelfRef.tb_ui_keys__DOT__muted) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.tb_ui_keys__DOT__paused) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__pending)
                                                  ? (IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__held)
                                                  : (IData)(vlSelfRef.tb_ui_keys__DOT__key)))));
    tb_ui_keys__DOT__dut__DOT__mapped = Vtb_ui_keys__ConstPool__TABLE_h9335bfdc_0
        [__Vtableidx1];
    tb_ui_keys__DOT__dut__DOT__is_ui = Vtb_ui_keys__ConstPool__TABLE_h5c1e1fad_0
        [__Vtableidx1];
    vlSelfRef.tb_ui_keys__DOT__dut__DOT__command = 
        Vtb_ui_keys__ConstPool__TABLE_h5ca429ef_0[__Vtableidx1];
    vlSelfRef.tb_ui_keys__DOT__dut__DOT__action = Vtb_ui_keys__ConstPool__TABLE_hadf6aee6_0
        [__Vtableidx1];
    vlSelfRef.tb_ui_keys__DOT__cv = ((~ (IData)(vlSelfRef.tb_ui_keys__DOT__reset)) 
                                     & (((~ (IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__uart_ui)) 
                                         & (IData)(vlSelfRef.tb_ui_keys__DOT__uv)) 
                                        | ((IData)(tb_ui_keys__DOT__dut__DOT__physical) 
                                           & ((IData)(tb_ui_keys__DOT__dut__DOT__mapped) 
                                              & ((~ (IData)(tb_ui_keys__DOT__dut__DOT__is_ui)) 
                                                 & (~ (IData)(vlSelfRef.tb_ui_keys__DOT__uv)))))));
    vlSelfRef.tb_ui_keys__DOT__iv = ((~ (IData)(vlSelfRef.tb_ui_keys__DOT__reset)) 
                                     & ((IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__uart_ui) 
                                        | ((~ (IData)(vlSelfRef.tb_ui_keys__DOT__uv)) 
                                           & ((IData)(tb_ui_keys__DOT__dut__DOT__physical) 
                                              & ((IData)(tb_ui_keys__DOT__dut__DOT__is_ui) 
                                                 & (IData)(tb_ui_keys__DOT__dut__DOT__mapped))))));
}

void Vtb_ui_keys___024root___nba_sequent__TOP__0(Vtb_ui_keys___024root* vlSelf);
void Vtb_ui_keys___024root___nba_sequent__TOP__1(Vtb_ui_keys___024root* vlSelf);
void Vtb_ui_keys___024root___nba_comb__TOP__0(Vtb_ui_keys___024root* vlSelf);

void Vtb_ui_keys___024root___eval_nba(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_nba\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ui_keys___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ui_keys___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ui_keys___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ui_keys___024root___nba_sequent__TOP__1(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___nba_sequent__TOP__1\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ui_keys__DOT__dut__DOT__uart_ui = 
        ((IData)(vlSelfRef.tb_ui_keys__DOT__uv) & (IData)(
                                                          ((0xd0U 
                                                            == 
                                                            (0xf0U 
                                                             & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))) 
                                                           & (((1U 
                                                                <= 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))) 
                                                               & (8U 
                                                                  >= 
                                                                  (0xfU 
                                                                   & (IData)(vlSelfRef.tb_ui_keys__DOT__ub)))) 
                                                              | ((0xaU 
                                                                  <= 
                                                                  (0xfU 
                                                                   & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))) 
                                                                 & (0xcU 
                                                                    >= 
                                                                    (0xfU 
                                                                     & (IData)(vlSelfRef.tb_ui_keys__DOT__ub))))))));
}

VL_INLINE_OPT void Vtb_ui_keys___024root___nba_comb__TOP__0(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___nba_comb__TOP__0\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__physical;
    tb_ui_keys__DOT__dut__DOT__physical = 0;
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__mapped;
    tb_ui_keys__DOT__dut__DOT__mapped = 0;
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__is_ui;
    tb_ui_keys__DOT__dut__DOT__is_ui = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    tb_ui_keys__DOT__dut__DOT__physical = ((IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__pending) 
                                           | (IData)(vlSelfRef.tb_ui_keys__DOT__kv));
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_ui_keys__DOT__menu) 
                      << 7U) | ((IData)(vlSelfRef.tb_ui_keys__DOT__active) 
                                << 6U)) | (((IData)(vlSelfRef.tb_ui_keys__DOT__muted) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.tb_ui_keys__DOT__paused) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__pending)
                                                  ? (IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__held)
                                                  : (IData)(vlSelfRef.tb_ui_keys__DOT__key)))));
    tb_ui_keys__DOT__dut__DOT__mapped = Vtb_ui_keys__ConstPool__TABLE_h9335bfdc_0
        [__Vtableidx1];
    tb_ui_keys__DOT__dut__DOT__is_ui = Vtb_ui_keys__ConstPool__TABLE_h5c1e1fad_0
        [__Vtableidx1];
    vlSelfRef.tb_ui_keys__DOT__dut__DOT__command = 
        Vtb_ui_keys__ConstPool__TABLE_h5ca429ef_0[__Vtableidx1];
    vlSelfRef.tb_ui_keys__DOT__dut__DOT__action = Vtb_ui_keys__ConstPool__TABLE_hadf6aee6_0
        [__Vtableidx1];
    vlSelfRef.tb_ui_keys__DOT__cv = ((~ (IData)(vlSelfRef.tb_ui_keys__DOT__reset)) 
                                     & (((~ (IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__uart_ui)) 
                                         & (IData)(vlSelfRef.tb_ui_keys__DOT__uv)) 
                                        | ((IData)(tb_ui_keys__DOT__dut__DOT__physical) 
                                           & ((IData)(tb_ui_keys__DOT__dut__DOT__mapped) 
                                              & ((~ (IData)(tb_ui_keys__DOT__dut__DOT__is_ui)) 
                                                 & (~ (IData)(vlSelfRef.tb_ui_keys__DOT__uv)))))));
    vlSelfRef.tb_ui_keys__DOT__iv = ((~ (IData)(vlSelfRef.tb_ui_keys__DOT__reset)) 
                                     & ((IData)(vlSelfRef.tb_ui_keys__DOT__dut__DOT__uart_ui) 
                                        | ((~ (IData)(vlSelfRef.tb_ui_keys__DOT__uv)) 
                                           & ((IData)(tb_ui_keys__DOT__dut__DOT__physical) 
                                              & ((IData)(tb_ui_keys__DOT__dut__DOT__is_ui) 
                                                 & (IData)(tb_ui_keys__DOT__dut__DOT__mapped))))));
}

void Vtb_ui_keys___024root___timing_resume(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___timing_resume\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3a50ad45__0.resume(
                                                   "@(negedge tb_ui_keys.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ui_keys___024root___timing_commit(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___timing_commit\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3a50ad45__0.commit(
                                                   "@(negedge tb_ui_keys.clk)");
    }
}

void Vtb_ui_keys___024root___eval_triggers__act(Vtb_ui_keys___024root* vlSelf);

bool Vtb_ui_keys___024root___eval_phase__act(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_phase__act\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ui_keys___024root___eval_triggers__act(vlSelf);
    Vtb_ui_keys___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ui_keys___024root___timing_resume(vlSelf);
        Vtb_ui_keys___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ui_keys___024root___eval_phase__nba(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_phase__nba\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ui_keys___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_keys___024root___dump_triggers__nba(Vtb_ui_keys___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_keys___024root___dump_triggers__act(Vtb_ui_keys___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ui_keys___024root___eval(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ui_keys___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_ui_keys.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ui_keys___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_ui_keys.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ui_keys___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ui_keys___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ui_keys___024root___eval_debug_assertions(Vtb_ui_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_keys___024root___eval_debug_assertions\n"); );
    Vtb_ui_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
