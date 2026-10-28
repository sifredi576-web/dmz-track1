// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_media.h for the primary calling header

#include "Vtb_media__pch.h"
#include "Vtb_media__Syms.h"
#include "Vtb_media___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__0(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtask_tb_media__DOT__choose__7__slot;
    __Vtask_tb_media__DOT__choose__7__slot = 0;
    CData/*4:0*/ __Vtask_tb_media__DOT__choose__8__slot;
    __Vtask_tb_media__DOT__choose__8__slot = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/media\tb_media.sv", 
                                         61);
    vlSelfRef.tb_media__DOT__reset = 0U;
    while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_media.dut.images.state))", 
                                                             "sim/media\tb_media.sv", 
                                                             61);
    }
    if (VL_UNLIKELY((((((2U != (IData)(vlSelfRef.tb_media__DOT__count)) 
                        | ((IData)(vlSelfRef.tb_media__DOT__wav_found) 
                           == VL_TESTPLUSARGS_I(std::string{"nowav"}))) 
                       | ((! VL_TESTPLUSARGS_I(std::string{"nowav"})) 
                          & (0x402cU != vlSelfRef.tb_media__DOT__wav_bytes))) 
                      | (0x4b00U != vlSelfRef.tb_media__DOT__bursts))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:62: Assertion failed in %Ntb_media: catalog/image count=%0# wav=%0# bursts=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     6,(IData)(vlSelfRef.tb_media__DOT__count),
                     1,vlSelfRef.tb_media__DOT__wav_found,
                     32,vlSelfRef.tb_media__DOT__bursts);
        VL_STOP_MT("sim/media\\tb_media.sv", 62, "", false);
    }
    __Vtask_tb_media__DOT__choose__7__slot = 1U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         58);
    vlSelfRef.tb_media__DOT__bursts = 0U;
    vlSelfRef.tb_media__DOT__requested = __Vtask_tb_media__DOT__choose__7__slot;
    vlSelfRef.tb_media__DOT__select_request = 1U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         58);
    vlSelfRef.tb_media__DOT__select_request = 0U;
    while ((1U & (~ ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                     & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h169934e5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))", 
                                                             "sim/media\tb_media.sv", 
                                                             58);
    }
    while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_media.dut.images.state))", 
                                                             "sim/media\tb_media.sv", 
                                                             58);
    }
    if (VL_UNLIKELY((((0x4b00U != vlSelfRef.tb_media__DOT__bursts) 
                      | (0x4b000U != vlSelfRef.tb_media__DOT__pixels))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:63: Assertion failed in %Ntb_media: second image frame incomplete\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_media.sv", 63, "", false);
    }
    __Vtask_tb_media__DOT__choose__8__slot = 0U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         58);
    vlSelfRef.tb_media__DOT__bursts = 0U;
    vlSelfRef.tb_media__DOT__requested = __Vtask_tb_media__DOT__choose__8__slot;
    vlSelfRef.tb_media__DOT__select_request = 1U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         58);
    vlSelfRef.tb_media__DOT__select_request = 0U;
    while ((1U & (~ ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                     & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h169934e5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))", 
                                                             "sim/media\tb_media.sv", 
                                                             58);
    }
    while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_media.dut.images.state))", 
                                                             "sim/media\tb_media.sv", 
                                                             58);
    }
    if (VL_UNLIKELY((((0x4b00U != vlSelfRef.tb_media__DOT__bursts) 
                      | (0U == vlSelfRef.tb_media__DOT__image_reads))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:64: Assertion failed in %Ntb_media: image reload progress\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_media.sv", 64, "", false);
    }
    __Vtemp_1[0U] = 0x616c6964U;
    __Vtemp_1[1U] = 0x76696e76U;
    __Vtemp_1[2U] = 0x7761U;
    if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_1))) {
        if (VL_UNLIKELY((((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
                          | (0U != vlSelfRef.tb_media__DOT__pcm_count))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:65: Assertion failed in %Ntb_media: bad WAV must stop without harming gallery\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 65, "", false);
        }
    } else {
        __Vtemp_2[0U] = 0x6861696eU;
        __Vtemp_2[1U] = 0x6f727463U;
        __Vtemp_2[2U] = 0x7368U;
        if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_2))) {
            if (VL_UNLIKELY((((0x87U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
                              | VL_LTS_III(32, 0x3f5U, vlSelfRef.tb_media__DOT__pcm_count))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:66: Assertion failed in %Ntb_media: short FAT chain must stop audio\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/media\\tb_media.sv", 66, "", false);
            }
        } else if (VL_TESTPLUSARGS_I(std::string{"nowav"})) {
            if (VL_UNLIKELY((((0U != vlSelfRef.tb_media__DOT__audio_reads) 
                              | (0U != vlSelfRef.tb_media__DOT__pcm_count))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:67: Assertion failed in %Ntb_media: missing WAV must not read audio\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/media\\tb_media.sv", 67, "", false);
            }
        } else if (VL_UNLIKELY(((((2U > vlSelfRef.tb_media__DOT__loops) 
                                  | (0x1000U != vlSelfRef.tb_media__DOT__total)) 
                                 | (0U == vlSelfRef.tb_media__DOT__audio_reads))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:68: Assertion failed in %Ntb_media: loop/concurrent progress\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 68, "", false);
        }
    }
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"multiwav"})))) {
        if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_media__DOT__wav_count))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:70: Assertion failed in %Ntb_media: WAV index count\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 70, "", false);
        }
        vlSelfRef.tb_media__DOT__browse_query = 0x21U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             71);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             71);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             71);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             71);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             71);
        if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_media__DOT__browse_valid)) 
                                 | (0x21U != (IData)(vlSelfRef.tb_media__DOT__browse_tag))) 
                                | (0x202020324f4d4544ULL 
                                   != vlSelfRef.tb_media__DOT__browse_name)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:72: Assertion failed in %Ntb_media: WAV metadata query\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 72, "", false);
        }
        while ((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
            co_await vlSelfRef.__VtrigSched_h2ec6dfc1__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (4'h3 == tb_media.dut.audio.file_stream.state))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 74);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             74);
        vlSelfRef.tb_media__DOT__audio_requested = 1U;
        vlSelfRef.tb_media__DOT__audio_select = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             75);
        vlSelfRef.tb_media__DOT__audio_select = 0U;
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 75);
        }
        while ((1U & (~ ((1U <= vlSelfRef.tb_media__DOT__loops) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h69bb0bc8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 75);
        }
        vlSelfRef.tb_media__DOT__browse_query = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             76);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             76);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             76);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             76);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             76);
        if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_media__DOT__browse_valid)) 
                                 | (1U != (IData)(vlSelfRef.tb_media__DOT__browse_tag))) 
                                | (0x2020202020424349ULL 
                                   != vlSelfRef.tb_media__DOT__browse_name)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:77: Assertion failed in %Ntb_media: BMP metadata query\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 77, "", false);
        }
        while ((1U & (~ ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                         & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))))))) {
            co_await vlSelfRef.__VtrigSched_h357ffed8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 80);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        vlSelfRef.tb_media__DOT__audio_requested = 0U;
        vlSelfRef.tb_media__DOT__audio_select = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             81);
        vlSelfRef.tb_media__DOT__audio_select = 0U;
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 81);
        }
        while ((1U & (~ ((1U <= vlSelfRef.tb_media__DOT__loops) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h69bb0bc8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 81);
        }
        while ((1U & (~ ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                         & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))))))) {
            co_await vlSelfRef.__VtrigSched_h357ffed8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 80);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        vlSelfRef.tb_media__DOT__audio_requested = 0U;
        vlSelfRef.tb_media__DOT__audio_select = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             81);
        vlSelfRef.tb_media__DOT__audio_select = 0U;
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 81);
        }
        while ((1U & (~ ((1U <= vlSelfRef.tb_media__DOT__loops) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h69bb0bc8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 81);
        }
        VL_WRITEF_NX("PASS multi-WAV metadata, exact new-track samples, outstanding SD cancellation, backpressure switching and same-file restart\n",0);
    }
    VL_WRITEF_NX("PASS shared FAT/SD: catalog BMP+WAV, 3 complete images/921600 pixels, fragmented WAV loops and exact stereo samples, concurrent arbitration/backpressure\n",0);
    VL_FINISH_MT("sim/media\\tb_media.sv", 85, "");
}

VL_INLINE_OPT VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__1(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xe8d4a51000ULL, 
                                         nullptr, "sim/media\tb_media.sv", 
                                         87);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:87: Assertion failed in %Ntb_media: media timeout image=%0# wav=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 8,((IData)(vlSelfRef.tb_media__DOT__catalog_ready)
                     ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)
                     : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)),
                 8,(IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state));
    VL_STOP_MT("sim/media\\tb_media.sv", 87, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__act(Vtb_media___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_media___024root___eval_triggers__act(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_triggers__act\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_hfa9ac863__0;
    __Vtrigprevexpr_hfa9ac863__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h8eaeeabb__0;
    __Vtrigprevexpr_h8eaeeabb__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb6f197cf__0;
    __Vtrigprevexpr_hb6f197cf__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h34e52112__0;
    __Vtrigprevexpr_h34e52112__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hfe0cc398__0;
    __Vtrigprevexpr_hfe0cc398__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb1b7b8a8__0;
    __Vtrigprevexpr_hb1b7b8a8__0 = 0;
    // Body
    __Vtrigprevexpr_hfa9ac863__0 = (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state));
    __Vtrigprevexpr_h8eaeeabb__0 = ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                                    & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)));
    __Vtrigprevexpr_hb6f197cf__0 = (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state));
    __Vtrigprevexpr_h34e52112__0 = (1U & (~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)));
    __Vtrigprevexpr_hfe0cc398__0 = ((1U <= vlSelfRef.tb_media__DOT__loops) 
                                    & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count));
    __Vtrigprevexpr_hb1b7b8a8__0 = ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                                    & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_media__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(__Vtrigprevexpr_hfa9ac863__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hfa9ac863__1)));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_media__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(__Vtrigprevexpr_h8eaeeabb__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h8eaeeabb__1)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(__Vtrigprevexpr_hb6f197cf__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hb6f197cf__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(__Vtrigprevexpr_h34e52112__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h34e52112__1)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(__Vtrigprevexpr_hfe0cc398__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hfe0cc398__1)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(__Vtrigprevexpr_hb1b7b8a8__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hb1b7b8a8__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__clk__0 
        = vlSelfRef.tb_media__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_hfa9ac863__1 = __Vtrigprevexpr_hfa9ac863__0;
    vlSelfRef.__Vtrigprevexpr_h8eaeeabb__1 = __Vtrigprevexpr_h8eaeeabb__0;
    vlSelfRef.__Vtrigprevexpr_hb6f197cf__1 = __Vtrigprevexpr_hb6f197cf__0;
    vlSelfRef.__Vtrigprevexpr_h34e52112__1 = __Vtrigprevexpr_h34e52112__0;
    vlSelfRef.__Vtrigprevexpr_hfe0cc398__1 = __Vtrigprevexpr_hfe0cc398__0;
    vlSelfRef.__Vtrigprevexpr_hb1b7b8a8__1 = __Vtrigprevexpr_hb1b7b8a8__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_media___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<8>/*255:0*/ Vtb_media__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_media___024root___nba_sequent__TOP__0(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___nba_sequent__TOP__0\n"); );
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
    CData/*7:0*/ __Vfunc_tb_media__DOT__disk__0__Vfuncout;
    __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__l;
    __Vfunc_tb_media__DOT__disk__0__l = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__i;
    __Vfunc_tb_media__DOT__disk__0__i = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__e;
    __Vfunc_tb_media__DOT__disk__0__e = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__slot;
    __Vfunc_tb_media__DOT__disk__0__slot = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__j;
    __Vfunc_tb_media__DOT__disk__0__j = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__shifted;
    __Vfunc_tb_media__DOT__disk__0__shifted = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__c;
    __Vfunc_tb_media__DOT__disk__0__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__ofs;
    __Vfunc_tb_media__DOT__disk__0__ofs = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__root_lba;
    __Vfunc_tb_media__DOT__disk__0__root_lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__base_lba;
    __Vfunc_tb_media__DOT__disk__0__base_lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__part;
    __Vfunc_tb_media__DOT__disk__0__part = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__k;
    __Vfunc_tb_media__DOT__disk__0__k = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__entry_bytes;
    __Vfunc_tb_media__DOT__disk__0__entry_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__second_start;
    __Vfunc_tb_media__DOT__disk__0__second_start = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__first_end;
    __Vfunc_tb_media__DOT__disk__0__first_end = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__second_end;
    __Vfunc_tb_media__DOT__disk__0__second_end = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__wav_start;
    __Vfunc_tb_media__DOT__disk__0__wav_start = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__second_delta;
    __Vfunc_tb_media__DOT__disk__0__second_delta = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__wav_delta;
    __Vfunc_tb_media__DOT__disk__0__wav_delta = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__bmp_bytes;
    __Vfunc_tb_media__DOT__disk__0__bmp_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__disk__0__value;
    __Vfunc_tb_media__DOT__disk__0__value = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout;
    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__l;
    __Vfunc_tb_media__DOT__basic_disk__1__l = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__i;
    __Vfunc_tb_media__DOT__basic_disk__1__i = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__c;
    __Vfunc_tb_media__DOT__basic_disk__1__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__entry;
    __Vfunc_tb_media__DOT__basic_disk__1__entry = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__ofs;
    __Vfunc_tb_media__DOT__basic_disk__1__ofs = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__pix;
    __Vfunc_tb_media__DOT__basic_disk__1__pix = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__x;
    __Vfunc_tb_media__DOT__basic_disk__1__x = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__y;
    __Vfunc_tb_media__DOT__basic_disk__1__y = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__channel;
    __Vfunc_tb_media__DOT__basic_disk__1__channel = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__root_lba;
    __Vfunc_tb_media__DOT__basic_disk__1__root_lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__file_lba;
    __Vfunc_tb_media__DOT__basic_disk__1__file_lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__fat_end;
    __Vfunc_tb_media__DOT__basic_disk__1__fat_end = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__file_bytes;
    __Vfunc_tb_media__DOT__basic_disk__1__file_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__1__value;
    __Vfunc_tb_media__DOT__basic_disk__1__value = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__1__f16;
    __Vfunc_tb_media__DOT__basic_disk__1__f16 = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__1__mbr;
    __Vfunc_tb_media__DOT__basic_disk__1__mbr = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__1__rgba;
    __Vfunc_tb_media__DOT__basic_disk__1__rgba = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__1__top;
    __Vfunc_tb_media__DOT__basic_disk__1__top = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout;
    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__l;
    __Vfunc_tb_media__DOT__basic_disk__2__l = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__i;
    __Vfunc_tb_media__DOT__basic_disk__2__i = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__c;
    __Vfunc_tb_media__DOT__basic_disk__2__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__entry;
    __Vfunc_tb_media__DOT__basic_disk__2__entry = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__ofs;
    __Vfunc_tb_media__DOT__basic_disk__2__ofs = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__pix;
    __Vfunc_tb_media__DOT__basic_disk__2__pix = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__x;
    __Vfunc_tb_media__DOT__basic_disk__2__x = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__y;
    __Vfunc_tb_media__DOT__basic_disk__2__y = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__channel;
    __Vfunc_tb_media__DOT__basic_disk__2__channel = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__root_lba;
    __Vfunc_tb_media__DOT__basic_disk__2__root_lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__file_lba;
    __Vfunc_tb_media__DOT__basic_disk__2__file_lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__fat_end;
    __Vfunc_tb_media__DOT__basic_disk__2__fat_end = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__file_bytes;
    __Vfunc_tb_media__DOT__basic_disk__2__file_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__basic_disk__2__value;
    __Vfunc_tb_media__DOT__basic_disk__2__value = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__2__f16;
    __Vfunc_tb_media__DOT__basic_disk__2__f16 = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__2__mbr;
    __Vfunc_tb_media__DOT__basic_disk__2__mbr = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__2__rgba;
    __Vfunc_tb_media__DOT__basic_disk__2__rgba = 0;
    CData/*0:0*/ __Vfunc_tb_media__DOT__basic_disk__2__top;
    __Vfunc_tb_media__DOT__basic_disk__2__top = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__audio_expected__3__Vfuncout;
    __Vfunc_tb_media__DOT__audio_expected__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__audio_expected__3__index;
    __Vfunc_tb_media__DOT__audio_expected__3__index = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__audio_expected__3__left;
    __Vfunc_tb_media__DOT__audio_expected__3__left = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__image_expected__4__Vfuncout;
    __Vfunc_tb_media__DOT__image_expected__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__image_expected__4__a;
    __Vfunc_tb_media__DOT__image_expected__4__a = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__image_expected__4__x;
    __Vfunc_tb_media__DOT__image_expected__4__x = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__image_expected__4__y;
    __Vfunc_tb_media__DOT__image_expected__4__y = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__image_expected__4__r;
    __Vfunc_tb_media__DOT__image_expected__4__r = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__image_expected__4__g;
    __Vfunc_tb_media__DOT__image_expected__4__g = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__image_expected__4__b;
    __Vfunc_tb_media__DOT__image_expected__4__b = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__image_expected__5__Vfuncout;
    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__image_expected__5__a;
    __Vfunc_tb_media__DOT__image_expected__5__a = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__image_expected__5__x;
    __Vfunc_tb_media__DOT__image_expected__5__x = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__image_expected__5__y;
    __Vfunc_tb_media__DOT__image_expected__5__y = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__image_expected__5__r;
    __Vfunc_tb_media__DOT__image_expected__5__r = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__image_expected__5__g;
    __Vfunc_tb_media__DOT__image_expected__5__g = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__image_expected__5__b;
    __Vfunc_tb_media__DOT__image_expected__5__b = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__audio_expected__6__Vfuncout;
    __Vfunc_tb_media__DOT__audio_expected__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__audio_expected__6__index;
    __Vfunc_tb_media__DOT__audio_expected__6__index = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__audio_expected__6__left;
    __Vfunc_tb_media__DOT__audio_expected__6__left = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__13__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__14__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__14__lba = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__15__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__16__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__17__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__17__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__18__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__18__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__19__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__19__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__20__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__20__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__21__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__22__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__23__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__23__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__24__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__24__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__25__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__25__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__26__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__27__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__27__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__28__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__28__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__29__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__29__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__30__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__31__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__31__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__32__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__32__lba = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__33__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__33__lba = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__37__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__37__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__41__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__41__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__42__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__42__lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__47__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__48__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__49__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__49__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__50__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__51__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__52__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__53__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__54__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__54__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__55__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__56__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__57__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__58__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__59__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__60__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__61__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__62__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__65__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__66__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__67__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__68__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__69__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__70__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__71__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__72__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__73__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__74__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__74__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__75__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__76__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__77__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__77__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__78__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__78__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__79__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__79__Vfuncout = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__cycle;
    __Vdly__tb_media__DOT__cycle = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__sd_done;
    __Vdly__tb_media__DOT__sd_done = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__ack;
    __Vdly__tb_media__DOT__ack = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__active_lba;
    __Vdly__tb_media__DOT__active_lba = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__sd_pos;
    __Vdly__tb_media__DOT__sd_pos = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__reading;
    __Vdly__tb_media__DOT__reading = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__sd_ready;
    __Vdly__tb_media__DOT__sd_ready = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__ack_delay;
    __Vdly__tb_media__DOT__ack_delay = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__load_ready;
    __Vdly__tb_media__DOT__load_ready = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__pcm_count;
    __Vdly__tb_media__DOT__pcm_count = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__held;
    __Vdly__tb_media__DOT__held = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__wav_bytes;
    __Vdly__tb_media__DOT__wav_bytes = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__image_bytes;
    __Vdly__tb_media__DOT__dut__DOT__image_bytes = 0;
    SData/*15:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start = 0;
    CData/*5:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__cat_lba;
    __Vdly__tb_media__DOT__dut__DOT__cat_lba = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__catalog_ready;
    __Vdly__tb_media__DOT__catalog_ready = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__fat16;
    __Vdly__tb_media__DOT__dut__DOT__fat16 = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__spc;
    __Vdly__tb_media__DOT__dut__DOT__spc = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__fat_base;
    __Vdly__tb_media__DOT__dut__DOT__fat_base = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__data_base;
    __Vdly__tb_media__DOT__dut__DOT__data_base = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0;
    SData/*15:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors = 0;
    SData/*8:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0;
    CData/*4:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0;
    CData/*5:0*/ __Vdly__tb_media__DOT__count;
    __Vdly__tb_media__DOT__count = 0;
    CData/*4:0*/ __Vdly__tb_media__DOT__wav_count;
    __Vdly__tb_media__DOT__wav_count = 0;
    CData/*2:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__img_start;
    __Vdly__tb_media__DOT__dut__DOT__img_start = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__img_lba;
    __Vdly__tb_media__DOT__dut__DOT__img_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read = 0;
    SData/*8:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0;
    CData/*4:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0;
    CData/*4:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset = 0;
    SData/*10:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width = 0;
    SData/*10:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height = 0;
    SData/*10:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0;
    SData/*10:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y = 0;
    SData/*10:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y = 0;
    SData/*10:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0;
    SData/*9:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0;
    SData/*9:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0;
    SData/*9:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad = 0;
    SData/*9:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0;
    SData/*9:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0;
    SData/*9:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows = 0;
    SData/*11:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0;
    SData/*11:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error = 0;
    CData/*1:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0;
    CData/*1:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding = 0;
    CData/*1:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0;
    SData/*15:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel = 0;
    IData/*17:0*/ __Vdly__tb_media__DOT__addr;
    __Vdly__tb_media__DOT__addr = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__last;
    __Vdly__tb_media__DOT__last = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__pixels;
    __Vdly__tb_media__DOT__pixels = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor = 0;
    CData/*5:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__loops;
    __Vdly__tb_media__DOT__loops = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__aud_start;
    __Vdly__tb_media__DOT__dut__DOT__aud_start = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__aud_lba;
    __Vdly__tb_media__DOT__dut__DOT__aud_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read = 0;
    SData/*8:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0;
    CData/*1:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0;
    IData/*23:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active;
    __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__read_start;
    __Vdly__tb_media__DOT__read_start = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__image_reads;
    __Vdly__tb_media__DOT__image_reads = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__audio_reads;
    __Vdly__tb_media__DOT__audio_reads = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__header__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__header__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v1;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v1;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v2;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v2 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v2;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v3;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v3 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v3;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v4;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v4 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v4;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v5;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v5 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v5;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v6;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v6 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v6;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v7;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v7 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v7;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7;
    __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7;
    __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
    __Vdly__tb_media__DOT__read_start = vlSelfRef.tb_media__DOT__read_start;
    __Vdly__tb_media__DOT__image_reads = vlSelfRef.tb_media__DOT__image_reads;
    __Vdly__tb_media__DOT__audio_reads = vlSelfRef.tb_media__DOT__audio_reads;
    __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    __Vdly__tb_media__DOT__addr = vlSelfRef.tb_media__DOT__addr;
    __Vdly__tb_media__DOT__last = vlSelfRef.tb_media__DOT__last;
    __Vdly__tb_media__DOT__pixels = vlSelfRef.tb_media__DOT__pixels;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state;
    __Vdly__tb_media__DOT__ack = vlSelfRef.tb_media__DOT__ack;
    __Vdly__tb_media__DOT__active_lba = vlSelfRef.tb_media__DOT__active_lba;
    __Vdly__tb_media__DOT__sd_pos = vlSelfRef.tb_media__DOT__sd_pos;
    __Vdly__tb_media__DOT__reading = vlSelfRef.tb_media__DOT__reading;
    __Vdly__tb_media__DOT__sd_ready = vlSelfRef.tb_media__DOT__sd_ready;
    __Vdly__tb_media__DOT__ack_delay = vlSelfRef.tb_media__DOT__ack_delay;
    __Vdly__tb_media__DOT__load_ready = vlSelfRef.tb_media__DOT__load_ready;
    __Vdly__tb_media__DOT__pcm_count = vlSelfRef.tb_media__DOT__pcm_count;
    __Vdly__tb_media__DOT__held = vlSelfRef.tb_media__DOT__held;
    __Vdly__tb_media__DOT__cycle = vlSelfRef.tb_media__DOT__cycle;
    __Vdly__tb_media__DOT__sd_done = vlSelfRef.tb_media__DOT__sd_done;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0U;
    __Vdly__tb_media__DOT__wav_bytes = vlSelfRef.tb_media__DOT__wav_bytes;
    __Vdly__tb_media__DOT__dut__DOT__image_bytes = vlSelfRef.tb_media__DOT__dut__DOT__image_bytes;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__signature;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__after_read;
    __Vdly__tb_media__DOT__dut__DOT__cat_lba = vlSelfRef.tb_media__DOT__dut__DOT__cat_lba;
    __Vdly__tb_media__DOT__dut__DOT__spc = vlSelfRef.tb_media__DOT__dut__DOT__spc;
    __Vdly__tb_media__DOT__dut__DOT__fat_base = vlSelfRef.tb_media__DOT__dut__DOT__fat_base;
    __Vdly__tb_media__DOT__dut__DOT__data_base = vlSelfRef.tb_media__DOT__dut__DOT__data_base;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_base;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_sectors;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fixed_root;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    __Vdly__tb_media__DOT__count = vlSelfRef.tb_media__DOT__count;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__fat16 = vlSelfRef.tb_media__DOT__dut__DOT__fat16;
    __Vdly__tb_media__DOT__wav_count = vlSelfRef.tb_media__DOT__wav_count;
    __Vdly__tb_media__DOT__catalog_ready = vlSelfRef.tb_media__DOT__catalog_ready;
    __Vdly__tb_media__DOT__dut__DOT__img_lba = vlSelfRef.tb_media__DOT__dut__DOT__img_lba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__img_start = vlSelfRef.tb_media__DOT__dut__DOT__img_start;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__aud_start = vlSelfRef.tb_media__DOT__dut__DOT__aud_start;
    __Vdly__tb_media__DOT__dut__DOT__aud_lba = vlSelfRef.tb_media__DOT__dut__DOT__aud_lba;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
    __Vdly__tb_media__DOT__loops = vlSelfRef.tb_media__DOT__loops;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state;
    if ((((((((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
              & (3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) 
             & (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
            & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid)) 
           & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
              >= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset)) 
          & (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) 
         & (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel)))) {
        __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 
            = ((0xf800U & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache
                           [vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos] 
                           << 8U)) | ((0x7e0U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green) 
                                                 << 3U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue) 
                                                  >> 3U))));
        __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 
            = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
        __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 1U;
    }
    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid) {
        __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        __VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 1U;
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset))) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_media__DOT__bd));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(2U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(3U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_bv) {
        __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 1U;
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset))) {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_media__DOT__bd));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(2U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(3U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x18U));
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache
        [vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x];
    if (__VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache[__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0;
    }
    if (vlSelfRef.tb_media__DOT__reset) {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__img_start = 0U;
        __Vdly__tb_media__DOT__dut__DOT__img_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
        vlSelfRef.tb_media__DOT__dut__DOT__img_start 
            = __Vdly__tb_media__DOT__dut__DOT__img_start;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__aud_start = 0U;
        __Vdly__tb_media__DOT__dut__DOT__aud_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__bytes_read 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 0U;
        __Vdly__tb_media__DOT__loops = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
    } else {
        __Vdly__tb_media__DOT__dut__DOT__img_start = 0U;
        if (((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__image_cluster;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                = vlSelfRef.tb_media__DOT__dut__DOT__image_bytes;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_media__DOT__dut__DOT__image_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_media__DOT__dut__DOT__image_bytes))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 7U;
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel) 
                    & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__img_start))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            }
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                            || (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                           || (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc)));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready) {
                        __Vdly__tb_media__DOT__dut__DOT__img_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index));
                        __Vdly__tb_media__DOT__dut__DOT__img_start = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid) 
                         & ((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                            & ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                               | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))))) {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read);
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining)) {
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos))) {
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index)));
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 2U;
                            } else {
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 5U;
                            }
                        } else {
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready) {
                        __Vdly__tb_media__DOT__dut__DOT__img_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster, 7U)));
                        __Vdly__tb_media__DOT__dut__DOT__img_start = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster)))) {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 7U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0xffU;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
        }
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
        vlSelfRef.tb_media__DOT__dut__DOT__img_start 
            = __Vdly__tb_media__DOT__dut__DOT__img_start;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
        __Vdly__tb_media__DOT__dut__DOT__aud_start = 0U;
        if (((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                = vlSelfRef.tb_media__DOT__wav_bytes;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0U;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_media__DOT__wav_bytes))) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 7U;
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__cancel) 
                    & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__aud_start))) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__aud_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            }
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                            || (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                           || (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc)));
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_ready) {
                        __Vdly__tb_media__DOT__dut__DOT__aud_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index));
                        __Vdly__tb_media__DOT__dut__DOT__aud_start = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_valid) 
                         & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_ready))) {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__bytes_read);
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining)) {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos))) {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index)));
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 2U;
                            } else {
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 5U;
                            }
                        } else {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_ready) {
                        __Vdly__tb_media__DOT__dut__DOT__aud_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster, 7U)));
                        __Vdly__tb_media__DOT__dut__DOT__aud_start = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster)))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 7U;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0xffU;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
        }
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__bytes_read 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
            = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
        if (vlSelfRef.tb_media__DOT__dut__DOT__audio_change) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 5U;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
            __Vdly__tb_media__DOT__loops = 0U;
        } else if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if (((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
                 & (IData)(vlSelfRef.tb_media__DOT__wav_found))) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error))) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 4U;
            } else if (vlSelfRef.tb_media__DOT__wav_done) {
                __Vdly__tb_media__DOT__loops = ((IData)(1U) 
                                                + vlSelfRef.tb_media__DOT__loops);
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 1U;
            }
        } else if ((4U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 6U;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
                if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 0U;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait)));
                }
            }
        }
    }
    vlSelfRef.tb_media__DOT__loops = __Vdly__tb_media__DOT__loops;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait;
    if (__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache[__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_media__DOT__browse_tag = vlSelfRef.tb_media__DOT__browse_query;
    vlSelfRef.tb_media__DOT__browse_name = ((0x20U 
                                             & (IData)(vlSelfRef.tb_media__DOT__browse_query))
                                             ? vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                                            [(0xfU 
                                              & (IData)(vlSelfRef.tb_media__DOT__browse_query))]
                                             : vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                                            [(0x1fU 
                                              & (IData)(vlSelfRef.tb_media__DOT__browse_query))]);
    vlSelfRef.tb_media__DOT__browse_valid = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
                                             & ((0x20U 
                                                 & (IData)(vlSelfRef.tb_media__DOT__browse_query))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(vlSelfRef.tb_media__DOT__browse_query)) 
                                                 < (IData)(vlSelfRef.tb_media__DOT__wav_count))
                                                 : 
                                                ((0x1fU 
                                                  & (IData)(vlSelfRef.tb_media__DOT__browse_query)) 
                                                 < (IData)(vlSelfRef.tb_media__DOT__count))));
    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid) {
        __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 1U;
        if ((0x40U > (IData)(vlSelfRef.tb_media__DOT__bi))) {
            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 
                = vlSelfRef.tb_media__DOT__bd;
            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 
                = (0x3fU & (IData)(vlSelfRef.tb_media__DOT__bi));
            __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 = 1U;
        }
        if ((0x1feU == (IData)(vlSelfRef.tb_media__DOT__bi))) {
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature 
                = ((0xff00U & (IData)(__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature)) 
                   | (IData)(vlSelfRef.tb_media__DOT__bd));
        }
        if (((0x1c6U <= (IData)(vlSelfRef.tb_media__DOT__bi)) 
             & (0x1c9U >= (IData)(vlSelfRef.tb_media__DOT__bi)))) {
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_media__DOT__bi) 
                                                          - (IData)(0x1c6U)), 3U)))) 
                    & __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start) 
                   | (0xffffffffULL & ((IData)(vlSelfRef.tb_media__DOT__bd) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_media__DOT__bi) 
                                                          - (IData)(0x1c6U)), 3U)))));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_offset))) {
            vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_media__DOT__bd));
        }
        if ((0x1ffU == (IData)(vlSelfRef.tb_media__DOT__bi))) {
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature 
                = ((0xffU & (IData)(__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature)) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(2U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(3U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster = 0U;
        __Vdly__tb_media__DOT__wav_bytes = 0U;
        vlSelfRef.tb_media__DOT__browse_valid = 0U;
        vlSelfRef.tb_media__DOT__browse_tag = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__image_cluster = 0U;
        __Vdly__tb_media__DOT__dut__DOT__image_bytes = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_media__DOT__audio_selected) 
             < (IData)(vlSelfRef.tb_media__DOT__wav_count))) {
            vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters
                [vlSelfRef.tb_media__DOT__audio_selected];
            __Vdly__tb_media__DOT__wav_bytes = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes
                [vlSelfRef.tb_media__DOT__audio_selected];
        }
        if (((IData)(vlSelfRef.tb_media__DOT__selected) 
             < (IData)(vlSelfRef.tb_media__DOT__count))) {
            vlSelfRef.tb_media__DOT__dut__DOT__image_cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__clusters
                [vlSelfRef.tb_media__DOT__selected];
            __Vdly__tb_media__DOT__dut__DOT__image_bytes 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__sizes
                [vlSelfRef.tb_media__DOT__selected];
        } else {
            vlSelfRef.tb_media__DOT__dut__DOT__image_cluster = 0U;
            __Vdly__tb_media__DOT__dut__DOT__image_bytes = 0U;
        }
    }
    if (vlSelfRef.tb_media__DOT__reset) {
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 0U;
        __Vdly__tb_media__DOT__dut__DOT__cat_lba = 0U;
        __Vdly__tb_media__DOT__catalog_ready = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__fat16 = 0U;
        __Vdly__tb_media__DOT__dut__DOT__spc = 0U;
        __Vdly__tb_media__DOT__dut__DOT__fat_base = 0U;
        __Vdly__tb_media__DOT__dut__DOT__data_base = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fat_cached = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
        __Vdly__tb_media__DOT__count = 0U;
        vlSelfRef.tb_media__DOT__wav_found = 0U;
        __Vdly__tb_media__DOT__wav_count = 0U;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready) {
                    __Vdly__tb_media__DOT__dut__DOT__cat_lba = 0U;
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 2U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done) {
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__after_read;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if ((0xaa55U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__signature))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else if (((0x200U == ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__13__Vfuncout 
                                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                            [0xcU] 
                                            << 8U) 
                                           | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                           [0xbU]);
                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__13__Vfuncout))) 
                            & (0U != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                               [0xdU]))) {
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 3U;
                } else if ((0U != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start)) {
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 3U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__14__lba 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
                    __Vdly__tb_media__DOT__dut__DOT__cat_lba 
                        = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__14__lba;
                } else {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 2U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (((((((0xaa55U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__signature)) 
                         | (0x200U != ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__15__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                          [0xcU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                         [0xbU]);
                                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__15__Vfuncout)))) 
                        | (0U == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                           [0xdU])) | (0U != (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                              [0xdU] 
                                              & (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                 [0xdU] 
                                                 - (IData)(1U))))) 
                      | (0U == ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__16__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__16__Vfuncout)))) 
                     | (0U == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                        [0x10U]))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 3U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__fat16 
                        = (0U != ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__17__Vfuncout 
                                    = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__17__Vfuncout)));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 4U;
                    __Vdly__tb_media__DOT__dut__DOT__spc 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                        [0xdU];
                    __Vdly__tb_media__DOT__dut__DOT__fat_base 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                           + VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__18__Vfuncout 
                                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                            [0xfU] 
                                            << 8U) 
                                           | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                           [0xeU]);
                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__18__Vfuncout))));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors 
                        = VL_SHIFTR_III(32,32,32, ((IData)(0xfU) 
                                                   + 
                                                   VL_EXTEND_II(32,16, 
                                                                ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__19__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                [0x12U] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x11U]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__19__Vfuncout)))), 4U);
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                            + VL_EXTEND_II(32,16, ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__20__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__20__Vfuncout)))) 
                           + (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                              [0x10U] * ((0U != ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__21__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__21__Vfuncout)))
                                          ? VL_EXTEND_II(32,16, 
                                                         ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__22__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__22__Vfuncout)))
                                          : ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__23__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                 [0x27U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x26U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x25U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                  [0x24U]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__23__Vfuncout))));
                    __Vdly__tb_media__DOT__dut__DOT__data_base 
                        = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                             + VL_EXTEND_II(32,16, 
                                            ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__24__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0xfU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0xeU]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__24__Vfuncout)))) 
                            + (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                               [0x10U] * ((0U != ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__25__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__25__Vfuncout)))
                                           ? VL_EXTEND_II(32,16, 
                                                          ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__26__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__26__Vfuncout)))
                                           : ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__27__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x27U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                       [0x26U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                       [0x25U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x24U]));
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__27__Vfuncout)))) 
                           + VL_SHIFTR_III(32,32,32, 
                                           ((IData)(0xfU) 
                                            + VL_EXTEND_II(32,16, 
                                                           ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__28__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x12U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x11U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__28__Vfuncout)))), 4U));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root 
                        = (0U != ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__29__Vfuncout 
                                    = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__29__Vfuncout)));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                        = ((0U != ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__30__Vfuncout 
                                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                            [0x17U] 
                                            << 8U) 
                                           | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                           [0x16U]);
                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__30__Vfuncout)))
                            ? 0U : (0xfffffffU & ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__31__Vfuncout 
                                        = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                             [0x2fU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x2eU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x2dU] 
                                               << 8U) 
                                              | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                              [0x2cU]));
                                }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__31__Vfuncout)));
                }
            } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors)));
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                if ((0xfffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 4U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fixed_root) {
                    if ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index 
                         >= vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_sectors)) {
                        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 9U;
                    } else {
                        __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__32__lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_base 
                               + vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index);
                        __Vdly__tb_media__DOT__dut__DOT__cat_lba 
                            = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__32__lba;
                        vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 5U;
                        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                    }
                } else if ((2U > vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster)) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 6U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else {
                    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__33__lba 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__data_base 
                            + ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                                - (IData)(2U)) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector));
                    __Vdly__tb_media__DOT__dut__DOT__cat_lba 
                        = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__33__lba;
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 5U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 
                    = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache
                    [vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache_addr];
                __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 
                    = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
                __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 1U;
                if ((0x1fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos))) {
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 6U;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos)));
                }
            } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if ((0U == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                     [0U])) {
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 9U;
                } else {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__regular_file) {
                        if (((((0x42U == ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c 
                                                        = 
                                                        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                        [8U];
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (((0x61U 
                                                              <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c)) 
                                                             & (0x7aU 
                                                                >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c)))
                                                             ? 
                                                            ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c) 
                                                             - (IData)(0x20U))
                                                             : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__c)));
                                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__34__Vfuncout))) 
                               & (0x4dU == ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c 
                                                        = 
                                                        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                        [9U];
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (((0x61U 
                                                              <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c)) 
                                                             & (0x7aU 
                                                                >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c)))
                                                             ? 
                                                            ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c) 
                                                             - (IData)(0x20U))
                                                             : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__c)));
                                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__35__Vfuncout)))) 
                              & (0x50U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c 
                                                    = 
                                                    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [0xaU];
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__c)));
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__36__Vfuncout)))) 
                             & (0x20U > (IData)(vlSelfRef.tb_media__DOT__count)))) {
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 1U;
                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__37__Vfuncout 
                                = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                     [0x1fU] << 0x18U) 
                                    | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                       [0x1eU] << 0x10U)) 
                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                       [0x1dU] << 8U) 
                                      | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                      [0x1cU]));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 
                                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__37__Vfuncout;
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 1U;
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [0U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v1 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [1U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v1 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v2 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [2U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v2 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v3 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [3U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v3 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v4 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [4U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v4 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v5 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [5U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v5 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v6 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [6U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v6 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v7 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [7U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v7 
                                = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                            __Vdly__tb_media__DOT__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_media__DOT__count)));
                        }
                        if (((((0x57U == ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c 
                                                        = 
                                                        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                        [8U];
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (((0x61U 
                                                              <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c)) 
                                                             & (0x7aU 
                                                                >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c)))
                                                             ? 
                                                            ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c) 
                                                             - (IData)(0x20U))
                                                             : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__c)));
                                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__38__Vfuncout))) 
                               & (0x41U == ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c 
                                                        = 
                                                        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                        [9U];
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (((0x61U 
                                                              <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c)) 
                                                             & (0x7aU 
                                                                >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c)))
                                                             ? 
                                                            ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c) 
                                                             - (IData)(0x20U))
                                                             : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__c)));
                                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__39__Vfuncout)))) 
                              & (0x56U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c 
                                                    = 
                                                    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [0xaU];
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__c)));
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__40__Vfuncout)))) 
                             & (0x10U > (IData)(vlSelfRef.tb_media__DOT__wav_count)))) {
                            __Vdly__tb_media__DOT__wav_count 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_media__DOT__wav_count)));
                            vlSelfRef.tb_media__DOT__wav_found = 1U;
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 1U;
                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__41__Vfuncout 
                                = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                     [0x1fU] << 0x18U) 
                                    | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                       [0x1eU] << 0x10U)) 
                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                       [0x1dU] << 8U) 
                                      | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                      [0x1cU]));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 
                                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__41__Vfuncout;
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 1U;
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [0U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [1U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [2U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [3U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [4U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [5U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [6U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                            __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7 
                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                [7U];
                            __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7 
                                = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                        }
                    }
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 7U;
                }
            } else if ((0x1e0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos))) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos 
                    = (0x1ffU & ((IData)(0x20U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos)));
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 5U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fixed_root) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index 
                    = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index);
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 4U;
            } else if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector)) 
                        < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector)));
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 4U;
            } else {
                __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__42__lba 
                    = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                       + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster, 8U)
                           : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster, 7U)));
                __Vdly__tb_media__DOT__dut__DOT__cat_lba 
                    = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__42__lba;
                vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 8U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
            if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                  ? (0xfff8U <= vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster)
                  : (0xffffff8U <= vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster))) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 9U;
            } else if (((2U > vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster) 
                        | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                            ? (0xfff0U <= vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster)
                            : (0xffffff0U <= vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster)))) {
                vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 6U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                    = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__next_cluster;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 4U;
            }
        } else if ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
            __Vdly__tb_media__DOT__catalog_ready = 1U;
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0xaU;
        } else if ((1U & (~ ((0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)) 
                             || (0x3fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)))))) {
            vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 0xffU;
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__signature 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__after_read 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__volume_base;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_base 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_sectors 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fixed_root 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors;
    vlSelfRef.tb_media__DOT__dut__DOT__data_base = __Vdly__tb_media__DOT__dut__DOT__data_base;
    vlSelfRef.tb_media__DOT__dut__DOT__spc = __Vdly__tb_media__DOT__dut__DOT__spc;
    vlSelfRef.tb_media__DOT__dut__DOT__fat_base = __Vdly__tb_media__DOT__dut__DOT__fat_base;
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__header__v0;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__clusters[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__sizes[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0]) 
               | (IData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0)));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v1]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v1)) 
                  << 8U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v2]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v2)) 
                  << 0x10U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v3]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v3)) 
                  << 0x18U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v4]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v4)) 
                  << 0x20U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v5]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v5)) 
                  << 0x28U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v6]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v6)) 
                  << 0x30U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v7] 
            = ((0xffffffffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v7]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v7)) 
                  << 0x38U));
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0]) 
               | (IData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0)));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v1)) 
                  << 8U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v2)) 
                  << 0x10U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v3)) 
                  << 0x18U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v4)) 
                  << 0x20U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v5)) 
                  << 0x28U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v6)) 
                  << 0x30U));
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7] 
            = ((0xffffffffffffffULL & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
                [__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7]) 
               | ((QData)((IData)(__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v7)) 
                  << 0x38U));
    }
    vlSelfRef.tb_media__DOT__dut__DOT__fat16 = __Vdly__tb_media__DOT__dut__DOT__fat16;
    vlSelfRef.tb_media__DOT__wav_count = __Vdly__tb_media__DOT__wav_count;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache_addr 
        = (0x1ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos) 
                     + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos)));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__regular_file 
        = ((0xe5U != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
            [0U]) & ((0U == (0x18U & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                             [0xbU])) & (0xfU != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                         [0xbU])));
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
    __Vdly__tb_media__DOT__cycle = ((IData)(1U) + vlSelfRef.tb_media__DOT__cycle);
    vlSelfRef.tb_media__DOT__bv = 0U;
    __Vdly__tb_media__DOT__sd_done = 0U;
    __Vdly__tb_media__DOT__ack = 0U;
    if (vlSelfRef.tb_media__DOT__read_start) {
        if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__sd_ready)) 
                                | (IData)(vlSelfRef.tb_media__DOT__reading)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:36: Assertion failed in %Ntb_media: SD transaction overlap\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 36, "", false);
        }
        __Vdly__tb_media__DOT__active_lba = vlSelfRef.tb_media__DOT__lba;
        __Vdly__tb_media__DOT__sd_pos = 0U;
        __Vdly__tb_media__DOT__reading = 1U;
        __Vdly__tb_media__DOT__sd_ready = 0U;
    } else if (((IData)(vlSelfRef.tb_media__DOT__reading) 
                & (0U == VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(2U))))) {
        vlSelfRef.tb_media__DOT__bv = 1U;
        vlSelfRef.tb_media__DOT__bi = (0x1ffU & vlSelfRef.tb_media__DOT__sd_pos);
        __Vfunc_tb_media__DOT__disk__0__i = vlSelfRef.tb_media__DOT__sd_pos;
        __Vfunc_tb_media__DOT__disk__0__l = vlSelfRef.tb_media__DOT__active_lba;
        __Vfunc_tb_media__DOT__disk__0__e = 0;
        __Vfunc_tb_media__DOT__disk__0__slot = 0;
        __Vfunc_tb_media__DOT__disk__0__j = 0;
        __Vfunc_tb_media__DOT__disk__0__shifted = 0;
        __Vfunc_tb_media__DOT__disk__0__c = 0;
        __Vfunc_tb_media__DOT__disk__0__ofs = 0;
        __Vfunc_tb_media__DOT__disk__0__root_lba = 0;
        __Vfunc_tb_media__DOT__disk__0__base_lba = 0;
        __Vfunc_tb_media__DOT__disk__0__k = 0;
        __Vfunc_tb_media__DOT__disk__0__entry_bytes = 0;
        __Vfunc_tb_media__DOT__disk__0__second_start = 0;
        __Vfunc_tb_media__DOT__disk__0__first_end = 0;
        __Vfunc_tb_media__DOT__disk__0__second_end = 0;
        __Vfunc_tb_media__DOT__disk__0__wav_start = 0;
        __Vfunc_tb_media__DOT__disk__0__second_delta = 0;
        __Vfunc_tb_media__DOT__disk__0__wav_delta = 0;
        __Vfunc_tb_media__DOT__disk__0__bmp_bytes = 0;
        __Vfunc_tb_media__DOT__disk__0__value = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__i = __Vfunc_tb_media__DOT__disk__0__i;
        __Vfunc_tb_media__DOT__basic_disk__1__l = __Vfunc_tb_media__DOT__disk__0__l;
        __Vfunc_tb_media__DOT__basic_disk__1__c = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__entry = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__ofs = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__pix = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__x = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__y = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__channel = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__value = 0;
        __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0U;
        __Vfunc_tb_media__DOT__basic_disk__1__f16 = 
            (1U & VL_TESTPLUSARGS_I(std::string{"fat16"}));
        __Vfunc_tb_media__DOT__basic_disk__1__mbr = 
            (1U & VL_TESTPLUSARGS_I(std::string{"mbr"}));
        __Vfunc_tb_media__DOT__basic_disk__1__rgba 
            = (1U & VL_TESTPLUSARGS_I(std::string{"rgba"}));
        __Vfunc_tb_media__DOT__basic_disk__1__top = 
            (1U & VL_TESTPLUSARGS_I(std::string{"top"}));
        if (__Vfunc_tb_media__DOT__basic_disk__1__f16) {
            __Vfunc_tb_media__DOT__basic_disk__1__root_lba = 5U;
            __Vfunc_tb_media__DOT__basic_disk__1__file_lba = 0xeU;
            __Vfunc_tb_media__DOT__basic_disk__1__fat_end = 4U;
        } else {
            __Vfunc_tb_media__DOT__basic_disk__1__root_lba = 0x11U;
            __Vfunc_tb_media__DOT__basic_disk__1__file_lba = 0x19U;
            __Vfunc_tb_media__DOT__basic_disk__1__fat_end = 0x10U;
        }
        __Vfunc_tb_media__DOT__basic_disk__1__file_bytes 
            = ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__rgba)
                ? 0x12c036U : 0xe1036U);
        if (((IData)(__Vfunc_tb_media__DOT__basic_disk__1__mbr) 
             & (0U == __Vfunc_tb_media__DOT__basic_disk__1__l))) {
            if ((0x1c2U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0xcU;
            } else if ((0x1c7U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 8U;
            } else if ((0x1feU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x55U;
            } else if ((0x1ffU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0xaaU;
            }
        } else {
            if (__Vfunc_tb_media__DOT__basic_disk__1__mbr) {
                __Vfunc_tb_media__DOT__basic_disk__1__l 
                    = (__Vfunc_tb_media__DOT__basic_disk__1__l 
                       - (IData)(0x800U));
            }
            if ((0U == __Vfunc_tb_media__DOT__basic_disk__1__l)) {
                if (((((((((0U == __Vfunc_tb_media__DOT__basic_disk__1__i) 
                           | (0xbU == __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                          | (0xcU == __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                         | (0xdU == __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                        | (0xeU == __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                       | (0x10U == __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                      | (0x24U == __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                     | (0x2cU == __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                        = ((0U == __Vfunc_tb_media__DOT__basic_disk__1__i)
                            ? 0xebU : ((0xbU == __Vfunc_tb_media__DOT__basic_disk__1__i)
                                        ? 0U : ((0xcU 
                                                 == __Vfunc_tb_media__DOT__basic_disk__1__i)
                                                 ? 2U
                                                 : 
                                                ((0xdU 
                                                  == __Vfunc_tb_media__DOT__basic_disk__1__i)
                                                  ? 8U
                                                  : 
                                                 ((0xeU 
                                                   == __Vfunc_tb_media__DOT__basic_disk__1__i)
                                                   ? 1U
                                                   : 
                                                  ((0x10U 
                                                    == __Vfunc_tb_media__DOT__basic_disk__1__i)
                                                    ? 1U
                                                    : 
                                                   ((0x24U 
                                                     == __Vfunc_tb_media__DOT__basic_disk__1__i)
                                                     ? 0x10U
                                                     : 2U)))))));
                } else if ((0x1feU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x55U;
                } else if ((0x1ffU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0xaaU;
                }
                if (__Vfunc_tb_media__DOT__basic_disk__1__f16) {
                    if ((0x11U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x10U;
                    } else if ((0x16U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 4U;
                    } else if ((0x24U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0U;
                    } else if ((0x2cU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0U;
                    }
                }
                if ((VL_TESTPLUSARGS_I(std::string{"bpb"}) 
                     && (0xdU == __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 3U;
                }
                __Vtemp_2[0U] = 0x74757265U;
                __Vtemp_2[1U] = 0x69676e61U;
                __Vtemp_2[2U] = 0x73U;
                if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_2)) 
                     && (0x1ffU == __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0U;
                }
            } else if ((VL_LTES_III(32, 1U, __Vfunc_tb_media__DOT__basic_disk__1__l) 
                        & VL_LTES_III(32, __Vfunc_tb_media__DOT__basic_disk__1__l, __Vfunc_tb_media__DOT__basic_disk__1__fat_end))) {
                __Vfunc_tb_media__DOT__basic_disk__1__entry 
                    = (VL_MULS_III(32, (__Vfunc_tb_media__DOT__basic_disk__1__l 
                                        - (IData)(1U)), 
                                   ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__f16)
                                     ? 0x100U : 0x80U)) 
                       + VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__i, 
                                     ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__f16)
                                       ? 2U : 4U)));
                __Vfunc_tb_media__DOT__basic_disk__1__value 
                    = ((2U == __Vfunc_tb_media__DOT__basic_disk__1__entry)
                        ? 0xfffffffU : ((VL_LTES_III(32, 3U, __Vfunc_tb_media__DOT__basic_disk__1__entry) 
                                         & __Vfunc_tb_media__DOT__basic_disk__1__entry)
                                         ? (VL_GTES_III(32, __Vfunc_tb_media__DOT__basic_disk__1__entry, 
                                                        ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__rgba)
                                                          ? 0x25bU
                                                          : 0x1c5U))
                                             ? ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__f16)
                                                 ? 0xffffU
                                                 : 0xfffffffU)
                                             : ((IData)(2U) 
                                                + __Vfunc_tb_media__DOT__basic_disk__1__entry))
                                         : 0U));
                __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                    = (0xffU & (__Vfunc_tb_media__DOT__basic_disk__1__value 
                                >> (0x1fU & VL_MULS_III(32, (IData)(8U), 
                                                        VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__i, 
                                                                       ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__f16)
                                                                         ? 2U
                                                                         : 4U))))));
            } else if ((__Vfunc_tb_media__DOT__basic_disk__1__l 
                        == __Vfunc_tb_media__DOT__basic_disk__1__root_lba)) {
                if ((0U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x41U;
                }
                if ((0xbU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0xfU;
                }
                if ((VL_LTES_III(32, 0x20U, __Vfunc_tb_media__DOT__basic_disk__1__i) 
                     & VL_GTES_III(32, 0x27U, __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                        = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, 0x50494344454d4f20ULL, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__1__i 
                                                                      - (IData)(0x20U))))));
                }
                if ((VL_LTES_III(32, 0x3cU, __Vfunc_tb_media__DOT__basic_disk__1__i) 
                     & VL_GTES_III(32, 0x3fU, __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                        = (0xffU & VL_SHIFTR_III(8,32,32, __Vfunc_tb_media__DOT__basic_disk__1__file_bytes, 
                                                 VL_MULS_III(32, (IData)(8U), 
                                                             (__Vfunc_tb_media__DOT__basic_disk__1__i 
                                                              - (IData)(0x3cU)))));
                }
                if ((0x28U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x42U;
                } else if ((0x29U == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x4dU;
                } else if ((0x2aU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x50U;
                } else if ((0x2bU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x20U;
                } else if ((0x3aU == __Vfunc_tb_media__DOT__basic_disk__1__i)) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 3U;
                }
                if ((VL_TESTPLUSARGS_I(std::string{"nobmp"}) 
                     && (0x28U == __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x4aU;
                }
                __Vtemp_3[0U] = 0x66696c65U;
                __Vtemp_3[1U] = 0x686f7274U;
                __Vtemp_3[2U] = 0x73U;
                if (((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_3)) 
                      && VL_LTES_III(32, 0x3cU, __Vfunc_tb_media__DOT__basic_disk__1__i)) 
                     & VL_GTES_III(32, 0x3fU, __Vfunc_tb_media__DOT__basic_disk__1__i))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                        = (0xffU & VL_SHIFTR_III(8,32,32, 0x64U, 
                                                 VL_MULS_III(32, (IData)(8U), 
                                                             (__Vfunc_tb_media__DOT__basic_disk__1__i 
                                                              - (IData)(0x3cU)))));
                }
            } else if (VL_GTES_III(32, __Vfunc_tb_media__DOT__basic_disk__1__l, __Vfunc_tb_media__DOT__basic_disk__1__file_lba)) {
                __Vfunc_tb_media__DOT__basic_disk__1__c 
                    = VL_DIVS_III(32, (__Vfunc_tb_media__DOT__basic_disk__1__l 
                                       - __Vfunc_tb_media__DOT__basic_disk__1__file_lba), (IData)(8U));
                if ((0U == VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__c, (IData)(2U)))) {
                    __Vfunc_tb_media__DOT__basic_disk__1__ofs 
                        = ((VL_MULS_III(32, (IData)(0x1000U), 
                                        VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__c, (IData)(2U))) 
                            + VL_MULS_III(32, (IData)(0x200U), 
                                          VL_MODDIVS_III(32, 
                                                         (__Vfunc_tb_media__DOT__basic_disk__1__l 
                                                          - __Vfunc_tb_media__DOT__basic_disk__1__file_lba), (IData)(8U)))) 
                           + __Vfunc_tb_media__DOT__basic_disk__1__i);
                    if (VL_GTS_III(32, 0x36U, __Vfunc_tb_media__DOT__basic_disk__1__ofs)) {
                        if (((((((((0U == __Vfunc_tb_media__DOT__basic_disk__1__ofs) 
                                   | (1U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                                  | (2U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                                 | (3U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                                | (4U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                               | (0xaU == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                              | (0xeU == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                             | (0x12U == __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = ((0U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                    ? 0x42U : ((1U 
                                                == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                                ? 0x4dU
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                                    ? 0x36U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                                     ? 0x10U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                                      ? 0xeU
                                                      : 
                                                     ((0xaU 
                                                       == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                                       ? 0x36U
                                                       : 
                                                      ((0xeU 
                                                        == __Vfunc_tb_media__DOT__basic_disk__1__ofs)
                                                        ? 0x28U
                                                        : 0x80U)))))));
                        } else if ((0x13U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 2U;
                        } else if ((0x16U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0xe0U;
                        } else if ((0x17U == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 1U;
                        } else if ((0x1aU == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 1U;
                        } else if ((0x1cU == __Vfunc_tb_media__DOT__basic_disk__1__ofs)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x18U;
                        }
                        if ((VL_LTES_III(32, 2U, __Vfunc_tb_media__DOT__basic_disk__1__ofs) 
                             & VL_GTES_III(32, 5U, __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, __Vfunc_tb_media__DOT__basic_disk__1__file_bytes, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__1__ofs 
                                                                      - (IData)(2U)))));
                        }
                        if (((0x1cU == __Vfunc_tb_media__DOT__basic_disk__1__ofs) 
                             & (IData)(__Vfunc_tb_media__DOT__basic_disk__1__rgba))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0x20U;
                        }
                        if ((((IData)(__Vfunc_tb_media__DOT__basic_disk__1__top) 
                              & VL_LTES_III(32, 0x16U, __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                             & VL_GTES_III(32, 0x19U, __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, 0xfffffe20U, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__1__ofs 
                                                                      - (IData)(0x16U)))));
                        }
                        if ((VL_TESTPLUSARGS_I(std::string{"bad"}) 
                             && (0x1eU == __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 1U;
                        }
                        __Vtemp_4[0U] = 0x696f6e73U;
                        __Vtemp_4[1U] = 0x6d656e73U;
                        __Vtemp_4[2U] = 0x6469U;
                        if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_4)) 
                             && (0x12U == __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0U;
                        }
                        if (((VL_TESTPLUSARGS_I(std::string{"offset"}) 
                              && VL_LTES_III(32, 0xaU, __Vfunc_tb_media__DOT__basic_disk__1__ofs)) 
                             & VL_GTES_III(32, 0xdU, __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, 0xffffffffU, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__1__ofs 
                                                                      - (IData)(0xaU)))));
                        }
                        if ((VL_TESTPLUSARGS_I(std::string{"bmpmagic"}) 
                             && (0U == __Vfunc_tb_media__DOT__basic_disk__1__ofs))) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0U;
                        }
                    } else {
                        __Vfunc_tb_media__DOT__basic_disk__1__pix 
                            = VL_DIVS_III(32, (__Vfunc_tb_media__DOT__basic_disk__1__ofs 
                                               - (IData)(0x36U)), 
                                          ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__rgba)
                                            ? 4U : 3U));
                        __Vfunc_tb_media__DOT__basic_disk__1__x 
                            = VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__pix, (IData)(0x280U));
                        __Vfunc_tb_media__DOT__basic_disk__1__y 
                            = ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__top)
                                ? VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__pix, (IData)(0x280U))
                                : ((IData)(0x1dfU) 
                                   - VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__1__pix, (IData)(0x280U))));
                        __Vfunc_tb_media__DOT__basic_disk__1__channel 
                            = VL_MODDIVS_III(32, (__Vfunc_tb_media__DOT__basic_disk__1__ofs 
                                                  - (IData)(0x36U)), 
                                             ((IData)(__Vfunc_tb_media__DOT__basic_disk__1__rgba)
                                               ? 4U
                                               : 3U));
                        if ((0U == __Vfunc_tb_media__DOT__basic_disk__1__channel)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = (0xffU & __Vfunc_tb_media__DOT__basic_disk__1__x);
                        } else if ((1U == __Vfunc_tb_media__DOT__basic_disk__1__channel)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = (0xffU & __Vfunc_tb_media__DOT__basic_disk__1__y);
                        } else if ((2U == __Vfunc_tb_media__DOT__basic_disk__1__channel)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout 
                                = (0xffU & (__Vfunc_tb_media__DOT__basic_disk__1__x 
                                            ^ __Vfunc_tb_media__DOT__basic_disk__1__y));
                        } else if ((3U == __Vfunc_tb_media__DOT__basic_disk__1__channel)) {
                            __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout = 0xffU;
                        }
                    }
                }
            }
        }
        __Vfunc_tb_media__DOT__disk__0__Vfuncout = __Vfunc_tb_media__DOT__basic_disk__1__Vfuncout;
        __Vfunc_tb_media__DOT__disk__0__part = (VL_TESTPLUSARGS_I(
                                                                  std::string{"mbr"})
                                                 ? 0x800U
                                                 : 0U);
        if ((1U & (~ ((0U == __Vfunc_tb_media__DOT__disk__0__l) 
                      & (0U != __Vfunc_tb_media__DOT__disk__0__part))))) {
            __Vfunc_tb_media__DOT__disk__0__l = (__Vfunc_tb_media__DOT__disk__0__l 
                                                 - __Vfunc_tb_media__DOT__disk__0__part);
            __Vfunc_tb_media__DOT__disk__0__root_lba 
                = (VL_TESTPLUSARGS_I(std::string{"fat16"})
                    ? 5U : 0x11U);
            __Vfunc_tb_media__DOT__disk__0__base_lba 
                = (VL_TESTPLUSARGS_I(std::string{"fat16"})
                    ? 0xeU : 0x19U);
            __Vfunc_tb_media__DOT__disk__0__entry_bytes 
                = (VL_TESTPLUSARGS_I(std::string{"fat16"})
                    ? 2U : 4U);
            __Vfunc_tb_media__DOT__disk__0__second_start 
                = (VL_TESTPLUSARGS_I(std::string{"rgba"})
                    ? 0x2bfU : 0x1f7U);
            __Vfunc_tb_media__DOT__disk__0__first_end 
                = (VL_TESTPLUSARGS_I(std::string{"rgba"})
                    ? 0x25bU : 0x1c5U);
            __Vfunc_tb_media__DOT__disk__0__wav_start 
                = (VL_TESTPLUSARGS_I(std::string{"rgba"})
                    ? 0x5dfU : 0x3ebU);
            __Vfunc_tb_media__DOT__disk__0__bmp_bytes 
                = (VL_TESTPLUSARGS_I(std::string{"rgba"})
                    ? 0x12c036U : 0xe1036U);
            __Vfunc_tb_media__DOT__disk__0__second_end 
                = ((__Vfunc_tb_media__DOT__disk__0__second_start 
                    + __Vfunc_tb_media__DOT__disk__0__first_end) 
                   - (IData)(3U));
            __Vfunc_tb_media__DOT__disk__0__second_delta 
                = VL_MULS_III(32, (IData)(8U), (__Vfunc_tb_media__DOT__disk__0__second_start 
                                                - (IData)(3U)));
            __Vfunc_tb_media__DOT__disk__0__wav_delta 
                = VL_MULS_III(32, (IData)(8U), (__Vfunc_tb_media__DOT__disk__0__wav_start 
                                                - (IData)(3U)));
            if ((VL_LTES_III(32, 1U, __Vfunc_tb_media__DOT__disk__0__l) 
                 & VL_LTES_III(32, __Vfunc_tb_media__DOT__disk__0__l, 
                               (VL_TESTPLUSARGS_I(std::string{"fat16"})
                                 ? 4U : 0x10U)))) {
                __Vfunc_tb_media__DOT__disk__0__e = 
                    (VL_MULS_III(32, (__Vfunc_tb_media__DOT__disk__0__l 
                                      - (IData)(1U)), 
                                 VL_DIVS_III(32, (IData)(0x200U), __Vfunc_tb_media__DOT__disk__0__entry_bytes)) 
                     + VL_DIVS_III(32, __Vfunc_tb_media__DOT__disk__0__i, __Vfunc_tb_media__DOT__disk__0__entry_bytes));
                __Vfunc_tb_media__DOT__disk__0__value = 0U;
                if ((2U == __Vfunc_tb_media__DOT__disk__0__e)) {
                    __Vfunc_tb_media__DOT__disk__0__value = 0xfffffffU;
                }
                if (((VL_LTES_III(32, 3U, __Vfunc_tb_media__DOT__disk__0__e) 
                      & VL_LTES_III(32, __Vfunc_tb_media__DOT__disk__0__e, __Vfunc_tb_media__DOT__disk__0__first_end)) 
                     & __Vfunc_tb_media__DOT__disk__0__e)) {
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = ((__Vfunc_tb_media__DOT__disk__0__e 
                            == __Vfunc_tb_media__DOT__disk__0__first_end)
                            ? 0xfffffffU : ((IData)(2U) 
                                            + __Vfunc_tb_media__DOT__disk__0__e));
                }
                if (((VL_GTES_III(32, __Vfunc_tb_media__DOT__disk__0__e, __Vfunc_tb_media__DOT__disk__0__second_start) 
                      & VL_LTES_III(32, __Vfunc_tb_media__DOT__disk__0__e, __Vfunc_tb_media__DOT__disk__0__second_end)) 
                     & __Vfunc_tb_media__DOT__disk__0__e)) {
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = ((__Vfunc_tb_media__DOT__disk__0__e 
                            == __Vfunc_tb_media__DOT__disk__0__second_end)
                            ? 0xfffffffU : ((IData)(2U) 
                                            + __Vfunc_tb_media__DOT__disk__0__e));
                }
                if ((__Vfunc_tb_media__DOT__disk__0__e 
                     == __Vfunc_tb_media__DOT__disk__0__wav_start)) {
                    __Vtemp_6[0U] = 0x6861696eU;
                    __Vtemp_6[1U] = 0x6f727463U;
                    __Vtemp_6[2U] = 0x7368U;
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_6))
                            ? 0xfffffffU : ((IData)(4U) 
                                            + __Vfunc_tb_media__DOT__disk__0__wav_start));
                }
                if ((__Vfunc_tb_media__DOT__disk__0__e 
                     == ((IData)(4U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = ((IData)(2U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                }
                if ((__Vfunc_tb_media__DOT__disk__0__e 
                     == ((IData)(2U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = ((IData)(8U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                }
                if ((__Vfunc_tb_media__DOT__disk__0__e 
                     == ((IData)(8U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = ((IData)(6U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                }
                if ((__Vfunc_tb_media__DOT__disk__0__e 
                     == ((IData)(6U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__value = 0xfffffffU;
                }
                if (VL_TESTPLUSARGS_I(std::string{"multiwav"})) {
                    if ((__Vfunc_tb_media__DOT__disk__0__e 
                         == ((IData)(0x10U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__value 
                            = ((IData)(0x14U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__e 
                         == ((IData)(0x14U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__value 
                            = ((IData)(0x12U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__e 
                         == ((IData)(0x12U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__value 
                            = ((IData)(0x18U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__e 
                         == ((IData)(0x18U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__value 
                            = ((IData)(0x16U) + __Vfunc_tb_media__DOT__disk__0__wav_start);
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__e 
                         == ((IData)(0x16U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__value = 0xfffffffU;
                    }
                }
                __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                    = (0xffU & (__Vfunc_tb_media__DOT__disk__0__value 
                                >> (0x1fU & VL_MULS_III(32, (IData)(8U), 
                                                        VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__disk__0__i, __Vfunc_tb_media__DOT__disk__0__entry_bytes)))));
            }
            if ((__Vfunc_tb_media__DOT__disk__0__l 
                 == __Vfunc_tb_media__DOT__disk__0__root_lba)) {
                __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0U;
                __Vfunc_tb_media__DOT__disk__0__slot 
                    = VL_DIVS_III(32, __Vfunc_tb_media__DOT__disk__0__i, (IData)(0x20U));
                __Vfunc_tb_media__DOT__disk__0__j = 
                    VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__disk__0__i, (IData)(0x20U));
                if (VL_GTS_III(32, 3U, __Vfunc_tb_media__DOT__disk__0__slot)) {
                    if (VL_GTS_III(32, 8U, __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, 
                                                             ((0U 
                                                               == __Vfunc_tb_media__DOT__disk__0__slot)
                                                               ? 0x2020202020414349ULL
                                                               : 
                                                              ((1U 
                                                                == __Vfunc_tb_media__DOT__disk__0__slot)
                                                                ? 0x2020202020444142ULL
                                                                : 0x2020202020424349ULL)), 
                                                             VL_MULS_III(32, (IData)(8U), __Vfunc_tb_media__DOT__disk__0__j))));
                    }
                    if ((8U == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((1U == __Vfunc_tb_media__DOT__disk__0__slot)
                                ? 0x57U : 0x42U);
                    }
                    if ((9U == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((1U == __Vfunc_tb_media__DOT__disk__0__slot)
                                ? 0x41U : 0x4dU);
                    }
                    if ((0xaU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((1U == __Vfunc_tb_media__DOT__disk__0__slot)
                                ? 0x56U : 0x50U);
                    }
                    if ((0xbU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x20U;
                    }
                    if ((((1U == __Vfunc_tb_media__DOT__disk__0__slot) 
                          & (8U == __Vfunc_tb_media__DOT__disk__0__j)) 
                         && VL_TESTPLUSARGS_I(std::string{"nowav"}))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x54U;
                    }
                    if ((0x1aU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((0U == __Vfunc_tb_media__DOT__disk__0__slot)
                                ? 3U : (0xffU & ((1U 
                                                  == __Vfunc_tb_media__DOT__disk__0__slot)
                                                  ? __Vfunc_tb_media__DOT__disk__0__wav_start
                                                  : __Vfunc_tb_media__DOT__disk__0__second_start)));
                    }
                    if ((0x1bU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & (((0U == __Vfunc_tb_media__DOT__disk__0__slot)
                                          ? 3U : ((1U 
                                                   == __Vfunc_tb_media__DOT__disk__0__slot)
                                                   ? __Vfunc_tb_media__DOT__disk__0__wav_start
                                                   : __Vfunc_tb_media__DOT__disk__0__second_start)) 
                                        >> 8U));
                    }
                    if (VL_LTES_III(32, 0x1cU, __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & VL_SHIFTR_III(8,32,32, 
                                                     ((1U 
                                                       == __Vfunc_tb_media__DOT__disk__0__slot)
                                                       ? 0x402cU
                                                       : __Vfunc_tb_media__DOT__disk__0__bmp_bytes), 
                                                     VL_MULS_III(32, (IData)(8U), 
                                                                 (__Vfunc_tb_media__DOT__disk__0__j 
                                                                  - (IData)(0x1cU)))));
                    }
                }
                if (((3U == __Vfunc_tb_media__DOT__disk__0__slot) 
                     && VL_TESTPLUSARGS_I(std::string{"multiwav"}))) {
                    if (VL_GTS_III(32, 8U, __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, 0x202020324f4d4544ULL, 
                                                             VL_MULS_III(32, (IData)(8U), __Vfunc_tb_media__DOT__disk__0__j))));
                    }
                    if ((8U == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x57U;
                    }
                    if ((9U == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x41U;
                    }
                    if ((0xaU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x56U;
                    }
                    if ((0xbU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x20U;
                    }
                    if ((0x1aU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & ((IData)(0x10U) 
                                        + __Vfunc_tb_media__DOT__disk__0__wav_start));
                    }
                    if ((0x1bU == __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & (((IData)(0x10U) 
                                         + __Vfunc_tb_media__DOT__disk__0__wav_start) 
                                        >> 8U));
                    }
                    if (VL_LTES_III(32, 0x1cU, __Vfunc_tb_media__DOT__disk__0__j)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & VL_SHIFTR_III(8,32,32, 0x402cU, 
                                                     VL_MULS_III(32, (IData)(8U), 
                                                                 (__Vfunc_tb_media__DOT__disk__0__j 
                                                                  - (IData)(0x1cU)))));
                    }
                }
            }
            if ((VL_GTES_III(32, __Vfunc_tb_media__DOT__disk__0__l, 
                             (__Vfunc_tb_media__DOT__disk__0__base_lba 
                              + __Vfunc_tb_media__DOT__disk__0__second_delta)) 
                 & VL_LTS_III(32, __Vfunc_tb_media__DOT__disk__0__l, 
                              (__Vfunc_tb_media__DOT__disk__0__base_lba 
                               + __Vfunc_tb_media__DOT__disk__0__wav_delta)))) {
                __Vfunc_tb_media__DOT__disk__0__shifted 
                    = (__Vfunc_tb_media__DOT__disk__0__l 
                       - __Vfunc_tb_media__DOT__disk__0__second_delta);
                __Vfunc_tb_media__DOT__basic_disk__2__i 
                    = __Vfunc_tb_media__DOT__disk__0__i;
                __Vfunc_tb_media__DOT__basic_disk__2__l 
                    = (__Vfunc_tb_media__DOT__disk__0__shifted 
                       + __Vfunc_tb_media__DOT__disk__0__part);
                __Vfunc_tb_media__DOT__basic_disk__2__c = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__entry = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__ofs = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__pix = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__x = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__y = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__channel = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__value = 0;
                __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0U;
                __Vfunc_tb_media__DOT__basic_disk__2__f16 
                    = (1U & VL_TESTPLUSARGS_I(std::string{"fat16"}));
                __Vfunc_tb_media__DOT__basic_disk__2__mbr 
                    = (1U & VL_TESTPLUSARGS_I(std::string{"mbr"}));
                __Vfunc_tb_media__DOT__basic_disk__2__rgba 
                    = (1U & VL_TESTPLUSARGS_I(std::string{"rgba"}));
                __Vfunc_tb_media__DOT__basic_disk__2__top 
                    = (1U & VL_TESTPLUSARGS_I(std::string{"top"}));
                __Vfunc_tb_media__DOT__basic_disk__2__root_lba 
                    = ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                        ? 5U : 0x11U);
                __Vfunc_tb_media__DOT__basic_disk__2__file_lba 
                    = ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                        ? 0xeU : 0x19U);
                __Vfunc_tb_media__DOT__basic_disk__2__fat_end 
                    = ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                        ? 4U : 0x10U);
                __Vfunc_tb_media__DOT__basic_disk__2__file_bytes 
                    = ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__rgba)
                        ? 0x12c036U : 0xe1036U);
                if (((IData)(__Vfunc_tb_media__DOT__basic_disk__2__mbr) 
                     & (0U == __Vfunc_tb_media__DOT__basic_disk__2__l))) {
                    if ((0x1c2U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0xcU;
                    } else if ((0x1c7U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 8U;
                    } else if ((0x1feU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x55U;
                    } else if ((0x1ffU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                        __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0xaaU;
                    }
                } else {
                    if (__Vfunc_tb_media__DOT__basic_disk__2__mbr) {
                        __Vfunc_tb_media__DOT__basic_disk__2__l 
                            = (__Vfunc_tb_media__DOT__basic_disk__2__l 
                               - (IData)(0x800U));
                    }
                    if ((0U == __Vfunc_tb_media__DOT__basic_disk__2__l)) {
                        if (((((((((0U == __Vfunc_tb_media__DOT__basic_disk__2__i) 
                                   | (0xbU == __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                                  | (0xcU == __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                                 | (0xdU == __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                                | (0xeU == __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                               | (0x10U == __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                              | (0x24U == __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                             | (0x2cU == __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                = ((0U == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                    ? 0xebU : ((0xbU 
                                                == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                                ? 0U
                                                : (
                                                   (0xcU 
                                                    == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                                    ? 2U
                                                    : 
                                                   ((0xdU 
                                                     == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                                     ? 8U
                                                     : 
                                                    ((0xeU 
                                                      == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                                      ? 1U
                                                      : 
                                                     ((0x10U 
                                                       == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                                       ? 1U
                                                       : 
                                                      ((0x24U 
                                                        == __Vfunc_tb_media__DOT__basic_disk__2__i)
                                                        ? 0x10U
                                                        : 2U)))))));
                        } else if ((0x1feU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x55U;
                        } else if ((0x1ffU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0xaaU;
                        }
                        if (__Vfunc_tb_media__DOT__basic_disk__2__f16) {
                            if ((0x11U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                                __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x10U;
                            } else if ((0x16U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                                __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 4U;
                            } else if ((0x24U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                                __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0U;
                            } else if ((0x2cU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                                __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0U;
                            }
                        }
                        if ((VL_TESTPLUSARGS_I(std::string{"bpb"}) 
                             && (0xdU == __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 3U;
                        }
                        __Vtemp_8[0U] = 0x74757265U;
                        __Vtemp_8[1U] = 0x69676e61U;
                        __Vtemp_8[2U] = 0x73U;
                        if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_8)) 
                             && (0x1ffU == __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0U;
                        }
                    } else if ((VL_LTES_III(32, 1U, __Vfunc_tb_media__DOT__basic_disk__2__l) 
                                & VL_LTES_III(32, __Vfunc_tb_media__DOT__basic_disk__2__l, __Vfunc_tb_media__DOT__basic_disk__2__fat_end))) {
                        __Vfunc_tb_media__DOT__basic_disk__2__entry 
                            = (VL_MULS_III(32, (__Vfunc_tb_media__DOT__basic_disk__2__l 
                                                - (IData)(1U)), 
                                           ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                                             ? 0x100U
                                             : 0x80U)) 
                               + VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__i, 
                                             ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                                               ? 2U
                                               : 4U)));
                        __Vfunc_tb_media__DOT__basic_disk__2__value 
                            = ((2U == __Vfunc_tb_media__DOT__basic_disk__2__entry)
                                ? 0xfffffffU : ((VL_LTES_III(32, 3U, __Vfunc_tb_media__DOT__basic_disk__2__entry) 
                                                 & __Vfunc_tb_media__DOT__basic_disk__2__entry)
                                                 ? 
                                                (VL_GTES_III(32, __Vfunc_tb_media__DOT__basic_disk__2__entry, 
                                                             ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__rgba)
                                                               ? 0x25bU
                                                               : 0x1c5U))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                                                   ? 0xffffU
                                                   : 0xfffffffU)
                                                  : 
                                                 ((IData)(2U) 
                                                  + __Vfunc_tb_media__DOT__basic_disk__2__entry))
                                                 : 0U));
                        __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                            = (0xffU & (__Vfunc_tb_media__DOT__basic_disk__2__value 
                                        >> (0x1fU & 
                                            VL_MULS_III(32, (IData)(8U), 
                                                        VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__i, 
                                                                       ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__f16)
                                                                         ? 2U
                                                                         : 4U))))));
                    } else if ((__Vfunc_tb_media__DOT__basic_disk__2__l 
                                == __Vfunc_tb_media__DOT__basic_disk__2__root_lba)) {
                        if ((0U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x41U;
                        }
                        if ((0xbU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0xfU;
                        }
                        if ((VL_LTES_III(32, 0x20U, __Vfunc_tb_media__DOT__basic_disk__2__i) 
                             & VL_GTES_III(32, 0x27U, __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                = (0xffU & (IData)(
                                                   VL_SHIFTR_QQI(64,64,32, 0x50494344454d4f20ULL, 
                                                                 VL_MULS_III(32, (IData)(8U), 
                                                                             (__Vfunc_tb_media__DOT__basic_disk__2__i 
                                                                              - (IData)(0x20U))))));
                        }
                        if ((VL_LTES_III(32, 0x3cU, __Vfunc_tb_media__DOT__basic_disk__2__i) 
                             & VL_GTES_III(32, 0x3fU, __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, __Vfunc_tb_media__DOT__basic_disk__2__file_bytes, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__2__i 
                                                                      - (IData)(0x3cU)))));
                        }
                        if ((0x28U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x42U;
                        } else if ((0x29U == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x4dU;
                        } else if ((0x2aU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x50U;
                        } else if ((0x2bU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x20U;
                        } else if ((0x3aU == __Vfunc_tb_media__DOT__basic_disk__2__i)) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 3U;
                        }
                        if ((VL_TESTPLUSARGS_I(std::string{"nobmp"}) 
                             && (0x28U == __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x4aU;
                        }
                        __Vtemp_9[0U] = 0x66696c65U;
                        __Vtemp_9[1U] = 0x686f7274U;
                        __Vtemp_9[2U] = 0x73U;
                        if (((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_9)) 
                              && VL_LTES_III(32, 0x3cU, __Vfunc_tb_media__DOT__basic_disk__2__i)) 
                             & VL_GTES_III(32, 0x3fU, __Vfunc_tb_media__DOT__basic_disk__2__i))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, 0x64U, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__2__i 
                                                                      - (IData)(0x3cU)))));
                        }
                    } else if (VL_GTES_III(32, __Vfunc_tb_media__DOT__basic_disk__2__l, __Vfunc_tb_media__DOT__basic_disk__2__file_lba)) {
                        __Vfunc_tb_media__DOT__basic_disk__2__c 
                            = VL_DIVS_III(32, (__Vfunc_tb_media__DOT__basic_disk__2__l 
                                               - __Vfunc_tb_media__DOT__basic_disk__2__file_lba), (IData)(8U));
                        if ((0U == VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__c, (IData)(2U)))) {
                            __Vfunc_tb_media__DOT__basic_disk__2__ofs 
                                = ((VL_MULS_III(32, (IData)(0x1000U), 
                                                VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__c, (IData)(2U))) 
                                    + VL_MULS_III(32, (IData)(0x200U), 
                                                  VL_MODDIVS_III(32, 
                                                                 (__Vfunc_tb_media__DOT__basic_disk__2__l 
                                                                  - __Vfunc_tb_media__DOT__basic_disk__2__file_lba), (IData)(8U)))) 
                                   + __Vfunc_tb_media__DOT__basic_disk__2__i);
                            if (VL_GTS_III(32, 0x36U, __Vfunc_tb_media__DOT__basic_disk__2__ofs)) {
                                if (((((((((0U == __Vfunc_tb_media__DOT__basic_disk__2__ofs) 
                                           | (1U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                          | (2U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                         | (3U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                        | (4U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                       | (0xaU == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                      | (0xeU == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                     | (0x12U == __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = ((0U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                            ? 0x42U
                                            : ((1U 
                                                == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                                ? 0x4dU
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                                    ? 0x36U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                                     ? 0x10U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                                      ? 0xeU
                                                      : 
                                                     ((0xaU 
                                                       == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                                       ? 0x36U
                                                       : 
                                                      ((0xeU 
                                                        == __Vfunc_tb_media__DOT__basic_disk__2__ofs)
                                                        ? 0x28U
                                                        : 0x80U)))))));
                                } else if ((0x13U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 2U;
                                } else if ((0x16U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0xe0U;
                                } else if ((0x17U == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 1U;
                                } else if ((0x1aU == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 1U;
                                } else if ((0x1cU == __Vfunc_tb_media__DOT__basic_disk__2__ofs)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x18U;
                                }
                                if ((VL_LTES_III(32, 2U, __Vfunc_tb_media__DOT__basic_disk__2__ofs) 
                                     & VL_GTES_III(32, 5U, __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = (0xffU & 
                                           VL_SHIFTR_III(8,32,32, __Vfunc_tb_media__DOT__basic_disk__2__file_bytes, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__2__ofs 
                                                                      - (IData)(2U)))));
                                }
                                if (((0x1cU == __Vfunc_tb_media__DOT__basic_disk__2__ofs) 
                                     & (IData)(__Vfunc_tb_media__DOT__basic_disk__2__rgba))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0x20U;
                                }
                                if ((((IData)(__Vfunc_tb_media__DOT__basic_disk__2__top) 
                                      & VL_LTES_III(32, 0x16U, __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                     & VL_GTES_III(32, 0x19U, __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = (0xffU & 
                                           VL_SHIFTR_III(8,32,32, 0xfffffe20U, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__2__ofs 
                                                                      - (IData)(0x16U)))));
                                }
                                if ((VL_TESTPLUSARGS_I(
                                                       std::string{"bad"}) 
                                     && (0x1eU == __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 1U;
                                }
                                __Vtemp_10[0U] = 0x696f6e73U;
                                __Vtemp_10[1U] = 0x6d656e73U;
                                __Vtemp_10[2U] = 0x6469U;
                                if ((VL_TESTPLUSARGS_I(
                                                       VL_CVT_PACK_STR_NW(3, __Vtemp_10)) 
                                     && (0x12U == __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0U;
                                }
                                if (((VL_TESTPLUSARGS_I(
                                                        std::string{"offset"}) 
                                      && VL_LTES_III(32, 0xaU, __Vfunc_tb_media__DOT__basic_disk__2__ofs)) 
                                     & VL_GTES_III(32, 0xdU, __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = (0xffU & 
                                           VL_SHIFTR_III(8,32,32, 0xffffffffU, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_media__DOT__basic_disk__2__ofs 
                                                                      - (IData)(0xaU)))));
                                }
                                if ((VL_TESTPLUSARGS_I(
                                                       std::string{"bmpmagic"}) 
                                     && (0U == __Vfunc_tb_media__DOT__basic_disk__2__ofs))) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0U;
                                }
                            } else {
                                __Vfunc_tb_media__DOT__basic_disk__2__pix 
                                    = VL_DIVS_III(32, 
                                                  (__Vfunc_tb_media__DOT__basic_disk__2__ofs 
                                                   - (IData)(0x36U)), 
                                                  ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__rgba)
                                                    ? 4U
                                                    : 3U));
                                __Vfunc_tb_media__DOT__basic_disk__2__x 
                                    = VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__pix, (IData)(0x280U));
                                __Vfunc_tb_media__DOT__basic_disk__2__y 
                                    = ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__top)
                                        ? VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__pix, (IData)(0x280U))
                                        : ((IData)(0x1dfU) 
                                           - VL_DIVS_III(32, __Vfunc_tb_media__DOT__basic_disk__2__pix, (IData)(0x280U))));
                                __Vfunc_tb_media__DOT__basic_disk__2__channel 
                                    = VL_MODDIVS_III(32, 
                                                     (__Vfunc_tb_media__DOT__basic_disk__2__ofs 
                                                      - (IData)(0x36U)), 
                                                     ((IData)(__Vfunc_tb_media__DOT__basic_disk__2__rgba)
                                                       ? 4U
                                                       : 3U));
                                if ((0U == __Vfunc_tb_media__DOT__basic_disk__2__channel)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = (0xffU & __Vfunc_tb_media__DOT__basic_disk__2__x);
                                } else if ((1U == __Vfunc_tb_media__DOT__basic_disk__2__channel)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = (0xffU & __Vfunc_tb_media__DOT__basic_disk__2__y);
                                } else if ((2U == __Vfunc_tb_media__DOT__basic_disk__2__channel)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__basic_disk__2__x 
                                            ^ __Vfunc_tb_media__DOT__basic_disk__2__y));
                                } else if ((3U == __Vfunc_tb_media__DOT__basic_disk__2__channel)) {
                                    __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout = 0xffU;
                                }
                            }
                        }
                    }
                }
                __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                    = __Vfunc_tb_media__DOT__basic_disk__2__Vfuncout;
                __Vfunc_tb_media__DOT__disk__0__c = 
                    VL_DIVS_III(32, (__Vfunc_tb_media__DOT__disk__0__shifted 
                                     - __Vfunc_tb_media__DOT__disk__0__base_lba), (IData)(8U));
                __Vfunc_tb_media__DOT__disk__0__ofs 
                    = ((VL_MULS_III(32, (IData)(0x1000U), 
                                    VL_DIVS_III(32, __Vfunc_tb_media__DOT__disk__0__c, (IData)(2U))) 
                        + VL_MULS_III(32, (IData)(0x200U), 
                                      VL_MODDIVS_III(32, 
                                                     (__Vfunc_tb_media__DOT__disk__0__shifted 
                                                      - __Vfunc_tb_media__DOT__disk__0__base_lba), (IData)(8U)))) 
                       + __Vfunc_tb_media__DOT__disk__0__i);
                if (((0U == VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__disk__0__c, (IData)(2U))) 
                     & VL_LTES_III(32, 0x36U, __Vfunc_tb_media__DOT__disk__0__ofs))) {
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                        = (0xffU & (~ (IData)(__Vfunc_tb_media__DOT__disk__0__Vfuncout)));
                }
            }
            if (VL_GTES_III(32, __Vfunc_tb_media__DOT__disk__0__l, 
                            (__Vfunc_tb_media__DOT__disk__0__base_lba 
                             + __Vfunc_tb_media__DOT__disk__0__wav_delta))) {
                __Vfunc_tb_media__DOT__disk__0__c = 
                    ((IData)(3U) + VL_DIVS_III(32, 
                                               (__Vfunc_tb_media__DOT__disk__0__l 
                                                - __Vfunc_tb_media__DOT__disk__0__base_lba), (IData)(8U)));
                __Vfunc_tb_media__DOT__disk__0__k = 0xffffffffU;
                if ((__Vfunc_tb_media__DOT__disk__0__c 
                     == __Vfunc_tb_media__DOT__disk__0__wav_start)) {
                    __Vfunc_tb_media__DOT__disk__0__k = 0U;
                }
                if ((__Vfunc_tb_media__DOT__disk__0__c 
                     == ((IData)(4U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__k = 1U;
                }
                if ((__Vfunc_tb_media__DOT__disk__0__c 
                     == ((IData)(2U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__k = 2U;
                }
                if ((__Vfunc_tb_media__DOT__disk__0__c 
                     == ((IData)(8U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__k = 3U;
                }
                if ((__Vfunc_tb_media__DOT__disk__0__c 
                     == ((IData)(6U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                    __Vfunc_tb_media__DOT__disk__0__k = 4U;
                }
                if (VL_TESTPLUSARGS_I(std::string{"multiwav"})) {
                    if ((__Vfunc_tb_media__DOT__disk__0__c 
                         == ((IData)(0x10U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__k = 0U;
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__c 
                         == ((IData)(0x14U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__k = 1U;
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__c 
                         == ((IData)(0x12U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__k = 2U;
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__c 
                         == ((IData)(0x18U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__k = 3U;
                    }
                    if ((__Vfunc_tb_media__DOT__disk__0__c 
                         == ((IData)(0x16U) + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                        __Vfunc_tb_media__DOT__disk__0__k = 4U;
                    }
                }
                if (VL_LTES_III(32, 0U, __Vfunc_tb_media__DOT__disk__0__k)) {
                    __Vfunc_tb_media__DOT__disk__0__ofs 
                        = ((VL_MULS_III(32, (IData)(0x1000U), __Vfunc_tb_media__DOT__disk__0__k) 
                            + VL_MULS_III(32, (IData)(0x200U), 
                                          VL_MODDIVS_III(32, 
                                                         (__Vfunc_tb_media__DOT__disk__0__l 
                                                          - __Vfunc_tb_media__DOT__disk__0__base_lba), (IData)(8U)))) 
                           + __Vfunc_tb_media__DOT__disk__0__i);
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0U;
                    if (((((((((0U == __Vfunc_tb_media__DOT__disk__0__ofs) 
                               | (1U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                              | (2U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                             | (3U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                            | (8U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                           | (9U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                          | (0xaU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                         | (0xbU == __Vfunc_tb_media__DOT__disk__0__ofs))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((0U == __Vfunc_tb_media__DOT__disk__0__ofs)
                                ? 0x52U : ((1U == __Vfunc_tb_media__DOT__disk__0__ofs)
                                            ? 0x49U
                                            : ((2U 
                                                == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                ? 0x46U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                    ? 0x46U
                                                    : 
                                                   ((8U 
                                                     == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                     ? 0x57U
                                                     : 
                                                    ((9U 
                                                      == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                      ? 0x41U
                                                      : 
                                                     ((0xaU 
                                                       == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                       ? 0x56U
                                                       : 0x45U)))))));
                    } else if (((((((((0xcU == __Vfunc_tb_media__DOT__disk__0__ofs) 
                                      | (0xdU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                     | (0xeU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                    | (0xfU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                   | (0x10U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                  | (0x14U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                 | (0x16U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                | (0x18U == __Vfunc_tb_media__DOT__disk__0__ofs))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((0xcU == __Vfunc_tb_media__DOT__disk__0__ofs)
                                ? 0x66U : ((0xdU == __Vfunc_tb_media__DOT__disk__0__ofs)
                                            ? 0x6dU
                                            : ((0xeU 
                                                == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                ? 0x74U
                                                : (
                                                   (0xfU 
                                                    == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                    ? 0x20U
                                                    : 
                                                   ((0x10U 
                                                     == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                     ? 0x10U
                                                     : 
                                                    ((0x14U 
                                                      == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                      ? 1U
                                                      : 
                                                     ((0x16U 
                                                       == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                       ? 2U
                                                       : 0x80U)))))));
                    } else if (((((((((0x19U == __Vfunc_tb_media__DOT__disk__0__ofs) 
                                      | (0x1cU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                     | (0x1dU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                    | (0x1eU == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                   | (0x20U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                  | (0x22U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                 | (0x24U == __Vfunc_tb_media__DOT__disk__0__ofs)) 
                                | (0x25U == __Vfunc_tb_media__DOT__disk__0__ofs))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = ((0x19U == __Vfunc_tb_media__DOT__disk__0__ofs)
                                ? 0xbbU : ((0x1cU == __Vfunc_tb_media__DOT__disk__0__ofs)
                                            ? 0U : 
                                           ((0x1dU 
                                             == __Vfunc_tb_media__DOT__disk__0__ofs)
                                             ? 0xeeU
                                             : ((0x1eU 
                                                 == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                 ? 2U
                                                 : 
                                                ((0x20U 
                                                  == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                  ? 4U
                                                  : 
                                                 ((0x22U 
                                                   == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                   ? 0x10U
                                                   : 
                                                  ((0x24U 
                                                    == __Vfunc_tb_media__DOT__disk__0__ofs)
                                                    ? 0x64U
                                                    : 0x61U)))))));
                    } else if ((0x26U == __Vfunc_tb_media__DOT__disk__0__ofs)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x74U;
                    } else if ((0x27U == __Vfunc_tb_media__DOT__disk__0__ofs)) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x61U;
                    }
                    if ((VL_LTES_III(32, 4U, __Vfunc_tb_media__DOT__disk__0__ofs) 
                         & VL_GTS_III(32, 8U, __Vfunc_tb_media__DOT__disk__0__ofs))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & VL_SHIFTR_III(8,32,32, 0x4024U, 
                                                     VL_MULS_III(32, (IData)(8U), 
                                                                 (__Vfunc_tb_media__DOT__disk__0__ofs 
                                                                  - (IData)(4U)))));
                    }
                    if ((VL_LTES_III(32, 0x28U, __Vfunc_tb_media__DOT__disk__0__ofs) 
                         & VL_GTS_III(32, 0x2cU, __Vfunc_tb_media__DOT__disk__0__ofs))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & VL_SHIFTR_III(8,32,32, 0x4000U, 
                                                     VL_MULS_III(32, (IData)(8U), 
                                                                 (__Vfunc_tb_media__DOT__disk__0__ofs 
                                                                  - (IData)(0x28U)))));
                    }
                    __Vtemp_12[0U] = 0x616c6964U;
                    __Vtemp_12[1U] = 0x76696e76U;
                    __Vtemp_12[2U] = 0x7761U;
                    if (((0x16U == __Vfunc_tb_media__DOT__disk__0__ofs) 
                         && VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_12)))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout = 1U;
                    }
                    if (VL_LTES_III(32, 0x2cU, __Vfunc_tb_media__DOT__disk__0__ofs)) {
                        __Vfunc_tb_media__DOT__audio_expected__3__index 
                            = VL_DIVS_III(32, (__Vfunc_tb_media__DOT__disk__0__ofs 
                                               - (IData)(0x2cU)), (IData)(4U));
                        __Vfunc_tb_media__DOT__audio_expected__3__left 
                            = (0xffffU & (VL_MULS_III(32, (IData)(0x11U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__audio_expected__3__index, (IData)(0x1000U))) 
                                          - (IData)(0x8000U)));
                        __Vfunc_tb_media__DOT__audio_expected__3__Vfuncout 
                            = (((~ (IData)(__Vfunc_tb_media__DOT__audio_expected__3__left)) 
                                << 0x10U) | (IData)(__Vfunc_tb_media__DOT__audio_expected__3__left));
                        __Vfunc_tb_media__DOT__disk__0__value 
                            = __Vfunc_tb_media__DOT__audio_expected__3__Vfuncout;
                        if (VL_GTES_III(32, __Vfunc_tb_media__DOT__disk__0__c, 
                                        ((IData)(0x10U) 
                                         + __Vfunc_tb_media__DOT__disk__0__wav_start))) {
                            __Vfunc_tb_media__DOT__disk__0__value 
                                = (0xff00ffU ^ __Vfunc_tb_media__DOT__disk__0__value);
                        }
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & (__Vfunc_tb_media__DOT__disk__0__value 
                                        >> (0x1fU & 
                                            VL_MULS_III(32, (IData)(8U), 
                                                        VL_MODDIVS_III(32, 
                                                                       (__Vfunc_tb_media__DOT__disk__0__ofs 
                                                                        - (IData)(0x2cU)), (IData)(4U))))));
                    }
                }
            }
        }
        vlSelfRef.tb_media__DOT__bd = __Vfunc_tb_media__DOT__disk__0__Vfuncout;
        if ((0x1ffU == vlSelfRef.tb_media__DOT__sd_pos)) {
            __Vdly__tb_media__DOT__reading = 0U;
        } else {
            __Vdly__tb_media__DOT__sd_pos = ((IData)(1U) 
                                             + vlSelfRef.tb_media__DOT__sd_pos);
        }
    } else if ((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__reading)) 
                      & (~ (IData)(vlSelfRef.tb_media__DOT__sd_ready))))) {
        __Vdly__tb_media__DOT__sd_done = 1U;
        __Vdly__tb_media__DOT__sd_ready = 1U;
    }
    if (((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
         & (IData)(vlSelfRef.tb_media__DOT__load_ready))) {
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[0U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = vlSelfRef.tb_media__DOT__addr;
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = vlSelfRef.tb_media__DOT__addr;
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_media__DOT__addr);
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        vlSelfRef.tb_media__DOT__bursts = ((IData)(1U) 
                                           + vlSelfRef.tb_media__DOT__bursts);
        __Vdly__tb_media__DOT__ack_delay = 5U;
        __Vdly__tb_media__DOT__load_ready = 0U;
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[1U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(1U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(1U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(1U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[2U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(2U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(2U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(2U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[3U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(3U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(3U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(3U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[4U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(4U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(4U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(4U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[5U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(5U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(5U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(5U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[6U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(6U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(6U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(6U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__data[7U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(7U) 
                                               + vlSelfRef.tb_media__DOT__addr);
                                        __Vfunc_tb_media__DOT__image_expected__4__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U))));
                                        __Vfunc_tb_media__DOT__image_expected__4__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__4__a, (IData)(0x140U));
                                        __Vfunc_tb_media__DOT__image_expected__4__b 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__x);
                                        __Vfunc_tb_media__DOT__image_expected__4__g 
                                            = (0xffU 
                                               & __Vfunc_tb_media__DOT__image_expected__4__y);
                                        __Vfunc_tb_media__DOT__image_expected__4__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_media__DOT__image_expected__4__x 
                                                  ^ __Vfunc_tb_media__DOT__image_expected__4__y));
                                        if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                            __Vfunc_tb_media__DOT__image_expected__4__r 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__r)));
                                            __Vfunc_tb_media__DOT__image_expected__4__g 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__g)));
                                            __Vfunc_tb_media__DOT__image_expected__4__b 
                                                = (0xffU 
                                                   & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__4__b)));
                                        }
                                        __Vfunc_tb_media__DOT__image_expected__4__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_media__DOT__image_expected__4__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_media__DOT__image_expected__4__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_media__DOT__image_expected__5__a 
                                        = ((IData)(7U) 
                                           + vlSelfRef.tb_media__DOT__addr);
                                    __Vfunc_tb_media__DOT__image_expected__5__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U)));
                                    __Vfunc_tb_media__DOT__image_expected__5__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_media__DOT__image_expected__5__a, (IData)(0x140U));
                                    __Vfunc_tb_media__DOT__image_expected__5__b 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__x);
                                    __Vfunc_tb_media__DOT__image_expected__5__g 
                                        = (0xffU & __Vfunc_tb_media__DOT__image_expected__5__y);
                                    __Vfunc_tb_media__DOT__image_expected__5__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_media__DOT__image_expected__5__x 
                                            ^ __Vfunc_tb_media__DOT__image_expected__5__y));
                                    if ((1U == (IData)(vlSelfRef.tb_media__DOT__selected))) {
                                        __Vfunc_tb_media__DOT__image_expected__5__r 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__r)));
                                        __Vfunc_tb_media__DOT__image_expected__5__g 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__g)));
                                        __Vfunc_tb_media__DOT__image_expected__5__b 
                                            = (0xffU 
                                               & (~ (IData)(__Vfunc_tb_media__DOT__image_expected__5__b)));
                                    }
                                    __Vfunc_tb_media__DOT__image_expected__5__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_media__DOT__image_expected__5__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_media__DOT__image_expected__5__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:43: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(7U) 
                                                + vlSelfRef.tb_media__DOT__addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 43, "", false);
        }
    }
    if (VL_LTS_III(32, 0U, vlSelfRef.tb_media__DOT__ack_delay)) {
        __Vdly__tb_media__DOT__ack_delay = (vlSelfRef.tb_media__DOT__ack_delay 
                                            - (IData)(1U));
        if ((1U == vlSelfRef.tb_media__DOT__ack_delay)) {
            __Vdly__tb_media__DOT__ack = 1U;
            __Vdly__tb_media__DOT__load_ready = 1U;
        }
    }
    if (vlSelfRef.tb_media__DOT__audio_flush) {
        __Vdly__tb_media__DOT__pcm_count = 0U;
        __Vdly__tb_media__DOT__held = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
             & (IData)(vlSelfRef.tb_media__DOT__pcm_ready))) {
            if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__pcm_pair 
                              != (([&]() {
                                        __Vfunc_tb_media__DOT__audio_expected__6__index 
                                            = vlSelfRef.tb_media__DOT__pcm_count;
                                        __Vfunc_tb_media__DOT__audio_expected__6__left 
                                            = (0xffffU 
                                               & (VL_MULS_III(32, (IData)(0x11U), 
                                                              VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__audio_expected__6__index, (IData)(0x1000U))) 
                                                  - (IData)(0x8000U)));
                                        __Vfunc_tb_media__DOT__audio_expected__6__Vfuncout 
                                            = (((~ (IData)(__Vfunc_tb_media__DOT__audio_expected__6__left)) 
                                                << 0x10U) 
                                               | (IData)(__Vfunc_tb_media__DOT__audio_expected__6__left));
                                    }(), __Vfunc_tb_media__DOT__audio_expected__6__Vfuncout) 
                                  ^ ((1U == (IData)(vlSelfRef.tb_media__DOT__audio_selected))
                                      ? 0xff00ffU : 0U)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:49: Assertion failed in %Ntb_media: fragmented WAV/sample/loop mismatch idx=%0d got=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_media__DOT__pcm_count,
                             32,vlSelfRef.tb_media__DOT__pcm_pair);
                VL_STOP_MT("sim/media\\tb_media.sv", 49, "", false);
            }
            __Vdly__tb_media__DOT__pcm_count = ((IData)(1U) 
                                                + vlSelfRef.tb_media__DOT__pcm_count);
        }
        if (VL_UNLIKELY((((((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
                            & (IData)(vlSelfRef.tb_media__DOT__held)) 
                           & (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error))) 
                          & ((~ (IData)(vlSelfRef.tb_media__DOT__pcm_valid)) 
                             | (vlSelfRef.tb_media__DOT__pcm_pair 
                                != vlSelfRef.tb_media__DOT__held_pcm)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:52: Assertion failed in %Ntb_media: PCM did not hold under backpressure\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 52, "", false);
        }
        __Vdly__tb_media__DOT__held = ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                                       & (~ (IData)(vlSelfRef.tb_media__DOT__pcm_ready)));
        vlSelfRef.tb_media__DOT__held_pcm = vlSelfRef.tb_media__DOT__pcm_pair;
    }
    __Vtemp_63[0U] = 0x616c6964U;
    __Vtemp_63[1U] = 0x76696e76U;
    __Vtemp_63[2U] = 0x7761U;
    __Vtemp_64[0U] = 0x6861696eU;
    __Vtemp_64[1U] = 0x6f727463U;
    __Vtemp_64[2U] = 0x7368U;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
                      & ((0U != (IData)(vlSelfRef.tb_media__DOT__image_error)) 
                         | (((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
                             & (! VL_TESTPLUSARGS_I(
                                                    VL_CVT_PACK_STR_NW(3, __Vtemp_63)))) 
                            & (! VL_TESTPLUSARGS_I(
                                                   VL_CVT_PACK_STR_NW(3, __Vtemp_64))))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:55: Assertion failed in %Ntb_media: media error BMP=%0# WAV=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_media__DOT__image_error),
                     8,vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error);
        VL_STOP_MT("sim/media\\tb_media.sv", 55, "", false);
    }
    vlSelfRef.tb_media__DOT__active_lba = __Vdly__tb_media__DOT__active_lba;
    vlSelfRef.tb_media__DOT__sd_pos = __Vdly__tb_media__DOT__sd_pos;
    vlSelfRef.tb_media__DOT__reading = __Vdly__tb_media__DOT__reading;
    vlSelfRef.tb_media__DOT__ack_delay = __Vdly__tb_media__DOT__ack_delay;
    vlSelfRef.tb_media__DOT__pcm_count = __Vdly__tb_media__DOT__pcm_count;
    vlSelfRef.tb_media__DOT__held = __Vdly__tb_media__DOT__held;
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__audio_selected = 0U;
        __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0U;
        __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0U;
        __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner = 0U;
        __Vdly__tb_media__DOT__read_start = 0U;
        vlSelfRef.tb_media__DOT__lba = 0U;
        __Vdly__tb_media__DOT__image_reads = 0U;
        __Vdly__tb_media__DOT__audio_reads = 0U;
    } else {
        if (vlSelfRef.tb_media__DOT__dut__DOT__audio_change) {
            vlSelfRef.tb_media__DOT__audio_selected 
                = vlSelfRef.tb_media__DOT__audio_requested;
        }
        __Vdly__tb_media__DOT__read_start = 0U;
        if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start) {
            __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 1U;
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT__aud_start) {
            __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 1U;
        }
        if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
             & (IData)(vlSelfRef.tb_media__DOT__sd_done))) {
            __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 0U;
        }
        if ((((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active)) 
              & (IData)(vlSelfRef.tb_media__DOT__sd_ready)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__read_start)))) {
            if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                 & (VL_GTS_III(32, 0x1f4U, VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x3e8U))) 
                    | (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending))))) {
                __Vdly__tb_media__DOT__audio_reads 
                    = ((IData)(1U) + vlSelfRef.tb_media__DOT__audio_reads);
                vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner = 1U;
                __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 1U;
                __Vdly__tb_media__DOT__read_start = 1U;
                vlSelfRef.tb_media__DOT__lba = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_audio;
                __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending) {
                __Vdly__tb_media__DOT__image_reads 
                    = ((IData)(1U) + vlSelfRef.tb_media__DOT__image_reads);
                vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner = 0U;
                __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 1U;
                __Vdly__tb_media__DOT__read_start = 1U;
                vlSelfRef.tb_media__DOT__lba = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_image;
                __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0U;
            }
        }
    }
    if (((IData)(vlSelfRef.tb_media__DOT__reset) | (IData)(vlSelfRef.tb_media__DOT__audio_flush))) {
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        vlSelfRef.tb_media__DOT__pcm_pair = 0U;
        vlSelfRef.tb_media__DOT__wav_done = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0U;
        vlSelfRef.tb_media__DOT__total = 0U;
    } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 1U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
            = vlSelfRef.tb_media__DOT__wav_bytes;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        vlSelfRef.tb_media__DOT__pcm_pair = 0U;
        vlSelfRef.tb_media__DOT__wav_done = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0U;
        vlSelfRef.tb_media__DOT__total = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 0U;
        if ((0xcU > vlSelfRef.tb_media__DOT__wav_bytes)) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 2U;
        }
    } else {
        if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid) 
             & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready))) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
                = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset);
        }
        if (((((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error)) 
               & (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
              & (0xbU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
             & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error 
                = (0x80U | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error));
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                            || (0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                           || (0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data;
                        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 1U;
                        if ((0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 2U;
                        } else {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((0x46464952U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__65__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                  [0U]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__65__Vfuncout)) 
                         | (0x45564157U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__66__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                  [8U]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__66__Vfuncout)))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if (((0xcULL > vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length 
                                   > (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length))))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 2U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
                            = (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length);
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)) 
                         & ((0x1ffffffffULL & (8ULL 
                                               + (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset)))) 
                            > (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end))))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 4U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data;
                        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 1U;
                        if ((7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 4U;
                        } else {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__67__Vfuncout 
                        = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                             [7U] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [6U] 
                                               << 0x10U)) 
                           | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                               [5U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                              [4U]));
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                        = __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__67__Vfuncout;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
                        = (1U & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                           [4U]);
                    if ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end 
                         > (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end)))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 4U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if ((0x20746d66U == ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__68__Vfuncout 
                                        = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                             [3U] << 0x18U) 
                                            | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [2U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [1U] 
                                               << 8U) 
                                              | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                              [0U]));
                                }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__68__Vfuncout))) {
                        if (((0x10U > ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__69__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                     [7U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [6U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [5U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                      [4U]));
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__69__Vfuncout)) 
                             | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen))) {
                            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 3U;
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                        } else {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 5U;
                        }
                    } else if ((0x61746164U == ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__70__Vfuncout 
                                        = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                             [3U] << 0x18U) 
                                            | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [2U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [1U] 
                                               << 8U) 
                                              | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                              [0U]));
                                }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__70__Vfuncout))) {
                        if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen) {
                            if (((0U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__71__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [7U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [6U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [5U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                        [4U]));
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__71__Vfuncout)) 
                                 | (0U != (3U & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                           [4U])))) {
                                vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 7U;
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                            } else {
                                vlSelfRef.tb_media__DOT__total 
                                    = VL_SHIFTR_III(32,32,32, 
                                                    ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__72__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                     [7U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [6U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [5U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                      [4U]));
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__72__Vfuncout), 2U);
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 9U;
                            }
                        } else {
                            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 6U;
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                        }
                    } else {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((0U == ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__73__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                  [4U]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__73__Vfuncout))
                                ? 3U : 7U);
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                               - (IData)(1U));
                        __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data;
                        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        __VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 1U;
                        if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 6U;
                        } else {
                            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((((((1U != ([&]() {
                                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__74__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                              [1U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [0U]);
                                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__74__Vfuncout))) 
                             | (2U != ([&]() {
                                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__75__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                              [3U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [2U]);
                                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__75__Vfuncout)))) 
                            | (0xbb80U != ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__76__Vfuncout 
                                                        = 
                                                        (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                           [7U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [6U] 
                                                             << 0x10U)) 
                                                         | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [5U] 
                                                             << 8U) 
                                                            | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                            [4U]));
                                                }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__76__Vfuncout))) 
                           | (0x2ee00U != ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__77__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [0xbU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [0xaU] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [9U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                        [8U]));
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__77__Vfuncout))) 
                          | (4U != ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__78__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                    [0xdU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [0xcU]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__78__Vfuncout)))) 
                         | (0x10U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__79__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__79__Vfuncout))))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 3U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((0U != vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)
                                ? 7U : ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd)
                                         ? 8U : 3U));
                    }
                } else if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                           - (IData)(1U));
                    if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)) {
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd)
                                ? 8U : 3U);
                    }
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 3U;
            }
        } else if ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                    = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                       - (IData)(1U));
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte)));
                if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xffff00U & __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data));
                } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xff00ffU & __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data) 
                              << 8U));
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xffffU & __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data) 
                              << 0x10U));
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs 
                        = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__sample_pairs);
                    vlSelfRef.tb_media__DOT__pcm_pair 
                        = (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data) 
                            << 0x18U) | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly);
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 1U;
                }
                if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)) {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xaU;
                }
            }
        } else if ((0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                       | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))) {
                vlSelfRef.tb_media__DOT__wav_done = 1U;
                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xbU;
            }
        } else {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 0xffU;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        }
    }
    vlSelfRef.tb_media__DOT__image_reads = __Vdly__tb_media__DOT__image_reads;
    vlSelfRef.tb_media__DOT__audio_reads = __Vdly__tb_media__DOT__audio_reads;
    vlSelfRef.tb_media__DOT__sd_ready = __Vdly__tb_media__DOT__sd_ready;
    vlSelfRef.tb_media__DOT__read_start = __Vdly__tb_media__DOT__read_start;
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending 
        = __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending 
        = __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    vlSelfRef.tb_media__DOT__cycle = __Vdly__tb_media__DOT__cycle;
    vlSelfRef.tb_media__DOT__sd_done = __Vdly__tb_media__DOT__sd_done;
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active 
        = __Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__sample_pairs 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    vlSelfRef.tb_media__DOT__wav_bytes = __Vdly__tb_media__DOT__wav_bytes;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_data 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache
        [vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos];
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    if (__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    }
    if (__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__state;
    if (vlSelfRef.tb_media__DOT__reset) {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 0U;
        vlSelfRef.tb_media__DOT__selected = 0U;
    } else if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        if (vlSelfRef.tb_media__DOT__catalog_ready) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__state 
                = ((0U == (IData)(vlSelfRef.tb_media__DOT__count))
                    ? 6U : 1U);
        }
    } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 4U;
    } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 6U;
        } else if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 5U;
        }
    } else if (((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                || (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))) {
        if ((((IData)(vlSelfRef.tb_media__DOT__select_request) 
              & ((IData)(vlSelfRef.tb_media__DOT__requested) 
                 < (IData)(vlSelfRef.tb_media__DOT__count))) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            vlSelfRef.tb_media__DOT__selected = vlSelfRef.tb_media__DOT__requested;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 1U;
        }
    } else {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 6U;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_media__DOT__count = __Vdly__tb_media__DOT__count;
    vlSelfRef.tb_media__DOT__pcm_ready = (0U == VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U)));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_ready = 
        (1U & (~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                  | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
                     & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)))));
    tb_media__DOT__dut__DOT__img_ready = (1U & (~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending) 
                                                   | ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                                      & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active)))));
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
           & (IData)(vlSelfRef.tb_media__DOT__sd_done));
    tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1 
        = ((IData)(vlSelfRef.tb_media__DOT__bv) & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active));
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_audio = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_image = 0U;
    } else {
        if (vlSelfRef.tb_media__DOT__dut__DOT__aud_start) {
            vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_audio 
                = vlSelfRef.tb_media__DOT__dut__DOT__aud_lba;
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start) {
            vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_image 
                = ((IData)(vlSelfRef.tb_media__DOT__catalog_ready)
                    ? vlSelfRef.tb_media__DOT__dut__DOT__img_lba
                    : vlSelfRef.tb_media__DOT__dut__DOT__cat_lba);
        }
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
    if (((IData)(vlSelfRef.tb_media__DOT__reset) | 
         (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))) {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
            = ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))
                ? 1U : 0U);
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
            = vlSelfRef.tb_media__DOT__dut__DOT__image_bytes;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel = 0U;
        __Vdly__tb_media__DOT__addr = 0U;
        vlSelfRef.tb_media__DOT__data[0U] = Vtb_media__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_media__DOT__data[1U] = Vtb_media__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_media__DOT__data[2U] = Vtb_media__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_media__DOT__data[3U] = Vtb_media__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_media__DOT__data[4U] = Vtb_media__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_media__DOT__data[5U] = Vtb_media__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_media__DOT__data[6U] = Vtb_media__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_media__DOT__data[7U] = Vtb_media__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_media__DOT__last = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done = 0U;
        __Vdly__tb_media__DOT__pixels = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0U;
        if (((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
             & (0x36U > vlSelfRef.tb_media__DOT__dut__DOT__image_bytes))) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0xaU;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
        }
    } else if ((((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error)) 
                 & (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                & (0x11U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error 
            = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
    } else if (((((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                        || (0x11U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                       || (0x1fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                      | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                     | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                    | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                   | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                  | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                 | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                       || (0x11U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                      || (0x1fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))))) {
            if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT____Vlvbound_h2fb5cc83__0 
                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_data;
                    if (VL_LIKELY(((0x35U >= (0x3fU 
                                              & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position))))) {
                        __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT____Vlvbound_h2fb5cc83__0;
                        __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 
                            = (0x3fU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                        __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 1U;
                    }
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                    if ((0x35U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position)) {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 2U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (((((0x4d42U != ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__48__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__48__Vfuncout))) 
                       | (0x28U > ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__49__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                     [0x11U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0x10U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0xfU] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                      [0xeU]));
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__49__Vfuncout))) 
                      | (1U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__50__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1bU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1aU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__50__Vfuncout)))) 
                     | (0U != ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__51__Vfuncout 
                                        = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                             [0x21U] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x20U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1fU] 
                                               << 8U) 
                                              | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                              [0x1eU]));
                                }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__51__Vfuncout)))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 8U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else if ((((((1U > ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__52__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0x15U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x14U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x13U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                        [0x12U]));
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__52__Vfuncout)) 
                               | (0x780U < ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__53__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                       [0x15U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x14U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                         [0x13U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                        [0x12U]));
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__53__Vfuncout))) 
                              | (1U > vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)) 
                             | (0x438U < vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)) 
                            | ((0x18U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__54__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__54__Vfuncout))) 
                               & (0x20U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__55__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__55__Vfuncout)))))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 9U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else if ((((0x36U > ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__56__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xdU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xcU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xbU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                  [0xaU]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__56__Vfuncout)) 
                             | (0x100000U < ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__57__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xdU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xcU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0xbU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                  [0xaU]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__57__Vfuncout))) 
                            | ((QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length)) 
                               < vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0xaU;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else {
                    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__58__Vfuncout 
                        = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                             [0xdU] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xcU] 
                                                 << 0x10U)) 
                           | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                               [0xbU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                              [0xaU]));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
                        = __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__58__Vfuncout;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
                        = (0x7ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height);
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
                        = (((IData)(0x1e0U) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width)) 
                           >= ((IData)(0x280U) * (0x7ffU 
                                                  & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 3U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
                        = (0x7ffU & ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__59__Vfuncout 
                                    = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                         [0x15U] << 0x18U) 
                                        | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                           [0x14U] 
                                           << 0x10U)) 
                                       | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                           [0x13U] 
                                           << 8U) | 
                                          vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                          [0x12U]));
                            }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__59__Vfuncout));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
                        = (0x20U == ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__60__Vfuncout 
                                    = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                        [0x1dU] << 8U) 
                                       | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0x1cU]);
                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__60__Vfuncout)));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
                        = (1U & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                 [0x19U] >> 7U));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
                        = (3U & ((0x1ffcU & ((IData)(3U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes))) 
                                 - (([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__61__Vfuncout 
                                            = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0x15U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0x14U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0x13U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                  [0x12U]));
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__61__Vfuncout) 
                                    * ((0x20U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__62__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                      [0x1dU] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                     [0x1cU]);
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__62__Vfuncout)))
                                        ? 4U : 3U))));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 4U;
            } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited) {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0x280U;
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
                            = ((0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled));
                    } else {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
                            = ((0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled));
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0x1e0U;
                    }
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad 
                    = (0x3ffU & (((IData)(0x280U) - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w)) 
                                 >> 1U));
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
                    = (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  ((IData)(0x1e0U) 
                                                   - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U)
                                  : (((IData)(0x1e0U) 
                                      - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)) 
                                     - VL_SHIFTR_III(32,32,32, 
                                                     ((IData)(0x1e0U) 
                                                      - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U))));
                if ((0U != ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                             ? VL_SHIFTR_III(32,32,32, 
                                             ((IData)(0x1e0U) 
                                              - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U)
                             : (((IData)(0x1e0U) - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)) 
                                - VL_SHIFTR_III(32,32,32, 
                                                ((IData)(0x1e0U) 
                                                 - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)), 1U))))) {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid) {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                    if ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                         >= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length)) {
                        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 7U;
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                    } else if ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                                >= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset)) {
                        if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) {
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                = (3U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left) 
                                         - (IData)(1U)));
                            if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) {
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue 
                                = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_data;
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 1U;
                        } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green 
                                = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_data;
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
                                = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba)
                                    ? 3U : 0U);
                            if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba)))) {
                                if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)) 
                                     == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width))) {
                                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
                                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
                                    if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding))) {
                                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                                    }
                                } else {
                                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)));
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)) 
                                 == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width))) {
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
                                if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding))) {
                                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                                }
                            } else {
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
                                    = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)));
                            }
                        }
                    }
                }
            } else if ((((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows) 
                         < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)) 
                        & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y) 
                           == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y)))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0U;
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
            }
        }
    } else if (((((((((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
                      | (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                     | (0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                    | (0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                   | (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                  | (0x10U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                 | (0xcU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                | (0xdU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0U;
            __Vdly__tb_media__DOT__addr = (0x3ffffU 
                                           & (VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y), 8U) 
                                              + VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y), 6U)));
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 9U;
        } else if ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xaU;
        } else if ((0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            __Vdly__tb_media__DOT__pixels = ((IData)(1U) 
                                             + vlSelfRef.tb_media__DOT__pixels);
            if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                                 + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width)));
            }
            if ((1U & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel))) {
                VL_ASSIGNSEL_WI(256,32,(0xe0U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel) 
                                                 << 4U)), vlSelfRef.tb_media__DOT__data, 
                                (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565) 
                                  << 0x10U) | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel)));
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565;
            }
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x)));
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel)));
            if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
                    = ((0x27fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x))
                        ? 0xcU : ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
                                   ? 0xbU : 9U));
                if ((((0x1dfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                      & (0x27fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x))) 
                     & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished)))) {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0x1e0U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
                } else {
                    __Vdly__tb_media__DOT__last = (
                                                   (0x1dfU 
                                                    == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                                                   & (0x27fU 
                                                      == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x)));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xfU;
                }
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
                        ? 0xbU : 9U);
            }
        } else if ((0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                 >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w))) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                                 - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w)));
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x)));
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 9U;
            }
        } else if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__load_ready) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x10U;
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__ack) {
                if (vlSelfRef.tb_media__DOT__last) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x11U;
                } else {
                    __Vdly__tb_media__DOT__addr = (0x3ffffU 
                                                   & ((IData)(8U) 
                                                      + vlSelfRef.tb_media__DOT__addr));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
                }
            }
        } else if ((0xcU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)));
            if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row) {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished)
                        ? 8U : ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad))
                                 ? 8U : 6U));
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows)));
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows)) 
                     >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h))) {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
                        = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                                     + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height)));
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xdU;
                }
            }
        } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                    >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
                = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                             - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)));
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y)));
        } else {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                = (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y) 
                    == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y))
                    ? 8U : 0xeU);
        }
    } else if ((0xeU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
        if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y)) 
             < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y)));
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 6U;
        } else {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 1U;
            if ((0x1e0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))) {
                __Vdly__tb_media__DOT__last = 1U;
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xfU;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 1U;
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
            }
        }
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0xffU;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__aud_lba = __Vdly__tb_media__DOT__dut__DOT__aud_lba;
    vlSelfRef.tb_media__DOT__dut__DOT__aud_start = __Vdly__tb_media__DOT__dut__DOT__aud_start;
    vlSelfRef.tb_media__DOT__dut__DOT__aud_done = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2) 
                                                   & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_done = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                         & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_bv = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1) 
                                                 & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_bv = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                       & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__img_lba = __Vdly__tb_media__DOT__dut__DOT__img_lba;
    vlSelfRef.tb_media__DOT__dut__DOT__cat_lba = __Vdly__tb_media__DOT__dut__DOT__cat_lba;
    vlSelfRef.tb_media__DOT__catalog_ready = __Vdly__tb_media__DOT__catalog_ready;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error;
    vlSelfRef.tb_media__DOT__ack = __Vdly__tb_media__DOT__ack;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    vlSelfRef.tb_media__DOT__dut__DOT__image_bytes 
        = __Vdly__tb_media__DOT__dut__DOT__image_bytes;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    vlSelfRef.tb_media__DOT__last = __Vdly__tb_media__DOT__last;
    vlSelfRef.tb_media__DOT__pixels = __Vdly__tb_media__DOT__pixels;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_data 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache
        [vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos];
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    vlSelfRef.tb_media__DOT__load_ready = __Vdly__tb_media__DOT__load_ready;
    vlSelfRef.tb_media__DOT__addr = __Vdly__tb_media__DOT__addr;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_ready));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_done));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_bv));
    if (vlSelfRef.tb_media__DOT__catalog_ready) {
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready 
            = tb_media__DOT__dut__DOT__img_ready;
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done 
            = tb_media__DOT__dut__DOT__img_done;
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid 
            = tb_media__DOT__dut__DOT__img_bv;
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
            = vlSelfRef.tb_media__DOT__dut__DOT__img_start;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start 
            = vlSelfRef.tb_media__DOT__dut__DOT__cat_start;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y 
        = (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row)) 
           & (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
               >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad)) 
              & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x) 
                 < (0x3ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w) 
                              + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad))))));
    vlSelfRef.tb_media__DOT__image_error = ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_error))
                                             ? (((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb_media__DOT__count)))
                                                 ? 5U
                                                 : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error))
                                             : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__cat_error));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done) 
           | (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end 
        = ((IData)(vlSelfRef.tb_media__DOT__reset) ? 0ULL
            : (0x1ffffffffULL & (VL_EXTEND_QI(33,32, 
                                              ([&]() {
                            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__47__Vfuncout 
                                = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                     [0xdU] << 0x18U) 
                                    | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0xcU] << 0x10U)) 
                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0xbU] << 8U) 
                                      | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                      [0xaU]));
                        }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__47__Vfuncout)) 
                                 + ((QData)((IData)(
                                                    (0x1ffcU 
                                                     & ((IData)(3U) 
                                                        + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes))))) 
                                    * (QData)((IData)(
                                                      (0x7ffU 
                                                       & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)))))));
    if (vlSelfRef.tb_media__DOT__reset) {
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor = 1U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = 0ULL;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0U;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 0U;
        if (((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 1U;
            if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited) {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                    = ((IData)(0x280U) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height));
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
            } else {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                    = ((IData)(0x1e0U) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width));
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
            }
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = 0ULL;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0U;
        } else if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift;
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem 
                = (0x1ffffffffULL & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take)
                                      ? (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
                                         - (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor)))
                                      : vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial));
            if ((0x1fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count))) {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift;
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0U;
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 1U;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count)));
            }
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
            ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q)
            : 0U);
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)));
    if (__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
        = __Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
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
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take));
}
