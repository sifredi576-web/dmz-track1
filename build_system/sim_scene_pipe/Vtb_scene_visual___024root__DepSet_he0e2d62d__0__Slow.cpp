// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scene_visual.h for the primary calling header

#include "Vtb_scene_visual__pch.h"
#include "Vtb_scene_visual___024root.h"

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_static__TOP(Vtb_scene_visual___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_static(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_static\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scene_visual___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scene_visual__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_static__TOP(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_static__TOP\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scene_visual__DOT__clk = 0U;
    vlSelfRef.tb_scene_visual__DOT__reset = 1U;
    vlSelfRef.tb_scene_visual__DOT__frame = 0U;
    vlSelfRef.tb_scene_visual__DOT__es = 0U;
    vlSelfRef.tb_scene_visual__DOT__hide = 0U;
    vlSelfRef.tb_scene_visual__DOT__cv = 0U;
    vlSelfRef.tb_scene_visual__DOT__ce = 0U;
    vlSelfRef.tb_scene_visual__DOT__en = 1U;
    vlSelfRef.tb_scene_visual__DOT__cmd = 0U;
    vlSelfRef.tb_scene_visual__DOT__left = 0U;
    vlSelfRef.tb_scene_visual__DOT__right = 0U;
    vlSelfRef.tb_scene_visual__DOT__x = 0x46U;
    vlSelfRef.tb_scene_visual__DOT__y = 0x108U;
    vlSelfRef.tb_scene_visual__DOT__highs = 0U;
    vlSelfRef.tb_scene_visual__DOT__lows = 0U;
}

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_final(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_final\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_visual___024root___dump_triggers__stl(Vtb_scene_visual___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_scene_visual___024root___eval_phase__stl(Vtb_scene_visual___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_settle(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_settle\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_scene_visual___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_scene_visual.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_scene_visual___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_visual___024root___dump_triggers__stl(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___dump_triggers__stl\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_scene_visual___024root___stl_sequent__TOP__0(Vtb_scene_visual___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_stl(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_stl\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_scene_visual___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_scene_visual___024root___stl_sequent__TOP__0(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___stl_sequent__TOP__0\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__Vfuncout;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__a;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__a = 0;
    SData/*11:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__b;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__b = 0;
    CData/*2:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t = 0;
    SData/*13:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa = 0;
    SData/*13:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb = 0;
    SData/*13:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__n;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__n = 0;
    SData/*8:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__Vfuncout;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__a;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__a = 0;
    SData/*11:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__b;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__b = 0;
    CData/*2:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t = 0;
    SData/*13:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa = 0;
    SData/*13:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb = 0;
    SData/*13:0*/ __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__n;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__n = 0;
    // Body
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_l 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__left))
                       ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_scene_visual__DOT__left)))
                       : (IData)(vlSelfRef.tb_scene_visual__DOT__left)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__mag_r 
        = (0xffffU & ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__right))
                       ? ((IData)(1U) + (~ (IData)(vlSelfRef.tb_scene_visual__DOT__right)))
                       : (IData)(vlSelfRef.tb_scene_visual__DOT__right)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__ax 
        = (0x3ffU & ((0x31eU <= (IData)(vlSelfRef.tb_scene_visual__DOT__x))
                      ? ((IData)(vlSelfRef.tb_scene_visual__DOT__x) 
                         - (IData)(0x31eU)) : ((IData)(2U) 
                                               + (IData)(vlSelfRef.tb_scene_visual__DOT__x))));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_l 
        = ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l))
            ? 0x1fU : (0x1fU & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_l) 
                                >> 0xaU)));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__live_r 
        = ((0x8000U & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r))
            ? 0x1fU : (0x1fU & ((IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__maximum_r) 
                                >> 0xaU)));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t 
        = (3U & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__b 
        = (0xfffU & (vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q 
                     >> 0xcU));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__a 
        = (0xfffU & vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q);
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa 
        = (0x800U ^ (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__a));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb 
        = (0x800U ^ (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__b));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__n 
        = (0x3fffU & ((0U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t))
                       ? VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa), 2U)
                       : ((1U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t))
                           ? ((VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa), 1U) 
                               + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa)) 
                              + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb))
                           : ((2U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t))
                               ? VL_SHIFTL_III(14,14,32, 
                                               ((IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa) 
                                                + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb)), 1U)
                               : ((3U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__t))
                                   ? (((IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__aa) 
                                       + VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb), 1U)) 
                                      + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb))
                                   : VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__bb), 2U))))));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__Vfuncout 
        = (0x1ffU & ((IData)(0x108U) - (0x7fU & ((IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__n) 
                                                 >> 7U))));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__line_start 
        = __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__77__Vfuncout;
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t 
        = (7U & ((IData)(1U) + (3U & (IData)(vlSelfRef.tb_scene_visual__DOT__visual__DOT__px))));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__b 
        = (0xfffU & (vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q 
                     >> 0xcU));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__a 
        = (0xfffU & vlSelfRef.tb_scene_visual__DOT__visual__DOT__wave_q);
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa 
        = (0x800U ^ (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__a));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb 
        = (0x800U ^ (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__b));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__n 
        = (0x3fffU & ((0U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t))
                       ? VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa), 2U)
                       : ((1U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t))
                           ? ((VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa), 1U) 
                               + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa)) 
                              + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb))
                           : ((2U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t))
                               ? VL_SHIFTL_III(14,14,32, 
                                               ((IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa) 
                                                + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb)), 1U)
                               : ((3U == (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__t))
                                   ? (((IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__aa) 
                                       + VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb), 1U)) 
                                      + (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb))
                                   : VL_SHIFTL_III(14,14,32, (IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__bb), 2U))))));
    __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__Vfuncout 
        = (0x1ffU & ((IData)(0x108U) - (0x7fU & ((IData)(__Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__n) 
                                                 >> 7U))));
    vlSelfRef.tb_scene_visual__DOT__visual__DOT__line_end 
        = __Vfunc_tb_scene_visual__DOT__visual__DOT__interpolate__78__Vfuncout;
}

VL_ATTR_COLD void Vtb_scene_visual___024root___eval_triggers__stl(Vtb_scene_visual___024root* vlSelf);

VL_ATTR_COLD bool Vtb_scene_visual___024root___eval_phase__stl(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___eval_phase__stl\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_scene_visual___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_scene_visual___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_visual___024root___dump_triggers__act(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___dump_triggers__act\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_scene_visual.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_scene_visual.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_visual___024root___dump_triggers__nba(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___dump_triggers__nba\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_scene_visual.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_scene_visual.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scene_visual___024root___ctor_var_reset(Vtb_scene_visual___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_visual___024root___ctor_var_reset\n"); );
    Vtb_scene_visual__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_scene_visual__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__frame = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__es = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__hide = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__cv = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_visual__DOT__left = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_visual__DOT__right = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_visual__DOT__x = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__emergency = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visible = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__ink = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__shade = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__color = VL_RAND_RESET_I(24);
    vlSelf->tb_scene_visual__DOT__ll = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_visual__DOT__rr = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_visual__DOT__pl = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_visual__DOT__pr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_scene_visual__DOT__tone_samples[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_scene_visual__DOT__highs = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__lows = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__row = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__phase = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__ya = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__yb = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__ys = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__ye = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_visual__DOT__expected_line = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__scene__DOT__es = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_visual__DOT__scene__DOT__vs = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_visual__DOT__scene__DOT__soft_alert = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__scene__DOT__soft_visual = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__scene__DOT__tick = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_scene_visual__DOT__visual__DOT__wave[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->tb_scene_visual__DOT__visual__DOT__front = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visual__DOT__page_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visual__DOT__wp = VL_RAND_RESET_I(7);
    vlSelf->tb_scene_visual__DOT__visual__DOT__decimate = VL_RAND_RESET_I(3);
    vlSelf->tb_scene_visual__DOT__visual__DOT__wave_q = VL_RAND_RESET_I(24);
    vlSelf->tb_scene_visual__DOT__visual__DOT__previous_sample = VL_RAND_RESET_I(12);
    vlSelf->tb_scene_visual__DOT__visual__DOT__maximum_l = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_visual__DOT__visual__DOT__maximum_r = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_visual__DOT__visual__DOT__mag_l = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_visual__DOT__visual__DOT__mag_r = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_visual__DOT__visual__DOT__live_l = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_visual__DOT__visual__DOT__live_r = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_visual__DOT__visual__DOT__ax = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__visual__DOT__px = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__visual__DOT__py = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__visual__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visual__DOT__valid_page = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visual__DOT__has_page = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visual__DOT__line_start = VL_RAND_RESET_I(9);
    vlSelf->tb_scene_visual__DOT__visual__DOT__line_end = VL_RAND_RESET_I(9);
    vlSelf->tb_scene_visual__DOT__visual__DOT__start_q = VL_RAND_RESET_I(9);
    vlSelf->tb_scene_visual__DOT__visual__DOT__end_q = VL_RAND_RESET_I(9);
    vlSelf->tb_scene_visual__DOT__visual__DOT__px_q = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__visual__DOT__py_q = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_visual__DOT__visual__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_visual__DOT__visual__DOT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_scene_visual__DOT__clk__0 = VL_RAND_RESET_I(1);
}
