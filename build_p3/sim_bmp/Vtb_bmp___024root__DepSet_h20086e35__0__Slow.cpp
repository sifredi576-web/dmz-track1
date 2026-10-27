// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmp.h for the primary calling header

#include "Vtb_bmp__pch.h"
#include "Vtb_bmp___024root.h"

VL_ATTR_COLD void Vtb_bmp___024root___eval_static__TOP(Vtb_bmp___024root* vlSelf);

VL_ATTR_COLD void Vtb_bmp___024root___eval_static(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_static\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_bmp___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bmp__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h7019e768__1 = ((IData)(vlSelfRef.tb_bmp__DOT__done) 
                                              | (0U 
                                                 != (IData)(vlSelfRef.tb_bmp__DOT__error)));
}

VL_ATTR_COLD void Vtb_bmp___024root___eval_static__TOP(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_static__TOP\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_bmp__DOT__clk = 0U;
    vlSelfRef.tb_bmp__DOT__reset = 1U;
    vlSelfRef.tb_bmp__DOT__sd_ready = 1U;
    vlSelfRef.tb_bmp__DOT__sd_done = 0U;
    vlSelfRef.tb_bmp__DOT__bvalid = 0U;
    vlSelfRef.tb_bmp__DOT__bindex = 0U;
    vlSelfRef.tb_bmp__DOT__bdata = 0U;
    vlSelfRef.tb_bmp__DOT__load_ready = 1U;
    vlSelfRef.tb_bmp__DOT__ack = 0U;
    vlSelfRef.tb_bmp__DOT__reading = 0U;
    vlSelfRef.tb_bmp__DOT__index = 0U;
    vlSelfRef.tb_bmp__DOT__ack_delay = 0U;
    vlSelfRef.tb_bmp__DOT__bursts = 0U;
    vlSelfRef.tb_bmp__DOT__sectors = 0U;
}

VL_ATTR_COLD void Vtb_bmp___024root___eval_final(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_final\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__stl(Vtb_bmp___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_bmp___024root___eval_phase__stl(Vtb_bmp___024root* vlSelf);

VL_ATTR_COLD void Vtb_bmp___024root___eval_settle(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_settle\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_bmp___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/p3\\tb_bmp.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_bmp___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__stl(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___dump_triggers__stl\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_bmp___024root___stl_sequent__TOP__0(Vtb_bmp___024root* vlSelf);

VL_ATTR_COLD void Vtb_bmp___024root___eval_stl(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_stl\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_bmp___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_bmp___024root___stl_sequent__TOP__0(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___stl_sequent__TOP__0\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0;
    tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0 = 0;
    // Body
    if (vlSelfRef.tb_bmp__DOT__dut__DOT__fat16) {
        vlSelfRef.tb_bmp__DOT__dut__DOT__fat_byte_offset 
            = (0x1feU & (vlSelfRef.tb_bmp__DOT__dut__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry 
            = (0xffffU & vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached);
    } else {
        vlSelfRef.tb_bmp__DOT__dut__DOT__fat_byte_offset 
            = (0x1fcU & (vlSelfRef.tb_bmp__DOT__dut__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry 
            = (0xfffffffU & vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached);
    }
    vlSelfRef.tb_bmp__DOT__dut__DOT__cache_byte = vlSelfRef.tb_bmp__DOT__dut__DOT__cache
        [(0x1ffU & ((0xdU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))
                     ? ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos) 
                        + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index))
                     : (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos)))];
    tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0 
        = (0x1ffU & ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__source_y)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__source_y))));
    vlSelfRef.tb_bmp__DOT__dut__DOT__color = ((0xf800U 
                                               & (vlSelfRef.tb_bmp__DOT__dut__DOT__cache
                                                  [
                                                  (0x1ffU 
                                                   & ((0xdU 
                                                       == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos) 
                                                       + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index))
                                                       : (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos)))] 
                                                  << 8U)) 
                                              | ((0x7e0U 
                                                  & ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__green) 
                                                     << 3U)) 
                                                 | (0x1fU 
                                                    & ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__blue) 
                                                       >> 3U))));
    vlSelfRef.tb_bmp__DOT__dut__DOT__target_addr = 
        (0x3ffffU & (VL_SHIFTL_III(18,18,32, tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0, 8U) 
                     + (VL_SHIFTL_III(18,18,32, tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0, 6U) 
                        + ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_x) 
                           << 3U))));
}

VL_ATTR_COLD void Vtb_bmp___024root___eval_triggers__stl(Vtb_bmp___024root* vlSelf);

VL_ATTR_COLD bool Vtb_bmp___024root___eval_phase__stl(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_phase__stl\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_bmp___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_bmp___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__act(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___dump_triggers__act\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_bmp.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( (tb_bmp.done | (8'h0 != tb_bmp.error)))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__nba(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___dump_triggers__nba\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_bmp.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( (tb_bmp.done | (8'h0 != tb_bmp.error)))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bmp___024root___ctor_var_reset(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___ctor_var_reset\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_bmp__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__lba = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__pixels = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->tb_bmp__DOT__data);
    vlSelf->tb_bmp__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__bindex = VL_RAND_RESET_I(9);
    vlSelf->tb_bmp__DOT__bdata = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__load_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__current_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__ack_delay = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__bursts = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__sectors = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->tb_bmp__DOT__dut__DOT__after_read = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_bmp__DOT__dut__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_bmp__DOT__dut__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_bmp__DOT__dut__DOT__entry[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_bmp__DOT__dut__DOT__signature = VL_RAND_RESET_I(16);
    vlSelf->tb_bmp__DOT__dut__DOT__partition_start = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__fat_cached = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__entry_index = VL_RAND_RESET_I(5);
    vlSelf->tb_bmp__DOT__dut__DOT__cache_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__dut__DOT__volume_base = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__fat_base = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__data_base = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__root_base = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__root_sectors = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__spc = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__dut__DOT__cluster_sector = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__dut__DOT__cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__file_size = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__file_offset = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__bmp_offset = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__fat16 = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__dut__DOT__dir_is_fixed = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__dut__DOT__top_down = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__dut__DOT__rgba = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__dut__DOT__fat_for_file = VL_RAND_RESET_I(1);
    vlSelf->tb_bmp__DOT__dut__DOT__dir_pos = VL_RAND_RESET_I(9);
    vlSelf->tb_bmp__DOT__dut__DOT__byte_pos = VL_RAND_RESET_I(10);
    vlSelf->tb_bmp__DOT__dut__DOT__fixed_root_index = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__directory_sectors = VL_RAND_RESET_I(16);
    vlSelf->tb_bmp__DOT__dut__DOT__channel = VL_RAND_RESET_I(2);
    vlSelf->tb_bmp__DOT__dut__DOT__blue = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__dut__DOT__green = VL_RAND_RESET_I(8);
    vlSelf->tb_bmp__DOT__dut__DOT__burst_pixel = VL_RAND_RESET_I(4);
    vlSelf->tb_bmp__DOT__dut__DOT__low_pixel = VL_RAND_RESET_I(16);
    vlSelf->tb_bmp__DOT__dut__DOT__burst_x = VL_RAND_RESET_I(6);
    vlSelf->tb_bmp__DOT__dut__DOT__source_y = VL_RAND_RESET_I(9);
    vlSelf->tb_bmp__DOT__dut__DOT__pending_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_bmp__DOT__dut__DOT__color = VL_RAND_RESET_I(16);
    vlSelf->tb_bmp__DOT__dut__DOT__target_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_bmp__DOT__dut__DOT__required_file_end = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__fat_entry = VL_RAND_RESET_I(32);
    vlSelf->tb_bmp__DOT__dut__DOT__fat_byte_offset = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__tb_bmp__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h7019e768__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
