// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_page_compositor.h for the primary calling header

#include "Vtb_page_compositor__pch.h"
#include "Vtb_page_compositor___024root.h"

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_static__TOP(Vtb_page_compositor___024root* vlSelf);

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_static(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___eval_static\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_page_compositor___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_page_compositor__DOT__clk__0 = 0U;
}

extern const VlWide<8>/*255:0*/ Vtb_page_compositor__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_static__TOP(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___eval_static__TOP\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_page_compositor__DOT__clk = 0U;
    vlSelfRef.tb_page_compositor__DOT__reset = 1U;
    vlSelfRef.tb_page_compositor__DOT__page_begin = 0U;
    vlSelfRef.tb_page_compositor__DOT__iv = 0U;
    vlSelfRef.tb_page_compositor__DOT__ia = 0U;
    vlSelfRef.tb_page_compositor__DOT__ordy = 0U;
    vlSelfRef.tb_page_compositor__DOT__oack = 0U;
    vlSelfRef.tb_page_compositor__DOT__mr = 0U;
    vlSelfRef.tb_page_compositor__DOT__mrsp = 0U;
    vlSelfRef.tb_page_compositor__DOT__md[0U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.tb_page_compositor__DOT__md[1U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.tb_page_compositor__DOT__md[2U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.tb_page_compositor__DOT__md[3U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.tb_page_compositor__DOT__md[4U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.tb_page_compositor__DOT__md[5U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.tb_page_compositor__DOT__md[6U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.tb_page_compositor__DOT__md[7U] = Vtb_page_compositor__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.tb_page_compositor__DOT__widget[0U] = 0U;
    vlSelfRef.tb_page_compositor__DOT__widget[1U] = 0U;
    vlSelfRef.tb_page_compositor__DOT__widget[2U] = 0U;
    vlSelfRef.tb_page_compositor__DOT__widget[3U] = 0U;
    vlSelfRef.tb_page_compositor__DOT__cycle = 0U;
    vlSelfRef.tb_page_compositor__DOT__mdelay = 0U;
    vlSelfRef.tb_page_compositor__DOT__odelay = 0U;
    vlSelfRef.tb_page_compositor__DOT__received = 0U;
    vlSelfRef.tb_page_compositor__DOT__mpending = 0U;
    vlSelfRef.tb_page_compositor__DOT__opending = 0U;
}

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_final(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___eval_final\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_page_compositor___024root___dump_triggers__stl(Vtb_page_compositor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_page_compositor___024root___eval_phase__stl(Vtb_page_compositor___024root* vlSelf);

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_settle(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___eval_settle\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_page_compositor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_page_compositor.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_page_compositor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_page_compositor___024root___dump_triggers__stl(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___dump_triggers__stl\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_page_compositor___024root___stl_sequent__TOP__0(Vtb_page_compositor___024root* vlSelf);

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_stl(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___eval_stl\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_page_compositor___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_page_compositor___024root___stl_sequent__TOP__0(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___stl_sequent__TOP__0\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ tb_page_compositor__DOT__dut__DOT__px;
    tb_page_compositor__DOT__dut__DOT__px = 0;
    // Body
    tb_page_compositor__DOT__dut__DOT__px = (0x3ffU 
                                             & ((IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__x) 
                                                + (IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__p)));
    vlSelfRef.tb_page_compositor__DOT__dut__DOT__pixel_inside 
        = (((IData)(tb_page_compositor__DOT__dut__DOT__px) 
            >= (IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__wx)) 
           & ((IData)(tb_page_compositor__DOT__dut__DOT__px) 
              < (0x7ffU & ((IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__wx) 
                           + (IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__ww)))));
    vlSelfRef.tb_page_compositor__DOT__dut__DOT__source_byte 
        = (0x1fffffU & (((IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__plane)
                          ? vlSelfRef.tb_page_compositor__DOT__dut__DOT__label
                          : vlSelfRef.tb_page_compositor__DOT__dut__DOT__base) 
                        + VL_SHIFTL_III(21,21,32, (0xffffU 
                                                   & ((IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__row_offset) 
                                                      + 
                                                      ((IData)(tb_page_compositor__DOT__dut__DOT__px) 
                                                       - (IData)(vlSelfRef.tb_page_compositor__DOT__dut__DOT__wx)))), 1U)));
}

VL_ATTR_COLD void Vtb_page_compositor___024root___eval_triggers__stl(Vtb_page_compositor___024root* vlSelf);

VL_ATTR_COLD bool Vtb_page_compositor___024root___eval_phase__stl(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___eval_phase__stl\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_page_compositor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_page_compositor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_page_compositor___024root___dump_triggers__act(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___dump_triggers__act\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_page_compositor.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_page_compositor.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_page_compositor___024root___dump_triggers__nba(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___dump_triggers__nba\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_page_compositor.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_page_compositor.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_page_compositor___024root___ctor_var_reset(Vtb_page_compositor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_page_compositor___024root___ctor_var_reset\n"); );
    Vtb_page_compositor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_page_compositor__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__page_begin = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__iv = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__ia = VL_RAND_RESET_I(18);
    vlSelf->tb_page_compositor__DOT__iack = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__ordy = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__oack = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__mr = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__mrsp = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_page_compositor__DOT__md);
    vlSelf->tb_page_compositor__DOT__index = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(99, vlSelf->tb_page_compositor__DOT__widget);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(99, vlSelf->tb_page_compositor__DOT__descriptors[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 514272; ++__Vi0) {
        vlSelf->tb_page_compositor__DOT__scene[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 19200; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->tb_page_compositor__DOT__expected[__Vi0]);
    }
    vlSelf->tb_page_compositor__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->tb_page_compositor__DOT__mdelay = VL_RAND_RESET_I(32);
    vlSelf->tb_page_compositor__DOT__odelay = VL_RAND_RESET_I(32);
    vlSelf->tb_page_compositor__DOT__received = VL_RAND_RESET_I(32);
    vlSelf->tb_page_compositor__DOT__mpending = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__opending = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__address = VL_RAND_RESET_I(21);
    vlSelf->tb_page_compositor__DOT__frame_send__Vstatic__row = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(99, vlSelf->tb_page_compositor__DOT__dut__DOT__widget_q);
    vlSelf->tb_page_compositor__DOT__dut__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_page_compositor__DOT__dut__DOT__layer = VL_RAND_RESET_I(2);
    vlSelf->tb_page_compositor__DOT__dut__DOT__plane = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__dut__DOT__x = VL_RAND_RESET_I(10);
    vlSelf->tb_page_compositor__DOT__dut__DOT__y = VL_RAND_RESET_I(9);
    vlSelf->tb_page_compositor__DOT__dut__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__dut__DOT__address = VL_RAND_RESET_I(18);
    vlSelf->tb_page_compositor__DOT__dut__DOT__previous_addr = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(256, vlSelf->tb_page_compositor__DOT__dut__DOT__buffer);
    vlSelf->tb_page_compositor__DOT__dut__DOT__pixel_write_mask = VL_RAND_RESET_I(16);
    vlSelf->tb_page_compositor__DOT__dut__DOT__pixel_write_data = VL_RAND_RESET_I(16);
    vlSelf->tb_page_compositor__DOT__dut__DOT__p = VL_RAND_RESET_I(4);
    vlSelf->tb_page_compositor__DOT__dut__DOT__row_offset = VL_RAND_RESET_I(16);
    vlSelf->tb_page_compositor__DOT__dut__DOT__wx = VL_RAND_RESET_I(10);
    vlSelf->tb_page_compositor__DOT__dut__DOT__ww = VL_RAND_RESET_I(9);
    vlSelf->tb_page_compositor__DOT__dut__DOT__dim = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__dut__DOT__base = VL_RAND_RESET_I(20);
    vlSelf->tb_page_compositor__DOT__dut__DOT__label = VL_RAND_RESET_I(20);
    vlSelf->tb_page_compositor__DOT__dut__DOT__cache_tag = VL_RAND_RESET_I(20);
    vlSelf->tb_page_compositor__DOT__dut__DOT__cache_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__dut__DOT__cache = VL_RAND_RESET_I(16);
    vlSelf->tb_page_compositor__DOT__dut__DOT__pixel_inside = VL_RAND_RESET_I(1);
    vlSelf->tb_page_compositor__DOT__dut__DOT__source_byte = VL_RAND_RESET_I(21);
    vlSelf->__Vtrigprevexpr___TOP__tb_page_compositor__DOT__clk__0 = VL_RAND_RESET_I(1);
}
