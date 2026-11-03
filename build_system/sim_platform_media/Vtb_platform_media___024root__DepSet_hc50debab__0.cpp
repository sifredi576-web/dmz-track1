// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_platform_media.h for the primary calling header

#include "Vtb_platform_media__pch.h"
#include "Vtb_platform_media__Syms.h"
#include "Vtb_platform_media___024root.h"

extern "C" unsigned int dmz_disk(unsigned int lba, unsigned int index);

VL_INLINE_OPT void Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_disk_TOP(IData/*31:0*/ lba, IData/*31:0*/ index, IData/*31:0*/ &dmz_disk__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_disk_TOP\n"); );
    // Body
    unsigned int lba__Vcvt;
    for (size_t lba__Vidx = 0; lba__Vidx < 1; ++lba__Vidx) lba__Vcvt = lba;
    unsigned int index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    unsigned int dmz_disk__Vfuncrtn__Vcvt;
    dmz_disk__Vfuncrtn__Vcvt = dmz_disk(lba__Vcvt, index__Vcvt);
    dmz_disk__Vfuncrtn = dmz_disk__Vfuncrtn__Vcvt;
}

extern "C" unsigned int dmz_expected_pcm(unsigned int wave, unsigned int sample);

VL_INLINE_OPT void Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pcm_TOP(IData/*31:0*/ wave, IData/*31:0*/ sample, IData/*31:0*/ &dmz_expected_pcm__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pcm_TOP\n"); );
    // Body
    unsigned int wave__Vcvt;
    for (size_t wave__Vidx = 0; wave__Vidx < 1; ++wave__Vidx) wave__Vcvt = wave;
    unsigned int sample__Vcvt;
    for (size_t sample__Vidx = 0; sample__Vidx < 1; ++sample__Vidx) sample__Vcvt = sample;
    unsigned int dmz_expected_pcm__Vfuncrtn__Vcvt;
    dmz_expected_pcm__Vfuncrtn__Vcvt = dmz_expected_pcm(wave__Vcvt, sample__Vcvt);
    dmz_expected_pcm__Vfuncrtn = dmz_expected_pcm__Vfuncrtn__Vcvt;
}

extern "C" unsigned int dmz_expected_pixel(unsigned int page, unsigned int pixel);

VL_INLINE_OPT void Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(IData/*31:0*/ page, IData/*31:0*/ pixel, IData/*31:0*/ &dmz_expected_pixel__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP\n"); );
    // Body
    unsigned int page__Vcvt;
    for (size_t page__Vidx = 0; page__Vidx < 1; ++page__Vidx) page__Vcvt = page;
    unsigned int pixel__Vcvt;
    for (size_t pixel__Vidx = 0; pixel__Vidx < 1; ++pixel__Vidx) pixel__Vcvt = pixel;
    unsigned int dmz_expected_pixel__Vfuncrtn__Vcvt;
    dmz_expected_pixel__Vfuncrtn__Vcvt = dmz_expected_pixel(page__Vcvt, pixel__Vcvt);
    dmz_expected_pixel__Vfuncrtn = dmz_expected_pixel__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__0(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__4__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__4__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__6__n;
    __Vtask_tb_platform_media__DOT__ticks__6__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__7__e;
    __Vtask_tb_platform_media__DOT__send__7__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__8__n;
    __Vtask_tb_platform_media__DOT__ticks__8__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__9__n;
    __Vtask_tb_platform_media__DOT__ticks__9__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__10__n;
    __Vtask_tb_platform_media__DOT__ticks__10__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__12__n;
    __Vtask_tb_platform_media__DOT__ticks__12__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__13__e;
    __Vtask_tb_platform_media__DOT__send__13__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__14__n;
    __Vtask_tb_platform_media__DOT__ticks__14__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__15__n;
    __Vtask_tb_platform_media__DOT__ticks__15__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__16__n;
    __Vtask_tb_platform_media__DOT__ticks__16__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__18__n;
    __Vtask_tb_platform_media__DOT__ticks__18__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__19__e;
    __Vtask_tb_platform_media__DOT__send__19__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__20__n;
    __Vtask_tb_platform_media__DOT__ticks__20__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__21__n;
    __Vtask_tb_platform_media__DOT__ticks__21__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__22__n;
    __Vtask_tb_platform_media__DOT__ticks__22__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__24__n;
    __Vtask_tb_platform_media__DOT__ticks__24__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__25__e;
    __Vtask_tb_platform_media__DOT__send__25__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__26__n;
    __Vtask_tb_platform_media__DOT__ticks__26__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__27__n;
    __Vtask_tb_platform_media__DOT__ticks__27__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__28__n;
    __Vtask_tb_platform_media__DOT__ticks__28__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__30__n;
    __Vtask_tb_platform_media__DOT__ticks__30__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__31__e;
    __Vtask_tb_platform_media__DOT__send__31__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__32__n;
    __Vtask_tb_platform_media__DOT__ticks__32__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__33__n;
    __Vtask_tb_platform_media__DOT__ticks__33__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__34__n;
    __Vtask_tb_platform_media__DOT__ticks__34__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__36__n;
    __Vtask_tb_platform_media__DOT__ticks__36__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__37__e;
    __Vtask_tb_platform_media__DOT__send__37__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__38__n;
    __Vtask_tb_platform_media__DOT__ticks__38__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__39__n;
    __Vtask_tb_platform_media__DOT__ticks__39__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__40__n;
    __Vtask_tb_platform_media__DOT__ticks__40__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__42__n;
    __Vtask_tb_platform_media__DOT__ticks__42__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__43__e;
    __Vtask_tb_platform_media__DOT__send__43__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__44__n;
    __Vtask_tb_platform_media__DOT__ticks__44__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__45__n;
    __Vtask_tb_platform_media__DOT__ticks__45__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__46__n;
    __Vtask_tb_platform_media__DOT__ticks__46__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__48__n;
    __Vtask_tb_platform_media__DOT__ticks__48__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_platform_media__DOT__send__49__e;
    __Vtask_tb_platform_media__DOT__send__49__e = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__50__n;
    __Vtask_tb_platform_media__DOT__ticks__50__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__51__n;
    __Vtask_tb_platform_media__DOT__ticks__51__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__52__n;
    __Vtask_tb_platform_media__DOT__ticks__52__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__54__n;
    __Vtask_tb_platform_media__DOT__ticks__54__n = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_platform_media__DOT__ticks__4__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__4__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__4__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__4__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__reset = 0U;
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__5__wanted = 0U;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__5__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_ha3cdcb47__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__5__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__6__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__6__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__6__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__5__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__5__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__5__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    if (VL_UNLIKELY((VL_TESTPLUSARGS_I(std::string{"notice"})))) {
        __Vtask_tb_platform_media__DOT__send__7__e = 5U;
        __Vtask_tb_platform_media__DOT__ticks__8__n = 1U;
        __Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__8__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__8__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__7__e;
        vlSelfRef.tb_platform_media__DOT__ev = 1U;
        __Vtask_tb_platform_media__DOT__ticks__9__n = 1U;
        __Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__9__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__9__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_platform_media__DOT__ev = 0U;
        __Vtask_tb_platform_media__DOT__ticks__10__n = 0x10U;
        __Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__10__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__10__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__11__wanted = 1U;
        while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                           & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                 >> 0x15U))) & ((0x1fU 
                                                 & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                    >> 0xbU)) 
                                                == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__11__wanted)) 
                         & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
            co_await vlSelfRef.__VtrigSched_hd4662890__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__11__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 73);
        }
        __Vtask_tb_platform_media__DOT__ticks__12__n = 0x10U;
        __Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__12__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__12__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                    >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__11__wanted)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__11__wanted,
                         5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                     >> 0xbU)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
        }
        VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__11__wanted,
                     32,vlSelfRef.tb_platform_media__DOT__frames,
                     32,vlSelfRef.tb_platform_media__DOT__samples);
        __Vtask_tb_platform_media__DOT__send__13__e = 5U;
        __Vtask_tb_platform_media__DOT__ticks__14__n = 1U;
        __Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__14__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__14__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__13__e;
        vlSelfRef.tb_platform_media__DOT__ev = 1U;
        __Vtask_tb_platform_media__DOT__ticks__15__n = 1U;
        __Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__15__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__15__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_platform_media__DOT__ev = 0U;
        __Vtask_tb_platform_media__DOT__ticks__16__n = 0x10U;
        __Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__16__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__16__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__17__wanted = 0U;
        while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                           & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                 >> 0x15U))) & ((0x1fU 
                                                 & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                    >> 0xbU)) 
                                                == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__17__wanted)) 
                         & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
            co_await vlSelfRef.__VtrigSched_hb6cc545d__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__17__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 73);
        }
        __Vtask_tb_platform_media__DOT__ticks__18__n = 0x10U;
        __Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_platform_media__DOT__ticks__18__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_platform_media.clk)", 
                                                                 "sim/platform\tb_platform_media.sv", 
                                                                 71);
            __Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_platform_media__DOT__ticks__18__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                    >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__17__wanted)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__17__wanted,
                         5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                     >> 0xbU)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
        }
        VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__17__wanted,
                     32,vlSelfRef.tb_platform_media__DOT__frames,
                     32,vlSelfRef.tb_platform_media__DOT__samples);
        if (VL_UNLIKELY(((1U & (((IData)((vlSelfRef.tb_platform_media__DOT__params 
                                          >> 0x21U)) 
                                 | (0U != vlSelfRef.tb_platform_media__DOT__samples)) 
                                | (3U != vlSelfRef.tb_platform_media__DOT__frames)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:82: Assertion failed in %Ntb_platform_media: second package integration\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 82, "", false);
        }
        VL_WRITEF_NX("PASS second TF package on same integrated RTL, fragmented config/BMP, independent labels and no WAV requirement\n",0);
        VL_FINISH_MT("sim/platform\\tb_platform_media.sv", 83, "");
    }
    while (VL_GTES_III(32, 0x12cU, vlSelfRef.tb_platform_media__DOT__samples)) {
        co_await vlSelfRef.__VtrigSched_hc150bfff__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'sh12c < tb_platform_media.samples))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             85);
    }
    __Vtask_tb_platform_media__DOT__send__19__e = 5U;
    __Vtask_tb_platform_media__DOT__ticks__20__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__20__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__20__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__19__e;
    vlSelfRef.tb_platform_media__DOT__ev = 1U;
    __Vtask_tb_platform_media__DOT__ticks__21__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__21__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__21__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__ev = 0U;
    __Vtask_tb_platform_media__DOT__ticks__22__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__22__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__22__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__23__wanted = 1U;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__23__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_he8547315__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__23__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__24__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__24__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__24__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__23__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__23__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__23__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_platform_media__DOT__params 
                                    >> 0x21U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:85: Assertion failed in %Ntb_platform_media: silent page did not stop audio\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 85, "", false);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_platform_media__DOT__timed))) {
        if (VL_UNLIKELY(((VL_GTS_III(32, 0x1388U, vlSelfRef.tb_platform_media__DOT__consumed) 
                          | (0U != vlSelfRef.tb_platform_media__DOT__underruns))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:87: Assertion failed in %Ntb_platform_media: timed audio FIFO underrun=%0d consumed=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_platform_media__DOT__underruns,
                         32,vlSelfRef.tb_platform_media__DOT__consumed);
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 87, "", false);
        }
        VL_WRITEF_NX("PASS 2048-pair asynchronous audio FIFO, 48kHz consumption, 12.5Mbit/s card data + 100us token delays, concurrent composed image load, zero audio underruns (%0d pairs)\n",0,
                     32,vlSelfRef.tb_platform_media__DOT__consumed);
        VL_FINISH_MT("sim/platform\\tb_platform_media.sv", 88, "");
    }
    __Vtask_tb_platform_media__DOT__send__25__e = 5U;
    __Vtask_tb_platform_media__DOT__ticks__26__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__26__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__26__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__25__e;
    vlSelfRef.tb_platform_media__DOT__ev = 1U;
    __Vtask_tb_platform_media__DOT__ticks__27__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__27__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__27__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__ev = 0U;
    __Vtask_tb_platform_media__DOT__ticks__28__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__28__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__28__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__29__wanted = 2U;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__29__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h6988ff1c__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__29__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__30__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__30__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__30__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__29__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__29__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__29__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    __Vtask_tb_platform_media__DOT__send__31__e = 5U;
    __Vtask_tb_platform_media__DOT__ticks__32__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__32__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__32__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__31__e;
    vlSelfRef.tb_platform_media__DOT__ev = 1U;
    __Vtask_tb_platform_media__DOT__ticks__33__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__33__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__33__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__ev = 0U;
    __Vtask_tb_platform_media__DOT__ticks__34__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__34__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__34__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__35__wanted = 3U;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__35__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h81b41fcf__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__35__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__36__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__36__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__36__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__35__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__35__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__35__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    while (VL_GTES_III(32, 0x12cU, vlSelfRef.tb_platform_media__DOT__samples)) {
        co_await vlSelfRef.__VtrigSched_hc150bfff__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'sh12c < tb_platform_media.samples))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             90);
    }
    __Vtask_tb_platform_media__DOT__send__37__e = 0xaU;
    __Vtask_tb_platform_media__DOT__ticks__38__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__38__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__38__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__37__e;
    vlSelfRef.tb_platform_media__DOT__ev = 1U;
    __Vtask_tb_platform_media__DOT__ticks__39__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__39__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__39__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__ev = 0U;
    __Vtask_tb_platform_media__DOT__ticks__40__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__40__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__40__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__41__wanted = 0xeU;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__41__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_ha09f7a4e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__41__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__42__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__42__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__42__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__41__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__41__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__41__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    __Vtask_tb_platform_media__DOT__send__43__e = 0xbU;
    __Vtask_tb_platform_media__DOT__ticks__44__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__44__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__44__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__43__e;
    vlSelfRef.tb_platform_media__DOT__ev = 1U;
    __Vtask_tb_platform_media__DOT__ticks__45__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__45__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__45__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__ev = 0U;
    __Vtask_tb_platform_media__DOT__ticks__46__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__46__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__46__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__47__wanted = 0xfU;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__47__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_hca21f424__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__47__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__48__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__48__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__48__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__47__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__47__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__47__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    __Vtask_tb_platform_media__DOT__send__49__e = 0xcU;
    __Vtask_tb_platform_media__DOT__ticks__50__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__50__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__50__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__action = __Vtask_tb_platform_media__DOT__send__49__e;
    vlSelfRef.tb_platform_media__DOT__ev = 1U;
    __Vtask_tb_platform_media__DOT__ticks__51__n = 1U;
    __Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__51__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__51__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_platform_media__DOT__ev = 0U;
    __Vtask_tb_platform_media__DOT__ticks__52__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__52__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__52__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__53__wanted = 3U;
    while ((1U & (~ ((((IData)((1U == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                       & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                             >> 0x15U))) & ((0x1fU 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                >> 0xbU)) 
                                            == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__53__wanted)) 
                     & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))))) {
        co_await vlSelfRef.__VtrigSched_h9b4296b8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__53__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             73);
    }
    __Vtask_tb_platform_media__DOT__ticks__54__n = 0x10U;
    __Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_platform_media__DOT__ticks__54__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb2d186ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_platform_media.clk)", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             71);
        __Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_platform_media__DOT__ticks__54__tb_platform_media__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                >> 0xbU)) != vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__53__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:74: Assertion failed in %Ntb_platform_media.idle_page: expected page %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__53__wanted,
                     5,(0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                 >> 0xbU)));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 74, "", false);
    }
    VL_WRITEF_NX("REAL SD PAGE %0d complete frames=%0d audio samples=%0d\n",0,
                 32,vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__53__wanted,
                 32,vlSelfRef.tb_platform_media__DOT__frames,
                 32,vlSelfRef.tb_platform_media__DOT__samples);
    while (VL_GTES_III(32, 0x258U, vlSelfRef.tb_platform_media__DOT__samples)) {
        co_await vlSelfRef.__VtrigSched_hc16a3357__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'sh258 < tb_platform_media.samples))", 
                                                             "sim/platform\tb_platform_media.sv", 
                                                             91);
    }
    if (VL_UNLIKELY(((7U != vlSelfRef.tb_platform_media__DOT__frames)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:92: Assertion failed in %Ntb_platform_media: page/frame commit count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 92, "", false);
    }
    VL_WRITEF_NX("PASS pixel-exact BMP + Chinese composition including NOTICE/ALERT, actual FAT32 fragmented SCENE/BMP/WAV, CRC->SDRAM->runtime->Chinese composition->frame commit, real PCM and notice return without audio restart\n",0);
    VL_FINISH_MT("sim/platform\\tb_platform_media.sv", 93, "");
}

VL_INLINE_OPT VlCoroutine Vtb_platform_media___024root___eval_initial__TOP__Vtiming__1(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x48c27395000ULL, 
                                         nullptr, "sim/platform\tb_platform_media.sv", 
                                         95);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:95: Assertion failed in %Ntb_platform_media: platform media timeout state=%0# image=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 6,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state),
                 3,vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state);
    VL_STOP_MT("sim/platform\\tb_platform_media.sv", 95, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_platform_media___024root___dump_triggers__act(Vtb_platform_media___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_platform_media___024root___eval_triggers__act(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_triggers__act\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h43fa841d__0;
    __Vtrigprevexpr_h43fa841d__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h5451de70__0;
    __Vtrigprevexpr_h5451de70__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h2efc0b43__0;
    __Vtrigprevexpr_h2efc0b43__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h656776e5__0;
    __Vtrigprevexpr_h656776e5__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h80642beb__0;
    __Vtrigprevexpr_h80642beb__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hfdbeb804__0;
    __Vtrigprevexpr_hfdbeb804__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h2603d7b5__0;
    __Vtrigprevexpr_h2603d7b5__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h44993536__0;
    __Vtrigprevexpr_h44993536__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h5e16aafc__0;
    __Vtrigprevexpr_h5e16aafc__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0b755088__0;
    __Vtrigprevexpr_h0b755088__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h655dec2d__0;
    __Vtrigprevexpr_h655dec2d__0 = 0;
    // Body
    __Vtrigprevexpr_h43fa841d__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__5__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h5451de70__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__11__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h2efc0b43__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__17__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h656776e5__0 = VL_LTS_III(32, 0x12cU, vlSelfRef.tb_platform_media__DOT__samples);
    __Vtrigprevexpr_h80642beb__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__23__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_hfdbeb804__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__29__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h2603d7b5__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__35__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h44993536__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__41__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h5e16aafc__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__47__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h0b755088__0 = ((((IData)((1U == 
                                               (3U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]))) 
                                      & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x15U))) 
                                     & ((0x1fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
                                                  >> 0xbU)) 
                                        == vlSelfRef.__Vtask_tb_platform_media__DOT__idle_page__53__wanted)) 
                                    & (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)));
    __Vtrigprevexpr_h655dec2d__0 = VL_LTS_III(32, 0x258U, vlSelfRef.tb_platform_media__DOT__samples);
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_platform_media__DOT__rclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_platform_media__DOT__rclk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_platform_media__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_platform_media__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_platform_media__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_platform_media__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(__Vtrigprevexpr_h43fa841d__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h43fa841d__1)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(__Vtrigprevexpr_h5451de70__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h5451de70__1)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(__Vtrigprevexpr_h2efc0b43__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h2efc0b43__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(__Vtrigprevexpr_h656776e5__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h656776e5__1)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(__Vtrigprevexpr_h80642beb__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h80642beb__1)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(__Vtrigprevexpr_hfdbeb804__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hfdbeb804__1)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(__Vtrigprevexpr_h2603d7b5__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h2603d7b5__1)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(__Vtrigprevexpr_h44993536__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_h44993536__1)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(__Vtrigprevexpr_h5e16aafc__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_h5e16aafc__1)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(__Vtrigprevexpr_h0b755088__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_h0b755088__1)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(__Vtrigprevexpr_h655dec2d__0) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr_h655dec2d__1)));
    vlSelfRef.__VactTriggered.setBit(0xeU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_platform_media__DOT__rclk__0 
        = vlSelfRef.tb_platform_media__DOT__rclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_platform_media__DOT__clk__0 
        = vlSelfRef.tb_platform_media__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h43fa841d__1 = __Vtrigprevexpr_h43fa841d__0;
    vlSelfRef.__Vtrigprevexpr_h5451de70__1 = __Vtrigprevexpr_h5451de70__0;
    vlSelfRef.__Vtrigprevexpr_h2efc0b43__1 = __Vtrigprevexpr_h2efc0b43__0;
    vlSelfRef.__Vtrigprevexpr_h656776e5__1 = __Vtrigprevexpr_h656776e5__0;
    vlSelfRef.__Vtrigprevexpr_h80642beb__1 = __Vtrigprevexpr_h80642beb__0;
    vlSelfRef.__Vtrigprevexpr_hfdbeb804__1 = __Vtrigprevexpr_hfdbeb804__0;
    vlSelfRef.__Vtrigprevexpr_h2603d7b5__1 = __Vtrigprevexpr_h2603d7b5__0;
    vlSelfRef.__Vtrigprevexpr_h44993536__1 = __Vtrigprevexpr_h44993536__0;
    vlSelfRef.__Vtrigprevexpr_h5e16aafc__1 = __Vtrigprevexpr_h5e16aafc__0;
    vlSelfRef.__Vtrigprevexpr_h0b755088__1 = __Vtrigprevexpr_h0b755088__0;
    vlSelfRef.__Vtrigprevexpr_h655dec2d__1 = __Vtrigprevexpr_h655dec2d__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xcU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xdU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_platform_media___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_sequent__TOP__0(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_sequent__TOP__0\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_platform_media__DOT__dut__DOT__declared_pairs;
    tb_platform_media__DOT__dut__DOT__declared_pairs = 0;
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_loop;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_loop = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dmz_disk__0__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dmz_disk__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dmz_expected_pcm__3__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dmz_expected_pcm__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__old;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__old = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__data;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__data = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__old;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__old = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__data;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__data = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value;
    __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__a = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__a = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__a = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__a = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__a = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__a = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__83__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__83__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__84__lba;
    __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__84__lba = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__85__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__85__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__86__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__86__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__87__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__87__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__88__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__88__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__89__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__89__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__90__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__90__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__91__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__91__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__92__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__92__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__93__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__93__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__94__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__94__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__95__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__95__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__96__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__96__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__97__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__97__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__98__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__98__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__99__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__99__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__100__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__101__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__101__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__102__lba;
    __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__102__lba = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__103__lba;
    __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__103__lba = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__104__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__104__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__a = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__109__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__109__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__a = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g = 0;
    QData/*63:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__a = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__a = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__117__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__117__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__a = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g = 0;
    QData/*63:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__a = 0;
    CData/*3:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g = 0;
    IData/*31:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__121__lba;
    __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__121__lba = 0;
    SData/*10:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__a = 0;
    SData/*10:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g = 0;
    SData/*10:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__a;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__a = 0;
    SData/*10:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g;
    __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__146__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__147__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__148__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__149__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__149__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__150__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__150__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__151__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__152__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__153__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__154__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__154__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__155__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__155__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__156__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__156__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__157__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__158__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__158__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__159__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__159__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__160__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__160__Vfuncout = 0;
    VlWide<4>/*98:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout;
    VL_ZERO_W(99, __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout);
    VlWide<4>/*98:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value;
    VL_ZERO_W(99, __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value);
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__175__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__175__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__177__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__177__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__178__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__178__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__180__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__180__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__182__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__182__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__183__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__183__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__185__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__185__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__186__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__186__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__188__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__188__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__value;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__value = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__192__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__192__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__194__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__194__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__195__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__195__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__196__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__196__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__197__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__197__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__198__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__198__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__199__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__199__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__200__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__200__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__201__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__201__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__202__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__202__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__203__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__203__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__204__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__204__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__205__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__205__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__206__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__206__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__207__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__207__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__208__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__208__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__209__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__209__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__210__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__210__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__211__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__211__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__212__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__212__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__213__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__214__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__214__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__215__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__215__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__216__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__216__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__217__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__217__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__219__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__219__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__220__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__220__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__221__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__221__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__223__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__223__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__224__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__224__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__226__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__226__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__227__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__227__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__229__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__229__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__230__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__230__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__232__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__232__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__234__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__234__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__235__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__235__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__236__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__236__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__237__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__237__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__238__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__238__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__239__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__239__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__240__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__240__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__241__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__241__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__242__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__242__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__243__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__243__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__244__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__244__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__245__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__245__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__246__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__246__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__247__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__247__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__248__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__248__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__249__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__249__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__250__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__250__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__252__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__252__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__254__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__254__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__255__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__255__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__256__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__256__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__257__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__257__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__258__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__258__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__259__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__259__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__260__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__260__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__261__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__261__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__262__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__262__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__263__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__263__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__264__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__264__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__265__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__265__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__266__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__266__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__267__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__267__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__268__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__268__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__269__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__269__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__270__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__270__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__271__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__271__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__273__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__273__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__275__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__275__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__276__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__276__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__278__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__278__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__280__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__280__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__281__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__281__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__283__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__283__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__285__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__285__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__287__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__287__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__index = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__289__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__289__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__291__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__291__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__292__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__292__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__293__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__293__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__294__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__294__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__295__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__295__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__296__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__296__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__297__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__297__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__index = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__299__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__299__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__301__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__301__Vfuncout = 0;
    IData/*20:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__302__address;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__302__address = 0;
    IData/*20:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__index;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__index = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__304__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__304__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__306__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__306__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__307__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__307__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__308__Vfuncout;
    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__308__Vfuncout = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__310__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__310__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__311__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__311__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__312__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__312__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__313__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__313__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__314__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__314__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__315__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__315__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__316__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__316__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__317__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__317__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__318__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__318__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__319__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__319__target = 0;
    CData/*7:0*/ __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__320__target;
    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__320__target = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__cycle;
    __Vdly__tb_platform_media__DOT__cycle = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__sd;
    __Vdly__tb_platform_media__DOT__sd = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__ar;
    __Vdly__tb_platform_media__DOT__ar = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__slba;
    __Vdly__tb_platform_media__DOT__slba = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__sindex;
    __Vdly__tb_platform_media__DOT__sindex = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__token_wait;
    __Vdly__tb_platform_media__DOT__token_wait = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__reading;
    __Vdly__tb_platform_media__DOT__reading = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__sr;
    __Vdly__tb_platform_media__DOT__sr = 0;
    IData/*20:0*/ __Vdly__tb_platform_media__DOT__maddr;
    __Vdly__tb_platform_media__DOT__maddr = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_platform_media__DOT__mdata;
    VL_ZERO_W(256, __Vdly__tb_platform_media__DOT__mdata);
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__mwrite;
    __Vdly__tb_platform_media__DOT__mwrite = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__mpending;
    __Vdly__tb_platform_media__DOT__mpending = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__mdelay;
    __Vdly__tb_platform_media__DOT__mdelay = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__bursts;
    __Vdly__tb_platform_media__DOT__bursts = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__ldelay;
    __Vdly__tb_platform_media__DOT__ldelay = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__final_load;
    __Vdly__tb_platform_media__DOT__final_load = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__samples;
    __Vdly__tb_platform_media__DOT__samples = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__wave;
    __Vdly__tb_platform_media__DOT__wave = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy;
    __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__config_start;
    __Vdly__tb_platform_media__DOT__dut__DOT__config_start = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = 0;
    SData/*8:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0;
    IData/*20:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = 0;
    IData/*20:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase = 0;
    QData/*63:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__pair_found;
    __Vdly__tb_platform_media__DOT__dut__DOT__pair_found = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__wav_bytes;
    __Vdly__tb_platform_media__DOT__dut__DOT__wav_bytes = 0;
    SData/*15:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start = 0;
    CData/*5:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__fat16;
    __Vdly__tb_platform_media__DOT__dut__DOT__fat16 = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__spc;
    __Vdly__tb_platform_media__DOT__dut__DOT__spc = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__fat_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__fat_base = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__data_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__data_base = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0;
    SData/*15:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors = 0;
    SData/*8:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__wav_count;
    __Vdly__tb_platform_media__DOT__dut__DOT__wav_count = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__img_start;
    __Vdly__tb_platform_media__DOT__dut__DOT__img_start = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0;
    CData/*2:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__loop_count;
    __Vdly__tb_platform_media__DOT__dut__DOT__loop_count = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0;
    CData/*1:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0;
    IData/*23:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active;
    __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__sd_start;
    __Vdly__tb_platform_media__DOT__sd_start = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__image_reads;
    __Vdly__tb_platform_media__DOT__dut__DOT__image_reads = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__audio_reads;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio_reads = 0;
    CData/*5:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0;
    CData/*6:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri = 0;
    CData/*5:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__rt_active;
    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0;
    CData/*5:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query;
    __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource = 0;
    CData/*2:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot = 0;
    IData/*19:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image = 0;
    IData/*31:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded = 0;
    SData/*15:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock = 0;
    SData/*15:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired = 0;
    CData/*1:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 0;
    CData/*4:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request = 0;
    CData/*5:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio = 0;
    CData/*2:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request = 0;
    CData/*7:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered = 0;
    CData/*3:0*/ __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_platform_media__DOT__memory__v0;
    VL_ZERO_W(256, __VdlyVal__tb_platform_media__DOT__memory__v0);
    SData/*14:0*/ __VdlyDim0__tb_platform_media__DOT__memory__v0;
    __VdlyDim0__tb_platform_media__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__memory__v0;
    __VdlySet__tb_platform_media__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    VlWide<4>/*98:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0;
    VL_ZERO_W(99, __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0);
    CData/*2:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v0 = 0;
    CData/*4:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v4;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v5;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v5 = 0;
    QData/*34:0*/ __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8;
    __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8;
    __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 = 0;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    __Vdly__tb_platform_media__DOT__sd_start = vlSelfRef.tb_platform_media__DOT__sd_start;
    __Vdly__tb_platform_media__DOT__dut__DOT__image_reads 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_reads;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio_reads 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_reads;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved;
    __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done;
    __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__first 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__first;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__y 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__y;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__previous_addr;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__layer 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__layer;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__widget_index 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__widget_index;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__plane 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__plane;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__x 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__x;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__p 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__compositor__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_last 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_last;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_pixels 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_pixels;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_load_addr 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_addr;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0U;
    vlSelfRef.__Vdly__tb_platform_media__DOT__lack 
        = vlSelfRef.tb_platform_media__DOT__lack;
    __Vdly__tb_platform_media__DOT__slba = vlSelfRef.tb_platform_media__DOT__slba;
    __Vdly__tb_platform_media__DOT__sindex = vlSelfRef.tb_platform_media__DOT__sindex;
    __Vdly__tb_platform_media__DOT__token_wait = vlSelfRef.tb_platform_media__DOT__token_wait;
    __Vdly__tb_platform_media__DOT__reading = vlSelfRef.tb_platform_media__DOT__reading;
    __Vdly__tb_platform_media__DOT__sr = vlSelfRef.tb_platform_media__DOT__sr;
    __Vdly__tb_platform_media__DOT__maddr = vlSelfRef.tb_platform_media__DOT__maddr;
    __Vdly__tb_platform_media__DOT__mdata[0U] = vlSelfRef.tb_platform_media__DOT__mdata[0U];
    __Vdly__tb_platform_media__DOT__mdata[1U] = vlSelfRef.tb_platform_media__DOT__mdata[1U];
    __Vdly__tb_platform_media__DOT__mdata[2U] = vlSelfRef.tb_platform_media__DOT__mdata[2U];
    __Vdly__tb_platform_media__DOT__mdata[3U] = vlSelfRef.tb_platform_media__DOT__mdata[3U];
    __Vdly__tb_platform_media__DOT__mdata[4U] = vlSelfRef.tb_platform_media__DOT__mdata[4U];
    __Vdly__tb_platform_media__DOT__mdata[5U] = vlSelfRef.tb_platform_media__DOT__mdata[5U];
    __Vdly__tb_platform_media__DOT__mdata[6U] = vlSelfRef.tb_platform_media__DOT__mdata[6U];
    __Vdly__tb_platform_media__DOT__mdata[7U] = vlSelfRef.tb_platform_media__DOT__mdata[7U];
    __Vdly__tb_platform_media__DOT__mwrite = vlSelfRef.tb_platform_media__DOT__mwrite;
    __Vdly__tb_platform_media__DOT__mpending = vlSelfRef.tb_platform_media__DOT__mpending;
    __Vdly__tb_platform_media__DOT__mdelay = vlSelfRef.tb_platform_media__DOT__mdelay;
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[0U] 
        = vlSelfRef.tb_platform_media__DOT__ard[0U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[1U] 
        = vlSelfRef.tb_platform_media__DOT__ard[1U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[2U] 
        = vlSelfRef.tb_platform_media__DOT__ard[2U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[3U] 
        = vlSelfRef.tb_platform_media__DOT__ard[3U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[4U] 
        = vlSelfRef.tb_platform_media__DOT__ard[4U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[5U] 
        = vlSelfRef.tb_platform_media__DOT__ard[5U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[6U] 
        = vlSelfRef.tb_platform_media__DOT__ard[6U];
    vlSelfRef.__Vdly__tb_platform_media__DOT__ard[7U] 
        = vlSelfRef.tb_platform_media__DOT__ard[7U];
    __Vdly__tb_platform_media__DOT__bursts = vlSelfRef.tb_platform_media__DOT__bursts;
    vlSelfRef.__Vdly__tb_platform_media__DOT__lr = vlSelfRef.tb_platform_media__DOT__lr;
    __Vdly__tb_platform_media__DOT__ldelay = vlSelfRef.tb_platform_media__DOT__ldelay;
    __Vdly__tb_platform_media__DOT__final_load = vlSelfRef.tb_platform_media__DOT__final_load;
    __Vdly__tb_platform_media__DOT__samples = vlSelfRef.tb_platform_media__DOT__samples;
    __VdlySet__tb_platform_media__DOT__memory__v0 = 0U;
    __Vdly__tb_platform_media__DOT__ar = vlSelfRef.tb_platform_media__DOT__ar;
    __Vdly__tb_platform_media__DOT__sd = vlSelfRef.tb_platform_media__DOT__sd;
    __Vdly__tb_platform_media__DOT__cycle = vlSelfRef.tb_platform_media__DOT__cycle;
    __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy;
    __VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 0U;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__lookup_wait;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase;
    __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 0U;
    vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 0U;
    vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__wav_bytes 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_bytes;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_bytes 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_bytes;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__signature;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__spc = vlSelfRef.tb_platform_media__DOT__dut__DOT__spc;
    __Vdly__tb_platform_media__DOT__dut__DOT__fat_base 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__fat_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__data_base 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__data_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_count 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count;
    __Vdly__tb_platform_media__DOT__dut__DOT__wav_count 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count;
    __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__fat16 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_catalog_ready 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name;
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan;
    __Vdly__tb_platform_media__DOT__dut__DOT__pair_found 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_found;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__img_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__img_lba;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_error;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__img_start 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__img_start;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_start 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_start;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_error;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__config_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster;
    __Vdly__tb_platform_media__DOT__dut__DOT__config_start 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_start;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__page_begin 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__page_begin;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query;
    vlSelfRef.__Vdly__tb_platform_media__DOT__params 
        = vlSelfRef.tb_platform_media__DOT__params;
    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v0 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v4 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v5 = 0U;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice;
    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active;
    __Vdly__tb_platform_media__DOT__wave = vlSelfRef.tb_platform_media__DOT__wave;
    __Vdly__tb_platform_media__DOT__dut__DOT__loop_count 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__loop_count;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait;
    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state;
    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0 = 0U;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request;
    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus;
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write) {
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U] 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[0U];
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U] 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U];
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U] 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[2U];
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[3U] 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[3U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U] 
                     ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U] 
                        >> 1U)));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffffeU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_4((6U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffffdU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_4((7U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffffbU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_8((0x18U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffff7U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 3U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_8((0x30U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffffefU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 4U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_8((0x38U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffffdfU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 5U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_8((0xc0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffffbfU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 6U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0x180U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffff7fU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 7U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0x1c0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffeffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 8U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0x600U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffdffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 9U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0xc00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffffbffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0xaU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0xe00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffff7ffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0xbU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0x3000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffefffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0xcU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0x6000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffdfffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0xdU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0x7000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffffbfffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0xeU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x18000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffff7fffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0xfU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x30000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffeffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x10U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x38000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffdffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x11U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0xc0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfffbffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x12U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x180000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfff7ffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x13U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x1c0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffefffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x14U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x600000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffdfffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x15U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0xc00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xffbfffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x16U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0xe00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xff7fffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x17U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x3000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfeffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x18U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x6000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfdffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x19U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x7000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xfbffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x1aU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x18000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xf7ffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x1bU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x30000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xefffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x1cU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x38000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xdfffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x1dU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0xc0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0xbfffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & ((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U] 
                      >> 0x1fU) ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U]));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U] 
            = ((0x7fffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x1fU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & (VL_REDXOR_32((0xc0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[0U])) 
                     ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U]));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffffeU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_4((6U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffffdU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_4((0xcU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffffbU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_4((0xeU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffff7U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 3U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_8((0x30U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffffefU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 4U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_8((0x60U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffffdfU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 5U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_8((0x70U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffffbfU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 6U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0x180U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffff7fU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 7U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0x300U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffeffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 8U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0x380U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffdffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 9U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0xc00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffffbffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0xaU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0x1800U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffff7ffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0xbU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0x1c00U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffefffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0xcU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0x6000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffdfffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0xdU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0xc000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffffbfffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0xeU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0xe000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffff7fffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0xfU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x30000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffeffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x10U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x60000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffdffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x11U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x70000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfffbffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x12U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x180000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfff7ffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x13U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x300000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffefffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x14U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x380000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffdfffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x15U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0xc00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xffbfffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x16U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xff7fffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x17U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x1c00000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfeffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x18U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x6000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfdffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x19U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0xc000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xfbffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x1aU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0xe000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xf7ffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x1bU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x30000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xefffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x1cU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x60000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xdfffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x1dU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x70000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0xbfffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & ((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U] 
                      >> 0x1fU) ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U]));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U] 
            = ((0x7fffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x1fU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U] 
                     ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U] 
                        >> 1U)));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffffeU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & (((__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[1U] 
                       >> 0x1fU) ^ __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U]) 
                     ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U] 
                        >> 1U)));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffffdU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_4((0xcU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffffbU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_8((0x18U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffff7U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 3U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_8((0x1cU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffffefU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 4U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_8((0x60U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffffdfU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 5U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_8((0xc0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffffbfU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 6U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_8((0xe0U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffff7fU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 7U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0x300U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffeffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 8U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0x600U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffdffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 9U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0x700U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffffbffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0xaU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0x1800U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffff7ffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0xbU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_16((0x3000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffefffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0xcU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_16((0x3800U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffdfffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0xdU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_16((0xc000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffffbfffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0xeU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x18000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffff7fffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0xfU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x1c000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffeffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x10U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x60000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffdffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x11U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0xc0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfffbffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x12U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0xe0000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfff7ffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x13U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x300000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffefffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x14U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x600000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffdfffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x15U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x700000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xffbfffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x16U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xff7fffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x17U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x3000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfeffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x18U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x3800000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfdffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x19U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0xc000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xfbffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x1aU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0x18000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xf7ffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x1bU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0x1c000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xefffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x1cU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & VL_REDXOR_32((0x60000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xdfffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0) 
                  << 0x1dU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_32((0xc0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0xbfffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                  << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32((0xe0000000U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[2U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U] 
            = ((0x7fffffffU & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                  << 0x1fU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0 
            = (1U & (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[3U] 
                     ^ (__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[3U] 
                        >> 1U)));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U] 
            = ((6U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U]) 
               | (7U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_hc8fc4ac6__0)));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0 
            = (1U & VL_REDXOR_4((6U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[3U])));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U] 
            = ((5U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U]) 
               | (7U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f146728__0) 
                        << 1U)));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0 
            = (1U & VL_REDXOR_32(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__value[3U]));
        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U] 
            = ((3U & __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U]) 
               | (7U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vlvbound_h3f0a2e13__0) 
                        << 2U)));
        __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[0U] 
            = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[0U];
        __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[1U] 
            = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[1U];
        __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[2U] 
            = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[2U];
        __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[3U] 
            = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_widget__164__Vfuncout[3U];
        __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write_index;
        __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__staging_write) 
         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_ready))) {
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count), 3U)), vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__buffer, vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q);
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_tag 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[0U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache
        [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_index][0U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[1U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache
        [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_index][1U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[2U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache
        [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_index][2U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_encoded_q[3U] 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache
        [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_index][3U];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved
        [(0x3fU & (((0x19U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                    | (0x13U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))
                    ? ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                        << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                     >> 8U)) : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource)))];
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bv) {
        __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bd;
        __VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bi;
        __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0 = 1U;
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid) {
        vlSelfRef.__VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bd;
        vlSelfRef.__VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bi;
        vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0 = 1U;
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_bv) {
        vlSelfRef.__VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bd;
        vlSelfRef.__VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bi;
        vlSelfRef.__VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0 = 1U;
    }
    if (vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset) {
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wp = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2 = 0U;
    } else {
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wp 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg1;
    }
    if ((((~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)) 
          & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__page_begin))) 
         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled))) {
        if (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state)) 
             & (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[0U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[0U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[1U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[1U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[2U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[2U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[3U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[3U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[4U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[4U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[5U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[5U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[6U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[6U];
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer[7U] 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_data[7U];
        } else if ((((((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state)) 
                       & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__pixel_inside)) 
                      & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_valid)) 
                     & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache_tag 
                        == (0xfffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte))) 
                    & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache) 
                       >> 0xfU))) {
            VL_ASSIGNSEL_WI(256,16,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__p), 4U)), vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__buffer, 
                            ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__dim)
                              ? ((0x7800U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache)) 
                                 | ((0x3e0U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache)) 
                                    | (0x1fU & VL_SHIFTR_III(5,5,32, 
                                                             (0x1fU 
                                                              & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache)), 1U))))
                              : ((0xffc0U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache) 
                                             << 1U)) 
                                 | ((0x20U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache) 
                                              >> 4U)) 
                                    | (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache))))));
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__img_start = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__img_lba = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_start = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_lba = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__config_start = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__config_lba = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0U;
        __Vdly__tb_platform_media__DOT__wave = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__loop_count = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__owner = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__av) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__ar))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy = 1U;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__owner 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__selected;
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__ap))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy = 0U;
        }
        __Vdly__tb_platform_media__DOT__dut__DOT__img_start = 0U;
        if (((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_cluster;
            __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_bytes;
            __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__image_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__image_bytes))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error = 7U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__cancel) 
                    & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__stream_busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__img_start))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            }
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                            || (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
                           || (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_ready) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__img_lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index));
                        __Vdly__tb_platform_media__DOT__dut__DOT__img_start = 1U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_valid) 
                         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_ready))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read);
                        __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining)) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index)));
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 2U;
                            } else {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 5U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_ready) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__img_lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster, 7U)));
                        __Vdly__tb_platform_media__DOT__dut__DOT__img_start = 1U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster)))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error = 7U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster;
                    __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_done) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0U;
            }
        } else {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__stream_error = 0xffU;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state = 0xfU;
        }
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_start = 0U;
        if (((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_cluster;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_bytes;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_bytes))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error = 7U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__cancel) 
                    & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_start))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_done) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            }
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                            || (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
                           || (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_ready) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_start = 1U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_done) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_valid) 
                         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_ready))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read);
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining)) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos))) {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index)));
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 2U;
                            } else {
                                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 5U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_ready) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster, 7U)));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__aud_start = 1U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_done) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error = 7U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster;
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_done) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error = 0xffU;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state = 0xfU;
        }
        __Vdly__tb_platform_media__DOT__dut__DOT__config_start = 0U;
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__busy)))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_cluster;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bytes;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read = 0U;
            if ((((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__config_cluster) 
                  | (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) 
                 | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bytes))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error = 7U;
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0xfU;
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 1U;
            }
        } else if (((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error)) 
                    & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__busy))) {
            if ((((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
                  | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                 | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_start))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_done)
                        ? 0U : 8U);
            } else if ((8U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_done) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
            }
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
                            || (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
                           || (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_ready) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__config_lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
                               + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index));
                        __Vdly__tb_platform_media__DOT__dut__DOT__config_start = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_done) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 4U;
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_valid) 
                         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_ready))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read 
                            = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read);
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
                               - (IData)(1U));
                        if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 9U;
                        } else if ((0x1ffU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index)) 
                                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) {
                                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index)));
                                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 2U;
                            } else {
                                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 5U;
                            }
                        } else {
                            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos)));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_ready) {
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__config_lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster, 7U)));
                        __Vdly__tb_platform_media__DOT__dut__DOT__config_start = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 6U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_done) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 7U;
                    }
                } else if (((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster) 
                            | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                                ? (0xfff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster)
                                : (0xffffff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error = 7U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0xfU;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_sd_done) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error = 0xffU;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state = 0xfU;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change) {
            __Vdly__tb_platform_media__DOT__wave = 
                ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_select)
                  ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_index)
                  : ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_request)
                      ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__paired_index)
                      : 0U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change) 
             | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 5U;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__loop_count = 0U;
        } else if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((((IData)(vlSelfRef.tb_platform_media__DOT__catalog) 
                  & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_found)) 
                 & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__mode)) 
                    | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__armed)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 4U;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_done) {
                __Vdly__tb_platform_media__DOT__dut__DOT__loop_count 
                    = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__loop_count);
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state 
                    = ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__mode)) 
                              | (IData)((vlSelfRef.tb_platform_media__DOT__params 
                                         >> 0x20U))))
                        ? 1U : 4U);
            }
        } else if ((4U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
            if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_busy)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 6U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait = 0U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
                if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state = 0U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait)));
                }
            }
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__a 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g 
                = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__a), 1U) 
                             ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g 
                = ((0x3ffU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g)) 
                   | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g)) 
                                ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g) 
                                   << 0xaU))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__127__Vfuncout))];
    if ((((~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)) 
          & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__page_begin))) 
         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled))) {
        if (((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state)) 
             & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses) 
                >> 1U))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__cache 
                = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                             (0xfU 
                                                              & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
                                                                 >> 1U)), 4U)))
                                ? 0U : (vlSelfRef.tb_platform_media__DOT__ard[
                                        (((IData)(0xfU) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,32,32, 
                                                             (0xfU 
                                                              & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
                                                                 >> 1U)), 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,32,32, 
                                                          (0xfU 
                                                           & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
                                                              >> 1U)), 4U))))) 
                              | (vlSelfRef.tb_platform_media__DOT__ard[
                                 (7U & (VL_SHIFTL_III(8,32,32, 
                                                      (0xfU 
                                                       & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
                                                          >> 1U)), 4U) 
                                        >> 5U))] >> 
                                 (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                        (0xfU 
                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__source_byte 
                                                            >> 1U)), 4U)))));
        }
    }
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg1 
        = ((IData)(vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset)
            ? 0U : (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray));
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_bv) {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_platform_media__DOT__bd));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(2U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(3U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid) {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_platform_media__DOT__bd));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(2U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(3U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bv) {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_platform_media__DOT__bd));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(2U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(3U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if ((((((((~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)) 
              & (3U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))) 
             & (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
            & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__byte_valid)) 
           & (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
              >= vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset)) 
          & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) 
         & (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel)))) {
        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__a 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__a), 1U) 
                         ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__a)));
        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g 
            = ((0x3ffU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g)) 
               | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g)) 
                            ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g) 
                               << 0xaU))));
        __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__Vfuncout 
            = __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__g;
        __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 
            = ((0xf800U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q) 
                           << 8U)) | ((0x7e0U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__green) 
                                                 << 3U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue) 
                                                  >> 3U))));
        __VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 
            = __Vfunc_tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_addr__128__Vfuncout;
        __VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0 = 1U;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy 
        = __Vdly__tb_platform_media__DOT__dut__DOT__auxiliary__DOT__busy;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read 
        = __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__bytes_read;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba 
        = __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index 
        = __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__sector_index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
        = __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining 
        = __Vdly__tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__img_start 
        = __Vdly__tb_platform_media__DOT__dut__DOT__img_start;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__bytes_read;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__sector_index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__bytes_read;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster_lba;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__sector_index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_start 
        = __Vdly__tb_platform_media__DOT__dut__DOT__config_start;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__loop_count 
        = __Vdly__tb_platform_media__DOT__dut__DOT__loop_count;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__flush_wait;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0][0U] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[0U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0][1U] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[1U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0][2U] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[2U];
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0][3U] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache__v0[3U];
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_cache__v0;
    }
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name = 0ULL;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__pair_found = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0U;
    } else if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready)) 
                      | (vlSelfRef.tb_platform_media__DOT__dut__DOT__image_name 
                         != vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name)))) {
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__image_name;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__pair_found = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0U;
    } else {
        if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid) 
              & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_found))) 
             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_name 
                == vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__pair_found = 1U;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_issue) {
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan)));
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 1U;
        } else {
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0U;
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_name;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_found 
        = __Vdly__tb_platform_media__DOT__dut__DOT__pair_found;
    if ((1U & ((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
               | (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active))))) {
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_current_page = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__correct = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices_valid = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_accept))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 0U;
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_accept))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request = 0U;
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__control_accept))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request = 0U;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured) {
            if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting) 
                  & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded)) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request)))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_current_page 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 1U;
                if ((0xffU != (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                        >> 0x10U)))) {
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__310__target 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                    >> 0x10U));
                    if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__310__target) 
                         < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio 
                            = (0x3fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__310__target));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request = 1U;
                    } else {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 2U;
                    }
                }
                if (((0U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                    >> 8U))) & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 0U;
                }
                if ((((1U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 1U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 1U;
                }
                if ((((2U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 2U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 2U;
                }
                if ((((3U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 3U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 3U;
                }
                if ((((4U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 4U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 4U;
                }
                if ((((5U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 5U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 5U;
                }
                if ((((6U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 6U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 6U;
                }
                if ((((7U < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                     >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> 7U)) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__first = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus = 7U;
                }
                if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__restore_flag) 
                      & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_focus) 
                         < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                    >> 8U)))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                                 >> (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_focus)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_focus;
                }
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving) {
                if ((((0xffU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor)) 
                      | (7U < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor))) 
                     | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor) 
                        >= (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                    >> 8U))))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving = 0U;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 3U;
                } else if ((1U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                  >> (7U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor))))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus 
                        = (7U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor));
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving = 0U;
                } else if ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving = 0U;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 3U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate 
                        = (7U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor));
                }
            } else if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event) 
                         & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy))) 
                        & ((0xaU > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action)) 
                           | (0xdU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 0U;
                if (((((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action)) 
                       || (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) 
                      || (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) 
                     || (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction 
                        = ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))
                            ? 2U : ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))
                                     ? 3U : ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))
                                              ? 0U : 1U)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving = 1U;
                } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) {
                    if ((1U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus) 
                                >= (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                            >> 8U))) 
                               | (~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available) 
                                     >> (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus)))))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 4U;
                    } else if ((1U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 7U)))) {
                        if (((0xffU != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                        >> 0x18U)) 
                             & (~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered) 
                                   >> (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                             >> 0x18U)))))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 5U;
                        } else {
                            __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__311__target 
                                = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                            >> 0xbU));
                            if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__311__target) 
                                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                                    = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__311__target));
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                            } else {
                                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                            }
                        }
                    } else if ((2U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 7U)))) {
                        __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__312__target 
                            = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                        >> 0xbU));
                        if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__312__target) 
                             < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio 
                                = (0x3fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__312__target));
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request = 1U;
                        } else {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 2U;
                        }
                    } else if ((3U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 7U)))) {
                        if (((0xffU == (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                        >> 0x18U)) 
                             | (3U < (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 0x13U))))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 6U;
                        } else if ((1U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered) 
                                          >> (7U & 
                                              (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                               >> 0x18U))))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 7U;
                        } else {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices_valid 
                                = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices_valid) 
                                   | (0xffU & ((IData)(1U) 
                                               << (7U 
                                                   & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                      >> 0x18U)))));
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices 
                                = (((~ ((IData)(3U) 
                                        << (0xeU & 
                                            (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                             >> 0x17U)))) 
                                    & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices)) 
                                   | (0xffffU & ((3U 
                                                  & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                                     >> 0x13U)) 
                                                 << 
                                                 (0xeU 
                                                  & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                     >> 0x17U)))));
                        }
                    } else if ((4U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 7U)))) {
                        __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__313__target 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vcellinp__ui__back_page;
                        if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__313__target) 
                             < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                                = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__313__target));
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                        } else {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                        }
                    } else if ((5U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 7U)))) {
                        __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__314__target 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_entry;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered = 0U;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__correct = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score = 0U;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__choices_valid = 0U;
                        if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__314__target) 
                             < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                                = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__314__target));
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                        } else {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                        }
                    } else if ((((6U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                                 >> 7U))) 
                                 || (7U == (0xfU & 
                                            (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                             >> 7U)))) 
                                || (8U == (0xfU & (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                                   >> 7U))))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request = 1U;
                    } else if ((9U == (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                               >> 7U)))) {
                        if ((1U & ((0xffU == (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                              >> 0x18U)) 
                                   | (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice_valid))))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 5U;
                        } else if (((0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                              >> 0xbU)) 
                                    >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                        } else {
                            __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__315__target 
                                = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U] 
                                            >> 0xbU));
                            if ((1U & (~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered) 
                                          >> (7U & 
                                              (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                               >> 0x18U)))))) {
                                if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice) 
                                     == (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[3U]))) {
                                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score 
                                        = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score)));
                                }
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered 
                                    = ((IData)(__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered) 
                                       | (0xffU & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                       >> 0x18U)))));
                                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__correct 
                                    = (((~ ((IData)(1U) 
                                            << (7U 
                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                   >> 0x18U)))) 
                                        & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__correct)) 
                                       | (0xffU & (
                                                   ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice) 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[3U])) 
                                                   << 
                                                   (7U 
                                                    & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                       >> 0x18U)))));
                            }
                            if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__315__target) 
                                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                                    = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__315__target));
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                            } else {
                                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 8U;
                    }
                } else if ((0xdU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) {
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__316__target 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_target;
                    if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__316__target) 
                         < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                            = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__316__target));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                    } else {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) {
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__317__target 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT____Vcellinp__ui__back_page;
                    if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__317__target) 
                         < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                            = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__317__target));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                    } else {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                    }
                } else if ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) {
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__318__target 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_entry;
                    if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__318__target) 
                         < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                            = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__318__target));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
                    } else {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
                    }
                } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))) {
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__319__target 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                    >> 0x10U));
                    if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__319__target) 
                         < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio 
                            = (0x3fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__play__319__target));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request = 1U;
                    } else {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 2U;
                    }
                } else {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 8U;
                }
            }
        } else {
            __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__320__target 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__config_entry;
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured = 1U;
            if (((IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__320__target) 
                 < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
                    = (0x1fU & (IData)(__Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__jump__320__target));
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting = 1U;
            } else {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error = 1U;
            }
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__configured;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__attempts;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__pair_request = 0U;
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__paired_index = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__armed = 0U;
    } else if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change) 
                | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__armed 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change;
    }
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[0U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[2U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[3U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write_index = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[0U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[1U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[2U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[3U] = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__visible = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__enabled = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 1U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image = 1U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_select = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_index = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__page_begin = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_select = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_index = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__params = 0ULL;
        tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_loop = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_accept = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_accept = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__control_accept = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_target = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page = 0x1fU;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page = 0x1fU;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_focus = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__restore_flag = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__track_switching = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found = 0U;
        __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v0 = 1U;
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_select = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__page_begin = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_select = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_accept = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_accept = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__control_accept = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid = 0U;
        if ((((((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading))) 
               & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy))) 
              & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded))) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__restore_flag = 0U;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active) {
            if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_request) 
                 & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority) 
                    > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority;
            }
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_exit) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending = 1U;
            }
            if ((((IData)(vlSelfRef.tb_platform_media__DOT__ev) 
                  & (7U == (IData)(vlSelfRef.tb_platform_media__DOT__action))) 
                 & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home = 1U;
            }
            if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical) 
                  & (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice))) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending = 1U;
            }
            if ((0xc34fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock))) {
                if ((((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                      & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice))) 
                     & (0xffffU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms)));
                }
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock = 0U;
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock)));
            }
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical = 0U;
            if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_request) 
                 & (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft = 1U;
            }
        } else {
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical = 0U;
        }
        if (((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                 | (0x1dU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
               | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
              | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
             | (0x1aU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_finished) 
                     & (IData)(vlSelfRef.tb_platform_media__DOT__mode))) {
                    if ((2U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_version))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x10U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                    } else if (((0U != (0x1fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__config_length)) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__config_length 
                                   < vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__table_bytes))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x11U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri) 
                     == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 4U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__index 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__index) 
                                           << 3U)));
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__175__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__176__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 2U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__175__address;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x1dU;
            } else if ((0x1dU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((((1U > ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__177__Vfuncout 
                                                = (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                   >> 0x18U);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__177__Vfuncout))) 
                       | (3U < ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__178__Vfuncout 
                                                = (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                   >> 0x18U);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__178__Vfuncout)))) 
                      | (0U != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                >> 0x10U))) | (0U != 
                                               (0xffffU 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U])))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x12U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else if ((3U == ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__180__Vfuncout 
                                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                       >> 0x18U);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__180__Vfuncout)))) {
                    if (((IData)(((0U != (0x1f0000U 
                                          & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U])) 
                                  | ((((((0U == (0xffffU 
                                                 & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U])) 
                                         | (0x110U 
                                            < (0xffffU 
                                               & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]))) 
                                        | (0U == (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                  >> 0x10U))) 
                                       | (0x40U < (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                   >> 0x10U))) 
                                      | (((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                           << 0x10U) 
                                          | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U] 
                                             >> 0x10U)) 
                                         != vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__sprite_length_q)) 
                                     | (((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                          << 0x10U) 
                                         | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                            >> 0x10U)) 
                                        < vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__table_bytes)))) 
                         | ((0x1ffffffffULL & ((QData)((IData)(
                                                               ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                                   >> 0x10U)))) 
                                               + (QData)((IData)(
                                                                 (0xffffffe0U 
                                                                  & ((IData)(0x1fU) 
                                                                     + 
                                                                     ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U] 
                                                                         >> 0x10U)))))))) 
                            > (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_length))))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x13U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri)));
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 1U;
                    }
                } else if ((((1U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__182__Vfuncout 
                                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                               >> 0x18U);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__182__Vfuncout))) 
                             & (0x504d42U != (0xffffffU 
                                              & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]))) 
                            | ((2U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__183__Vfuncout 
                                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                               >> 0x18U);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__183__Vfuncout))) 
                               & (0x564157U != (0xffffffU 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x12U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else if ((((1U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__185__Vfuncout 
                                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                               >> 0x18U);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__185__Vfuncout))) 
                             & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count))) 
                            | ((2U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__186__Vfuncout 
                                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                               >> 0x18U);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__186__Vfuncout))) 
                               & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x14U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query 
                        = ((2U == ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__188__Vfuncout 
                                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                           >> 0x18U);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__188__Vfuncout)))
                            ? 0x20U : 0U);
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle = 8U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 3U;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle 
                        = (0xfU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle) 
                                   - (IData)(1U)));
                } else if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_valid) 
                            & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_tag) 
                               == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query)))) {
                    if ((vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_name 
                         == (((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U]))))) {
                        if ((vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_bytes 
                             != ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                  << 0x10U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U] 
                                               >> 0x10U)))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x15U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                            vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                        } else {
                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__value 
                                = (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query));
                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__Vfuncout 
                                = ((0x10U & (VL_REDXOR_8(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__value) 
                                             << 4U)) 
                                   | (0xfU & ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__value) 
                                              ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__value) 
                                                 >> 1U))));
                            __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 
                                = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__encode_index__190__Vfuncout;
                            __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 
                                = (0x3fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri));
                            __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0 = 1U;
                            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 1U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri)));
                        }
                    } else if ((((IData)(1U) + (0x1fU 
                                                & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query))) 
                                >= ((0x20U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query))
                                     ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count)
                                     : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count)))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x14U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query 
                            = ((0x20U & (IData)(__Vdly__tb_platform_media__DOT__dut__DOT__lookup_query)) 
                               | (0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query))));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle = 8U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi) 
                     == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 6U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__index 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + VL_SHIFTL_III(21,21,32, 
                                                        ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources) 
                                                         + (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__index)), 3U)));
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__192__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__193__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 5U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__192__address;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((((((((((((((((((((([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__194__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__194__Vfuncout)) 
                                        != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi)) 
                                       | (([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__195__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 8U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__195__Vfuncout)) 
                                          >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) 
                                      | ((0xffU != 
                                          ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__196__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 0x10U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__196__Vfuncout))) 
                                         & (([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__197__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 0x10U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__197__Vfuncout)) 
                                            >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources)))) 
                                     | (0U != (0xf8U 
                                               & VL_EXTEND_II(32,8, 
                                                              ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__198__Vfuncout 
                                                                                = 
                                                                                (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 0x18U);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__198__Vfuncout)))))) 
                                    | ((0xffU != ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__199__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__199__Vfuncout))) 
                                       & (([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__200__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__200__Vfuncout)) 
                                          >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages)))) 
                                   | (0U != ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__201__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U] 
                                                                                >> 8U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__201__Vfuncout)))) 
                                  | (8U < ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__202__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 8U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__202__Vfuncout)))) 
                                 | ((0x1ffU & (VL_EXTEND_II(9,8, 
                                                            ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__203__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__203__Vfuncout))) 
                                               + VL_EXTEND_II(9,8, 
                                                              ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__204__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 8U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__204__Vfuncout))))) 
                                    > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_widgets))) 
                                | ((0xffU != ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__205__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 0x10U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__205__Vfuncout))) 
                                   & (([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__206__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 0x10U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__206__Vfuncout)) 
                                      >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages)))) 
                               | ((0xffU != ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__207__Vfuncout 
                                                                                = 
                                                                                (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 0x18U);
                                                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__207__Vfuncout))) 
                                  & (((7U < ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__208__Vfuncout 
                                                                                = 
                                                                                (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 0x18U);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__208__Vfuncout))) 
                                      | (3U < ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__209__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__209__Vfuncout)))) 
                                     | (0xffU != ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__210__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__210__Vfuncout)))))) 
                              | ((0xffU == ([&]() {
                                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__211__Vfuncout 
                                                                                = 
                                                                                (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 0x18U);
                                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__211__Vfuncout))) 
                                 & (0xffU != ([&]() {
                                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__212__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__212__Vfuncout))))) 
                             | (2U < ([&]() {
                                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__213__Vfuncout 
                                                                        = 
                                                                        (0xffU 
                                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                                            >> 8U));
                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__213__Vfuncout)))) 
                            | (0x80U < (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                        >> 0x10U))) 
                           | (0x1a4U < (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U]))) 
                          | (0x1e0U < (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[4U] 
                                       >> 0x10U))) 
                         | (0x1c0U < (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U]))) 
                        | (0U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__214__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                                        >> 0x10U));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__214__Vfuncout)))) 
                       | (8U < ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__215__Vfuncout 
                                                = (0xffU 
                                                   & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                                      >> 0x10U));
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__215__Vfuncout)))) 
                      | (0U != ((((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                   << 8U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                             >> 0x18U)) 
                                 | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                     << 8U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                               >> 0x18U))) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                   >> 0x18U)))) | (
                                                   (0U 
                                                    != 
                                                    ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__216__Vfuncout 
                                            = (0xffU 
                                               & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                  >> 8U));
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__216__Vfuncout))) 
                                                   & (0xffU 
                                                      != 
                                                      ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__217__Vfuncout 
                                            = (0xffU 
                                               & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                  >> 0x10U));
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__217__Vfuncout)))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x16U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__223__Vfuncout 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                    >> 8U));
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__index 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__223__Vfuncout;
                    if ((1U == ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__219__Vfuncout 
                                        = (0xffU & 
                                           (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                            >> 8U));
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__219__Vfuncout)))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page 
                            = (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found = 1U;
                    }
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__index) 
                                           << 3U)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0x1aU;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    if ((2U == ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__220__Vfuncout 
                                        = (0xffU & 
                                           (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                            >> 8U));
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__220__Vfuncout)))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page 
                            = (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi));
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found = 1U;
                    }
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__221__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__222__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__221__address;
                }
            } else if ((1U != ([&]() {
                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__224__Vfuncout 
                                = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                   >> 0x18U);
                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__224__Vfuncout)))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x16U;
                __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
            } else if ((0xffU != ([&]() {
                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__226__Vfuncout 
                                = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                                            >> 0x10U));
                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__226__Vfuncout)))) {
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__229__Vfuncout 
                    = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                                >> 0x10U));
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__index 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__229__Vfuncout;
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__Vfuncout 
                    = (0x1fffffU & ((IData)(0x80000U) 
                                    + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__index) 
                                       << 3U)));
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0x1bU;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__227__address 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__228__Vfuncout;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                    = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__227__address;
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi)));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 4U;
            }
        } else if (((((((((0x1bU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                          | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                         | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                        | (8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                       | (9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                      | (0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                     | (0x1cU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                    | (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))) {
            if ((0x1bU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((2U != ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__230__Vfuncout 
                                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                       >> 0x18U);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__230__Vfuncout)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x16U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 4U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi) 
                     == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_widgets))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 1U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0xbU;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__index 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + VL_SHIFTL_III(21,21,32, 
                                                        (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources) 
                                                          + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages)) 
                                                         + (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__index)), 3U)));
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__232__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__233__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 7U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__232__address;
                }
            } else if ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if (((((((((((((((((((([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__234__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U]);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__234__Vfuncout)) 
                                      >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages)) 
                                     | (3U < ([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__235__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 8U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__235__Vfuncout)))) 
                                    | (([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__236__Vfuncout 
                                                                                = 
                                                                                (0xffU 
                                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 0x10U));
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__236__Vfuncout)) 
                                       >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) 
                                   | (([&]() {
                                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__237__Vfuncout 
                                                                                = 
                                                                                (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                                                                >> 0x18U);
                                                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__237__Vfuncout)) 
                                      >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources))) 
                                  | (0x280U <= (0xffffU 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U]))) 
                                 | (0x1e0U <= (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U] 
                                               >> 0x10U))) 
                                | (0U == (0xffffU & 
                                          vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]))) 
                               | (0U == (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                         >> 0x10U))) 
                              | (0x280U < ((0xffffU 
                                            & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U]) 
                                           + (0xffffU 
                                              & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U])))) 
                             | (0x1e0U < ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[1U] 
                                           >> 0x10U) 
                                          + (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                             >> 0x10U)))) 
                            | (1U > ([&]() {
                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__238__Vfuncout 
                                                                    = 
                                                                    (0xffU 
                                                                     & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__238__Vfuncout)))) 
                           | (9U < ([&]() {
                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__239__Vfuncout 
                                                                = 
                                                                (0xffU 
                                                                 & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__239__Vfuncout)))) 
                          | (0U != (0xfcU & VL_EXTEND_II(32,8, 
                                                         ([&]() {
                                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__240__Vfuncout 
                                                                    = 
                                                                    (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                                     >> 0x18U);
                                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__240__Vfuncout)))))) 
                         | (0U != ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[5U] 
                                    | vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U]) 
                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U]))) 
                        | (((1U == ([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__241__Vfuncout 
                                                            = 
                                                            (0xffU 
                                                             & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__241__Vfuncout))) 
                            | (9U == ([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__242__Vfuncout 
                                                            = 
                                                            (0xffU 
                                                             & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__242__Vfuncout)))) 
                           & (([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__243__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                            >> 8U));
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__243__Vfuncout)) 
                              >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages)))) 
                       | ((2U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__244__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__244__Vfuncout))) 
                          & (([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__245__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                        >> 8U));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__245__Vfuncout)) 
                             >= (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources)))) 
                      | (((3U <= ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__246__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__246__Vfuncout))) 
                          & (8U >= ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__247__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__247__Vfuncout)))) 
                         & (0xffU != ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__248__Vfuncout 
                                                = (0xffU 
                                                   & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                      >> 8U));
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__248__Vfuncout))))) 
                     | ((3U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__249__Vfuncout 
                                            = (0xffU 
                                               & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__249__Vfuncout))) 
                        & (3U < ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__250__Vfuncout 
                                            = (0xffU 
                                               & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                  >> 0x10U));
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__250__Vfuncout)))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x17U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__254__Vfuncout 
                        = (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U]);
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__index 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__254__Vfuncout;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + VL_SHIFTL_III(21,21,32, 
                                                        ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources) 
                                                         + (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__index)), 3U)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 8U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__252__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__253__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__252__address;
                }
            } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((((((((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi) 
                            < ([&]() {
                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__255__Vfuncout 
                                                                = 
                                                                (0xffU 
                                                                 & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]);
                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__255__Vfuncout))) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi) 
                              >= (0x1ffU & (VL_EXTEND_II(9,8, 
                                                         ([&]() {
                                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__256__Vfuncout 
                                                                            = 
                                                                            (0xffU 
                                                                             & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]);
                                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__256__Vfuncout))) 
                                            + VL_EXTEND_II(9,8, 
                                                           ([&]() {
                                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__257__Vfuncout 
                                                                            = 
                                                                            (0xffU 
                                                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                                >> 8U));
                                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__257__Vfuncout))))))) 
                          | ((0xffU != ([&]() {
                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__258__Vfuncout 
                                                                = 
                                                                (0xffU 
                                                                 & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U]);
                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__258__Vfuncout))) 
                             & (([&]() {
                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__259__Vfuncout 
                                                                = 
                                                                (0xffU 
                                                                 & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U]);
                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__259__Vfuncout)) 
                                >= ([&]() {
                                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__260__Vfuncout 
                                                                = 
                                                                (0xffU 
                                                                 & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                    >> 8U));
                                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__260__Vfuncout))))) 
                         | ((0xffU != ([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__261__Vfuncout 
                                                            = 
                                                            (0xffU 
                                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                                >> 8U));
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__261__Vfuncout))) 
                            & (([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__262__Vfuncout 
                                                            = 
                                                            (0xffU 
                                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                                >> 8U));
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__262__Vfuncout)) 
                               >= ([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__263__Vfuncout 
                                                            = 
                                                            (0xffU 
                                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                                >> 8U));
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__263__Vfuncout))))) 
                        | ((0xffU != ([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__264__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                            >> 0x10U));
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__264__Vfuncout))) 
                           & (([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__265__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                            >> 0x10U));
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__265__Vfuncout)) 
                              >= ([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__266__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                            >> 8U));
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__266__Vfuncout))))) 
                       | ((0xffU != ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__267__Vfuncout 
                                                    = 
                                                    (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                     >> 0x18U);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__267__Vfuncout))) 
                          & (([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__268__Vfuncout 
                                                    = 
                                                    (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                     >> 0x18U);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__268__Vfuncout)) 
                             >= ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__269__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                        >> 8U));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__269__Vfuncout))))) 
                      | (((3U == (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U])) 
                          | (9U == (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))) 
                         & (0xffU == ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__270__Vfuncout 
                                                = (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                   >> 0x18U);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__270__Vfuncout))))) 
                     | (((((0U != ([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__271__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                                            >> 8U));
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__271__Vfuncout))) 
                           & (4U != (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))) 
                          & (6U != (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))) 
                         & (7U != (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))) 
                        & (8U != (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x18U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__275__Vfuncout 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                                    >> 0x10U));
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__index 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__275__Vfuncout;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__index) 
                                           << 3U)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 9U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__273__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__274__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__273__address;
                }
            } else if ((9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((((3U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__276__Vfuncout 
                                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                               >> 0x18U);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__276__Vfuncout))) 
                      | ((0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]) 
                         != (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U]))) 
                     | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                         >> 0x10U) != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                                       >> 0x10U)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x19U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__280__Vfuncout 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                           >> 0x18U);
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__index 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__280__Vfuncout;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__index) 
                                           << 3U)));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0xaU;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__278__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__279__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__278__address;
                }
            } else if ((0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((((3U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__281__Vfuncout 
                                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                               >> 0x18U);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__281__Vfuncout))) 
                      | ((0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]) 
                         != (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U]))) 
                     | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                         >> 0x10U) != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                                       >> 0x10U)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x19U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else if ((2U == (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))) {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__index 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                    >> 8U));
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__index) 
                                           << 3U)));
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__283__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__284__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0x1cU;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__283__address;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 6U;
                }
            } else if ((0x1cU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((2U != ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__285__Vfuncout 
                                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                       >> 0x18U);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__285__Vfuncout)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x17U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 6U;
                }
            } else if (((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_notice) 
                          > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                         & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_notice))) 
                        & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy)))) {
                if (((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_notice))
                      ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found)
                      : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid)))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_focus 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus;
                    }
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_notice;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice = 0U;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_target 
                        = ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_notice))
                            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page)
                            : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page));
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home = 0U;
                } else {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice = 0U;
                }
            } else if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending) 
                         & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid)) 
                        & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_target 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home)
                        ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_entry)
                        : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio 
                    = (1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home)));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__restore_flag 
                    = (1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home)));
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request) {
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__index 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page;
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__Vfuncout 
                    = (0x1fffffU & ((IData)(0x80000U) 
                                    + VL_SHIFTL_III(21,21,32, 
                                                    ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources) 
                                                     + (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__index)), 3U)));
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_accept = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired = 0U;
                __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__287__address 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_addr__288__Vfuncout;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0xdU;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                    = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__287__address;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request) {
                if (((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                     | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_accept = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x18U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__index 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio;
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__Vfuncout 
                        = (0x1fffffU & ((IData)(0x80000U) 
                                        + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__index) 
                                           << 3U)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio;
                    __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__289__address 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__290__Vfuncout;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0x16U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__289__address;
                }
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__control_accept = 1U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x18U;
            } else if ((((((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy)) 
                           & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice))) 
                          & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired))) 
                         & (0xffU != ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__291__Vfuncout 
                                        = (0xffU & 
                                           vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[1U]);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__291__Vfuncout)))) 
                        & ((0U != ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__292__Vfuncout 
                                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[1U] 
                                           >> 0x10U);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__292__Vfuncout))) 
                           & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms) 
                              >= ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__293__Vfuncout 
                                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[1U] 
                                           >> 0x10U);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__293__Vfuncout)))))) {
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__294__Vfuncout 
                    = (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[1U]);
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_target 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__294__Vfuncout;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired = 1U;
            }
        } else if (((((((((0xdU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                          | (0xeU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                         | (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                        | (0x10U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                       | (0x11U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                      | (0x12U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                     | (0x19U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) 
                    | (0x13U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)))) {
            if ((0xdU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__visible = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__enabled = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[0U] = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[1U] = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[2U] = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[3U] = 0U;
                __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v4 = 1U;
                if ((0U == ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__295__Vfuncout 
                                    = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                                >> 8U));
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__295__Vfuncout)))) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x19U;
                } else {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__296__Vfuncout 
                        = (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U]);
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__296__Vfuncout;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0xeU;
                }
                __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v5 = 1U;
            } else if ((0xeU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__index 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi;
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__Vfuncout 
                    = (0x1fffffU & ((IData)(0x80000U) 
                                    + VL_SHIFTL_III(21,21,32, 
                                                    (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources) 
                                                      + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages)) 
                                                     + (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__index)), 3U)));
                __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__297__address 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__widget_addr__298__Vfuncout;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0xfU;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                    = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__297__address;
            } else if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__301__Vfuncout 
                    = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[0U] 
                                >> 0x10U));
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__index 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__301__Vfuncout;
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__Vfuncout 
                    = (0x1fffffU & ((IData)(0x80000U) 
                                    + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__index) 
                                       << 3U)));
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0x10U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__299__address 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__300__Vfuncout;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                    = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__299__address;
            } else if ((0x10U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__304__Vfuncout 
                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                       >> 0x18U);
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__index 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__hb__304__Vfuncout;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset 
                    = (0xfffffU & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                    << 0x10U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                 >> 0x10U)));
                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__Vfuncout 
                    = (0x1fffffU & ((IData)(0x80000U) 
                                    + ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__index) 
                                       << 3U)));
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state = 0x11U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3cU;
                __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__302__address 
                    = __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resource_addr__303__Vfuncout;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_addr 
                    = __Vtask_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__read_word__302__address;
            } else if ((0x11U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write = 1U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_write_index 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[0U] 
                    = ((0xf0000000U & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[0U]) 
                       | ((0xff80000U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                                         << 0x13U)) 
                          | ((0x7fc00U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[1U] 
                                          >> 6U)) | 
                             (0x3ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[1U]))));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[0U] 
                    = ((0xfffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[0U]) 
                       | (0xf0000000U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                                         << 0xcU)));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U] 
                    = ((0xfffffff8U & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U]) 
                       | (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                                >> 0x14U)));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U] 
                    = ((0xfff80007U & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U]) 
                       | (0xfffffff8U & (((0x7f800U 
                                           & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                              << 3U)) 
                                          | (0x780U 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                                << 7U))) 
                                         | ((0x60U 
                                             & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                                >> 0x13U)) 
                                            | (0x18U 
                                               & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[0U] 
                                                  >> 5U))))));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U] 
                    = ((0x7ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[1U]) 
                       | ((IData)((((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset)) 
                                    << 0x1cU) | (QData)((IData)(
                                                                ((0xfffff00U 
                                                                  & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                                                      << 0x18U) 
                                                                     | (0xffff00U 
                                                                        & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                                           >> 8U)))) 
                                                                 | (0xffU 
                                                                    & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                                                       >> 0x10U))))))) 
                          << 0x13U));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[2U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset)) 
                                  << 0x1cU) | (QData)((IData)(
                                                              ((0xfffff00U 
                                                                & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                                                    << 0x18U) 
                                                                   | (0xffff00U 
                                                                      & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                                         >> 8U)))) 
                                                               | (0xffU 
                                                                  & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                                                     >> 0x10U))))))) 
                        >> 0xdU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset)) 
                                               << 0x1cU) 
                                              | (QData)((IData)(
                                                                ((0xfffff00U 
                                                                  & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                                                      << 0x18U) 
                                                                     | (0xffff00U 
                                                                        & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                                           >> 8U)))) 
                                                                 | (0xffU 
                                                                    & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                                                       >> 0x10U)))))) 
                                             >> 0x20U)) 
                                    << 0x13U));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_data[3U] 
                    = (7U & ((IData)(((((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset)) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    ((0xfffff00U 
                                                                      & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                                                          << 0x18U) 
                                                                         | (0xffff00U 
                                                                            & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                                               >> 8U)))) 
                                                                     | (0xffU 
                                                                        & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                                                           >> 0x10U)))))) 
                                      >> 0x20U)) >> 0xdU));
                if ((3U == (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U]))) {
                    __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 
                        = (((QData)((IData)(((0xfe00U 
                                              & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U] 
                                                 >> 7U)) 
                                             | (0x1ffU 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[2U])))) 
                            << 0x13U) | (QData)((IData)(
                                                        ((0x7fc00U 
                                                          & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[1U] 
                                                             >> 6U)) 
                                                         | (0x3ffU 
                                                            & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[1U])))));
                    __VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 
                        = (3U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                 >> 0x10U));
                    __VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8 = 1U;
                }
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x12U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__visible 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot))) 
                        & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__visible)) 
                       | (0xffU & ((1U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                          >> 0x19U)) 
                                   << (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot))));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__enabled 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot))) 
                        & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__enabled)) 
                       | (0xffU & ((1U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[3U] 
                                          >> 0x18U)) 
                                   << (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot))));
                VL_ASSIGNSEL_WI(128,4,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot), 4U)), vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors, 
                                ((8U > (0xffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U]))
                                  ? (7U & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U])
                                  : 0xfU));
                VL_ASSIGNSEL_WI(128,4,(0x7fU & ((IData)(4U) 
                                                + VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot), 4U))), vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors, 
                                ((8U > (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                 >> 8U)))
                                  ? (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                           >> 8U)) : 0xfU));
                VL_ASSIGNSEL_WI(128,4,(0x7fU & ((IData)(8U) 
                                                + VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot), 4U))), vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors, 
                                ((8U > (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                                 >> 0x10U)))
                                  ? (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                           >> 0x10U))
                                  : 0xfU));
                VL_ASSIGNSEL_WI(128,4,(0x7fU & ((IData)(0xcU) 
                                                + VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot), 4U))), vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors, 
                                ((8U > (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                        >> 0x18U)) ? 
                                 (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__held[4U] 
                                        >> 0x18U)) : 0xfU));
            } else if ((0x12U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot)) 
                     < (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                >> 8U)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi)));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0xeU;
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x19U;
                }
            } else if ((0x19U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x13U;
            } else if ((1U & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image) 
                              | (~ ((5U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state)) 
                                    & (6U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__state))))))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_index 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__image_resolved_q;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_image_select = 1U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__page_begin = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps 
                    = vlSelfRef.tb_platform_media__DOT__swaps;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image = 0U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x14U;
            }
        } else if ((0x14U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__image_error))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x21U;
                __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
            } else if ((vlSelfRef.tb_platform_media__DOT__swaps 
                        != vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps)) {
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired = 0U;
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice = 0U;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home = 0U;
                    if ((0xffU == (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                            >> 0x10U)))) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio = 0U;
                    }
                }
                if (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                     & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning)))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__track_switching = 1U;
                }
                if (((IData)(((0xff0000U == (0xff0000U 
                                             & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U])) 
                              & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)))) 
                     & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource = 0xffU;
                    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_loop = 0U;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__params 
                        = ((QData)((IData)((0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket))))) 
                           << 0x22U);
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x17U;
                } else {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0xbU;
                }
            }
        } else if ((0x16U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            if (((2U != ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__306__Vfuncout 
                                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[2U] 
                                       >> 0x18U);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__rb__306__Vfuncout))) 
                 | (0U == ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                            << 0x10U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                         >> 0x10U))))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_accept = 1U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0x22U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0xbU;
            } else {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_index 
                    = (0xfU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_resolved_q));
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__track_switching = 1U;
                tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_loop 
                    = (((0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                  >> 0x10U)) == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource)) 
                       & ([&]() {
                            __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__307__Vfuncout 
                                = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                   >> 0x18U);
                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__307__Vfuncout)));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x17U;
                __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket)));
                vlSelfRef.__Vdly__tb_platform_media__DOT__params 
                    = (0x200000000ULL | (((QData)((IData)(
                                                          (0xffU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             (((0xffU 
                                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                                                   >> 0x10U)) 
                                                               == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource)) 
                                                              & ([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__308__Vfuncout 
                                                        = 
                                                        (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                                                         >> 0x18U);
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__308__Vfuncout))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[7U] 
                                                                << 0x10U) 
                                                               | (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[6U] 
                                                                  >> 0x10U)))))));
            }
        } else if ((0x17U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            if (((IData)(vlSelfRef.tb_platform_media__DOT__ack) 
                 == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_accept 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__track_switching = 0U;
                if ((0xffU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop = 1U;
                } else {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_select = 1U;
                }
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state 
                    = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request)
                        ? 0x18U : 0xbU);
            }
        } else if ((0x18U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request)) 
                       & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request))))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0xbU;
            }
        } else if ((0x3cU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3dU;
            }
        } else if ((0x3dU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses))) {
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state;
            }
        } else if ((0x3fU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error = 0xffU;
            __Vdly__tb_platform_media__DOT__dut__DOT__rt_active = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state = 0x3fU;
            vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__configured_ui__DOT__runtime__mem_valid = 0U;
        }
    }
    if ((1U & ((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
               | (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active))))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_exit = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_request = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority = 0U;
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_exit = 0U;
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event) 
             & (0xcU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_exit = 1U;
        }
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_request = 0U;
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event) 
             & ((0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action)) 
                | (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_request = 1U;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority 
                = ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action))
                    ? 2U : 1U);
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__return_state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ri;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pi;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__wi;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__settle;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__slot;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__label_offset;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__first_image;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_swaps;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ticket;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ms_clock;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__elapsed_ms;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__auto_fired;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_page;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_page;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__context_valid;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__returning;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_pending;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_home;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__suppress_audio;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__last_physical;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_soft;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_found;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_found;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page_loaded;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_resource;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved[__VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__lookup_query 
        = __Vdly__tb_platform_media__DOT__dut__DOT__lookup_query;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__value 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved_q;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__t 
        = (1U & VL_REDXOR_8((0x15U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__value))));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout 
        = ((7U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout)) 
           | (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__t) 
               << 4U) | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__value)) 
                               ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__t) 
                                  << 3U)))));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout 
        = ((0x1bU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout)) 
           | (4U & ((VL_REDXOR_4((0xcU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__value))) 
                     ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__t)) 
                    << 2U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout 
        = ((0x1dU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout)) 
           | (2U & ((VL_REDXOR_4((0xeU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__value))) 
                     ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__t)) 
                    << 1U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout 
        = ((0x1eU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout)) 
           | (1U & (VL_REDXOR_4((0xfU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__value))) 
                    ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__t))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__image_resolved_q 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__161__Vfuncout;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__value 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__resolved_q;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__t 
        = (1U & VL_REDXOR_8((0x15U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__value))));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout 
        = ((7U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout)) 
           | (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__t) 
               << 4U) | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__value)) 
                               ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__t) 
                                  << 3U)))));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout 
        = ((0x1bU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout)) 
           | (4U & ((VL_REDXOR_4((0xcU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__value))) 
                     ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__t)) 
                    << 2U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout 
        = ((0x1dU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout)) 
           | (2U & ((VL_REDXOR_4((0xeU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__value))) 
                     ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__t)) 
                    << 1U)));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout 
        = ((0x1eU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout)) 
           | (1U & (VL_REDXOR_4((0xfU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__value))) 
                    ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__t))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__audio_resolved_q 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__decode_index__162__Vfuncout;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[0U] = 0ULL;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[1U] = 0ULL;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[2U] = 0ULL;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[3U] = 0ULL;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v4) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[0U] = 0ULL;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v5) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[1U] = 0ULL;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[2U] = 0ULL;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[3U] = 0ULL;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect[__VdlyDim0__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect__v8;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__available 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__enabled) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__visible));
    __Vtemp_9[0U] = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[0U];
    __Vtemp_9[1U] = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[1U];
    __Vtemp_9[2U] = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[2U];
    __Vtemp_9[3U] = vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__neighbors[3U];
    __Vtemp_9[4U] = 0U;
    __Vtemp_9[5U] = 0U;
    __Vtemp_9[6U] = 0U;
    __Vtemp_9[7U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__compact_neighbor 
        = (0xfU & (((0U == (0x1fU & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate) 
                                      << 4U) | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction) 
                                                << 2U))))
                     ? 0U : (__Vtemp_9[(((IData)(3U) 
                                         + (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction) 
                                               << 2U))) 
                                        >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate) 
                                                    << 4U) 
                                                   | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction) 
                                                      << 2U)))))) 
                   | (__Vtemp_9[(0x7ffffffU & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate) 
                                                >> 1U) 
                                               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction) 
                                                  >> 3U)))] 
                      >> (0x1fU & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__candidate) 
                                    << 4U) | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__direction) 
                                              << 2U))))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__waiting) 
           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__moving) 
              | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_page_request) 
                 | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_audio_request) 
                    | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_control_request)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__sprite_length_q 
        = (0x1fffeU & (((0x1ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U]) 
                        * (0x7fU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__record[3U] 
                                    >> 0x10U))) << 1U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__neighbor 
        = ((8U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__compact_neighbor))
            ? 0xffU : (7U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__ui__DOT__compact_neighbor)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active 
        = __Vdly__tb_platform_media__DOT__dut__DOT__rt_active;
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_finished = 0U;
    } else {
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch = 0U;
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started)))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started = 1U;
            if (vlSelfRef.tb_platform_media__DOT__found) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch = 1U;
            } else {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_finished = 1U;
            }
        }
        if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started) 
              & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch))) 
             & ((((IData)(vlSelfRef.tb_platform_media__DOT__config_ready) 
                  & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_done)) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__busy))) 
                | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__aborted) 
                    & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__busy))) 
                   & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_idle))))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_finished = 1U;
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__started;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__requested_notice 
        = (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_request) 
            & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority) 
               > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice)))
            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice_priority)
            : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice));
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch))) {
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_done = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__platform_boot__mem_valid) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting = 1U;
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting = 0U;
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__final_word) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_done = 1U;
            }
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__aborted) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting)) 
                       | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_responses)))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_done = 1U;
            }
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = 0xffffffffU;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
        vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_widgets = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_entry = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_version = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_length = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 0U;
    } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch) {
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc = 0xffffffffU;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 1U;
        vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 0U;
    } else if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy) 
                & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 1U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
        vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
    } else if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy) 
                 & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_valid)) 
                & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_ready))) {
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done) {
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__data 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q;
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__old 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = (__Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__old 
                   ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__data));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value 
                = ((1U & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value)
                    ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U))
                    : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value, 1U));
            __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__value;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__62__Vfuncout;
            if (((0x1fffffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                               - (IData)(0x20U))) == 
                 (0x1fffffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
                               - (IData)(1U))))) {
                if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                    if (((~ ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__data 
                                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q;
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__old 
                                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = (__Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__old 
                                               ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__data));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value 
                                            = ((1U 
                                                & __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value)
                                                ? (0xedb88320U 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U))
                                                : VL_SHIFTR_III(32,32,32, __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value, 1U));
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__Vfuncout 
                                            = __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__value;
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc_byte__63__Vfuncout)) 
                         != vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc)) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 7U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                        vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                        vlSelfRef.tb_platform_media__DOT__config_ready = 1U;
                    }
                } else {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 6U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
                }
            } else if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 2U;
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                    = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position));
            }
        } else {
            if ((0x14U > vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q;
                __VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 
                    = (0x1fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position);
                __VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0 = 1U;
            }
            if (((0x14U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position) 
                 & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved = 1U;
            }
            if ((0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x44U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x4dU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((2U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x5aU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((3U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x50U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((4U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if (((1U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)) 
                     & (2U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if (((5U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position) 
                        || (7U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position))) {
                if ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            } else if ((6U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if ((0x20U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix = 1U;
                }
            }
            if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining)) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 2U;
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
            } else if ((0x1fU == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position)) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 3U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
                } else if (((((((((0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                   [0x10U]) | (0x40U 
                                               < vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                               [0x10U])) 
                                 | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                    [0x11U])) | (0x20U 
                                                 < 
                                                 vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                                 [0x11U])) 
                               | (0x80U < vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                  [0x12U])) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                               [0x13U] 
                                               >= vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                               [0x11U])) 
                             | ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                 [4U]) & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length 
                                           != VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum), 5U)) 
                                          | (0x1c00U 
                                             < vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length)))) 
                            | ((2U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                [4U]) & ((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length 
                                          < VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum), 5U)) 
                                         | (0x100000U 
                                            < vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length))))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 4U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
                } else if (((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q)) 
                            | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error = 5U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy = 0U;
                    vlSelfRef.tb_platform_media__DOT__config_ready = 0U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
                        = (0x1fffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length);
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_length 
                        = (0x1fffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length);
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_version 
                        = (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                           [4U]);
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_crc;
                    __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position = 0x20U;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources 
                        = (0x7fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                           [0x10U]);
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages 
                        = (0x3fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                           [0x11U]);
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_widgets 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                        [0x12U];
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__config_entry 
                        = (0x1fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                           [0x13U]);
                }
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                    = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position));
            }
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase_q) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_tag 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__browse_query_q;
        if ((0x20U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__browse_query_q))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_bytes 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_name 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_name;
        } else {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_bytes 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_name 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_name;
        }
        vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_valid 
            = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready) 
               & ((0x20U & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__browse_query_q))
                   ? ((0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__browse_query_q)) 
                      < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count))
                   : ((0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__browse_query_q)) 
                      < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count))));
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid) {
        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bd;
        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 
            = vlSelfRef.tb_platform_media__DOT__bi;
        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0 = 1U;
        if ((0x40U > (IData)(vlSelfRef.tb_platform_media__DOT__bi))) {
            __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 
                = vlSelfRef.tb_platform_media__DOT__bd;
            __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 
                = (0x3fU & (IData)(vlSelfRef.tb_platform_media__DOT__bi));
            __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0 = 1U;
        }
        if ((0x1feU == (IData)(vlSelfRef.tb_platform_media__DOT__bi))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature 
                = ((0xff00U & (IData)(__Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature)) 
                   | (IData)(vlSelfRef.tb_platform_media__DOT__bd));
        }
        if (((0x1c6U <= (IData)(vlSelfRef.tb_platform_media__DOT__bi)) 
             & (0x1c9U >= (IData)(vlSelfRef.tb_platform_media__DOT__bi)))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
                                                          - (IData)(0x1c6U)), 3U)))) 
                    & __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start) 
                   | (0xffffffffULL & ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
                                                          - (IData)(0x1c6U)), 3U)))));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_offset))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_platform_media__DOT__bd));
        }
        if ((0x1ffU == (IData)(vlSelfRef.tb_platform_media__DOT__bi))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature 
                = ((0xffU & (IData)(__Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature)) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(2U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__bi) 
             == ((IData)(3U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_offset)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_platform_media__DOT__bd) 
                      << 0x18U));
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_cluster = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__wav_bytes = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_valid = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__browse_tag = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__image_cluster = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_bytes = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__image_name = 0ULL;
    } else {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__wave) 
             < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_cluster 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_cluster_q;
            __Vdly__tb_platform_media__DOT__dut__DOT__wav_bytes 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_bytes_q;
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__selected) 
             < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__image_cluster 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__image_cluster_q;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_bytes 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__image_bytes_q;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__image_name 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__image_name_q;
        } else {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__image_cluster = 0U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_bytes = 0U;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__image_name = 0ULL;
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.tb_platform_media__DOT__found = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_cluster = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bytes = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_catalog_ready = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__fat16 = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__spc = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__fat_base = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__data_base = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_count = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_found = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__wav_count = 0U;
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) 
               | (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) 
              | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) 
             | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready) {
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba = 0U;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 2U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__sd_done) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                if ((0xaa55U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__signature))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else if (((0x200U == ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__83__Vfuncout 
                                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                            [0xcU] 
                                            << 8U) 
                                           | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                           [0xbU]);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__83__Vfuncout))) 
                            & (0U != vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                               [0xdU]))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 3U;
                } else if ((0U != vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start)) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 3U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                    __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__84__lba 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start;
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__84__lba;
                } else {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 2U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                if (((((((0xaa55U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__signature)) 
                         | (0x200U != ([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__85__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                          [0xcU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                         [0xbU]);
                                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__85__Vfuncout)))) 
                        | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                           [0xdU])) | (0U != (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                              [0xdU] 
                                              & (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                 [0xdU] 
                                                 - (IData)(1U))))) 
                      | (0U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__86__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__86__Vfuncout)))) 
                     | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                        [0x10U]))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 3U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__fat16 
                        = (0U != ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__87__Vfuncout 
                                    = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__87__Vfuncout)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 4U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__spc 
                        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                        [0xdU];
                    __Vdly__tb_platform_media__DOT__dut__DOT__fat_base 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base 
                           + VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__88__Vfuncout 
                                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                            [0xfU] 
                                            << 8U) 
                                           | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                           [0xeU]);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__88__Vfuncout))));
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors 
                        = VL_SHIFTR_III(32,32,32, ((IData)(0xfU) 
                                                   + 
                                                   VL_EXTEND_II(32,16, 
                                                                ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__89__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                [0x12U] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x11U]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__89__Vfuncout)))), 4U);
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base 
                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base 
                            + VL_EXTEND_II(32,16, ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__90__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__90__Vfuncout)))) 
                           + (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                              [0x10U] * ((0U != ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__91__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__91__Vfuncout)))
                                          ? VL_EXTEND_II(32,16, 
                                                         ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__92__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__92__Vfuncout)))
                                          : ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__93__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                 [0x27U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x26U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x25U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                  [0x24U]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__93__Vfuncout))));
                    __Vdly__tb_platform_media__DOT__dut__DOT__data_base 
                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base 
                             + VL_EXTEND_II(32,16, 
                                            ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__94__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0xfU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0xeU]);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__94__Vfuncout)))) 
                            + (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                               [0x10U] * ((0U != ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__95__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__95__Vfuncout)))
                                           ? VL_EXTEND_II(32,16, 
                                                          ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__96__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__96__Vfuncout)))
                                           : ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__97__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                     [0x27U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                       [0x26U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                       [0x25U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                      [0x24U]));
                                        }(), __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__97__Vfuncout)))) 
                           + VL_SHIFTR_III(32,32,32, 
                                           ((IData)(0xfU) 
                                            + VL_EXTEND_II(32,16, 
                                                           ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__98__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                    [0x12U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                                   [0x11U]);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__98__Vfuncout)))), 4U));
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root 
                        = (0U != ([&]() {
                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__99__Vfuncout 
                                    = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__99__Vfuncout)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
                        = ((0U != ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__100__Vfuncout 
                                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                            [0x17U] 
                                            << 8U) 
                                           | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                           [0x16U]);
                                }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h16__100__Vfuncout)))
                            ? 0U : (0xfffffffU & ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__101__Vfuncout 
                                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                             [0x2fU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x2eU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                               [0x2dU] 
                                               << 8U) 
                                              | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header
                                              [0x2cU]));
                                }(), __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__h32__101__Vfuncout)));
                }
            } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors)));
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                if ((0xfffU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors))) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 4U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root) {
                    if ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index 
                         >= vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors)) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 9U;
                    } else {
                        __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__102__lba 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base 
                               + vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index);
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba 
                            = __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__102__lba;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 0xbU;
                        __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                    }
                } else if ((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster)) {
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 6U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
                } else {
                    __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__103__lba 
                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__data_base 
                            + ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
                                - (IData)(2U)) * (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) 
                           + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector));
                    vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba 
                        = __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__103__lba;
                    vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 1U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 0xbU;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 1U;
                }
            } else if ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 5U;
            } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
                __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cache_q;
                __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos;
                __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0 = 1U;
                if ((0x1fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 6U;
                } else {
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos)));
                    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0xbU;
                }
            } else if ((0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                        [0U])) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 9U;
            } else {
                if (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__regular_file) {
                    if ((0U == (((0x2042494eU ^ (IData)(
                                                        (((QData)((IData)(
                                                                          (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                             [3U] 
                                                                             << 0x18U) 
                                                                            | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                               [4U] 
                                                                               << 0x10U)) 
                                                                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                               [5U] 
                                                                               << 8U) 
                                                                              | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                              [6U])))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                              [7U] 
                                                                              << 0x18U) 
                                                                             | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [8U] 
                                                                                << 0x10U)) 
                                                                            | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [9U] 
                                                                                << 8U) 
                                                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                               [0xaU]))))))) 
                                 | (0x4e452020U ^ (IData)(
                                                          ((((QData)((IData)(
                                                                             (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [3U] 
                                                                                << 0x18U) 
                                                                               | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [4U] 
                                                                                << 0x10U)) 
                                                                              | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [5U] 
                                                                                << 8U) 
                                                                                | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [6U])))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [7U] 
                                                                                << 0x18U) 
                                                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [8U] 
                                                                                << 0x10U)) 
                                                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [9U] 
                                                                                << 8U) 
                                                                                | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                                [0xaU]))))) 
                                                           >> 0x20U)))) 
                                | (0x534345U ^ ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                 [0U] 
                                                 << 0x10U) 
                                                | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                   [2U])))))) {
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__104__Vfuncout 
                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                 [0x1fU] << 0x18U) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1eU] << 0x10U)) 
                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1dU] << 8U) | 
                                  vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                  [0x1cU]));
                        vlSelfRef.tb_platform_media__DOT__found = 1U;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_cluster 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__config_bytes 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__104__Vfuncout;
                    }
                    if (((((0x42U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c 
                                                    = 
                                                    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [8U];
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__c)));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__105__Vfuncout))) 
                           & (0x4dU == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c 
                                                    = 
                                                    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [9U];
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__c)));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__106__Vfuncout)))) 
                          & (0x50U == ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c 
                                                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                [0xaU];
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__Vfuncout 
                                                = (0xffU 
                                                   & (((0x61U 
                                                        <= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c)) 
                                                       & (0x7aU 
                                                          >= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c)))
                                                       ? 
                                                      ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c) 
                                                       - (IData)(0x20U))
                                                       : (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__c)));
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__107__Vfuncout)))) 
                         & (0x20U > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count)))) {
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__a 
                            = (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g 
                            = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__a), 1U) 
                                        ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__a)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g 
                            = ((0xfU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g)) 
                               | (0x10U & ((0xfffffff0U 
                                            & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g)) 
                                           ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g) 
                                              << 4U))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__Vfuncout 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__g;
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__108__Vfuncout;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0 = 1U;
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__109__Vfuncout 
                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                 [0x1fU] << 0x18U) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1eU] << 0x10U)) 
                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1dU] << 8U) | 
                                  vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                  [0x1cU]));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__a 
                            = (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g 
                            = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__a), 1U) 
                                        ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__a)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g 
                            = ((0xfU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g)) 
                               | (0x10U & ((0xfffffff0U 
                                            & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g)) 
                                           ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g) 
                                              << 4U))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__Vfuncout 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__g;
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__109__Vfuncout;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__110__Vfuncout;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0 = 1U;
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value 
                            = (((QData)((IData)((((
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                   [7U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [6U] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [5U] 
                                                     << 8U) 
                                                    | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [4U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                               [3U] 
                                                               << 0x18U) 
                                                              | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [2U] 
                                                                 << 0x10U)) 
                                                             | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [1U] 
                                                                 << 8U) 
                                                                | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                [0U])))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 1U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 2U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 3U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 4U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 5U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 6U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 7U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 8U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 9U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__a 
                            = (0x1fU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g 
                            = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__a), 1U) 
                                        ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__a)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g 
                            = ((0xfU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g)) 
                               | (0x10U & ((0xfffffff0U 
                                            & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g)) 
                                           ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g) 
                                              << 4U))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__Vfuncout 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__g;
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__111__Vfuncout;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__112__Vfuncout;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0 = 1U;
                        vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__image_count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__image_count)));
                    }
                    if (((((0x57U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c 
                                                    = 
                                                    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [8U];
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__c)));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__113__Vfuncout))) 
                           & (0x41U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c 
                                                    = 
                                                    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [9U];
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__Vfuncout 
                                                    = 
                                                    (0xffU 
                                                     & (((0x61U 
                                                          <= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c)) 
                                                         & (0x7aU 
                                                            >= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c)))
                                                         ? 
                                                        ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c) 
                                                         - (IData)(0x20U))
                                                         : (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__c)));
                                            }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__114__Vfuncout)))) 
                          & (0x56U == ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c 
                                                = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                [0xaU];
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__Vfuncout 
                                                = (0xffU 
                                                   & (((0x61U 
                                                        <= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c)) 
                                                       & (0x7aU 
                                                          >= (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c)))
                                                       ? 
                                                      ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c) 
                                                       - (IData)(0x20U))
                                                       : (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__c)));
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__upper__115__Vfuncout)))) 
                         & (0x10U > (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count)))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_found = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__wav_count 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__a 
                            = (0xfU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g 
                            = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__a), 1U) 
                                       ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__a)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g 
                            = ((7U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g)) 
                                        ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g) 
                                           << 3U))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__Vfuncout 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__g;
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_cluster;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__116__Vfuncout;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0 = 1U;
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__117__Vfuncout 
                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                 [0x1fU] << 0x18U) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1eU] << 0x10U)) 
                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                   [0x1dU] << 8U) | 
                                  vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                  [0x1cU]));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__a 
                            = (0xfU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g 
                            = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__a), 1U) 
                                       ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__a)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g 
                            = ((7U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g)) 
                                        ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g) 
                                           << 3U))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__Vfuncout 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__g;
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e32__117__Vfuncout;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__118__Vfuncout;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0 = 1U;
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value 
                            = (((QData)((IData)((((
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                   [7U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [6U] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                     [5U] 
                                                     << 8U) 
                                                    | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                    [4U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                               [3U] 
                                                               << 0x18U) 
                                                              | (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [2U] 
                                                                 << 0x10U)) 
                                                             | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                 [1U] 
                                                                 << 8U) 
                                                                | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                                                [0U])))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffffeULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | (IData)((IData)((1U 
                                                  & VL_REDXOR_4(
                                                                (0xeULL 
                                                                 & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffffdULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xdULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 1U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffffbULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (0xbULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 2U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffff7ULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_4(
                                                                 (7ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 3U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffffefULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xe0ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 4U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffffdfULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xd0ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 5U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffffbfULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0xb0ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 6U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffff7fULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_8(
                                                                 (0x70ULL 
                                                                  & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 7U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffeffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe00ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 8U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffdffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd00ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 9U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffffbffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb00ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0xaU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffff7ffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x700ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0xbU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffefffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xe000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0xcU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffdfffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xd000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0xdU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffffbfffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0xb000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0xeU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffff7fffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_16(
                                                                  (0x7000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0xfU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffeffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x10U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffdffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x11U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffffbffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x12U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffff7ffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x13U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffefffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe00000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x14U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffdfffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd00000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x15U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffffbfffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb00000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x16U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffff7fffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x700000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x17U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffeffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x18U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffdffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x19U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffffbffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x1aU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffff7ffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x7000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x1bU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffefffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xe0000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x1cU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffdfffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xd0000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x1dU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffffbfffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0xb0000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x1eU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffff7fffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_32(
                                                                  (0x70000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x1fU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffeffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x20U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffdffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x21U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffffbffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x22U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffff7ffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x23U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffefffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x24U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffdfffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x25U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffffbfffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x26U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffff7fffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x27U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffeffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x28U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffdffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x29U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffffbffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x2aU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffff7ffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x2bU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffefffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x2cU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffdfffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x2dU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffffbfffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x2eU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffff7fffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x2fU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffeffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x30U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffdffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x31U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfffbffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x32U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfff7ffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x33U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffefffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe0000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x34U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffdfffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd0000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x35U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xffbfffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb0000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x36U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xff7fffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x70000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x37U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfeffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe00000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x38U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd00000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x39U));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb00000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x3aU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x700000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x3bU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xe000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x3cU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xd000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x3dU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0xb000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x3eU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x7000000000000000ULL 
                                                                   & __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__value))))) 
                                  << 0x3fU));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__a 
                            = (0xfU & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g 
                            = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__a), 1U) 
                                       ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__a)));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g 
                            = ((7U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g)) 
                                        ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g) 
                                           << 3U))));
                        __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__Vfuncout 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__g;
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__119__Vfuncout;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 
                            = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__120__Vfuncout;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0 = 1U;
                    }
                }
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 7U;
            }
        } else if ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
            if ((0x1e0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos 
                    = (0x1ffU & ((IData)(0x20U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos)));
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0xbU;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index 
                    = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index);
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 4U;
            } else if ((((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector)) 
                        < (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__spc))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector)));
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 4U;
            } else {
                __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__121__lba 
                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__fat_base 
                       + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster, 8U)
                           : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster, 7U)));
                vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__cat_lba 
                    = __Vtask_tb_platform_media__DOT__dut__DOT__catalog__DOT__sector__121__lba;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_start = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read = 8U;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 1U;
            }
        } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
            if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                  ? (0xfff8U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster)
                  : (0xffffff8U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 9U;
            } else if (((2U > vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster) 
                        | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
                            ? (0xfff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster)
                            : (0xffffff0U <= vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster)))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 6U;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 4U;
            }
        } else if ((9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state))) {
            vlSelfRef.__Vdly__tb_platform_media__DOT__dut__DOT__raw_catalog_ready = 1U;
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0xaU;
        } else if ((1U & (~ ((0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state)) 
                             || (0x3fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state)))))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_error = 0xffU;
            __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state = 0x3fU;
        }
    }
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__pending = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__address = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__final_word = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__staging_write) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_ready))) {
            if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__address 
                    = (0x1fffffU & ((IData)(0x80000U) 
                                    + (0x3ffffU & (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
                                                    - (IData)(0x20U)) 
                                                   >> 2U))));
            }
            if (((0x1fU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count)) 
                 | (1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count = 0U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__pending = 1U;
                vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__final_word 
                    = (1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining);
            } else {
                __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count)));
            }
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__platform_boot__mem_valid) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__aux_ready_bus))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__pending = 0U;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__aborted) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__pending = 0U;
            __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count = 0U;
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__expected_crc;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__crc;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__payload_bytes;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_prefix;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__bad_reserved;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header[__VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__signature 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__signature;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__partition_start;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__state 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__after_read;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__volume_base;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_base;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_sectors;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__root_index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__fixed_root;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster_sector;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__directory_sectors;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__header[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__header__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__data_base 
        = __Vdly__tb_platform_media__DOT__dut__DOT__data_base;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__spc 
        = __Vdly__tb_platform_media__DOT__dut__DOT__spc;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__fat_base 
        = __Vdly__tb_platform_media__DOT__dut__DOT__fat_base;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_count 
        = __Vdly__tb_platform_media__DOT__dut__DOT__wav_count;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16 
        = __Vdly__tb_platform_media__DOT__dut__DOT__fat16;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_length 
        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
             [0xbU] << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                 [0xaU] << 0x10U)) 
           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
               [9U] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
              [8U]));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__count_sum 
        = (0x3ffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                     [0x10U] + (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                [0x11U] + vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                [0x12U])));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_crc 
        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
             [0xfU] << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
                                 [0xeU] << 0x10U)) 
           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
               [0xdU] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header
              [0xcU]));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__table_bytes 
        = (0x1fffffU & VL_SHIFTL_III(21,21,32, ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_resources) 
                                                + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages) 
                                                   + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_widgets))), 5U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache
        [((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))
           ? 0U : (0x1ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos) 
                             + ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_valid) 
                                & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_ready)))))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_error 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error))
            ? 1U : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__regular_file 
        = ((0xe5U != vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
            [0U]) & ((0U == (0x18U & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                             [0xbU])) & (0xfU != vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                         [0xbU])));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__browse_query_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__browse_query;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cache_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cache
        [(0x1ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos) 
                    + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos)))];
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached);
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached);
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached);
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset 
            = (0x1feU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster 
            = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached);
    } else {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__fat_cached);
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__fat_cached);
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__file_stream__DOT__fat_cached);
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_offset 
            = (0x1fcU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__next_cluster 
            = (0xfffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__fat_cached);
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_cluster 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__fat16)
            ? VL_EXTEND_II(32,16, ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e16__71__Vfuncout 
                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                            [0x1bU] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                           [0x1aU]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e16__71__Vfuncout)))
            : ((([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e16__72__Vfuncout 
                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                                [0x15U] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                               [0x14U]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e16__72__Vfuncout)) 
                << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e16__73__Vfuncout 
                        = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                            [0x1bU] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry
                           [0x1aU]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__e16__73__Vfuncout))));
    __Vdly__tb_platform_media__DOT__cycle = ((IData)(1U) 
                                             + vlSelfRef.tb_platform_media__DOT__cycle);
    vlSelfRef.tb_platform_media__DOT__bv = 0U;
    vlSelfRef.tb_platform_media__DOT__ack = (0xffU 
                                             & (IData)(
                                                       (vlSelfRef.tb_platform_media__DOT__params 
                                                        >> 0x22U)));
    __Vdly__tb_platform_media__DOT__sd = 0U;
    vlSelfRef.__Vdly__tb_platform_media__DOT__lack = 0U;
    vlSelfRef.tb_platform_media__DOT__ap = 0U;
    __Vdly__tb_platform_media__DOT__ar = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__mpending)) 
                                          & (0U != 
                                             VL_MODDIVS_III(32, vlSelfRef.tb_platform_media__DOT__cycle, (IData)(5U))));
    if (vlSelfRef.tb_platform_media__DOT__sd_start) {
        if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__sr)) 
                                | (IData)(vlSelfRef.tb_platform_media__DOT__reading)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:45: Assertion failed in %Ntb_platform_media: SD collision\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 45, "", false);
        }
        __Vdly__tb_platform_media__DOT__slba = vlSelfRef.tb_platform_media__DOT__lba;
        __Vdly__tb_platform_media__DOT__sindex = 0U;
        __Vdly__tb_platform_media__DOT__token_wait 
            = ((IData)(vlSelfRef.tb_platform_media__DOT__timed)
                ? 0x2710U : 0U);
        __Vdly__tb_platform_media__DOT__reading = 1U;
        __Vdly__tb_platform_media__DOT__sr = 0U;
    } else if (((IData)(vlSelfRef.tb_platform_media__DOT__reading) 
                & (0U != vlSelfRef.tb_platform_media__DOT__token_wait))) {
        __Vdly__tb_platform_media__DOT__token_wait 
            = (vlSelfRef.tb_platform_media__DOT__token_wait 
               - (IData)(1U));
    } else if (((IData)(vlSelfRef.tb_platform_media__DOT__reading) 
                & (0U == VL_MODDIVS_III(32, vlSelfRef.tb_platform_media__DOT__cycle, 
                                        ((IData)(vlSelfRef.tb_platform_media__DOT__timed)
                                          ? 0x40U : 2U))))) {
        vlSelfRef.tb_platform_media__DOT__bv = 1U;
        vlSelfRef.tb_platform_media__DOT__bi = (0x1ffU 
                                                & vlSelfRef.tb_platform_media__DOT__sindex);
        vlSelfRef.tb_platform_media__DOT__bd = (0xffU 
                                                & ([&]() {
                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_disk_TOP(vlSelfRef.tb_platform_media__DOT__slba, vlSelfRef.tb_platform_media__DOT__sindex, __Vfunc_tb_platform_media__DOT__dmz_disk__0__Vfuncout);
                }(), __Vfunc_tb_platform_media__DOT__dmz_disk__0__Vfuncout));
        if ((0x1ffU == vlSelfRef.tb_platform_media__DOT__sindex)) {
            __Vdly__tb_platform_media__DOT__reading = 0U;
        } else {
            __Vdly__tb_platform_media__DOT__sindex 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__sindex);
        }
    } else if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__reading)) 
                      & (~ (IData)(vlSelfRef.tb_platform_media__DOT__sr))))) {
        __Vdly__tb_platform_media__DOT__sd = 1U;
        __Vdly__tb_platform_media__DOT__sr = 1U;
    }
    if (((IData)(vlSelfRef.tb_platform_media__DOT__av) 
         & (IData)(vlSelfRef.tb_platform_media__DOT__ar))) {
        if (VL_UNLIKELY(((((0x80000U > vlSelfRef.tb_platform_media__DOT__aa) 
                           | (0xc0000U <= vlSelfRef.tb_platform_media__DOT__aa)) 
                          | (0U != (7U & vlSelfRef.tb_platform_media__DOT__aa)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:50: Assertion failed in %Ntb_platform_media: aux address bounds\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 50, "", false);
        }
        __Vdly__tb_platform_media__DOT__maddr = vlSelfRef.tb_platform_media__DOT__aa;
        __Vdly__tb_platform_media__DOT__mdata[0U] = 
            vlSelfRef.tb_platform_media__DOT__ad[0U];
        __Vdly__tb_platform_media__DOT__mdata[1U] = 
            vlSelfRef.tb_platform_media__DOT__ad[1U];
        __Vdly__tb_platform_media__DOT__mdata[2U] = 
            vlSelfRef.tb_platform_media__DOT__ad[2U];
        __Vdly__tb_platform_media__DOT__mdata[3U] = 
            vlSelfRef.tb_platform_media__DOT__ad[3U];
        __Vdly__tb_platform_media__DOT__mdata[4U] = 
            vlSelfRef.tb_platform_media__DOT__ad[4U];
        __Vdly__tb_platform_media__DOT__mdata[5U] = 
            vlSelfRef.tb_platform_media__DOT__ad[5U];
        __Vdly__tb_platform_media__DOT__mdata[6U] = 
            vlSelfRef.tb_platform_media__DOT__ad[6U];
        __Vdly__tb_platform_media__DOT__mdata[7U] = 
            vlSelfRef.tb_platform_media__DOT__ad[7U];
        __Vdly__tb_platform_media__DOT__mwrite = vlSelfRef.tb_platform_media__DOT__aw;
        __Vdly__tb_platform_media__DOT__mpending = 1U;
        __Vdly__tb_platform_media__DOT__mdelay = ((IData)(1U) 
                                                  + 
                                                  VL_MODDIVS_III(32, vlSelfRef.tb_platform_media__DOT__cycle, (IData)(5U)));
        __Vdly__tb_platform_media__DOT__ar = 0U;
    }
    if (vlSelfRef.tb_platform_media__DOT__mpending) {
        if ((0U != vlSelfRef.tb_platform_media__DOT__mdelay)) {
            __Vdly__tb_platform_media__DOT__mdelay 
                = (vlSelfRef.tb_platform_media__DOT__mdelay 
                   - (IData)(1U));
        } else {
            if (vlSelfRef.tb_platform_media__DOT__mwrite) {
                __VdlyVal__tb_platform_media__DOT__memory__v0[0U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[0U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[1U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[1U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[2U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[2U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[3U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[3U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[4U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[4U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[5U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[5U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[6U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[6U];
                __VdlyVal__tb_platform_media__DOT__memory__v0[7U] 
                    = vlSelfRef.tb_platform_media__DOT__mdata[7U];
                __VdlyDim0__tb_platform_media__DOT__memory__v0 
                    = (0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                   - (IData)(0x80000U)) 
                                  >> 3U));
                __VdlySet__tb_platform_media__DOT__memory__v0 = 1U;
            } else {
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[0U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][0U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[1U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][1U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[2U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][2U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[3U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][3U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[4U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][4U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[5U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][5U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[6U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][6U];
                vlSelfRef.__Vdly__tb_platform_media__DOT__ard[7U] 
                    = vlSelfRef.tb_platform_media__DOT__memory
                    [(0x7fffU & ((vlSelfRef.tb_platform_media__DOT__maddr 
                                  - (IData)(0x80000U)) 
                                 >> 3U))][7U];
            }
            __Vdly__tb_platform_media__DOT__mpending = 0U;
            vlSelfRef.tb_platform_media__DOT__ap = 1U;
        }
    }
    if ((((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled)
           ? (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__state))
           : (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
         & (IData)(vlSelfRef.tb_platform_media__DOT__lr))) {
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[0U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la), (IData)(0x280U)),
                         32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[0U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        __Vdly__tb_platform_media__DOT__bursts = ((IData)(1U) 
                                                  + vlSelfRef.tb_platform_media__DOT__bursts);
        vlSelfRef.__Vdly__tb_platform_media__DOT__lr = 0U;
        __Vdly__tb_platform_media__DOT__ldelay = 3U;
        __Vdly__tb_platform_media__DOT__final_load 
            = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__compositor__enabled)
                ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__compositor__DOT__final_burst)
                : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_load_last));
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[0U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[0U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[1U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[1U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[1U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[1U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[2U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(4U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[2U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(4U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[2U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(5U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[2U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(5U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[3U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(6U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(6U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[3U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(6U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[3U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(7U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(7U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(7U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[3U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(7U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[4U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(8U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(8U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[4U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(8U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[4U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(9U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(9U) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(9U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[4U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(9U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[5U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xaU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(0xaU) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(0xaU) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[5U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xaU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[5U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xbU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(0xbU) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(0xbU) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[5U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xbU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[6U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xcU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(0xcU) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(0xcU) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[6U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xcU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[6U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xdU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(0xdU) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(0xdU) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[6U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xdU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((0xffffU & vlSelfRef.tb_platform_media__DOT__ld[7U]) 
                          != (0xffffU & ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xeU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(0xeU) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(0xeU) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(0xffffU & vlSelfRef.tb_platform_media__DOT__ld[7U]),
                         16,(0xffffU & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xeU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
        if (VL_UNLIKELY((((vlSelfRef.tb_platform_media__DOT__ld[7U] 
                           >> 0x10U) != (0xffffU & 
                                         ([&]() {
                                    Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xfU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout);
                                }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__1__Vfuncout)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:59: Assertion failed in %Ntb_platform_media.unnamedblk1: pixel mismatch page=%0# x=%0d y=%0d actual=%x expected=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),5,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page),
                         32,VL_MODDIVS_III(32, ((IData)(0xfU) 
                                                + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         32,VL_DIVS_III(32, ((IData)(0xfU) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), (IData)(0x280U)),
                         16,(vlSelfRef.tb_platform_media__DOT__ld[7U] 
                             >> 0x10U),16,(0xffffU 
                                           & ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pixel_TOP(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page, 
                                                                                ((IData)(0xfU) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(2U), vlSelfRef.tb_platform_media__DOT__la)), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pixel__2__Vfuncout)));
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 59, "", false);
        }
    }
    if ((0U != vlSelfRef.tb_platform_media__DOT__ldelay)) {
        __Vdly__tb_platform_media__DOT__ldelay = (vlSelfRef.tb_platform_media__DOT__ldelay 
                                                  - (IData)(1U));
        if ((1U == vlSelfRef.tb_platform_media__DOT__ldelay)) {
            if (vlSelfRef.tb_platform_media__DOT__final_load) {
                if (VL_UNLIKELY(((0x4b00U != vlSelfRef.tb_platform_media__DOT__bursts)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:63: Assertion failed in %Ntb_platform_media: incomplete frame %0d\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,vlSelfRef.tb_platform_media__DOT__bursts);
                    VL_STOP_MT("sim/platform\\tb_platform_media.sv", 63, "", false);
                }
                __Vdly__tb_platform_media__DOT__bursts = 0U;
                vlSelfRef.tb_platform_media__DOT__frames 
                    = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__frames);
                vlSelfRef.tb_platform_media__DOT__swaps 
                    = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__swaps);
            }
            vlSelfRef.__Vdly__tb_platform_media__DOT__lack = 1U;
            vlSelfRef.__Vdly__tb_platform_media__DOT__lr = 1U;
        }
    }
    if (vlSelfRef.tb_platform_media__DOT__flush) {
        __Vdly__tb_platform_media__DOT__samples = 0U;
    } else if (((IData)(vlSelfRef.tb_platform_media__DOT__pcm) 
                & (IData)(vlSelfRef.tb_platform_media__DOT__pcm_ready))) {
        if (VL_UNLIKELY(((vlSelfRef.tb_platform_media__DOT__pair 
                          != ([&]() {
                                Vtb_platform_media___024root____Vdpiimwrap_tb_platform_media__DOT__dmz_expected_pcm_TOP(vlSelfRef.tb_platform_media__DOT__wave, vlSelfRef.tb_platform_media__DOT__samples, __Vfunc_tb_platform_media__DOT__dmz_expected_pcm__3__Vfuncout);
                            }(), __Vfunc_tb_platform_media__DOT__dmz_expected_pcm__3__Vfuncout))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:66: Assertion failed in %Ntb_platform_media: real WAV data mismatch wave=%0# sample=%0d got=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),4,(IData)(vlSelfRef.tb_platform_media__DOT__wave),
                         32,vlSelfRef.tb_platform_media__DOT__samples,
                         32,vlSelfRef.tb_platform_media__DOT__pair);
            VL_STOP_MT("sim/platform\\tb_platform_media.sv", 66, "", false);
        }
        __Vdly__tb_platform_media__DOT__samples = ((IData)(1U) 
                                                   + vlSelfRef.tb_platform_media__DOT__samples);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)) 
                      & (((0U != (IData)(vlSelfRef.tb_platform_media__DOT__error)) 
                          | (0U != (IData)(vlSelfRef.tb_platform_media__DOT__image_error))) 
                         | (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_platform_media.sv:69: Assertion failed in %Ntb_platform_media: integrated errors CFG=%x BMP=%x WAV=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_platform_media__DOT__error),
                     8,vlSelfRef.tb_platform_media__DOT__image_error,
                     8,(IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error));
        VL_STOP_MT("sim/platform\\tb_platform_media.sv", 69, "", false);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase_q)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__image_name_q 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_name;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__image_bytes_q 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_bytes_q 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__count;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__position;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__launch;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__aborted 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__file_error)) 
           | (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state 
        = __Vdly__tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__cache[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    }
    vlSelfRef.tb_platform_media__DOT__slba = __Vdly__tb_platform_media__DOT__slba;
    vlSelfRef.tb_platform_media__DOT__sindex = __Vdly__tb_platform_media__DOT__sindex;
    vlSelfRef.tb_platform_media__DOT__token_wait = __Vdly__tb_platform_media__DOT__token_wait;
    vlSelfRef.tb_platform_media__DOT__reading = __Vdly__tb_platform_media__DOT__reading;
    vlSelfRef.tb_platform_media__DOT__maddr = __Vdly__tb_platform_media__DOT__maddr;
    vlSelfRef.tb_platform_media__DOT__mdata[0U] = __Vdly__tb_platform_media__DOT__mdata[0U];
    vlSelfRef.tb_platform_media__DOT__mdata[1U] = __Vdly__tb_platform_media__DOT__mdata[1U];
    vlSelfRef.tb_platform_media__DOT__mdata[2U] = __Vdly__tb_platform_media__DOT__mdata[2U];
    vlSelfRef.tb_platform_media__DOT__mdata[3U] = __Vdly__tb_platform_media__DOT__mdata[3U];
    vlSelfRef.tb_platform_media__DOT__mdata[4U] = __Vdly__tb_platform_media__DOT__mdata[4U];
    vlSelfRef.tb_platform_media__DOT__mdata[5U] = __Vdly__tb_platform_media__DOT__mdata[5U];
    vlSelfRef.tb_platform_media__DOT__mdata[6U] = __Vdly__tb_platform_media__DOT__mdata[6U];
    vlSelfRef.tb_platform_media__DOT__mdata[7U] = __Vdly__tb_platform_media__DOT__mdata[7U];
    vlSelfRef.tb_platform_media__DOT__mwrite = __Vdly__tb_platform_media__DOT__mwrite;
    vlSelfRef.tb_platform_media__DOT__mpending = __Vdly__tb_platform_media__DOT__mpending;
    vlSelfRef.tb_platform_media__DOT__mdelay = __Vdly__tb_platform_media__DOT__mdelay;
    vlSelfRef.tb_platform_media__DOT__bursts = __Vdly__tb_platform_media__DOT__bursts;
    vlSelfRef.tb_platform_media__DOT__ldelay = __Vdly__tb_platform_media__DOT__ldelay;
    vlSelfRef.tb_platform_media__DOT__final_load = __Vdly__tb_platform_media__DOT__final_load;
    vlSelfRef.tb_platform_media__DOT__samples = __Vdly__tb_platform_media__DOT__samples;
    vlSelfRef.tb_platform_media__DOT__error = ((0U 
                                                == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_error))
                                                ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error)
                                                : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__boot_error));
    if (__VdlySet__tb_platform_media__DOT__memory__v0) {
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][0U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[0U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][1U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[1U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][2U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[2U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][3U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[3U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][4U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[4U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][5U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[5U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][6U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[6U];
        vlSelfRef.tb_platform_media__DOT__memory[__VdlyDim0__tb_platform_media__DOT__memory__v0][7U] 
            = __VdlyVal__tb_platform_media__DOT__memory__v0[7U];
    }
    vlSelfRef.tb_platform_media__DOT__ar = __Vdly__tb_platform_media__DOT__ar;
    vlSelfRef.tb_platform_media__DOT__cycle = __Vdly__tb_platform_media__DOT__cycle;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page 
        = __Vdly__tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_idle 
        = (1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__pending)) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__waiting))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellout__platform_boot__mem_valid 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__aborted)) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__genblk1__DOT__writer__DOT__pending));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__busy 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_valid 
        = ((~ ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parse_error)) 
               | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)));
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | (IData)(vlSelfRef.tb_platform_media__DOT__flush))) {
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        vlSelfRef.tb_platform_media__DOT__pair = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_done = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0U;
        tb_platform_media__DOT__dut__DOT__declared_pairs = 0U;
    } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state))) {
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 1U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
            = vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_bytes;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        vlSelfRef.tb_platform_media__DOT__pair = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_done = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0U;
        tb_platform_media__DOT__dut__DOT__declared_pairs = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 0U;
        if ((0xcU > vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_bytes)) {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 2U;
        }
    } else {
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset);
        }
        if (((((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_error)) 
               & (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
              & (0xbU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
             & (0xfU != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error 
                = (0x80U | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_error));
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                            || (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                           || (0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 1U;
                        if ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 2U;
                        } else {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((0x46464952U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__146__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                  [0U]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__146__Vfuncout)) 
                         | (0x45564157U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__147__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                  [8U]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__147__Vfuncout)))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if (((0xcULL > vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length) 
                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length 
                                   > (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length))))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 2U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
                            = (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length);
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)) 
                         & ((0x1ffffffffULL & (8ULL 
                                               + (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset)))) 
                            > (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end))))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 4U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 1U;
                        if ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 4U;
                        } else {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__148__Vfuncout 
                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                             [7U] << 0x18U) | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [6U] 
                                               << 0x10U)) 
                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                               [5U] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                              [4U]));
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                        = __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__148__Vfuncout;
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
                        = (1U & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                           [4U]);
                    if ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end 
                         > (QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end)))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 4U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if ((0x20746d66U == ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__149__Vfuncout 
                                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                             [3U] << 0x18U) 
                                            | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [2U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [1U] 
                                               << 8U) 
                                              | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                              [0U]));
                                }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__149__Vfuncout))) {
                        if (((0x10U > ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__150__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                     [7U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [6U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [5U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                      [4U]));
                                        }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__150__Vfuncout)) 
                             | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen))) {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 3U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                        } else {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 5U;
                        }
                    } else if ((0x61746164U == ([&]() {
                                    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__151__Vfuncout 
                                        = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                             [3U] << 0x18U) 
                                            | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [2U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [1U] 
                                               << 8U) 
                                              | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                              [0U]));
                                }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__151__Vfuncout))) {
                        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen) {
                            if (((0U == ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__152__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [7U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [6U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [5U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                        [4U]));
                                            }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__152__Vfuncout)) 
                                 | (0U != (3U & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                           [4U])))) {
                                vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 7U;
                                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                            } else {
                                tb_platform_media__DOT__dut__DOT__declared_pairs 
                                    = VL_SHIFTR_III(32,32,32, 
                                                    ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__153__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                     [7U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [6U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [5U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                      [4U]));
                                        }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__153__Vfuncout), 2U);
                                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
                                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 9U;
                            }
                        } else {
                            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 6U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                        }
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((0U == ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__154__Vfuncout 
                                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                  [4U]));
                                    }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__154__Vfuncout))
                                ? 3U : 7U);
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                               - (IData)(1U));
                        __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q;
                        __VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 
                            = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        __VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 1U;
                        if ((0xfU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 6U;
                        } else {
                            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((((((1U != ([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__155__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                              [1U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [0U]);
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__155__Vfuncout))) 
                             | (2U != ([&]() {
                                                        __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__156__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                              [3U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [2U]);
                                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__156__Vfuncout)))) 
                            | (0xbb80U != ([&]() {
                                                    __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__157__Vfuncout 
                                                        = 
                                                        (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                           [7U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [6U] 
                                                             << 0x10U)) 
                                                         | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [5U] 
                                                             << 8U) 
                                                            | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                            [4U]));
                                                }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__157__Vfuncout))) 
                           | (0x2ee00U != ([&]() {
                                                __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__158__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                       [0xbU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [0xaU] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                         [9U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                        [8U]));
                                            }(), __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__158__Vfuncout))) 
                          | (4U != ([&]() {
                                            __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__159__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                    [0xdU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [0xcU]);
                                        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__159__Vfuncout)))) 
                         | (0x10U != ([&]() {
                                        __Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__160__Vfuncout 
                                            = ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__160__Vfuncout))))) {
                        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 3U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else {
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 1U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((0U != vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)
                                ? 7U : ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd)
                                         ? 8U : 3U));
                    }
                } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                           - (IData)(1U));
                    if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)) {
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                        __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd)
                                ? 8U : 3U);
                    }
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 3U;
            }
        } else if ((9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                    = (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                       - (IData)(1U));
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte)));
                if ((0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xffff00U & __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q));
                } else if ((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xff00ffU & __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q) 
                              << 8U));
                } else if ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xffffU & __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q) 
                              << 0x10U));
                } else if ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs 
                        = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs);
                    vlSelfRef.tb_platform_media__DOT__pair 
                        = (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q) 
                            << 0x18U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly);
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 1U;
                }
                if ((1U == vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)) {
                    __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xaU;
                }
            }
        } else if ((0xaU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                       | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))) {
                vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_done = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xbU;
            }
        } else {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error = 0xffU;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        }
    }
    __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase 
        = (1U & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase;
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner = 0U;
        __Vdly__tb_platform_media__DOT__sd_start = 0U;
        vlSelfRef.tb_platform_media__DOT__lba = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__image_reads = 0U;
        __Vdly__tb_platform_media__DOT__dut__DOT__audio_reads = 0U;
    } else {
        __Vdly__tb_platform_media__DOT__sd_start = 0U;
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__arbiter__image_start) {
            __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending = 1U;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_start) {
            __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 1U;
        }
        if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__sd))) {
            __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active = 0U;
        }
        if ((((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active)) 
              & (IData)(vlSelfRef.tb_platform_media__DOT__sr)) 
             & (~ (IData)(vlSelfRef.tb_platform_media__DOT__sd_start)))) {
            if (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                 & (((~ (IData)(vlSelfRef.tb_platform_media__DOT__timed)) 
                     | (0x400U > (IData)(vlSelfRef.tb_platform_media__DOT__fifo_used))) 
                    | (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending))))) {
                __Vdly__tb_platform_media__DOT__dut__DOT__audio_reads 
                    = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_reads);
                vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner = 1U;
                __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active = 1U;
                __Vdly__tb_platform_media__DOT__sd_start = 1U;
                vlSelfRef.tb_platform_media__DOT__lba 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__held_audio;
                __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0U;
            } else if (vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending) {
                __Vdly__tb_platform_media__DOT__dut__DOT__image_reads 
                    = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__dut__DOT__image_reads);
                vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner = 0U;
                __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active = 1U;
                __Vdly__tb_platform_media__DOT__sd_start = 1U;
                vlSelfRef.tb_platform_media__DOT__lba 
                    = vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__held_image;
                __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0U;
            }
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_name_raw 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__names
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__a 
                = (0x1fU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase)
                             ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__browse_query)
                             : (IData)(vlSelfRef.tb_platform_media__DOT__selected)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g 
                = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__a), 1U) 
                            ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g 
                = ((0xfU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g)) 
                   | (0x10U & ((0xfffffff0U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g)) 
                               ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g) 
                                  << 4U))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__76__Vfuncout))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_name_raw 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__a 
                = (0xfU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase)
                            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__browse_query)
                            : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g 
                = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__a), 1U) 
                           ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g 
                = ((7U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g)) 
                   | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g)) 
                            ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g) 
                               << 3U))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__77__Vfuncout))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__image_cluster_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__a 
                = vlSelfRef.tb_platform_media__DOT__selected;
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g 
                = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__a), 1U) 
                            ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g 
                = ((0xfU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g)) 
                   | (0x10U & ((0xfffffff0U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g)) 
                               ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g) 
                                  << 4U))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__78__Vfuncout))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_cluster_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__a 
                = vlSelfRef.tb_platform_media__DOT__wave;
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g 
                = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__a), 1U) 
                           ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g 
                = ((7U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g)) 
                   | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g)) 
                            ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g) 
                               << 3U))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__79__Vfuncout))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__a 
                = (0x1fU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase)
                             ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__browse_query)
                             : (IData)(vlSelfRef.tb_platform_media__DOT__selected)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g 
                = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__a), 1U) 
                            ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g 
                = ((0xfU & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g)) 
                   | (0x10U & ((0xfffffff0U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g)) 
                               ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g) 
                                  << 4U))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr5__80__Vfuncout))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes
        [([&]() {
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__a 
                = (0xfU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase)
                            ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__catalog__browse_query)
                            : (IData)(vlSelfRef.tb_platform_media__DOT__wave)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g 
                = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__a), 1U) 
                           ^ (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__a)));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g 
                = ((7U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g)) 
                   | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g)) 
                            ^ ((IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g) 
                               << 3U))));
            __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__Vfuncout 
                = __Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__g;
        }(), (IData)(__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__addr4__81__Vfuncout))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_ready 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_idle) 
           & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_done)) 
              & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__aborted))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_error 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__file_error;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_bytes 
        = __Vdly__tb_platform_media__DOT__dut__DOT__wav_bytes;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio__DOT__state;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__image_reads 
        = __Vdly__tb_platform_media__DOT__dut__DOT__image_reads;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_reads 
        = __Vdly__tb_platform_media__DOT__dut__DOT__audio_reads;
    vlSelfRef.tb_platform_media__DOT__sr = __Vdly__tb_platform_media__DOT__sr;
    vlSelfRef.tb_platform_media__DOT__sd_start = __Vdly__tb_platform_media__DOT__sd_start;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending 
        = __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending 
        = __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    vlSelfRef.tb_platform_media__DOT__sd = __Vdly__tb_platform_media__DOT__sd;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active 
        = __Vdly__tb_platform_media__DOT__dut__DOT__arbiter__DOT__active;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__names[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__names__v0;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    }
    vlSelfRef.tb_platform_media__DOT__wave = __Vdly__tb_platform_media__DOT__wave;
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    }
    if (__VdlySet__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes[__VdlyDim0__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0] 
            = __VdlyVal__tb_platform_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__name_phase;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan 
        = __Vdly__tb_platform_media__DOT__dut__DOT__catalog__DOT__pair_scan;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_ready 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy) 
           & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done)) 
              | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_ready)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__staging_write 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser_busy) 
           & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__parser__DOT__header_done) 
              & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__byte_valid) 
                 & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__platform_boot__DOT__writer_ready))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length 
        = (0x1ffffffffULL & (8ULL + VL_EXTEND_QI(33,32, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__144__Vfuncout 
                            = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                 [7U] << 0x18U) | (
                                                   vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                               | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                   [5U] << 8U) | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                  [4U]));
                    }(), vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__144__Vfuncout))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end 
        = (0x1ffffffffULL & (((QData)((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset)) 
                              + VL_EXTEND_QI(33,32, 
                                             ([&]() {
                            vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__145__Vfuncout 
                                = (((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                     [7U] << 0x18U) 
                                    | (vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                       [6U] << 0x10U)) 
                                   | ((vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                       [5U] << 8U) 
                                      | vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                      [4U]));
                        }(), vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__145__Vfuncout))) 
                             + (QData)((IData)((1U 
                                                & vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                [4U])))));
    if (vlSelfRef.tb_platform_media__DOT__reset) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__held_audio = 0U;
        vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__held_image = 0U;
    } else {
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_start) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__held_audio 
                = vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_lba;
        }
        if (vlSelfRef.tb_platform_media__DOT__dut__DOT____Vcellinp__arbiter__image_start) {
            vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__held_image 
                = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__raw_catalog_ready)
                    ? ((IData)(vlSelfRef.tb_platform_media__DOT__catalog)
                        ? vlSelfRef.tb_platform_media__DOT__dut__DOT__img_lba
                        : vlSelfRef.tb_platform_media__DOT__dut__DOT__config_lba)
                    : vlSelfRef.tb_platform_media__DOT__dut__DOT__cat_lba);
        }
    }
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache
        [((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))
           ? 0U : (0x1ffU & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos) 
                             + (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume))))];
    vlSelfRef.tb_platform_media__DOT__dut__DOT__aud_ready 
        = (1U & (~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                    | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active) 
                       & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__img_ready 
        = (1U & (~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__image_pending) 
                    | ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                       & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__sd));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__bv) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__arbiter__DOT__active));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_name_raw;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | (IData)((IData)((1U & VL_REDXOR_4((0xeULL 
                                                & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xdULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 1U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xbULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 2U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((7ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 3U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xe0ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 4U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xd0ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 5U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0xb0ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 6U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_8((0x70ULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 7U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe00ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 8U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd00ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 9U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb00ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0xaU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x700ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0xbU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xe000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0xcU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xd000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0xdU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0xb000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0xeU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_16((0x7000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0xfU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x10U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x11U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x12U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x13U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe00000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x14U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd00000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x15U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb00000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x16U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x700000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x19U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x1aU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x7000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x1bU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xe0000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x1cU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xd0000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0xb0000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_32((0x70000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x1fU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffeffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x20U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffdffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x21U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffffbffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x22U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffff7ffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x23U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffefffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x24U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffdfffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x25U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffffbfffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x26U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffff7fffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x27U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffeffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x28U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffdffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x29U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffffbffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x2aU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffff7ffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x2bU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffefffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x2cU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffdfffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x2dU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffffbfffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x2eU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffff7fffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x2fU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffeffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x30U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffdffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x31U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfffbffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x32U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfff7ffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x33U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffefffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe0000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x34U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffdfffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd0000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x35U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xffbfffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb0000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x36U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xff7fffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x70000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x37U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfeffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe00000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x38U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfdffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd00000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x39U));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xfbffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb00000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x3aU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xf7ffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x700000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x3bU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xefffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xe000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x3cU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xdfffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xd000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x3dU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0xbfffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xb000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x3eU));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x7000000000000000ULL 
                                                  & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__value))))) 
              << 0x3fU));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_image_name 
        = vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__74__Vfuncout;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value 
        = vlSelfRef.tb_platform_media__DOT__dut__DOT__catalog__DOT__shared_wav_name_raw;
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | (IData)((IData)((1U & VL_REDXOR_4((0xeULL 
                                                & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))));
    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout 
        = ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__Vfuncout) 
           | ((QData)((IData)((1U & VL_REDXOR_4((0xdULL 
                                                 & vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__catalog__DOT__code64__75__value))))) 
              << 1U));
}
