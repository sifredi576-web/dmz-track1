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
    vlSelfRef.__Vtrigprevexpr_hb6f197cf__1 = (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state));
    vlSelfRef.__Vtrigprevexpr_h34e52112__1 = (1U & 
                                              (~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)));
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
    CData/*0:0*/ tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1;
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1 = 0;
    CData/*0:0*/ tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2;
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2 = 0;
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
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__regular_file 
        = ((0xe5U != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
            [0U]) & ((0U == (0x18U & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                             [0xbU])) & (0xfU != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                         [0xbU])));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache_addr 
        = (0x1ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos) 
                     + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_data 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache
        [vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos];
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y 
        = (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache
        [vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos];
    if (vlSelfRef.tb_media__DOT__dut__DOT__fat16) {
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
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__63__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                 [7U] << 0x18U) | (
                                                   vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                   [5U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                  [4U]));
                    }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__63__Vfuncout))));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
        = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready)
            ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__img_start)
            : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_start));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_ready = 
        (1U & (~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                  | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
                     & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end 
        = (0x1ffffffffULL & (((QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset)) 
                              + VL_EXTEND_QI(33,32, 
                                             ([&]() {
                            vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__64__Vfuncout 
                                = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                     [7U] << 0x18U) 
                                    | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                       [6U] << 0x10U)) 
                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                       [5U] << 8U) 
                                      | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                      [4U]));
                        }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__64__Vfuncout))) 
                             + (QData)((IData)((1U 
                                                & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                [4U])))));
    vlSelfRef.tb_media__DOT__image_error = ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_error))
                                             ? (((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb_media__DOT__count)))
                                                 ? 5U
                                                 : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error))
                                             : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_error));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height 
        = ((0x80U & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
            [0x19U]) ? ((IData)(1U) + (~ ([&]() {
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__43__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                 [0x19U] << 0x18U) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                   [0x18U] << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                   [0x17U] << 8U) | 
                                  vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                  [0x16U]));
                    }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__43__Vfuncout)))
            : ([&]() {
                vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__44__Vfuncout 
                    = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                         [0x19U] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x18U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                           [0x17U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                          [0x16U]));
            }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__44__Vfuncout));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done) 
           | (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error)));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
            ? VL_EXTEND_II(32,16, ([&]() {
                    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__9__Vfuncout 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                            [0x1bU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                           [0x1aU]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__9__Vfuncout)))
            : ((([&]() {
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__10__Vfuncout 
                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [0x15U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                               [0x14U]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__10__Vfuncout)) 
                << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__11__Vfuncout 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                            [0x1bU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                           [0x1aU]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__11__Vfuncout))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row)) 
           & (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
               >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad)) 
              & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
                 < (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w) 
                              + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad))))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width 
        = (0x7ffU & ([&]() {
                vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__45__Vfuncout 
                    = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                         [0x15U] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x14U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                           [0x13U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                          [0x12U]));
            }(), vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__45__Vfuncout));
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
    vlSelfRef.tb_media__DOT__dut__DOT__audio_change 
        = ((IData)(vlSelfRef.tb_media__DOT__audio_select) 
           & ((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
              & ((IData)(vlSelfRef.tb_media__DOT__audio_requested) 
                 < (IData)(vlSelfRef.tb_media__DOT__wav_count))));
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
                        vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__46__Vfuncout 
                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                [0x1dU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                               [0x1cU]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__46__Vfuncout)))
                       ? VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width), 2U)
                       : ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width) 
                          + VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width), 1U))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take 
        = (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
           >= (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor)));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_ready));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready 
        = ((IData)(tb_media__DOT__dut__DOT__img_ready) 
           & (IData)(vlSelfRef.tb_media__DOT__catalog_ready));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_done = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2) 
                                                   & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_done = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                         & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_bv = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1) 
                                                 & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_bv = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                       & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1));
    vlSelfRef.tb_media__DOT__audio_flush = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio_change) 
                                            | ((5U 
                                                == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
                                               | (6U 
                                                  == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_done));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done 
        = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
           & (IData)(tb_media__DOT__dut__DOT__img_done));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_bv));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid 
        = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
           & (IData)(tb_media__DOT__dut__DOT__img_bv));
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
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( (4'h3 == tb_media.dut.audio.file_stream.state))\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( (~ tb_media.audio_flush))\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( (4'h3 == tb_media.dut.audio.file_stream.state))\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( (~ tb_media.audio_flush))\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))\n");
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
    vlSelf->tb_media__DOT__last = VL_RAND_RESET_I(1);
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
    vlSelf->tb_media__DOT__addr = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(256, vlSelf->tb_media__DOT__data);
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
    vlSelf->tb_media__DOT__held = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__held_pcm = VL_RAND_RESET_I(32);
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
    vlSelf->tb_media__DOT__dut__DOT__audio_change = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__images__sd_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__after_read = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
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
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__cache_addr = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__fat_offset = VL_RAND_RESET_I(9);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__next_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__regular_file = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__stream_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__byte_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decode_done = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__byte_data = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__stream_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__decode_error = VL_RAND_RESET_I(8);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__bytes_read = VL_RAND_RESET_I(32);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__cancel = VL_RAND_RESET_I(1);
    vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache[__Vi0] = VL_RAND_RESET_I(8);
    }
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
    vlSelf->tb_media__DOT__dut__DOT__audio__DOT__byte_data = VL_RAND_RESET_I(8);
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
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__9__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__10__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e16__11__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__43__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__44__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__45__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__46__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__63__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__64__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_media__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hfa9ac863__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h8eaeeabb__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb6f197cf__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h34e52112__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hfe0cc398__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hb1b7b8a8__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
