// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd.h for the primary calling header

#include "Vtb_sd__pch.h"
#include "Vtb_sd___024root.h"

VL_ATTR_COLD void Vtb_sd___024root___eval_static__TOP(Vtb_sd___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd___024root___eval_static(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_static\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sd___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__sck__0 
        = vlSelfRef.tb_sd__DOT__sck;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__cs__0 
        = vlSelfRef.tb_sd__DOT__cs;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_ha5752fe1__1 = ((0xdU 
                                               == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                                              & (IData)(vlSelfRef.tb_sd__DOT__initialized));
    vlSelfRef.__Vtrigprevexpr_hd106087b__1 = ((IData)(vlSelfRef.tb_sd__DOT__done) 
                                              | (0U 
                                                 != (IData)(vlSelfRef.tb_sd__DOT__error)));
}

VL_ATTR_COLD void Vtb_sd___024root___eval_static__TOP(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_static__TOP\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd__DOT__clk = 0U;
    vlSelfRef.tb_sd__DOT__reset = 1U;
    vlSelfRef.tb_sd__DOT__start = 0U;
    vlSelfRef.tb_sd__DOT__miso = 1U;
    vlSelfRef.tb_sd__DOT__receive_byte = 0U;
    vlSelfRef.tb_sd__DOT__bits = 0U;
    vlSelfRef.tb_sd__DOT__cmdbytes = 0U;
    vlSelfRef.tb_sd__DOT__head = 0U;
    vlSelfRef.tb_sd__DOT__tail = 0U;
    vlSelfRef.tb_sd__DOT__outbit = 7U;
    vlSelfRef.tb_sd__DOT__received = 0U;
}

VL_ATTR_COLD void Vtb_sd___024root___eval_final(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_final\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__stl(Vtb_sd___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sd___024root___eval_phase__stl(Vtb_sd___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd___024root___eval_settle(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_settle\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_sd___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/p3\\tb_sd.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_sd___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__stl(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___dump_triggers__stl\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_sd___024root___stl_sequent__TOP__0(Vtb_sd___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd___024root___eval_stl(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_stl\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_sd___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_sd___024root___stl_sequent__TOP__0(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___stl_sequent__TOP__0\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sd__DOT__dut__DOT__send_byte = ((0x14U 
                                                  == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))
                                                  ? 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sd__DOT__dut__DOT__frame 
                                                             >> 0x28U)))
                                                  : 0xffU);
    vlSelfRef.tb_sd__DOT__dut__DOT____Vcellinp__spi__start 
        = ((~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)) 
           & ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
              | ((0x14U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                 | ((0x16U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                    | ((0x18U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                       | ((0x1aU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                          | ((0x1cU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                             | ((0x1eU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                                | (0x20U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))))))))));
}

VL_ATTR_COLD void Vtb_sd___024root___eval_triggers__stl(Vtb_sd___024root* vlSelf);

VL_ATTR_COLD bool Vtb_sd___024root___eval_phase__stl(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_phase__stl\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_sd___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_sd___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__act(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___dump_triggers__act\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_sd.sck)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_sd.cs)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_sd.sck)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_sd.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( ((6'hd == tb_sd.dut.state) & tb_sd.initialized))\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge tb_sd.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( (tb_sd.done | (8'h0 != tb_sd.error)))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__nba(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___dump_triggers__nba\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_sd.sck)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_sd.cs)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_sd.sck)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_sd.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( ((6'hd == tb_sd.dut.state) & tb_sd.initialized))\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge tb_sd.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( (tb_sd.done | (8'h0 != tb_sd.error)))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sd___024root___ctor_var_reset(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___ctor_var_reset\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_sd__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__miso = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__initialized = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__bv = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__bi = VL_RAND_RESET_I(9);
    vlSelf->tb_sd__DOT__bd = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__sectors = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sd__DOT__response[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_sd__DOT__command[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_sd__DOT__receive_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__bits = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__cmdbytes = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__head = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__tail = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__outbit = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__received = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__argument = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__complete_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT____Vlvbound_ha33a169e__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__dut__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->tb_sd__DOT__dut__DOT__continuation = VL_RAND_RESET_I(6);
    vlSelf->tb_sd__DOT__dut__DOT__frame = VL_RAND_RESET_Q(48);
    vlSelf->tb_sd__DOT__dut__DOT__bytes_left = VL_RAND_RESET_I(4);
    vlSelf->tb_sd__DOT__dut__DOT__power_count = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__dut__DOT__response_extra = VL_RAND_RESET_I(32);
    vlSelf->tb_sd__DOT__dut__DOT__timeout_count = VL_RAND_RESET_I(20);
    vlSelf->tb_sd__DOT__dut__DOT__init_attempts = VL_RAND_RESET_I(16);
    vlSelf->tb_sd__DOT__dut__DOT__response = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__dut__DOT__extra_count = VL_RAND_RESET_I(3);
    vlSelf->tb_sd__DOT__dut__DOT__high_capacity = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__dut__DOT__v2 = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__dut__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__dut__DOT__crc_left = VL_RAND_RESET_I(2);
    vlSelf->tb_sd__DOT__dut__DOT__data_index = VL_RAND_RESET_I(9);
    vlSelf->tb_sd__DOT__dut__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__dut__DOT__spi_done = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__dut__DOT__rx = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__dut__DOT__send_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__dut__DOT____Vcellinp__spi__start = VL_RAND_RESET_I(1);
    vlSelf->tb_sd__DOT__dut__DOT__spi__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__dut__DOT__spi__DOT__shift = VL_RAND_RESET_I(8);
    vlSelf->tb_sd__DOT__dut__DOT__spi__DOT__bitno = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__continuation = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__frame = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__bytes_left = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__power_count = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__response_extra = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__timeout_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__init_attempts = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__response = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__extra_count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__high_capacity = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__crc_left = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__data_index = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_sd__DOT__sectors = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_sd__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__spi_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__rx = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd__DOT__sck__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd__DOT__cs__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sd__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_ha5752fe1__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hd106087b__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
