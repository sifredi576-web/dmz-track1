// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_media.h for the primary calling header

#include "Vtb_media__pch.h"
#include "Vtb_media___024root.h"

VL_ATTR_COLD void Vtb_media___024root___eval_static__TOP(Vtb_media___024root* vlSelf);

VL_ATTR_COLD void Vtb_media___024root___eval_static(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_static\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_media___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_hfa9ac863__1 = (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state));
    vlSelfRef.__Vtrigprevexpr_h8eaeeabb__1 = ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                                              & (6U 
                                                 != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__audio_flush__0 
        = vlSelfRef.tb_media__DOT__audio_flush;
    vlSelfRef.__Vtrigprevexpr_h34e52112__1 = (1U & 
                                              (~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)));
    vlSelfRef.__Vtrigprevexpr_h19fb2b7d__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_h18ab4be8__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_hb6f197cf__1 = (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state));
    vlSelfRef.__Vtrigprevexpr_hfe0cc398__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_hb1b7b8a8__1 = 0U;
}

VL_ATTR_COLD void Vtb_media___024root___eval_static__TOP(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_static__TOP\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_media__DOT__clk = 0U;
    vlSelfRef.tb_media__DOT__reset = 1U;
    vlSelfRef.tb_media__DOT__select_request = 0U;
    vlSelfRef.tb_media__DOT__requested = 0U;
    vlSelfRef.tb_media__DOT__paired = 0U;
    vlSelfRef.tb_media__DOT__frame_swaps = 0U;
    vlSelfRef.tb_media__DOT__audio_select = 0U;
    vlSelfRef.tb_media__DOT__audio_requested = 0U;
    vlSelfRef.tb_media__DOT__browse_query = 0U;
    vlSelfRef.tb_media__DOT__load_ready = 1U;
    vlSelfRef.tb_media__DOT__ack = 0U;
    vlSelfRef.tb_media__DOT__sd_ready = 1U;
    vlSelfRef.tb_media__DOT__sd_done = 0U;
    vlSelfRef.tb_media__DOT__bv = 0U;
    vlSelfRef.tb_media__DOT__bi = 0U;
    vlSelfRef.tb_media__DOT__bd = 0U;
    vlSelfRef.tb_media__DOT__cycle = 0U;
    vlSelfRef.tb_media__DOT__pcm_count = 0U;
    vlSelfRef.tb_media__DOT__bursts = 0U;
    vlSelfRef.tb_media__DOT__ack_delay = 0U;
    vlSelfRef.tb_media__DOT__sd_pos = 0U;
    vlSelfRef.tb_media__DOT__reading = 0U;
    vlSelfRef.tb_media__DOT__held = 0U;
}

extern const VlWide<8>/*255:0*/ Vtb_media__ConstPool__CONST_h10ecac52_0;

VL_ATTR_COLD void Vtb_media___024root___eval_initial__TOP(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_initial__TOP\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"platform"})))) {
        VL_READMEM_N(true, 8, 3424, 0, VL_CVT_PACK_STR_NW(8, Vtb_media__ConstPool__CONST_h10ecac52_0)
                     ,  &(vlSelfRef.tb_media__DOT__config_image)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtb_media___024root___eval_final(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_final\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__stl(Vtb_media___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_media___024root___eval_phase__stl(Vtb_media___024root* vlSelf);

VL_ATTR_COLD void Vtb_media___024root___eval_settle(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_settle\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_media___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_media.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_media___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__stl(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___dump_triggers__stl\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_media___024root___stl_sequent__TOP__0(Vtb_media___024root* vlSelf);

VL_ATTR_COLD void Vtb_media___024root___eval_stl(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_stl\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_media___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_media___024root___stl_sequent__TOP__0(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___stl_sequent__TOP__0\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_media__DOT__dut__DOT__img_ready;
    tb_media__DOT__dut__DOT__img_ready = 0;
    CData/*0:0*/ tb_media__DOT__dut__DOT__img_done;
    tb_media__DOT__dut__DOT__img_done = 0;
    CData/*0:0*/ tb_media__DOT__dut__DOT__img_bv;
    tb_media__DOT__dut__DOT__img_bv = 0;
    CData/*0:0*/ tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1;
    tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1 = 0;
    CData/*0:0*/ tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1;
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1 = 0;
    CData/*0:0*/ tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2;
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2 = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value = 0;
    // Body
    vlSelfRef.tb_media__DOT__pcm_ready = (0U == VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length 
        = (((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
             [0xbU] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                 [0xaU] << 0x10U)) 
           | ((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
               [9U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
              [8U]));
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum 
        = (0x3ffU & (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                     [0x10U] + (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                [0x11U] + vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                [0x12U])));
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_crc 
        = (((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
             [0xfU] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                 [0xeU] << 0x10U)) 
           | ((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
               [0xdU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
              [0xcU]));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__regular_file 
        = ((0xe5U != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
            [0U]) & ((0U == (0x18U & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                             [0xbU])) & (0xfU != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                         [0xbU])));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_ready 
        = ((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
              | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y 
        = (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))));
    if (vlSelfRef.tb_media__DOT__dut__DOT__fat16) {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached);
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached);
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached);
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached);
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached);
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached);
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached);
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached);
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length 
        = (0x1ffffffffULL & (8ULL + VL_EXTEND_QI(33,32, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__114__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                 [7U] << 0x18U) | (
                                                   vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                   [5U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                  [4U]));
                    }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__114__Vfuncout))));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_ready = 
        (1U & (~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                  | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
                     & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)))));
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__byte_valid 
        = ((~ ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error)) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end 
        = (0x1ffffffffULL & (((QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset)) 
                              + VL_EXTEND_QI(33,32, 
                                             ([&]() {
                            vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__115__Vfuncout 
                                = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                     [7U] << 0x18U) 
                                    | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                       [6U] << 0x10U)) 
                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                       [5U] << 8U) 
                                      | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                      [4U]));
                        }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__115__Vfuncout))) 
                             + (QData)((IData)((1U 
                                                & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                [4U])))));
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name_raw;
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | (IData)((IData)((1U & VL_REDXOR_4((0xeULL 
                                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xdULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 1U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xbULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 2U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((7ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 3U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xe0ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 4U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xd0ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 5U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xb0ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 6U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0x70ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 7U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe00ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 8U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd00ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 9U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb00ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0xaU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x700ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0xbU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0xcU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0xdU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0xeU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x7000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0xfU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x10U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x11U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x12U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x13U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe00000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x14U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd00000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x15U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb00000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x16U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x700000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x19U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x1aU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x7000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x1bU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x1cU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x1fU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffeffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x20U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffdffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x21U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffffbffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x22U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffff7ffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x23U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffefffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x24U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffdfffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x25U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffffbfffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x26U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffff7fffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x27U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffeffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x28U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffdffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x29U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffffbffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x2aU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffff7ffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x2bU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffefffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x2cU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffdfffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x2dU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffffbfffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x2eU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffff7fffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x2fU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffeffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x30U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffdffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x31U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfffbffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x32U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfff7ffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x33U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffefffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x34U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffdfffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x35U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xffbfffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x36U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xff7fffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x37U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfeffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x38U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfdffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x39U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xfbffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x3aU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xf7ffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x3bU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xefffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x3cU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xdfffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x3dU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0xbfffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x3eU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value))))) 
              << 0x3fU));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name 
        = vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name_raw;
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | (IData)((IData)((1U & VL_REDXOR_4((0xeULL 
                                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xdULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 1U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xbULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 2U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((7ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 3U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xe0ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 4U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xd0ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 5U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xb0ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 6U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0x70ULL 
                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 7U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe00ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 8U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd00ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 9U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb00ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0xaU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x700ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0xbU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0xcU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0xdU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0xeU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x7000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0xfU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x10U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x11U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x12U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x13U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe00000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x14U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd00000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x15U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb00000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x16U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x700000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x19U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x1aU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x7000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x1bU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x1cU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x1fU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffeffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x20U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffdffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x21U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffffbffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x22U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffff7ffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x23U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffefffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x24U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffdfffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x25U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffffbfffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x26U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffff7fffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x27U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffeffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x28U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffdffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x29U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffffbffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x2aU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffff7ffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x2bU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffefffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x2cU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffdfffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x2dU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffffbfffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x2eU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffff7fffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x2fU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffeffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x30U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffdffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x31U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfffbffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x32U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfff7ffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x33U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffefffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x34U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffdfffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x35U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xffbfffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x36U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xff7fffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x37U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfeffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x38U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfdffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x39U));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xfbffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x3aU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xf7ffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x3bU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xefffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x3cU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xdfffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x3dU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0xbfffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x3eU));
    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000000ULL 
                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value))))) 
              << 0x3fU));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name 
        = vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height 
        = ((0x80U & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
            [0x19U]) ? ((IData)(1U) + (~ ([&]() {
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__92__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                 [0x19U] << 0x18U) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                   [0x18U] << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                   [0x17U] << 8U) | 
                                  vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                  [0x16U]));
                    }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__92__Vfuncout)))
            : ([&]() {
                vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__93__Vfuncout 
                    = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                         [0x19U] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x18U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                           [0x17U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                          [0x16U]));
            }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__93__Vfuncout));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_issue 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) 
           & ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase) 
                  | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_found))) 
              & ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_name 
                  == vlSelfRef.tb_media__DOT__name) 
                 & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan) 
                    < (IData)(vlSelfRef.tb_media__DOT__wav_count)))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done) 
           | (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error)));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
            ? VL_EXTEND_II(32,16, ([&]() {
                    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__21__Vfuncout 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                            [0x1bU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                           [0x1aU]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__21__Vfuncout)))
            : ((([&]() {
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__22__Vfuncout 
                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [0x15U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                               [0x14U]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__22__Vfuncout)) 
                << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__23__Vfuncout 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                            [0x1bU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                           [0x1aU]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__23__Vfuncout))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row)) 
           & (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
               >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad)) 
              & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
                 < (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w) 
                              + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad))))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width 
        = (0x7ffU & ([&]() {
                vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__94__Vfuncout 
                    = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                         [0x15U] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x14U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                           [0x13U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                          [0x12U]));
            }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__94__Vfuncout));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
        = (((QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem)) 
            << 1U) | (QData)((IData)((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                                      >> 0x1fU))));
    tb_media__DOT__dut__DOT__img_ready = (1U & (~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending) 
                                                   | ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                                      & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active)))));
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
           & (IData)(vlSelfRef.tb_media__DOT__sd_done));
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1 
        = ((IData)(vlSelfRef.tb_media__DOT__bv) & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active));
    vlSelfRef.tb_media__DOT__catalog_ready = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) 
                                              & ((~ (IData)(vlSelfRef.tb_media__DOT__platform_found)) 
                                                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__boot_finished)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
            ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q)
            : 0U);
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes 
        = (0x1fffU & ((0x20U == ([&]() {
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__95__Vfuncout 
                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                [0x1dU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                               [0x1cU]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__95__Vfuncout)))
                       ? VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width), 2U)
                       : ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width) 
                          + VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width), 1U))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take 
        = (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
           >= (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor)));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_ready));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_done = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2) 
                                                   & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_done = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                         & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_bv = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1) 
                                                 & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_bv = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                       & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready 
        = ((IData)(tb_media__DOT__dut__DOT__img_ready) 
           & (IData)(vlSelfRef.tb_media__DOT__catalog_ready));
    vlSelfRef.tb_media__DOT__image_error = ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_error))
                                             ? (((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb_media__DOT__count)))
                                                 ? 5U
                                                 : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error))
                                             : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_error));
    if (vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) {
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
            = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready)
                ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__img_start)
                : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__config_start));
        tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1 
            = (1U & (~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)));
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
            = vlSelfRef.tb_media__DOT__dut__DOT__cat_start;
        tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1 = 0U;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio_change 
        = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
           & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_request) 
              | ((IData)(vlSelfRef.tb_media__DOT__audio_select) 
                 & ((IData)(vlSelfRef.tb_media__DOT__audio_requested) 
                    < (IData)(vlSelfRef.tb_media__DOT__wav_count)))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_done));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done 
        = ((IData)(tb_media__DOT__dut__DOT__img_done) 
           & (IData)(vlSelfRef.tb_media__DOT__catalog_ready));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_bv));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid 
        = ((IData)(tb_media__DOT__dut__DOT__img_bv) 
           & (IData)(vlSelfRef.tb_media__DOT__catalog_ready));
    vlSelfRef.tb_media__DOT__dut__DOT__config_sd_ready 
        = ((IData)(tb_media__DOT__dut__DOT__img_ready) 
           & (IData)(tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done 
        = ((IData)(tb_media__DOT__dut__DOT__img_done) 
           & (IData)(tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__config_bv = 
        ((IData)(tb_media__DOT__dut__DOT__img_bv) & (IData)(tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1));
    vlSelfRef.tb_media__DOT__audio_flush = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio_change) 
                                            | ((5U 
                                                == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
                                               | (6U 
                                                  == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))));
    vlSelfRef.tb_media__DOT__pcm_valid = ((~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)) 
                                          & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__cancel 
        = ((IData)(vlSelfRef.tb_media__DOT__wav_done) 
           | ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
              | (IData)(vlSelfRef.tb_media__DOT__audio_flush)));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)) 
           & (0U == VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__cancel) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_ready 
        = (((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
            | ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
               | ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                  | ((7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                     | ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                        | ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                           & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                              | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))))))) 
           & ((1U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
              & (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_valid) 
           & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_ready));
}

VL_ATTR_COLD void Vtb_media___024root___eval_triggers__stl(Vtb_media___024root* vlSelf);

VL_ATTR_COLD bool Vtb_media___024root___eval_phase__stl(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_phase__stl\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_media___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_media___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__act(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___dump_triggers__act\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_media.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( (3'h5 == tb_media.dut.images.state))\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_media.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( tb_media.audio_flush)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( (~ tb_media.audio_flush))\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( ((4'h1 == tb_media.audio_selected) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( ((4'h0 == tb_media.audio_selected) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @( (4'h3 == tb_media.dut.audio.file_stream.state))\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__nba(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___dump_triggers__nba\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_media.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( (3'h5 == tb_media.dut.images.state))\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_media.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( tb_media.audio_flush)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( (~ tb_media.audio_flush))\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( ((4'h1 == tb_media.audio_selected) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( ((4'h0 == tb_media.audio_selected) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @( (4'h3 == tb_media.dut.audio.file_stream.state))\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_media___024root___ctor_var_reset(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___ctor_var_reset\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_media__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__select_request = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__requested = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__selected = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__paired = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__frame_swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__audio_select = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__audio_requested = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__audio_selected = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__audio_flush = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__browse_query = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__browse_tag = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__browse_name = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__browse_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__wav_count = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__catalog_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__name = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__wav_found = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__wav_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__pcm_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__image_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__pixels = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__wav_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__loops = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__total = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__pcm_pair = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__image_reads = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__audio_reads = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__load_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__read_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__bv = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__bi = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__bd = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__pcm_count = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__bursts = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__ack_delay = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__sd_pos = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__active_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__pcm_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3424; ++__Vi0) {
        vlSelf->tb_media__DOT__config_image[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__platform_found = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__platform_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__held = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__held_pcm = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__raw_catalog_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__config_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__config_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__config_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__config_sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__config_sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__config_bv = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__config_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__boot_finished = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__raw_load_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__raw_load_last = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__raw_load_addr = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(256, vlSelf->tb_media__DOT__dut__DOT__raw_load_data);
    vlSelf->tb_media__DOT__dut__DOT__fat16 = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__spc = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__fat_base = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__data_base = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__image_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__image_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__wav_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__cat_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__img_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__aud_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__aud_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__aud_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__aud_bv = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__cat_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__img_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__aud_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__cat_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__pair_found = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__pair_index = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__dut__DOT__pair_request = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__paired_index = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__dut__DOT__audio_change = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__images__sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__launch = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = VL_RAND_RESET_I(21);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes = VL_RAND_RESET_I(21);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_crc = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__pairing__DOT__last_swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__pairing__DOT__was_enabled = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__pairing__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__pairing__DOT__settle = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__after_read = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__cache_q = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__entry[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__clusters[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__sizes[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__names[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__signature = VL_RAND_RESET_I(16);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__partition_start = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__volume_base = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__root_base = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__root_sectors = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__root_index = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__fat_cached = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__fixed_root = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors = VL_RAND_RESET_I(16);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__fat_offset = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__next_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__regular_file = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__pair_name = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__image_name_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name_raw = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name_raw = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name = VL_RAND_RESET_Q(64);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__name_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__name_phase_q = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__image_cluster_q = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__image_bytes_q = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__wav_cluster_q = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__wav_bytes_q = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__pair_scan = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__pair_issue = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__lookup_wait = VL_RAND_RESET_I(3);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__stream_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__byte_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decode_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__stream_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decode_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__bytes_read = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__cancel = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 54; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = VL_RAND_RESET_I(12);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error = VL_RAND_RESET_I(12);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = VL_RAND_RESET_I(2);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding = VL_RAND_RESET_I(2);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left = VL_RAND_RESET_I(2);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel = VL_RAND_RESET_I(16);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q = VL_RAND_RESET_I(16);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width = VL_RAND_RESET_I(11);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes = VL_RAND_RESET_I(13);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end = VL_RAND_RESET_Q(33);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y = VL_RAND_RESET_I(10);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT____Vlvbound_h2fb5cc83__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = VL_RAND_RESET_Q(33);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial = VL_RAND_RESET_Q(33);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__byte_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decode_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__bytes_read = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__flush_wait = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__cancel = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = VL_RAND_RESET_I(2);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = VL_RAND_RESET_I(24);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length = VL_RAND_RESET_Q(33);
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end = VL_RAND_RESET_Q(33);
    vlSelf->tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__arbiter__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__arbiter__DOT__owner = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__arbiter__DOT__held_image = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__arbiter__DOT__held_audio = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__21__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__22__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__23__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__92__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__93__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__94__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__95__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__114__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__115__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__sd_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__active_lba = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__sd_pos = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__ack_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__load_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__pcm_count = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__held = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_name = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_scan = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__pair_found = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__wav_bytes = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__image_bytes = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__name = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__raw_catalog_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__tb_media__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__lookup_wait = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = VL_RAND_RESET_I(11);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__raw_load_addr = VL_RAND_RESET_I(18);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__raw_load_last = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__pixels = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__aud_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__aud_lba = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__read_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_media__DOT__image_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__audio_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__held_image = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0;
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    vlSelf->__VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = VL_RAND_RESET_I(9);
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0;
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    vlSelf->__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_media__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hfa9ac863__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h8eaeeabb__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_media__DOT__audio_flush__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h34e52112__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h19fb2b7d__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h18ab4be8__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb6f197cf__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hfe0cc398__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb1b7b8a8__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
