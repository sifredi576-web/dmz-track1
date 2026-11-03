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
    CData/*4:0*/ __Vtask_tb_media__DOT__choose__9__slot;
    __Vtask_tb_media__DOT__choose__9__slot = 0;
    CData/*4:0*/ __Vtask_tb_media__DOT__choose__10__slot;
    __Vtask_tb_media__DOT__choose__10__slot = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/media\tb_media.sv", 
                                         66);
    vlSelfRef.tb_media__DOT__reset = 0U;
    while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_media.dut.images.state))", 
                                                             "sim/media\tb_media.sv", 
                                                             66);
    }
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"platform"})))) {
        __Vtemp_1[0U] = 0x72726f72U;
        __Vtemp_1[1U] = 0x63726365U;
        __Vtemp_1[2U] = 0x6e666967U;
        __Vtemp_1[3U] = 0x636fU;
        __Vtemp_2[0U] = 0x72726f72U;
        __Vtemp_2[1U] = 0x63726365U;
        __Vtemp_2[2U] = 0x6e666967U;
        __Vtemp_2[3U] = 0x636fU;
        if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_media__DOT__platform_found)) 
                                 | ((IData)(vlSelfRef.tb_media__DOT__platform_ready) 
                                    == VL_TESTPLUSARGS_I(
                                                         VL_CVT_PACK_STR_NW(4, __Vtemp_1)))) 
                                | (((0U == ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error))
                                             ? 1U : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error)))
                                     ? 0U : ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error))
                                              ? 1U : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error))) 
                                   != (VL_TESTPLUSARGS_I(
                                                         VL_CVT_PACK_STR_NW(4, __Vtemp_2))
                                        ? 7U : 0U))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:69: Assertion failed in %Ntb_media: configuration bootstrap found=%0# valid=%0# error=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),1,(IData)(vlSelfRef.tb_media__DOT__platform_found),
                         1,vlSelfRef.tb_media__DOT__platform_ready,
                         8,((0U == ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error))
                                     ? 1U : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error)))
                             ? 0U : ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error))
                                      ? 1U : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error))));
            VL_STOP_MT("sim/media\\tb_media.sv", 69, "", false);
        }
        VL_WRITEF_NX("PASS configuration read before media, CRC and fallback\n",0);
    }
    if (VL_UNLIKELY((((((2U != (IData)(vlSelfRef.tb_media__DOT__count)) 
                        | ((IData)(vlSelfRef.tb_media__DOT__wav_found) 
                           == VL_TESTPLUSARGS_I(std::string{"nowav"}))) 
                       | ((! VL_TESTPLUSARGS_I(std::string{"nowav"})) 
                          & (0x402cU != vlSelfRef.tb_media__DOT__wav_bytes))) 
                      | (0x4b00U != vlSelfRef.tb_media__DOT__bursts))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:72: Assertion failed in %Ntb_media: catalog/image count=%0# wav=%0# bursts=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     6,(IData)(vlSelfRef.tb_media__DOT__count),
                     1,vlSelfRef.tb_media__DOT__wav_found,
                     32,vlSelfRef.tb_media__DOT__bursts);
        VL_STOP_MT("sim/media\\tb_media.sv", 72, "", false);
    }
    __Vtask_tb_media__DOT__choose__7__slot = 1U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         63);
    vlSelfRef.tb_media__DOT__bursts = 0U;
    vlSelfRef.tb_media__DOT__requested = __Vtask_tb_media__DOT__choose__7__slot;
    vlSelfRef.tb_media__DOT__select_request = 1U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         63);
    vlSelfRef.tb_media__DOT__select_request = 0U;
    while ((1U & (~ ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                     & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h169934e5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
    }
    while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_media.dut.images.state))", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
    }
    if (VL_UNLIKELY((((0x4b00U != vlSelfRef.tb_media__DOT__bursts) 
                      | (0x4b000U != vlSelfRef.tb_media__DOT__pixels))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:73: Assertion failed in %Ntb_media: second image frame incomplete\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_media.sv", 73, "", false);
    }
    __Vtask_tb_media__DOT__choose__8__slot = 0U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         63);
    vlSelfRef.tb_media__DOT__bursts = 0U;
    vlSelfRef.tb_media__DOT__requested = __Vtask_tb_media__DOT__choose__8__slot;
    vlSelfRef.tb_media__DOT__select_request = 1U;
    co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_media.clk)", 
                                                         "sim/media\tb_media.sv", 
                                                         63);
    vlSelfRef.tb_media__DOT__select_request = 0U;
    while ((1U & (~ ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                     & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h169934e5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
    }
    while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (3'h5 == tb_media.dut.images.state))", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
    }
    if (VL_UNLIKELY((((0x4b00U != vlSelfRef.tb_media__DOT__bursts) 
                      | (0U == vlSelfRef.tb_media__DOT__image_reads))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:74: Assertion failed in %Ntb_media: image reload progress\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_media.sv", 74, "", false);
    }
    __Vtemp_3[0U] = 0x616c6964U;
    __Vtemp_3[1U] = 0x76696e76U;
    __Vtemp_3[2U] = 0x7761U;
    if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_3))) {
        if (VL_UNLIKELY((((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
                          | (0U != vlSelfRef.tb_media__DOT__pcm_count))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:75: Assertion failed in %Ntb_media: bad WAV must stop without harming gallery\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 75, "", false);
        }
    } else {
        __Vtemp_4[0U] = 0x6861696eU;
        __Vtemp_4[1U] = 0x6f727463U;
        __Vtemp_4[2U] = 0x7368U;
        if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_4))) {
            if (VL_UNLIKELY((((0x87U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
                              | VL_LTS_III(32, 0x3f5U, vlSelfRef.tb_media__DOT__pcm_count))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:76: Assertion failed in %Ntb_media: short FAT chain must stop audio\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/media\\tb_media.sv", 76, "", false);
            }
        } else if (VL_TESTPLUSARGS_I(std::string{"nowav"})) {
            if (VL_UNLIKELY((((0U != vlSelfRef.tb_media__DOT__audio_reads) 
                              | (0U != vlSelfRef.tb_media__DOT__pcm_count))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:77: Assertion failed in %Ntb_media: missing WAV must not read audio\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/media\\tb_media.sv", 77, "", false);
            }
        } else if (VL_UNLIKELY(((((2U > vlSelfRef.tb_media__DOT__loops) 
                                  | (0x1000U != vlSelfRef.tb_media__DOT__total)) 
                                 | (0U == vlSelfRef.tb_media__DOT__audio_reads))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:78: Assertion failed in %Ntb_media: loop/concurrent progress\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 78, "", false);
        }
    }
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"paired"})))) {
        vlSelfRef.tb_media__DOT__paired = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             80);
        if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_found)) 
                                | (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_index))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:81: Assertion failed in %Ntb_media: first filename match\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 81, "", false);
        }
        __Vtask_tb_media__DOT__choose__9__slot = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
        vlSelfRef.tb_media__DOT__bursts = 0U;
        vlSelfRef.tb_media__DOT__requested = __Vtask_tb_media__DOT__choose__9__slot;
        vlSelfRef.tb_media__DOT__select_request = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
        vlSelfRef.tb_media__DOT__select_request = 0U;
        while ((1U & (~ ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                         & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))))) {
            co_await vlSelfRef.__VtrigSched_h169934e5__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 63);
        }
        while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (3'h5 == tb_media.dut.images.state))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 63);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             82);
        if (VL_UNLIKELY(((1U & (((0U != (IData)(vlSelfRef.tb_media__DOT__audio_selected)) 
                                 | (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_found))) 
                                | (1U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_index))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:83: Assertion failed in %Ntb_media: precommit or filename match\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 83, "", false);
        }
        vlSelfRef.tb_media__DOT__frame_swaps = 1U;
        while ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)))) {
            co_await vlSelfRef.__VtrigSched_he9dec02e__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_media.audio_flush)", 
                                                                 "sim/media\tb_media.sv", 
                                                                 84);
        }
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 84);
        }
        while ((1U & (~ ((1U == (IData)(vlSelfRef.tb_media__DOT__audio_selected)) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h8dcd73a7__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((4'h1 == tb_media.audio_selected) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 84);
        }
        __Vtask_tb_media__DOT__choose__10__slot = 0U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
        vlSelfRef.tb_media__DOT__bursts = 0U;
        vlSelfRef.tb_media__DOT__requested = __Vtask_tb_media__DOT__choose__10__slot;
        vlSelfRef.tb_media__DOT__select_request = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             63);
        vlSelfRef.tb_media__DOT__select_request = 0U;
        while ((1U & (~ ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                         & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))))) {
            co_await vlSelfRef.__VtrigSched_h169934e5__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 63);
        }
        while ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            co_await vlSelfRef.__VtrigSched_h6aad0e7d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (3'h5 == tb_media.dut.images.state))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 63);
        }
        vlSelfRef.tb_media__DOT__frame_swaps = 2U;
        while ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)))) {
            co_await vlSelfRef.__VtrigSched_he9dec02e__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_media.audio_flush)", 
                                                                 "sim/media\tb_media.sv", 
                                                                 85);
        }
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 85);
        }
        while ((1U & (~ ((0U == (IData)(vlSelfRef.tb_media__DOT__audio_selected)) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h8c9c9318__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((4'h0 == tb_media.audio_selected) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 85);
        }
        VL_WRITEF_NX("PASS paired FAT lookup, commit gating, both track directions, exact PCM after flush\n",0);
        VL_FINISH_MT("sim/media\\tb_media.sv", 86, "");
    }
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"multiwav"})))) {
        if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_media__DOT__wav_count))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:89: Assertion failed in %Ntb_media: WAV index count\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 89, "", false);
        }
        vlSelfRef.tb_media__DOT__browse_query = 0x21U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             90);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             90);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             90);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             90);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             90);
        if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_media__DOT__browse_valid)) 
                                 | (0x21U != (IData)(vlSelfRef.tb_media__DOT__browse_tag))) 
                                | (0x202020324f4d4544ULL 
                                   != vlSelfRef.tb_media__DOT__browse_name)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:91: Assertion failed in %Ntb_media: WAV metadata query\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 91, "", false);
        }
        while ((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
            co_await vlSelfRef.__VtrigSched_h2ec6dfc1__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (4'h3 == tb_media.dut.audio.file_stream.state))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 93);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             93);
        vlSelfRef.tb_media__DOT__audio_requested = 1U;
        vlSelfRef.tb_media__DOT__audio_select = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             94);
        vlSelfRef.tb_media__DOT__audio_select = 0U;
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 94);
        }
        while ((1U & (~ ((1U <= vlSelfRef.tb_media__DOT__loops) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h69bb0bc8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 94);
        }
        vlSelfRef.tb_media__DOT__browse_query = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             95);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             95);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             95);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             95);
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             95);
        if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_media__DOT__browse_valid)) 
                                 | (1U != (IData)(vlSelfRef.tb_media__DOT__browse_tag))) 
                                | (0x2020202020424349ULL 
                                   != vlSelfRef.tb_media__DOT__browse_name)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:96: Assertion failed in %Ntb_media: BMP metadata query\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 96, "", false);
        }
        while ((1U & (~ ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                         & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))))))) {
            co_await vlSelfRef.__VtrigSched_h357ffed8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 99);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             99);
        vlSelfRef.tb_media__DOT__audio_requested = 0U;
        vlSelfRef.tb_media__DOT__audio_select = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             100);
        vlSelfRef.tb_media__DOT__audio_select = 0U;
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 100);
        }
        while ((1U & (~ ((1U <= vlSelfRef.tb_media__DOT__loops) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h69bb0bc8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 100);
        }
        while ((1U & (~ ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                         & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))))))) {
            co_await vlSelfRef.__VtrigSched_h357ffed8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 99);
        }
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             99);
        vlSelfRef.tb_media__DOT__audio_requested = 0U;
        vlSelfRef.tb_media__DOT__audio_select = 1U;
        co_await vlSelfRef.__VtrigSched_h4fe65f05__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_media.clk)", 
                                                             "sim/media\tb_media.sv", 
                                                             100);
        vlSelfRef.tb_media__DOT__audio_select = 0U;
        while (vlSelfRef.tb_media__DOT__audio_flush) {
            co_await vlSelfRef.__VtrigSched_hb0d36602__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ tb_media.audio_flush))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 100);
        }
        while ((1U & (~ ((1U <= vlSelfRef.tb_media__DOT__loops) 
                         & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count))))) {
            co_await vlSelfRef.__VtrigSched_h69bb0bc8__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))", 
                                                                 "sim/media\tb_media.sv", 
                                                                 100);
        }
        VL_WRITEF_NX("PASS multi-WAV metadata, exact new-track samples, outstanding SD cancellation, backpressure switching and same-file restart\n",0);
    }
    VL_WRITEF_NX("PASS shared FAT/SD: catalog BMP+WAV, 3 complete images/921600 pixels, fragmented WAV loops and exact stereo samples, concurrent arbitration/backpressure\n",0);
    VL_FINISH_MT("sim/media\\tb_media.sv", 104, "");
}

VL_INLINE_OPT VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__1(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xe8d4a51000ULL, 
                                         nullptr, "sim/media\tb_media.sv", 
                                         106);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:106: Assertion failed in %Ntb_media: media timeout image=%0# wav=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 8,((IData)(vlSelfRef.tb_media__DOT__catalog_ready)
                     ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)
                     : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)),
                 8,(IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state));
    VL_STOP_MT("sim/media\\tb_media.sv", 106, "", false);
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
    CData/*0:0*/ __Vtrigprevexpr_h34e52112__0;
    __Vtrigprevexpr_h34e52112__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h19fb2b7d__0;
    __Vtrigprevexpr_h19fb2b7d__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h18ab4be8__0;
    __Vtrigprevexpr_h18ab4be8__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb6f197cf__0;
    __Vtrigprevexpr_hb6f197cf__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hfe0cc398__0;
    __Vtrigprevexpr_hfe0cc398__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb1b7b8a8__0;
    __Vtrigprevexpr_hb1b7b8a8__0 = 0;
    // Body
    __Vtrigprevexpr_hfa9ac863__0 = (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state));
    __Vtrigprevexpr_h8eaeeabb__0 = ((5U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                                    & (6U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)));
    __Vtrigprevexpr_h34e52112__0 = (1U & (~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)));
    __Vtrigprevexpr_h19fb2b7d__0 = ((1U == (IData)(vlSelfRef.tb_media__DOT__audio_selected)) 
                                    & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count));
    __Vtrigprevexpr_h18ab4be8__0 = ((0U == (IData)(vlSelfRef.tb_media__DOT__audio_selected)) 
                                    & VL_LTS_III(32, 0x1194U, vlSelfRef.tb_media__DOT__pcm_count));
    __Vtrigprevexpr_hb6f197cf__0 = (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state));
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
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.tb_media__DOT__audio_flush) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__audio_flush__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(__Vtrigprevexpr_h34e52112__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h34e52112__1)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(__Vtrigprevexpr_h19fb2b7d__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h19fb2b7d__1)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(__Vtrigprevexpr_h18ab4be8__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h18ab4be8__1)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(__Vtrigprevexpr_hb6f197cf__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hb6f197cf__1)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(__Vtrigprevexpr_hfe0cc398__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_hfe0cc398__1)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(__Vtrigprevexpr_hb1b7b8a8__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_hb1b7b8a8__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__clk__0 
        = vlSelfRef.tb_media__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_hfa9ac863__1 = __Vtrigprevexpr_hfa9ac863__0;
    vlSelfRef.__Vtrigprevexpr_h8eaeeabb__1 = __Vtrigprevexpr_h8eaeeabb__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_media__DOT__audio_flush__0 
        = vlSelfRef.tb_media__DOT__audio_flush;
    vlSelfRef.__Vtrigprevexpr_h34e52112__1 = __Vtrigprevexpr_h34e52112__0;
    vlSelfRef.__Vtrigprevexpr_h19fb2b7d__1 = __Vtrigprevexpr_h19fb2b7d__0;
    vlSelfRef.__Vtrigprevexpr_h18ab4be8__1 = __Vtrigprevexpr_h18ab4be8__0;
    vlSelfRef.__Vtrigprevexpr_hb6f197cf__1 = __Vtrigprevexpr_hb6f197cf__0;
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
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_media___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtb_media__ConstPool__TABLE_hadd61ea7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_media__ConstPool__TABLE_h79cf329d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_media__ConstPool__TABLE_hb9b7bc7b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_media__ConstPool__TABLE_hd75a4263_0;

VL_INLINE_OPT void Vtb_media___024root___nba_sequent__TOP__0(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___nba_sequent__TOP__0\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_media__DOT__dut__DOT__browse_bytes;
    tb_media__DOT__dut__DOT__browse_bytes = 0;
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
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__old;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__old = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__data;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__data = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__old;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__old = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__data;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__data = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value;
    __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__tmp = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__tmp = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__tmp = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__tmp = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__45__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__46__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__46__lba = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__47__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__48__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__48__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__49__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__49__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__50__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__50__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__51__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__52__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__53__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__54__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__55__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__55__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__56__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__57__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__57__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__58__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__59__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__60__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__60__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__61__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__62__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__63__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__63__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__64__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__64__lba = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__65__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__65__lba = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__66__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__66__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__tmp = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__a = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__tmp = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__a = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__75__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__75__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__a = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__tmp = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__a = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__tmp = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__a = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__87__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__87__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__a = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g = 0;
    IData/*31:0*/ __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__91__lba;
    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__91__lba = 0;
    SData/*10:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__a;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__a = 0;
    SData/*10:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g = 0;
    SData/*10:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__a;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__a = 0;
    SData/*10:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__launch;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__launch = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__config_start;
    __Vdly__tb_media__DOT__dut__DOT__config_start = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0;
    IData/*20:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = 0;
    IData/*20:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase = 0;
    SData/*15:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start = 0;
    CData/*5:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 0;
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
    CData/*4:0*/ __Vdly__tb_media__DOT__wav_count;
    __Vdly__tb_media__DOT__wav_count = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__img_start;
    __Vdly__tb_media__DOT__dut__DOT__img_start = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__loops;
    __Vdly__tb_media__DOT__loops = 0;
    CData/*3:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    __VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0;
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
    SData/*15:0*/ __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_44;
    // Body
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_name 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_name;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_scan 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pair_found 
        = vlSelfRef.tb_media__DOT__dut__DOT__pair_found;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved;
    __VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0U;
    vlSelfRef.__Vdly__tb_media__DOT__read_start = vlSelfRef.tb_media__DOT__read_start;
    vlSelfRef.__Vdly__tb_media__DOT__image_reads = vlSelfRef.tb_media__DOT__image_reads;
    vlSelfRef.__Vdly__tb_media__DOT__audio_reads = vlSelfRef.tb_media__DOT__audio_reads;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending 
        = vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__pending;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle 
        = vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__settle;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0U;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_addr 
        = vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_last 
        = vlSelfRef.tb_media__DOT__dut__DOT__raw_load_last;
    vlSelfRef.__Vdly__tb_media__DOT__pixels = vlSelfRef.tb_media__DOT__pixels;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0U;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__lookup_wait 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__lookup_wait;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state;
    __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase;
    vlSelfRef.__Vdly__tb_media__DOT__ack = vlSelfRef.tb_media__DOT__ack;
    vlSelfRef.__Vdly__tb_media__DOT__active_lba = vlSelfRef.tb_media__DOT__active_lba;
    vlSelfRef.__Vdly__tb_media__DOT__sd_pos = vlSelfRef.tb_media__DOT__sd_pos;
    vlSelfRef.__Vdly__tb_media__DOT__reading = vlSelfRef.tb_media__DOT__reading;
    vlSelfRef.__Vdly__tb_media__DOT__sd_ready = vlSelfRef.tb_media__DOT__sd_ready;
    vlSelfRef.__Vdly__tb_media__DOT__ack_delay = vlSelfRef.tb_media__DOT__ack_delay;
    vlSelfRef.__Vdly__tb_media__DOT__load_ready = vlSelfRef.tb_media__DOT__load_ready;
    vlSelfRef.__Vdly__tb_media__DOT__pcm_count = vlSelfRef.tb_media__DOT__pcm_count;
    vlSelfRef.__Vdly__tb_media__DOT__held = vlSelfRef.tb_media__DOT__held;
    vlSelfRef.__Vdly__tb_media__DOT__cycle = vlSelfRef.tb_media__DOT__cycle;
    vlSelfRef.__Vdly__tb_media__DOT__sd_done = vlSelfRef.tb_media__DOT__sd_done;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0U;
    vlSelfRef.__Vdly__tb_media__DOT__wav_bytes = vlSelfRef.tb_media__DOT__wav_bytes;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__image_bytes 
        = vlSelfRef.tb_media__DOT__dut__DOT__image_bytes;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__signature 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__signature;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__partition_start 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__after_read;
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
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0U;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0U;
    vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster;
    vlSelfRef.__Vdly__tb_media__DOT__count = vlSelfRef.tb_media__DOT__count;
    vlSelfRef.__Vdly__tb_media__DOT__name = vlSelfRef.tb_media__DOT__name;
    __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0U;
    __Vdly__tb_media__DOT__dut__DOT__fat16 = vlSelfRef.tb_media__DOT__dut__DOT__fat16;
    __Vdly__tb_media__DOT__wav_count = vlSelfRef.tb_media__DOT__wav_count;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_catalog_ready 
        = vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__img_start = vlSelfRef.tb_media__DOT__dut__DOT__img_start;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_start 
        = vlSelfRef.tb_media__DOT__dut__DOT__aud_start;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_lba 
        = vlSelfRef.tb_media__DOT__dut__DOT__aud_lba;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__launch 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__launch;
    __Vdly__tb_media__DOT__loops = vlSelfRef.tb_media__DOT__loops;
    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster;
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining;
    __Vdly__tb_media__DOT__dut__DOT__config_start = vlSelfRef.tb_media__DOT__dut__DOT__config_start;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state;
    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__held_image 
        = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_image;
    if (vlSelfRef.tb_media__DOT__dut__DOT__config_bv) {
        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 1U;
    }
    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid) {
        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 1U;
    }
    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_bv) {
        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 1U;
    }
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_start = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_lba = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 0U;
        __Vdly__tb_media__DOT__loops = 0U;
        __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__held_image = 0U;
    } else {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_start = 0U;
        if (((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                = vlSelfRef.tb_media__DOT__wav_bytes;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0U;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_media__DOT__wav_bytes))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 7U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__cancel) 
                    & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__aud_start))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__aud_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
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
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_ready) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index));
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_start = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 4U;
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
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index)));
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 2U;
                            } else {
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 5U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_ready) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster, 7U)));
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_start = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster)))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 7U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__aud_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            }
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error = 0xffU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT__audio_change) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 5U;
            __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
            __Vdly__tb_media__DOT__loops = 0U;
        } else if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if (((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
                 & (IData)(vlSelfRef.tb_media__DOT__wav_found))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 4U;
            } else if (vlSelfRef.tb_media__DOT__wav_done) {
                __Vdly__tb_media__DOT__loops = ((IData)(1U) 
                                                + vlSelfRef.tb_media__DOT__loops);
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 1U;
            }
        } else if ((4U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 6U;
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
                if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state = 0U;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait)));
                }
            }
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__held_image 
                = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)
                    ? ((IData)(vlSelfRef.tb_media__DOT__catalog_ready)
                        ? vlSelfRef.tb_media__DOT__dut__DOT__img_lba
                        : vlSelfRef.tb_media__DOT__dut__DOT__config_lba)
                    : vlSelfRef.tb_media__DOT__dut__DOT__cat_lba);
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__a 
                = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g 
                = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__a), 1U) 
                             ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__a)));
            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g 
                = ((0x3ffU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g)) 
                   | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g)) 
                                ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g) 
                                   << 0xaU))));
            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__97__Vfuncout))];
    if (vlSelfRef.tb_media__DOT__dut__DOT__aud_bv) {
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
    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid) {
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
    if (vlSelfRef.tb_media__DOT__dut__DOT__config_bv) {
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset))) {
            vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_media__DOT__bd));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(2U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_media__DOT__bi) == 
             ((IData)(3U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if ((((((((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
              & (3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) 
             & (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
            & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid)) 
           & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
              >= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset)) 
          & (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) 
         & (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel)))) {
        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__a 
            = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__a), 1U) 
                         ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__a)));
        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g 
            = ((0x3ffU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g)) 
               | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g)) 
                            ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g) 
                               << 0xaU))));
        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__Vfuncout 
            = __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__g;
        __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 
            = ((0xf800U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q) 
                           << 8U)) | ((0x7e0U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green) 
                                                 << 3U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue) 
                                                  >> 3U))));
        __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 
            = __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__98__Vfuncout;
        __VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 1U;
    }
    __Vtableidx2 = ((((((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error)) 
                        | (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error))) 
                       << 7U) | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__busy) 
                                 << 6U)) | (((IData)(vlSelfRef.tb_media__DOT__platform_ready) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__launch) 
                                               << 4U))) 
                    | ((((IData)(vlSelfRef.tb_media__DOT__platform_found) 
                         << 3U) | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__started) 
                                   << 2U)) | (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_media__DOT__reset))));
    if ((1U & Vtb_media__ConstPool__TABLE_hadd61ea7_0
         [__Vtableidx2])) {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__started 
            = Vtb_media__ConstPool__TABLE_h79cf329d_0
            [__Vtableidx2];
    }
    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__launch 
        = Vtb_media__ConstPool__TABLE_hb9b7bc7b_0[__Vtableidx2];
    if ((4U & Vtb_media__ConstPool__TABLE_hadd61ea7_0
         [__Vtableidx2])) {
        vlSelfRef.tb_media__DOT__dut__DOT__boot_finished 
            = Vtb_media__ConstPool__TABLE_hd75a4263_0
            [__Vtableidx2];
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__bytes_read 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__bytes_read;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    vlSelfRef.tb_media__DOT__loops = __Vdly__tb_media__DOT__loops;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__flush_wait 
        = __Vdly__tb_media__DOT__dut__DOT__audio__DOT__flush_wait;
    if (__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache[__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    }
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__img_start = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__img_lba = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
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
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
        vlSelfRef.tb_media__DOT__dut__DOT__img_start 
            = __Vdly__tb_media__DOT__dut__DOT__img_start;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__config_start = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__config_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0U;
    } else {
        __Vdly__tb_media__DOT__dut__DOT__img_start = 0U;
        if (((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__image_cluster;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                = vlSelfRef.tb_media__DOT__dut__DOT__image_bytes;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0U;
            __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_media__DOT__dut__DOT__image_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_media__DOT__dut__DOT__image_bytes))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 7U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel) 
                    & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__img_start))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
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
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready) {
                        vlSelfRef.tb_media__DOT__dut__DOT__img_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index));
                        __Vdly__tb_media__DOT__dut__DOT__img_start = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid) 
                         & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_ready))) {
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read);
                        __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining)) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index)));
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 2U;
                            } else {
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 5U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready) {
                        vlSelfRef.tb_media__DOT__dut__DOT__img_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster, 7U)));
                        __Vdly__tb_media__DOT__dut__DOT__img_start = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster)))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 7U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster;
                    __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            }
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error = 0xffU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
        }
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__bytes_read 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__bytes_read;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
            = __Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
        vlSelfRef.tb_media__DOT__dut__DOT__img_start 
            = __Vdly__tb_media__DOT__dut__DOT__img_start;
        __Vdly__tb_media__DOT__dut__DOT__config_start = 0U;
        if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__launch) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__busy)))) {
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                = vlSelfRef.tb_media__DOT__dut__DOT__config_cluster;
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
                = vlSelfRef.tb_media__DOT__dut__DOT__config_bytes;
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0U;
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_media__DOT__dut__DOT__config_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_media__DOT__dut__DOT__config_bytes))) {
                __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = 7U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 1U;
            }
        } else if (((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error)) 
                    & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__config_start))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
            }
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
                            || (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
                           || (9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc)));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__config_sd_ready) {
                        vlSelfRef.tb_media__DOT__dut__DOT__config_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index));
                        __Vdly__tb_media__DOT__dut__DOT__config_start = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__byte_valid) 
                         & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy))) {
                        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read);
                        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index)));
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 2U;
                            } else {
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 5U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__config_sd_ready) {
                        vlSelfRef.tb_media__DOT__dut__DOT__config_lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster, 7U)));
                        __Vdly__tb_media__DOT__dut__DOT__config_start = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster)))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = 7U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster;
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0xffU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0xfU;
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__bytes_read;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster;
    vlSelfRef.tb_media__DOT__dut__DOT__config_start 
        = __Vdly__tb_media__DOT__dut__DOT__config_start;
    if (vlSelfRef.tb_media__DOT__reset) {
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = 0xffffffffU;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
        vlSelfRef.tb_media__DOT__platform_ready = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 0U;
    } else if (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__launch) {
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = 0xffffffffU;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 1U;
        vlSelfRef.tb_media__DOT__platform_ready = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 0U;
        __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 0U;
    } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy) 
                & (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error)))) {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 1U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
        vlSelfRef.tb_media__DOT__platform_ready = 0U;
    } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy) 
                & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__byte_valid))) {
        if (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done) {
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__data 
                = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q;
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__old 
                = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = (__Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__old 
                   ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__data));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value 
                = ((1U & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value, 1U));
            __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__value;
            __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc 
                = __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__12__Vfuncout;
            if (((0x1fffffU & (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                               - (IData)(0x20U))) == 
                 (0x1fffffU & (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
                               - (IData)(1U))))) {
                if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                    if (((~ ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__data 
                                            = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q;
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__old 
                                            = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = (__Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__old 
                                               ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__data));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value 
                                            = ((1U 
                                                & __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value, 1U));
                                        __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__Vfuncout 
                                            = __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__value;
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__13__Vfuncout)) 
                         != vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc)) {
                        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 7U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                        vlSelfRef.tb_media__DOT__platform_ready = 0U;
                    } else {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                        vlSelfRef.tb_media__DOT__platform_ready = 1U;
                    }
                } else {
                    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 6U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_media__DOT__platform_ready = 0U;
                }
            } else if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 2U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                vlSelfRef.tb_media__DOT__platform_ready = 0U;
            } else {
                __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                    = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position));
            }
        } else {
            if ((0x14U > vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                __VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 
                    = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q;
                __VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 
                    = (0x1fU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position);
                __VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 1U;
            }
            if (((0x14U <= vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position) 
                 & (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)))) {
                __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 1U;
            }
            if ((0U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x44U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x4dU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((2U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x5aU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((3U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x50U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((4U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if (((1U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)) 
                     & (2U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if (((5U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position) 
                        || (7U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position))) {
                if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((6U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x20U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            }
            if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 2U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                vlSelfRef.tb_media__DOT__platform_ready = 0U;
            } else if ((0x1fU == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix) {
                    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 3U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_media__DOT__platform_ready = 0U;
                } else if (((((((((0U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                   [0x10U]) | (0x40U 
                                               < vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                               [0x10U])) 
                                 | (0U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                    [0x11U])) | (0x20U 
                                                 < 
                                                 vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                                 [0x11U])) 
                               | (0x80U < vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                  [0x12U])) | (vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                               [0x13U] 
                                               >= vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                               [0x11U])) 
                             | ((1U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                 [4U]) & ((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length 
                                           != VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum), 5U)) 
                                          | (0x1c00U 
                                             < vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length)))) 
                            | ((2U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                [4U]) & ((vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length 
                                          < VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum), 5U)) 
                                         | (0x100000U 
                                            < vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length))))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 4U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_media__DOT__platform_ready = 0U;
                } else if (((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)) 
                            | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 5U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_media__DOT__platform_ready = 0U;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
                        = (0x1fffffU & vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length);
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc 
                        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_crc;
                    __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0x20U;
                }
            } else {
                __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                    = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position));
            }
        }
    }
    if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase_q) {
        vlSelfRef.tb_media__DOT__browse_tag = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q;
        tb_media__DOT__dut__DOT__browse_bytes = ((0x20U 
                                                  & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q))
                                                  ? 
                                                 ([&]() {
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__v 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes;
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value 
                        = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__v));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffffeULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | (IData)((IData)((1U & 
                                              VL_REDXOR_4(
                                                          (0xeULL 
                                                           & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffffdULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_4(
                                                           (0xdULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 1U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffffbULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_4(
                                                           (0xbULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 2U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffff7ULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_4(
                                                           (7ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 3U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffffefULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0xe0ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 4U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffffdfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0xd0ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 5U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffffbfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0xb0ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 6U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffff7fULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0x70ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 7U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffeffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xe00ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 8U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffdffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xd00ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 9U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffffbffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xb00ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0xaU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffff7ffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0x700ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0xbU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffefffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xe000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0xcU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffdfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xd000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0xdU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffffbfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xb000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0xeU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffff7fffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0x7000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0xfU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffeffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe0000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x10U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffdffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd0000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x11U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffffbffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb0000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x12U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffff7ffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x70000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x13U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffefffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe00000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x14U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffdfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd00000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x15U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffffbfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb00000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x16U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffff7fffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x700000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x17U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffeffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x18U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffdffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x19U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffffbffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x1aU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffff7ffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x7000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x1bU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffefffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe0000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x1cU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffdfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd0000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x1dU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffffbfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb0000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x1eU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffff7fffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x70000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x1fU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffeffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe00000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x20U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffdffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd00000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x21U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffffbffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb00000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x22U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffff7ffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x700000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x23U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffefffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x24U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffdfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x25U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffffbfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x26U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffff7fffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x7000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x27U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffeffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe0000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x28U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffdffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd0000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x29U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffffbffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb0000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x2aU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffff7ffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x70000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x2bU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffefffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe00000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x2cU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffdfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd00000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x2dU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffffbfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb00000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x2eU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffff7fffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x700000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x2fU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffeffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x30U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffdffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x31U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfffbffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x32U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfff7ffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x7000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x33U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffefffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe0000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x34U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffdfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd0000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x35U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xffbfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb0000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x36U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xff7fffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x70000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x37U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfeffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe00000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x38U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfdffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd00000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x39U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xfbffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb00000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x3aU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xf7ffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x700000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x3bU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xefffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x3cU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xdfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x3dU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0xbfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x3eU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout 
                        = ((0x7fffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x7000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__value))))) 
                              << 0x3fU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__tmp 
                        = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__37__Vfuncout;
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__Vfuncout 
                        = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__tmp);
                }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__36__Vfuncout)
                                                  : 
                                                 ([&]() {
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__v 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes;
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value 
                        = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__v));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffffeULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | (IData)((IData)((1U & 
                                              VL_REDXOR_4(
                                                          (0xeULL 
                                                           & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffffdULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_4(
                                                           (0xdULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 1U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffffbULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_4(
                                                           (0xbULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 2U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffff7ULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_4(
                                                           (7ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 3U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffffefULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0xe0ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 4U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffffdfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0xd0ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 5U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffffbfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0xb0ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 6U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffff7fULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_8(
                                                           (0x70ULL 
                                                            & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 7U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffeffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xe00ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 8U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffdffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xd00ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 9U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffffbffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xb00ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0xaU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffff7ffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0x700ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0xbU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffefffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xe000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0xcU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffdfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xd000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0xdU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffffbfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0xb000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0xeU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffff7fffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_16(
                                                            (0x7000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0xfU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffeffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe0000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x10U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffdffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd0000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x11U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffffbffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb0000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x12U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffff7ffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x70000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x13U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffefffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe00000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x14U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffdfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd00000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x15U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffffbfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb00000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x16U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffff7fffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x700000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x17U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffeffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x18U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffdffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x19U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffffbffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x1aU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffff7ffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x7000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x1bU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffefffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xe0000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x1cU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffdfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xd0000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x1dU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffffbfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0xb0000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x1eU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffff7fffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_32(
                                                            (0x70000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x1fU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffeffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe00000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x20U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffdffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd00000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x21U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffffbffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb00000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x22U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffff7ffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x700000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x23U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffefffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x24U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffdfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x25U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffffbfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x26U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffff7fffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x7000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x27U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffeffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe0000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x28U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffdffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd0000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x29U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffffbffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb0000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x2aU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffff7ffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x70000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x2bU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffefffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe00000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x2cU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffdfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd00000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x2dU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffffbfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb00000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x2eU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffff7fffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x700000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x2fU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffeffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x30U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffdffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x31U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfffbffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x32U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfff7ffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x7000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x33U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffefffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe0000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x34U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffdfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd0000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x35U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xffbfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb0000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x36U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xff7fffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x70000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x37U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfeffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe00000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x38U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfdffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd00000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x39U));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xfbffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb00000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x3aU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xf7ffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x700000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x3bU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xefffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xe000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x3cU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xdfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xd000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x3dU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0xbfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0xb000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x3eU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout 
                        = ((0x7fffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x7000000000000000ULL 
                                                             & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__value))))) 
                              << 0x3fU));
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__tmp 
                        = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__39__Vfuncout;
                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__Vfuncout 
                        = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__tmp);
                }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__38__Vfuncout));
        vlSelfRef.tb_media__DOT__browse_name = ((0x20U 
                                                 & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q))
                                                 ? vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name
                                                 : vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name);
        vlSelfRef.tb_media__DOT__browse_valid = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) 
                                                 & ((0x20U 
                                                     & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q))
                                                     ? 
                                                    ((0x1fU 
                                                      & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q)) 
                                                     < (IData)(vlSelfRef.tb_media__DOT__wav_count))
                                                     : 
                                                    ((0x1fU 
                                                      & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q)) 
                                                     < (IData)(vlSelfRef.tb_media__DOT__count))));
    }
    if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid) {
        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bd;
        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 
            = vlSelfRef.tb_media__DOT__bi;
        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 1U;
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
        vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__wav_bytes = 0U;
        vlSelfRef.tb_media__DOT__browse_valid = 0U;
        vlSelfRef.tb_media__DOT__browse_tag = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__image_cluster = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__image_bytes = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__name = 0ULL;
    } else {
        if (((IData)(vlSelfRef.tb_media__DOT__audio_selected) 
             < (IData)(vlSelfRef.tb_media__DOT__wav_count))) {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__v 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_cluster_q;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value 
                = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__v));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffffeULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | (IData)((IData)((1U & VL_REDXOR_4(
                                                       (0xeULL 
                                                        & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))));
            vlSelfRef.__Vdly__tb_media__DOT__wav_bytes 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_bytes_q;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffffdULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_4(
                                                        (0xdULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 1U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffffbULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_4(
                                                        (0xbULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 2U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffff7ULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_4(
                                                        (7ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 3U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffffefULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0xe0ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 4U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffffdfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0xd0ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 5U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffffbfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0xb0ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 6U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffff7fULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0x70ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 7U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffeffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xe00ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 8U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffdffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xd00ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 9U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffffbffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xb00ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0xaU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffff7ffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0x700ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0xbU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffefffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xe000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0xcU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffdfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xd000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0xdU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffffbfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xb000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0xeU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffff7fffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0x7000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0xfU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffeffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe0000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x10U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffdffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd0000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x11U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffffbffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb0000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x12U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffff7ffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x70000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x13U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffefffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe00000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x14U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffdfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd00000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x15U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffffbfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb00000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x16U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffff7fffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x700000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x17U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffeffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x18U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffdffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x19U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffffbffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x1aU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffff7ffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x7000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x1bU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffefffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe0000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x1cU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffdfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd0000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x1dU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffffbfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb0000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x1eU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffff7fffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x70000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x1fU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffeffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe00000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x20U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffdffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd00000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x21U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffffbffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb00000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x22U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffff7ffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x700000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x23U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffefffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x24U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffdfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x25U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffffbfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x26U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffff7fffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x7000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x27U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffeffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe0000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x28U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffdffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd0000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x29U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffffbffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb0000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x2aU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffff7ffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x70000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x2bU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffefffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe00000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x2cU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffdfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd00000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x2dU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffffbfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb00000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x2eU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffff7fffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x700000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x2fU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffeffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x30U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffdffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x31U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfffbffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x32U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfff7ffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x7000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x33U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffefffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe0000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x34U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffdfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd0000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x35U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xffbfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb0000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x36U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xff7fffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x70000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x37U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfeffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe00000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x38U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfdffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd00000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x39U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xfbffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb00000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x3aU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xf7ffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x700000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x3bU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xefffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x3cU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xdfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x3dU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0xbfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x3eU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout 
                = ((0x7fffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x7000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__value))))) 
                      << 0x3fU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__tmp 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__41__Vfuncout;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__Vfuncout 
                = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__tmp);
            vlSelfRef.tb_media__DOT__dut__DOT__wav_cluster 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__40__Vfuncout;
        }
        if (((IData)(vlSelfRef.tb_media__DOT__selected) 
             < (IData)(vlSelfRef.tb_media__DOT__count))) {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__v 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__image_cluster_q;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value 
                = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__v));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffffeULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | (IData)((IData)((1U & VL_REDXOR_4(
                                                       (0xeULL 
                                                        & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))));
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__image_bytes 
                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__image_bytes_q;
            vlSelfRef.__Vdly__tb_media__DOT__name = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__image_name_q;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffffdULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_4(
                                                        (0xdULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 1U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffffbULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_4(
                                                        (0xbULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 2U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffff7ULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_4(
                                                        (7ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 3U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffffefULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0xe0ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 4U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffffdfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0xd0ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 5U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffffbfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0xb0ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 6U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffff7fULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_8(
                                                        (0x70ULL 
                                                         & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 7U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffeffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xe00ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 8U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffdffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xd00ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 9U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffffbffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xb00ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0xaU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffff7ffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0x700ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0xbU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffefffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xe000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0xcU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffdfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xd000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0xdU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffffbfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0xb000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0xeU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffff7fffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_16(
                                                         (0x7000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0xfU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffeffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe0000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x10U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffdffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd0000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x11U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffffbffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb0000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x12U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffff7ffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x70000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x13U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffefffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe00000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x14U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffdfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd00000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x15U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffffbfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb00000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x16U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffff7fffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x700000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x17U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffeffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x18U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffdffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x19U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffffbffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x1aU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffff7ffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x7000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x1bU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffefffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xe0000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x1cU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffdfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xd0000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x1dU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffffbfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0xb0000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x1eU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffff7fffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_32(
                                                         (0x70000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x1fU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffeffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe00000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x20U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffdffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd00000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x21U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffffbffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb00000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x22U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffff7ffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x700000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x23U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffefffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x24U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffdfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x25U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffffbfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x26U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffff7fffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x7000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x27U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffeffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe0000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x28U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffdffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd0000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x29U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffffbffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb0000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x2aU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffff7ffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x70000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x2bU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffefffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe00000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x2cU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffdfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd00000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x2dU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffffbfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb00000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x2eU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffff7fffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x700000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x2fU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffeffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x30U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffdffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x31U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfffbffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x32U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfff7ffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x7000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x33U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffefffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe0000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x34U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffdfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd0000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x35U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xffbfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb0000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x36U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xff7fffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x70000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x37U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfeffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe00000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x38U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfdffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd00000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x39U));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xfbffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb00000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x3aU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xf7ffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x700000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x3bU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xefffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xe000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x3cU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xdfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xd000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x3dU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0xbfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xb000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x3eU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout 
                = ((0x7fffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x7000000000000000ULL 
                                                          & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__value))))) 
                      << 0x3fU));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__tmp 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__43__Vfuncout;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__Vfuncout 
                = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__tmp);
            vlSelfRef.tb_media__DOT__dut__DOT__image_cluster 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__42__Vfuncout;
        } else {
            vlSelfRef.tb_media__DOT__dut__DOT__image_cluster = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__image_bytes = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__name = 0ULL;
        }
    }
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__platform_found = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__config_cluster = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__config_bytes = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0U;
        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__cat_lba = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_catalog_ready = 0U;
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
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__count = 0U;
        vlSelfRef.tb_media__DOT__wav_found = 0U;
        __Vdly__tb_media__DOT__wav_count = 0U;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
               | (0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
              | (5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) 
             | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_lba = 0U;
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
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__45__Vfuncout 
                                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                            [0xcU] 
                                            << 8U) 
                                           | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                           [0xbU]);
                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__45__Vfuncout))) 
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
                    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__46__lba 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__partition_start;
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_lba 
                        = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__46__lba;
                } else {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 2U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (((((((0xaa55U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__signature)) 
                         | (0x200U != ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__47__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                          [0xcU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                         [0xbU]);
                                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__47__Vfuncout)))) 
                        | (0U == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                           [0xdU])) | (0U != (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                              [0xdU] 
                                              & (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                 [0xdU] 
                                                 - (IData)(1U))))) 
                      | (0U == ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__48__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__48__Vfuncout)))) 
                     | (0U == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                        [0x10U]))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 3U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_media__DOT__dut__DOT__fat16 
                        = (0U != ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__49__Vfuncout 
                                    = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__49__Vfuncout)));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_index = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 4U;
                    __Vdly__tb_media__DOT__dut__DOT__spc 
                        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                        [0xdU];
                    __Vdly__tb_media__DOT__dut__DOT__fat_base 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                           + VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__50__Vfuncout 
                                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                            [0xfU] 
                                            << 8U) 
                                           | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                           [0xeU]);
                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__50__Vfuncout))));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_sectors 
                        = VL_SHIFTR_III(32,32,32, ((IData)(0xfU) 
                                                   + 
                                                   VL_EXTEND_II(32,16, 
                                                                ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__51__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                [0x12U] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x11U]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__51__Vfuncout)))), 4U);
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__root_base 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                            + VL_EXTEND_II(32,16, ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__52__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__52__Vfuncout)))) 
                           + (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                              [0x10U] * ((0U != ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__53__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__53__Vfuncout)))
                                          ? VL_EXTEND_II(32,16, 
                                                         ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__54__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__54__Vfuncout)))
                                          : ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__55__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__55__Vfuncout))));
                    __Vdly__tb_media__DOT__dut__DOT__data_base 
                        = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__volume_base 
                             + VL_EXTEND_II(32,16, 
                                            ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__56__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0xfU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0xeU]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__56__Vfuncout)))) 
                            + (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                               [0x10U] * ((0U != ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__57__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__57__Vfuncout)))
                                           ? VL_EXTEND_II(32,16, 
                                                          ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__58__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__58__Vfuncout)))
                                           : ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__59__Vfuncout 
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
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__59__Vfuncout)))) 
                           + VL_SHIFTR_III(32,32,32, 
                                           ((IData)(0xfU) 
                                            + VL_EXTEND_II(32,16, 
                                                           ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__60__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x12U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x11U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__60__Vfuncout)))), 4U));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__fixed_root 
                        = (0U != ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__61__Vfuncout 
                                    = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__61__Vfuncout)));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                        = ((0U != ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__62__Vfuncout 
                                        = ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                            [0x17U] 
                                            << 8U) 
                                           | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header
                                           [0x16U]);
                                }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h16__62__Vfuncout)))
                            ? 0U : (0xfffffffU & ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__63__Vfuncout 
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
                                }(), __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__h32__63__Vfuncout)));
                }
            } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors)));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                if ((0xfffU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__directory_sectors))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 4U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__fixed_root) {
                    if ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index 
                         >= vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_sectors)) {
                        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 9U;
                    } else {
                        __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__64__lba 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_base 
                               + vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__root_index);
                        vlSelfRef.tb_media__DOT__dut__DOT__cat_lba 
                            = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__64__lba;
                        vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 0xbU;
                        __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                    }
                } else if ((2U > vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster)) {
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 6U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else {
                    __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__65__lba 
                        = ((vlSelfRef.tb_media__DOT__dut__DOT__data_base 
                            + ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster 
                                - (IData)(2U)) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__spc))) 
                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster_sector));
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_lba 
                        = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__65__lba;
                    vlSelfRef.tb_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__after_read = 0xbU;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                }
            } else if ((0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 5U;
            } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
                __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 
                    = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache_q;
                __VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 
                    = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
                __VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 1U;
                if ((0x1fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 6U;
                } else {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos)));
                    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0xbU;
                }
            } else if ((0U == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                        [0U])) {
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 9U;
            } else {
                if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__regular_file) {
                    if ((0U == (((0x2042494eU ^ (IData)(
                                                        (((QData)((IData)(
                                                                          (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                             [3U] 
                                                                             << 0x18U) 
                                                                            | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                               [4U] 
                                                                               << 0x10U)) 
                                                                           | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                               [5U] 
                                                                               << 8U) 
                                                                              | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                              [6U])))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                              [7U] 
                                                                              << 0x18U) 
                                                                             | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [8U] 
                                                                                << 0x10U)) 
                                                                            | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [9U] 
                                                                                << 8U) 
                                                                               | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                               [0xaU]))))))) 
                                 | (0x4e452020U ^ (IData)(
                                                          ((((QData)((IData)(
                                                                             (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [3U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [4U] 
                                                                                << 0x10U)) 
                                                                              | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [5U] 
                                                                                << 8U) 
                                                                                | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [6U])))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [7U] 
                                                                                << 0x18U) 
                                                                                | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [8U] 
                                                                                << 0x10U)) 
                                                                               | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [9U] 
                                                                                << 8U) 
                                                                                | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [0xaU]))))) 
                                                           >> 0x20U)))) 
                                | (0x534345U ^ ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                 [0U] 
                                                 << 0x10U) 
                                                | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                   [2U])))))) {
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__66__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                 [0x1fU] << 0x18U) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1eU] << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1dU] << 8U) | 
                                  vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                  [0x1cU]));
                        vlSelfRef.tb_media__DOT__platform_found = 1U;
                        vlSelfRef.tb_media__DOT__dut__DOT__config_cluster 
                            = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                        vlSelfRef.tb_media__DOT__dut__DOT__config_bytes 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__66__Vfuncout;
                    }
                    if (((((0x42U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c 
                                                    = 
                                                    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [8U];
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__c)));
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__67__Vfuncout))) 
                           & (0x4dU == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c 
                                                    = 
                                                    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [9U];
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__c)));
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__68__Vfuncout)))) 
                          & (0x50U == ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c 
                                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                [0xaU];
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__Vfuncout 
                                                = (0xffU 
                                                   & (((0x61U 
                                                        <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c)) 
                                                       & (0x7aU 
                                                          >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c)))
                                                       ? 
                                                      ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c) 
                                                       - (IData)(0x20U))
                                                       : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__c)));
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__69__Vfuncout)))) 
                         & (0x20U > (IData)(vlSelfRef.tb_media__DOT__count)))) {
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__v 
                            = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value 
                            = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__v));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 1U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 2U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 3U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 4U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 5U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 6U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 7U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 8U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 9U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__tmp 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__72__Vfuncout;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__Vfuncout 
                            = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__tmp);
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__a 
                            = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g 
                            = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__a), 1U) 
                                        ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__a)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g 
                            = ((0xfU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g)) 
                               | (0x10U & ((0xfffffff0U 
                                            & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g)) 
                                           ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g) 
                                              << 4U))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__Vfuncout 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__g;
                        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__70__Vfuncout;
                        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__71__Vfuncout;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 1U;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__75__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                 [0x1fU] << 0x18U) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1eU] << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1dU] << 8U) | 
                                  vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                  [0x1cU]));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__v 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__75__Vfuncout;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value 
                            = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__v));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 1U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 2U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 3U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 4U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 5U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 6U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 7U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 8U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 9U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__tmp 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__76__Vfuncout;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__Vfuncout 
                            = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__tmp);
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__a 
                            = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g 
                            = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__a), 1U) 
                                        ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__a)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g 
                            = ((0xfU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g)) 
                               | (0x10U & ((0xfffffff0U 
                                            & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g)) 
                                           ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g) 
                                              << 4U))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__Vfuncout 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__g;
                        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__73__Vfuncout;
                        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__74__Vfuncout;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 1U;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value 
                            = (((QData)((IData)((((
                                                   vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                   [7U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [6U] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [5U] 
                                                     << 8U) 
                                                    | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [4U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                               [3U] 
                                                               << 0x18U) 
                                                              | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [2U] 
                                                                 << 0x10U)) 
                                                             | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [1U] 
                                                                 << 8U) 
                                                                | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                [0U])))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 1U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 2U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 3U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 4U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 5U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 6U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 7U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 8U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 9U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__a 
                            = (0x1fU & (IData)(vlSelfRef.tb_media__DOT__count));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g 
                            = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__a), 1U) 
                                        ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__a)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g 
                            = ((0xfU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g)) 
                               | (0x10U & ((0xfffffff0U 
                                            & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g)) 
                                           ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g) 
                                              << 4U))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__g;
                        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__77__Vfuncout;
                        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__names__v0 = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_media__DOT__count)));
                    }
                    if (((((0x57U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c 
                                                    = 
                                                    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [8U];
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__c)));
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__79__Vfuncout))) 
                           & (0x41U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c 
                                                    = 
                                                    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [9U];
                                                __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__c)));
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__80__Vfuncout)))) 
                          & (0x56U == ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c 
                                                = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                [0xaU];
                                            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__Vfuncout 
                                                = (0xffU 
                                                   & (((0x61U 
                                                        <= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c)) 
                                                       & (0x7aU 
                                                          >= (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c)))
                                                       ? 
                                                      ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c) 
                                                       - (IData)(0x20U))
                                                       : (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__c)));
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__upper__81__Vfuncout)))) 
                         & (0x10U > (IData)(vlSelfRef.tb_media__DOT__wav_count)))) {
                        vlSelfRef.tb_media__DOT__wav_found = 1U;
                        __Vdly__tb_media__DOT__wav_count 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_media__DOT__wav_count)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__v 
                            = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value 
                            = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__v));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 1U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 2U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 3U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 4U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 5U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 6U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 7U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 8U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 9U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__tmp 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__84__Vfuncout;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__Vfuncout 
                            = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__tmp);
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__a 
                            = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g 
                            = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__a), 1U) 
                                       ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__a)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g 
                            = ((7U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g)) 
                                        ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g) 
                                           << 3U))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__Vfuncout 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__g;
                        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__82__Vfuncout;
                        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__83__Vfuncout;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 1U;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__87__Vfuncout 
                            = (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                 [0x1fU] << 0x18U) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1eU] << 0x10U)) 
                               | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1dU] << 8U) | 
                                  vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                  [0x1cU]));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__v 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__e32__87__Vfuncout;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value 
                            = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__v));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 1U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 2U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 3U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 4U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 5U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 6U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 7U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 8U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 9U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__tmp 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__88__Vfuncout;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__Vfuncout 
                            = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__tmp);
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__a 
                            = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g 
                            = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__a), 1U) 
                                       ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__a)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g 
                            = ((7U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g)) 
                                        ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g) 
                                           << 3U))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__Vfuncout 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__g;
                        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__85__Vfuncout;
                        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__86__Vfuncout;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 1U;
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value 
                            = (((QData)((IData)((((
                                                   vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                   [7U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [6U] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [5U] 
                                                     << 8U) 
                                                    | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [4U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                               [3U] 
                                                               << 0x18U) 
                                                              | (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [2U] 
                                                                 << 0x10U)) 
                                                             | ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [1U] 
                                                                 << 8U) 
                                                                | vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                                                [0U])))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 1U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 2U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 3U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 4U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 5U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 6U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 7U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 8U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 9U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__a 
                            = (0xfU & (IData)(vlSelfRef.tb_media__DOT__wav_count));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g 
                            = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__a), 1U) 
                                       ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__a)));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g 
                            = ((7U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g)) 
                                        ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g) 
                                           << 3U))));
                        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__Vfuncout 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__g;
                        vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__89__Vfuncout;
                        vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 
                            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__90__Vfuncout;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 1U;
                    }
                }
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 7U;
            }
        } else if ((7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state))) {
            if ((0x1e0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos 
                    = (0x1ffU & ((IData)(0x20U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos)));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0xbU;
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
                __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__91__lba 
                    = (vlSelfRef.tb_media__DOT__dut__DOT__fat_base 
                       + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__fat16)
                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster, 8U)
                           : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster, 7U)));
                vlSelfRef.tb_media__DOT__dut__DOT__cat_lba 
                    = __Vtask_tb_media__DOT__dut__DOT__catalog__DOT__sector__91__lba;
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
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_catalog_ready = 1U;
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0xaU;
        } else if ((1U & (~ ((0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)) 
                             || (0x3fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__state)))))) {
            vlSelfRef.tb_media__DOT__dut__DOT__cat_error = 0xffU;
            __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__file_error 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__file_error;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__launch 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__launch;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
        = __Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining;
    if (__VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
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
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__header__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__data_base = __Vdly__tb_media__DOT__dut__DOT__data_base;
    vlSelfRef.tb_media__DOT__dut__DOT__spc = __Vdly__tb_media__DOT__dut__DOT__spc;
    vlSelfRef.tb_media__DOT__dut__DOT__fat_base = __Vdly__tb_media__DOT__dut__DOT__fat_base;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cluster 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__cluster;
    if (__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry[__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__fat16 = __Vdly__tb_media__DOT__dut__DOT__fat16;
    vlSelfRef.tb_media__DOT__wav_count = __Vdly__tb_media__DOT__wav_count;
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
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache
        [((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))
           ? 0U : (0x1ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos) 
                             + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__byte_valid) 
                                & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy)))))];
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__browse_query_q 
        = vlSelfRef.tb_media__DOT__browse_query;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__regular_file 
        = ((0xe5U != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
            [0U]) & ((0U == (0x18U & vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                             [0xbU])) & (0xfU != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry
                                         [0xbU])));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache
        [(0x1ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos) 
                    + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos)))];
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
    vlSelfRef.__Vdly__tb_media__DOT__cycle = ((IData)(1U) 
                                              + vlSelfRef.tb_media__DOT__cycle);
    vlSelfRef.tb_media__DOT__bv = 0U;
    vlSelfRef.__Vdly__tb_media__DOT__sd_done = 0U;
    vlSelfRef.__Vdly__tb_media__DOT__ack = 0U;
    if (vlSelfRef.tb_media__DOT__read_start) {
        if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__sd_ready)) 
                                | (IData)(vlSelfRef.tb_media__DOT__reading)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:41: Assertion failed in %Ntb_media: SD transaction overlap\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 41, "", false);
        }
        vlSelfRef.__Vdly__tb_media__DOT__active_lba 
            = vlSelfRef.tb_media__DOT__lba;
        vlSelfRef.__Vdly__tb_media__DOT__sd_pos = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__reading = 1U;
        vlSelfRef.__Vdly__tb_media__DOT__sd_ready = 0U;
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
                __Vtemp_28[0U] = 0x74757265U;
                __Vtemp_28[1U] = 0x69676e61U;
                __Vtemp_28[2U] = 0x73U;
                if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_28)) 
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
                __Vtemp_29[0U] = 0x66696c65U;
                __Vtemp_29[1U] = 0x686f7274U;
                __Vtemp_29[2U] = 0x73U;
                if (((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_29)) 
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
                        __Vtemp_30[0U] = 0x696f6e73U;
                        __Vtemp_30[1U] = 0x6d656e73U;
                        __Vtemp_30[2U] = 0x6469U;
                        if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_30)) 
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
                    __Vtemp_32[0U] = 0x6861696eU;
                    __Vtemp_32[1U] = 0x6f727463U;
                    __Vtemp_32[2U] = 0x7368U;
                    __Vfunc_tb_media__DOT__disk__0__value 
                        = (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_32))
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
                    if (((VL_TESTPLUSARGS_I(std::string{"paired"}) 
                          && (1U == __Vfunc_tb_media__DOT__disk__0__slot)) 
                         & VL_GTS_III(32, 8U, __Vfunc_tb_media__DOT__disk__0__j))) {
                        __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                            = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, 0x2020202020414349ULL, 
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
                            = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, 
                                                             (VL_TESTPLUSARGS_I(
                                                                                std::string{"paired"})
                                                               ? 0x2020202020424349ULL
                                                               : 0x202020324f4d4544ULL), 
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
            if (((VL_TESTPLUSARGS_I(std::string{"platform"}) 
                  && (__Vfunc_tb_media__DOT__disk__0__l 
                      == __Vfunc_tb_media__DOT__disk__0__root_lba)) 
                 & (3U == VL_DIVS_III(32, __Vfunc_tb_media__DOT__disk__0__i, (IData)(0x20U))))) {
                __Vfunc_tb_media__DOT__disk__0__j = 
                    VL_MODDIVS_III(32, __Vfunc_tb_media__DOT__disk__0__i, (IData)(0x20U));
                __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0U;
                if (VL_GTS_III(32, 0xbU, __Vfunc_tb_media__DOT__disk__0__j)) {
                    __Vtemp_34[0U] = 0x4e454353U;
                    __Vtemp_34[1U] = 0x20202045U;
                    __Vtemp_34[2U] = 0x4e4942U;
                    VL_SHIFTR_WWI(88,88,32, __Vtemp_35, __Vtemp_34, 
                                  VL_MULS_III(32, (IData)(8U), __Vfunc_tb_media__DOT__disk__0__j));
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                        = (0xffU & __Vtemp_35[0U]);
                }
                if ((0xbU == __Vfunc_tb_media__DOT__disk__0__j)) {
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0x20U;
                }
                if ((0x1aU == __Vfunc_tb_media__DOT__disk__0__j)) {
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout = 0xd3U;
                }
                if ((0x1bU == __Vfunc_tb_media__DOT__disk__0__j)) {
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout = 7U;
                }
                if (VL_LTES_III(32, 0x1cU, __Vfunc_tb_media__DOT__disk__0__j)) {
                    __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                        = (0xffU & VL_SHIFTR_III(8,32,32, 0xd60U, 
                                                 VL_MULS_III(32, (IData)(8U), 
                                                             (__Vfunc_tb_media__DOT__disk__0__j 
                                                              - (IData)(0x1cU)))));
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
                        __Vtemp_38[0U] = 0x74757265U;
                        __Vtemp_38[1U] = 0x69676e61U;
                        __Vtemp_38[2U] = 0x73U;
                        if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_38)) 
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
                        __Vtemp_39[0U] = 0x66696c65U;
                        __Vtemp_39[1U] = 0x686f7274U;
                        __Vtemp_39[2U] = 0x73U;
                        if (((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_39)) 
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
                                __Vtemp_40[0U] = 0x696f6e73U;
                                __Vtemp_40[1U] = 0x6d656e73U;
                                __Vtemp_40[2U] = 0x6469U;
                                if ((VL_TESTPLUSARGS_I(
                                                       VL_CVT_PACK_STR_NW(3, __Vtemp_40)) 
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
                    __Vtemp_42[0U] = 0x616c6964U;
                    __Vtemp_42[1U] = 0x76696e76U;
                    __Vtemp_42[2U] = 0x7761U;
                    if (((0x16U == __Vfunc_tb_media__DOT__disk__0__ofs) 
                         && VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_42)))) {
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
        if (((VL_TESTPLUSARGS_I(std::string{"platform"}) 
              && VL_GTES_III(32, __Vfunc_tb_media__DOT__disk__0__l, 
                             ((IData)(0x3e80U) + __Vfunc_tb_media__DOT__disk__0__base_lba))) 
             & VL_LTS_III(32, __Vfunc_tb_media__DOT__disk__0__l, 
                          ((IData)(0x3e87U) + __Vfunc_tb_media__DOT__disk__0__base_lba)))) {
            __Vfunc_tb_media__DOT__disk__0__ofs = (
                                                   VL_MULS_III(32, (IData)(0x200U), 
                                                               ((__Vfunc_tb_media__DOT__disk__0__l 
                                                                 - __Vfunc_tb_media__DOT__disk__0__base_lba) 
                                                                - (IData)(0x3e80U))) 
                                                   + __Vfunc_tb_media__DOT__disk__0__i);
            __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                = (VL_GTS_III(32, 0xd60U, __Vfunc_tb_media__DOT__disk__0__ofs)
                    ? ((0xd5fU >= (0xfffU & __Vfunc_tb_media__DOT__disk__0__ofs))
                        ? (0xffU & vlSelfRef.tb_media__DOT__config_image
                           [(0xfffU & __Vfunc_tb_media__DOT__disk__0__ofs)])
                        : 0U) : 0U);
            __Vtemp_44[0U] = 0x72726f72U;
            __Vtemp_44[1U] = 0x63726365U;
            __Vtemp_44[2U] = 0x6e666967U;
            __Vtemp_44[3U] = 0x636fU;
            if ((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(4, __Vtemp_44)) 
                 && (0x64U == __Vfunc_tb_media__DOT__disk__0__ofs))) {
                __Vfunc_tb_media__DOT__disk__0__Vfuncout 
                    = (1U ^ (IData)(__Vfunc_tb_media__DOT__disk__0__Vfuncout));
            }
        }
        vlSelfRef.tb_media__DOT__bd = __Vfunc_tb_media__DOT__disk__0__Vfuncout;
        if ((0x1ffU == vlSelfRef.tb_media__DOT__sd_pos)) {
            vlSelfRef.__Vdly__tb_media__DOT__reading = 0U;
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__sd_pos 
                = ((IData)(1U) + vlSelfRef.tb_media__DOT__sd_pos);
        }
    } else if ((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__reading)) 
                      & (~ (IData)(vlSelfRef.tb_media__DOT__sd_ready))))) {
        vlSelfRef.__Vdly__tb_media__DOT__sd_done = 1U;
        vlSelfRef.__Vdly__tb_media__DOT__sd_ready = 1U;
    }
}
