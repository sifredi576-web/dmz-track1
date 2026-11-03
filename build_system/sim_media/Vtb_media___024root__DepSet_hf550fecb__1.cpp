// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_media.h for the primary calling header

#include "Vtb_media__pch.h"
#include "Vtb_media__Syms.h"
#include "Vtb_media___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_media__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_media__ConstPool__TABLE_h97bd9a81_0;

VL_INLINE_OPT void Vtb_media___024root___nba_sequent__TOP__1(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___nba_sequent__TOP__1\n"); );
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
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__24__value = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__25__value = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__a = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__a = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__a = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__a = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__a = 0;
    CData/*4:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__a;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__a = 0;
    CData/*3:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__tmp = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__v;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__v = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__tmp;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__tmp = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value;
    __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__96__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__96__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__99__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__100__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__100__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__101__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__101__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__102__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__103__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__104__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__104__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__105__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__105__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__106__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__106__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__107__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__108__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__109__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__110__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__110__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__111__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__111__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__112__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__112__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__113__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__116__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__117__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__117__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__118__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__118__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__119__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__119__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__120__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__121__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__122__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__122__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__123__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__123__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__124__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__124__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__125__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__125__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__126__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__127__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__128__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__128__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__129__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__129__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__130__Vfuncout;
    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__130__Vfuncout = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase;
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    // Body
    if (((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
         & (IData)(vlSelfRef.tb_media__DOT__load_ready))) {
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[0U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr;
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
                                        = vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        vlSelfRef.tb_media__DOT__bursts = ((IData)(1U) 
                                           + vlSelfRef.tb_media__DOT__bursts);
        vlSelfRef.__Vdly__tb_media__DOT__ack_delay = 5U;
        vlSelfRef.__Vdly__tb_media__DOT__load_ready = 0U;
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[1U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(1U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(1U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[2U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(2U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(2U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[3U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(3U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(3U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[4U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(4U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(4U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[5U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(5U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(5U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[6U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(6U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(6U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[7U] 
                          != ((([&]() {
                                        __Vfunc_tb_media__DOT__image_expected__4__a 
                                            = ((IData)(7U) 
                                               + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
                                           + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:48: Assertion failed in %Ntb_media.unnamedblk1: streamed BMP pixel address=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(7U) 
                                                + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
            VL_STOP_MT("sim/media\\tb_media.sv", 48, "", false);
        }
    }
    if (VL_LTS_III(32, 0U, vlSelfRef.tb_media__DOT__ack_delay)) {
        vlSelfRef.__Vdly__tb_media__DOT__ack_delay 
            = (vlSelfRef.tb_media__DOT__ack_delay - (IData)(1U));
        if ((1U == vlSelfRef.tb_media__DOT__ack_delay)) {
            vlSelfRef.__Vdly__tb_media__DOT__ack = 1U;
            vlSelfRef.__Vdly__tb_media__DOT__load_ready = 1U;
        }
    }
    if (vlSelfRef.tb_media__DOT__audio_flush) {
        vlSelfRef.__Vdly__tb_media__DOT__pcm_count = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__held = 0U;
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
                VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:54: Assertion failed in %Ntb_media: fragmented WAV/sample/loop mismatch idx=%0d got=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_media__DOT__pcm_count,
                             32,vlSelfRef.tb_media__DOT__pcm_pair);
                VL_STOP_MT("sim/media\\tb_media.sv", 54, "", false);
            }
            vlSelfRef.__Vdly__tb_media__DOT__pcm_count 
                = ((IData)(1U) + vlSelfRef.tb_media__DOT__pcm_count);
        }
        if (VL_UNLIKELY((((((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
                            & (IData)(vlSelfRef.tb_media__DOT__held)) 
                           & (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error))) 
                          & ((~ (IData)(vlSelfRef.tb_media__DOT__pcm_valid)) 
                             | (vlSelfRef.tb_media__DOT__pcm_pair 
                                != vlSelfRef.tb_media__DOT__held_pcm)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:57: Assertion failed in %Ntb_media: PCM did not hold under backpressure\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_media.sv", 57, "", false);
        }
        vlSelfRef.__Vdly__tb_media__DOT__held = ((IData)(vlSelfRef.tb_media__DOT__pcm_valid) 
                                                 & (~ (IData)(vlSelfRef.tb_media__DOT__pcm_ready)));
        vlSelfRef.tb_media__DOT__held_pcm = vlSelfRef.tb_media__DOT__pcm_pair;
    }
    __Vtemp_50[0U] = 0x616c6964U;
    __Vtemp_50[1U] = 0x76696e76U;
    __Vtemp_50[2U] = 0x7761U;
    __Vtemp_51[0U] = 0x6861696eU;
    __Vtemp_51[1U] = 0x6f727463U;
    __Vtemp_51[2U] = 0x7368U;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
                      & ((0U != (IData)(vlSelfRef.tb_media__DOT__image_error)) 
                         | (((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
                             & (! VL_TESTPLUSARGS_I(
                                                    VL_CVT_PACK_STR_NW(3, __Vtemp_50)))) 
                            & (! VL_TESTPLUSARGS_I(
                                                   VL_CVT_PACK_STR_NW(3, __Vtemp_51))))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_media.sv:60: Assertion failed in %Ntb_media: media error BMP=%0# WAV=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_media__DOT__image_error),
                     8,vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error);
        VL_STOP_MT("sim/media\\tb_media.sv", 60, "", false);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase_q)))) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__image_name_q 
            = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name;
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__v 
            = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes;
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__v 
            = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes;
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value 
            = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__v));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value 
            = (QData)((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__v));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffffeULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | (IData)((IData)((1U & VL_REDXOR_4(
                                                   (0xeULL 
                                                    & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffffeULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | (IData)((IData)((1U & VL_REDXOR_4(
                                                   (0xeULL 
                                                    & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffffdULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_4(
                                                    (0xdULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 1U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffffdULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_4(
                                                    (0xdULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 1U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffffbULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_4(
                                                    (0xbULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 2U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffffbULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_4(
                                                    (0xbULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 2U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffff7ULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_4(
                                                    (7ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 3U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffff7ULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_4(
                                                    (7ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 3U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffffefULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0xe0ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 4U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffffefULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0xe0ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 4U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffffdfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0xd0ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 5U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffffdfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0xd0ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 5U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffffbfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0xb0ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 6U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffffbfULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0xb0ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 6U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffff7fULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0x70ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 7U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffff7fULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_8(
                                                    (0x70ULL 
                                                     & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 7U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffeffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xe00ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 8U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffeffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xe00ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 8U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffdffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xd00ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 9U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffdffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xd00ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 9U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffffbffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xb00ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0xaU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffffbffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xb00ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0xaU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffff7ffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0x700ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0xbU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffff7ffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0x700ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0xbU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffefffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xe000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0xcU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffefffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xe000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0xcU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffdfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xd000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0xdU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffdfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xd000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0xdU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffffbfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xb000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0xeU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffffbfffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0xb000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0xeU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffff7fffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0x7000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0xfU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffff7fffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_16(
                                                     (0x7000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0xfU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffeffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe0000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x10U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffeffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe0000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x10U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffdffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd0000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x11U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffdffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd0000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x11U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffffbffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb0000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x12U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffffbffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb0000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x12U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffff7ffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x70000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x13U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffff7ffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x70000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x13U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffefffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe00000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x14U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffefffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe00000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x14U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffdfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd00000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x15U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffdfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd00000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x15U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffffbfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb00000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x16U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffffbfffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb00000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x16U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffff7fffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x700000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x17U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffff7fffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x700000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x17U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffeffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x18U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffeffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x18U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffdffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x19U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffdffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x19U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffffbffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x1aU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffffbffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x1aU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffff7ffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x7000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x1bU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffff7ffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x7000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x1bU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffefffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe0000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x1cU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffefffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xe0000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x1cU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffdfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd0000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x1dU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffdfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xd0000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x1dU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffffbfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb0000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x1eU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffffbfffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0xb0000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x1eU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffff7fffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x70000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x1fU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffff7fffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_32(
                                                     (0x70000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x1fU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffeffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe00000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x20U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffeffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe00000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x20U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffdffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd00000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x21U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffdffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd00000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x21U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffffbffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb00000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x22U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffffbffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb00000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x22U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffff7ffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x700000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x23U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffff7ffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x700000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x23U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffefffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x24U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffefffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x24U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffdfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x25U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffdfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x25U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffffbfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x26U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffffbfffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x26U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffff7fffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x7000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x27U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffff7fffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x7000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x27U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffeffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe0000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x28U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffeffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe0000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x28U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffdffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd0000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x29U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffdffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd0000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x29U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffffbffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb0000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x2aU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffffbffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb0000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x2aU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffff7ffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x70000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x2bU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffff7ffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x70000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x2bU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffefffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe00000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x2cU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffefffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe00000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x2cU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffdfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd00000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x2dU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffdfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd00000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x2dU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffffbfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb00000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x2eU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffffbfffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb00000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x2eU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffff7fffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x700000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x2fU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffff7fffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x700000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x2fU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffeffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x30U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffeffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x30U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffdffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x31U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffdffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x31U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfffbffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x32U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfffbffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x32U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfff7ffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x7000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x33U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfff7ffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x7000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x33U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffefffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe0000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x34U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffefffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe0000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x34U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffdfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd0000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x35U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffdfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd0000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x35U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xffbfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb0000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x36U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xffbfffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb0000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x36U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xff7fffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x70000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x37U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xff7fffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x70000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x37U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfeffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe00000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x38U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfeffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe00000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x38U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfdffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd00000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x39U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfdffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd00000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x39U));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xfbffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb00000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x3aU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xfbffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb00000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x3aU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xf7ffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x700000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x3bU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xf7ffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x700000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x3bU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xefffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x3cU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xefffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xe000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x3cU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xdfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x3dU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xdfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xd000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x3dU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0xbfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x3eU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0xbfffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xb000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x3eU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout 
            = ((0x7fffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x7000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__value))))) 
                  << 0x3fU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout 
            = ((0x7fffffffffffffffULL & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x7000000000000000ULL 
                                                      & __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__value))))) 
                  << 0x3fU));
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__tmp 
            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__33__Vfuncout;
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__tmp 
            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code64__35__Vfuncout;
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__Vfuncout 
            = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__tmp);
        __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__Vfuncout 
            = (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__tmp);
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__image_bytes_q 
            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__32__Vfuncout;
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_bytes_q 
            = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__code32__34__Vfuncout;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__pos;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__cache__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__parser_busy;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__dir_pos 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__dir_pos;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__entry_pos 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__entry_pos;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__cache[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__cache__v0;
    }
    vlSelfRef.tb_media__DOT__active_lba = vlSelfRef.__Vdly__tb_media__DOT__active_lba;
    vlSelfRef.tb_media__DOT__sd_pos = vlSelfRef.__Vdly__tb_media__DOT__sd_pos;
    vlSelfRef.tb_media__DOT__reading = vlSelfRef.__Vdly__tb_media__DOT__reading;
    vlSelfRef.tb_media__DOT__ack_delay = vlSelfRef.__Vdly__tb_media__DOT__ack_delay;
    vlSelfRef.tb_media__DOT__pcm_count = vlSelfRef.__Vdly__tb_media__DOT__pcm_count;
    vlSelfRef.tb_media__DOT__held = vlSelfRef.__Vdly__tb_media__DOT__held;
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__byte_valid 
        = ((~ ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__parse_error)) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__platform_boot__DOT__stream__DOT__state)));
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__read_start = 0U;
        vlSelfRef.tb_media__DOT__lba = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__image_reads = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__audio_reads = 0U;
    } else {
        vlSelfRef.__Vdly__tb_media__DOT__read_start = 0U;
        if (vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__arbiter__image_start) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 1U;
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT__aud_start) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 1U;
        }
        if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active) 
             & (IData)(vlSelfRef.tb_media__DOT__sd_done))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 0U;
        }
        if ((((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active)) 
              & (IData)(vlSelfRef.tb_media__DOT__sd_ready)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__read_start)))) {
            if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending) 
                 & (VL_GTS_III(32, 0x1f4U, VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x3e8U))) 
                    | (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending))))) {
                vlSelfRef.__Vdly__tb_media__DOT__audio_reads 
                    = ((IData)(1U) + vlSelfRef.tb_media__DOT__audio_reads);
                vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__read_start = 1U;
                vlSelfRef.tb_media__DOT__lba = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_audio;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending = 0U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending) {
                vlSelfRef.__Vdly__tb_media__DOT__image_reads 
                    = ((IData)(1U) + vlSelfRef.tb_media__DOT__image_reads);
                vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner = 0U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__read_start = 1U;
                vlSelfRef.tb_media__DOT__lba = vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_image;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending = 0U;
            }
        }
    }
    if (((IData)(vlSelfRef.tb_media__DOT__reset) | (IData)(vlSelfRef.tb_media__DOT__audio_flush))) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        vlSelfRef.tb_media__DOT__pcm_pair = 0U;
        vlSelfRef.tb_media__DOT__wav_done = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0U;
        vlSelfRef.tb_media__DOT__total = 0U;
    } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 1U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
            = vlSelfRef.tb_media__DOT__wav_bytes;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        vlSelfRef.tb_media__DOT__pcm_pair = 0U;
        vlSelfRef.tb_media__DOT__wav_done = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs = 0U;
        vlSelfRef.tb_media__DOT__total = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 0U;
        if ((0xcU > vlSelfRef.tb_media__DOT__wav_bytes)) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 2U;
        }
    } else {
        if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid) 
             & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        }
        if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
                = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset);
        }
        if (((((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error)) 
               & (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
              & (0xbU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) 
             & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)))) {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error 
                = (0x80U | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error));
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
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
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q;
                        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0 = 1U;
                        if ((0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 2U;
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((0x46464952U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__116__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__116__Vfuncout)) 
                         | (0x45564157U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__117__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__117__Vfuncout)))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if (((0xcULL > vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length) 
                                | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length 
                                   > (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length))))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 2U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
                            = (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_length);
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)) 
                         & ((0x1ffffffffULL & (8ULL 
                                               + (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset)))) 
                            > (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end))))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 4U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q;
                        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1 = 1U;
                        if ((7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 4U;
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__118__Vfuncout 
                        = (((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                             [7U] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [6U] 
                                               << 0x10U)) 
                           | ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                               [5U] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                              [4U]));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                        = __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__118__Vfuncout;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
                        = (1U & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                           [4U]);
                    if ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_end 
                         > (QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end)))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 4U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else if ((0x20746d66U == ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__119__Vfuncout 
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
                                }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__119__Vfuncout))) {
                        if (((0x10U > ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__120__Vfuncout 
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
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__120__Vfuncout)) 
                             | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen))) {
                            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 3U;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 5U;
                        }
                    } else if ((0x61746164U == ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__121__Vfuncout 
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
                                }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__121__Vfuncout))) {
                        if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen) {
                            if (((0U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__122__Vfuncout 
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
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__122__Vfuncout)) 
                                 | (0U != (3U & vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                           [4U])))) {
                                vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 7U;
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                            } else {
                                vlSelfRef.tb_media__DOT__total 
                                    = VL_SHIFTR_III(32,32,32, 
                                                    ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__123__Vfuncout 
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
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__123__Vfuncout), 2U);
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte = 0U;
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 9U;
                            }
                        } else {
                            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 6U;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((0U == ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__124__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__124__Vfuncout))
                                ? 3U : 7U);
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                            = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                               - (IData)(1U));
                        __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q;
                        __VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 
                            = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2 = 1U;
                        if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 6U;
                        } else {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index)));
                        }
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
                    if (((((((1U != ([&]() {
                                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__125__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                              [1U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [0U]);
                                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__125__Vfuncout))) 
                             | (2U != ([&]() {
                                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__126__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                              [3U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                             [2U]);
                                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__126__Vfuncout)))) 
                            | (0xbb80U != ([&]() {
                                                    __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__127__Vfuncout 
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
                                                }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__127__Vfuncout))) 
                           | (0x2ee00U != ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__128__Vfuncout 
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
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le32__128__Vfuncout))) 
                          | (4U != ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__129__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                    [0xdU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                   [0xcU]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__129__Vfuncout)))) 
                         | (0x10U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__130__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__le16__130__Vfuncout))))) {
                        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 3U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
                    } else {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen = 1U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((0U != vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)
                                ? 7U : ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd)
                                         ? 8U : 3U));
                    }
                } else if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                        = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                           - (IData)(1U));
                    if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
                            = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd)
                                ? 8U : 3U);
                    }
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index = 0U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 3U;
            }
        } else if ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                    = (vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
                       - (IData)(1U));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte)));
                if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xffff00U & vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q));
                } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xff00ffU & vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q) 
                              << 8U));
                } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
                        = ((0xffffU & vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q) 
                              << 0x10U));
                } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs 
                        = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__sample_pairs);
                    vlSelfRef.tb_media__DOT__pcm_pair 
                        = (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q) 
                            << 0x18U) | vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly);
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 1U;
                }
                if ((1U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining)) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xaU;
                }
            }
        } else if ((0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                       | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))) {
                vlSelfRef.tb_media__DOT__wav_done = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xbU;
            }
        } else {
            vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error = 0xffU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state = 0xfU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid = 0U;
        }
    }
    __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase 
        = (1U & ((~ (IData)(vlSelfRef.tb_media__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase))));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_name_raw 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__a 
                = (0x1fU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase)
                             ? (IData)(vlSelfRef.tb_media__DOT__browse_query)
                             : (IData)(vlSelfRef.tb_media__DOT__selected)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g 
                = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__a), 1U) 
                            ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__a)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g 
                = ((0xfU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g)) 
                   | (0x10U & ((0xfffffff0U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g)) 
                               ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g) 
                                  << 4U))));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__26__Vfuncout))];
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name_raw 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__a 
                = (0xfU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase)
                            ? (IData)(vlSelfRef.tb_media__DOT__browse_query)
                            : (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g 
                = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__a), 1U) 
                           ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__a)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g 
                = ((7U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g)) 
                   | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g)) 
                            ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g) 
                               << 3U))));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__27__Vfuncout))];
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__image_cluster_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__clusters
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__a 
                = vlSelfRef.tb_media__DOT__selected;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g 
                = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__a), 1U) 
                            ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__a)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g 
                = ((0xfU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g)) 
                   | (0x10U & ((0xfffffff0U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g)) 
                               ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g) 
                                  << 4U))));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__28__Vfuncout))];
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_cluster_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__a 
                = vlSelfRef.tb_media__DOT__audio_selected;
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g 
                = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__a), 1U) 
                           ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__a)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g 
                = ((7U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g)) 
                   | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g)) 
                            ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g) 
                               << 3U))));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__29__Vfuncout))];
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_image_bytes 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__sizes
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__a 
                = (0x1fU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase)
                             ? (IData)(vlSelfRef.tb_media__DOT__browse_query)
                             : (IData)(vlSelfRef.tb_media__DOT__selected)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g 
                = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__a), 1U) 
                            ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__a)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g 
                = ((0xfU & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g)) 
                   | (0x10U & ((0xfffffff0U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g)) 
                               ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g) 
                                  << 4U))));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr5__30__Vfuncout))];
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_bytes 
        = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes
        [([&]() {
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__a 
                = (0xfU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase)
                            ? (IData)(vlSelfRef.tb_media__DOT__browse_query)
                            : (IData)(vlSelfRef.tb_media__DOT__audio_selected)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g 
                = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__a), 1U) 
                           ^ (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__a)));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g 
                = ((7U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g)) 
                   | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g)) 
                            ^ ((IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g) 
                               << 3U))));
            __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__Vfuncout 
                = __Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__g;
        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__catalog__DOT__addr4__31__Vfuncout))];
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_image 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__held_image;
    vlSelfRef.tb_media__DOT__image_reads = vlSelfRef.__Vdly__tb_media__DOT__image_reads;
    vlSelfRef.tb_media__DOT__audio_reads = vlSelfRef.__Vdly__tb_media__DOT__audio_reads;
    vlSelfRef.tb_media__DOT__sd_ready = vlSelfRef.__Vdly__tb_media__DOT__sd_ready;
    vlSelfRef.tb_media__DOT__read_start = vlSelfRef.__Vdly__tb_media__DOT__read_start;
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__audio_pending;
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__image_pending 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__image_pending;
    vlSelfRef.tb_media__DOT__cycle = vlSelfRef.__Vdly__tb_media__DOT__cycle;
    vlSelfRef.tb_media__DOT__sd_done = vlSelfRef.__Vdly__tb_media__DOT__sd_done;
    vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__active 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__arbiter__DOT__active;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_error 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_error;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__index;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__length;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__riff_end;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__remaining;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__chunk_odd;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__format_seen;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__channel_byte;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__assembly;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__sample_pairs 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__sample_pairs;
    vlSelfRef.tb_media__DOT__wav_bytes = vlSelfRef.__Vdly__tb_media__DOT__wav_bytes;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__offset;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v0;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v1;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2] 
            = __VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__header__v2;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__state;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__names__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__names[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__names__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__names__v0;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_names[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_names__v0;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__clusters[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__clusters__v0;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_clusters__v0;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__sizes[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__sizes__v0;
    }
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__catalog__DOT__wav_sizes__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase 
        = __Vdly__tb_media__DOT__dut__DOT__catalog__DOT__name_phase;
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
    } else if (vlSelfRef.tb_media__DOT__dut__DOT__aud_start) {
        vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__held_audio 
            = vlSelfRef.tb_media__DOT__dut__DOT__aud_lba;
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
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache
        [((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))
           ? 0U : (0x1ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos) 
                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume))))];
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
    vlSelfRef.tb_media__DOT__dut__DOT__aud_done = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2) 
                                                   & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_done = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                         & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_2));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_bv = ((IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1) 
                                                 & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner));
    tb_media__DOT__dut__DOT__img_bv = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__arbiter__DOT__owner)) 
                                       & (IData)(tb_media__DOT__dut__DOT__arbiter__DOT____VdfgRegularize_hcdb9eaa0_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__aud_lba = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_lba;
    vlSelfRef.tb_media__DOT__dut__DOT__aud_start = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__aud_start;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__pos;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__cache__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state;
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__audio_selected = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 0U;
        vlSelfRef.tb_media__DOT__selected = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__lookup_wait = 0U;
    } else {
        if (vlSelfRef.tb_media__DOT__dut__DOT__audio_change) {
            vlSelfRef.tb_media__DOT__audio_selected 
                = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_request)
                    ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__paired_index)
                    : (IData)(vlSelfRef.tb_media__DOT__audio_requested));
        }
        if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__catalog_ready) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state 
                    = ((0U == (IData)(vlSelfRef.tb_media__DOT__count))
                        ? 6U : 1U);
            }
        } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__lookup_wait))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__lookup_wait = 0U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__lookup_wait 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__lookup_wait)));
            }
        } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 4U;
        } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 6U;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 5U;
            }
        } else if (((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
                    || (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))) {
            if ((((IData)(vlSelfRef.tb_media__DOT__select_request) 
                  & ((IData)(vlSelfRef.tb_media__DOT__requested) 
                     < (IData)(vlSelfRef.tb_media__DOT__count))) 
                 & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy)))) {
                vlSelfRef.tb_media__DOT__selected = vlSelfRef.tb_media__DOT__requested;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 1U;
            }
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state = 6U;
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__lookup_wait 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__lookup_wait;
    vlSelfRef.tb_media__DOT__count = vlSelfRef.__Vdly__tb_media__DOT__count;
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state))));
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__pair_request = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__paired_index = 0U;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__pair_request = 0U;
        if (vlSelfRef.tb_media__DOT__paired) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__was_enabled)) 
                       | (vlSelfRef.tb_media__DOT__frame_swaps 
                          != vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__last_swaps)))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle = 0x1fU;
            } else if (vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__pending) {
                if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__settle))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle 
                        = (0x1fU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__settle) 
                                    - (IData)(1U)));
                } else {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending = 0U;
                    if (vlSelfRef.tb_media__DOT__dut__DOT__pair_found) {
                        vlSelfRef.tb_media__DOT__dut__DOT__pair_request = 1U;
                        vlSelfRef.tb_media__DOT__dut__DOT__paired_index 
                            = vlSelfRef.tb_media__DOT__dut__DOT__pair_index;
                    }
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle = 0U;
        }
    }
    if (((IData)(vlSelfRef.tb_media__DOT__reset) | 
         (3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)))) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
            = ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state))
                ? 1U : 0U);
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
            = vlSelfRef.tb_media__DOT__dut__DOT__image_bytes;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_addr = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[0U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[1U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[2U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[3U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[4U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[5U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[6U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data[7U] 
            = Vtb_media__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_last = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__pixels = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0U;
        if (((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
             & (0x36U > vlSelfRef.tb_media__DOT__dut__DOT__image_bytes))) {
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0xaU;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
        }
    } else if ((((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error)) 
                 & (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) 
                & (0x11U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)))) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error 
            = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
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
                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q;
                    if (VL_LIKELY(((0x35U >= (0x3fU 
                                              & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position))))) {
                        __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 
                            = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT____Vlvbound_h2fb5cc83__0;
                        __VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 
                            = (0x3fU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                        vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0 = 1U;
                    }
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                    if ((0x35U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position)) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 2U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (((((0x4d42U != ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__99__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                   [0U]);
                                        }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__99__Vfuncout))) 
                       | (0x28U > ([&]() {
                                            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__100__Vfuncout 
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
                                        }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__100__Vfuncout))) 
                      | (1U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__101__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1bU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1aU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__101__Vfuncout)))) 
                     | (0U != ([&]() {
                                    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__102__Vfuncout 
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
                                }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__102__Vfuncout)))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 8U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else if ((((((1U > ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__103__Vfuncout 
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
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__103__Vfuncout)) 
                               | (0x780U < ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__104__Vfuncout 
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
                                            }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__104__Vfuncout))) 
                              | (1U > vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)) 
                             | (0x438U < vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)) 
                            | ((0x18U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__105__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__105__Vfuncout))) 
                               & (0x20U != ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__106__Vfuncout 
                                            = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__106__Vfuncout)))))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 9U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else if ((((0x36U > ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__107__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__107__Vfuncout)) 
                             | (0x100000U < ([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__108__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__108__Vfuncout))) 
                            | ((QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length)) 
                               < vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end))) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0xaU;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                } else {
                    __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__109__Vfuncout 
                        = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                             [0xdU] << 0x18U) | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                 [0xcU] 
                                                 << 0x10U)) 
                           | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                               [0xbU] << 8U) | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                              [0xaU]));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
                        = __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__109__Vfuncout;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
                        = (0x7ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height);
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
                        = (((IData)(0x1e0U) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__raw_width)) 
                           >= ((IData)(0x280U) * (0x7ffU 
                                                  & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 3U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
                        = (0x7ffU & ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__110__Vfuncout 
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
                            }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__110__Vfuncout));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
                        = (0x20U == ([&]() {
                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__111__Vfuncout 
                                    = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                        [0x1dU] << 8U) 
                                       | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0x1cU]);
                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__111__Vfuncout)));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
                        = (1U & (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                 [0x19U] >> 7U));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
                        = (3U & ((0x1ffcU & ((IData)(3U) 
                                             + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes))) 
                                 - (([&]() {
                                        __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__112__Vfuncout 
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
                                    }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__112__Vfuncout) 
                                    * ((0x20U == ([&]() {
                                                __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__113__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                      [0x1dU] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                                     [0x1cU]);
                                            }(), (IData)(__Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h16__113__Vfuncout)))
                                        ? 4U : 3U))));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 4U;
            } else if ((4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done) {
                    if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited) {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w = 0x280U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
                            = ((0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled));
                    } else {
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
                            = ((0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled));
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h = 0x1e0U;
                    }
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__left_pad 
                    = (0x3ffU & (((IData)(0x280U) - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w)) 
                                 >> 1U));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
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
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 1U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
                } else {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position);
                    if ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                         >= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length)) {
                        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 7U;
                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
                    } else if ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
                                >= vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset)) {
                        if ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                = (3U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left) 
                                         - (IData)(1U)));
                            if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left))) {
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blue 
                                = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 1U;
                        } else if ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__green 
                                = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q;
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
                                = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba)
                                    ? 3U : 0U);
                            if ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba)))) {
                                if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)) 
                                     == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width))) {
                                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
                                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
                                    if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding))) {
                                        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                                    }
                                } else {
                                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)));
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel))) {
                            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x)) 
                                 == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width))) {
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x = 0U;
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
                                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
                                if ((0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding))) {
                                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 7U;
                                }
                            } else {
                                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
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
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 0U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
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
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_addr 
                = (0x3ffffU & (VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y), 8U) 
                               + VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__actual_y), 6U)));
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 9U;
        } else if ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xaU;
        } else if ((0xaU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_media__DOT__pixels 
                = ((IData)(1U) + vlSelfRef.tb_media__DOT__pixels);
            if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                                 + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width)));
            }
            if ((1U & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel))) {
                VL_ASSIGNSEL_WI(256,32,(0xe0U & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel) 
                                                 << 4U)), vlSelfRef.tb_media__DOT__dut__DOT__raw_load_data, 
                                (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565) 
                                  << 0x10U) | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel)));
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565;
            }
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x)));
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel)));
            if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
                    = ((0x27fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x))
                        ? 0xcU : ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
                                   ? 0xbU : 9U));
                if ((((0x1dfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                      & (0x27fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x))) 
                     & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished)))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row = 0x1e0U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
                } else {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_last 
                        = ((0x1dfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                           & (0x27fU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x)));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xfU;
                }
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
                        ? 0xbU : 9U);
            }
        } else if ((0xbU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                 >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error) 
                                 - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w)));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x)));
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 9U;
            }
        } else if ((0xfU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__load_ready) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x10U;
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            if (vlSelfRef.tb_media__DOT__dut__DOT__raw_load_ack) {
                if (vlSelfRef.tb_media__DOT__dut__DOT__raw_load_last) {
                    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done = 1U;
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x11U;
                } else {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_addr 
                        = (0x3ffffU & ((IData)(8U) 
                                       + vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
                }
            }
        } else if ((0xcU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)));
            if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                    = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished)
                        ? 8U : ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row)) 
                                 < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad))
                                 ? 8U : 6U));
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows)));
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows)) 
                     >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h))) {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xeU;
                } else {
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
                        = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                                     + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height)));
                    vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xdU;
                }
            }
        } else if (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                    >= (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
                = (0xfffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error) 
                             - (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h)));
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y)));
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
                = (((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y) 
                    == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y))
                    ? 8U : 0xeU);
        }
    } else if ((0xeU == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))) {
        if ((((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y)) 
             < (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y)));
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 6U;
        } else {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished = 1U;
            if ((0x1e0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_last = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0xfU;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 8U;
            }
        }
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error = 0xffU;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state = 0x1fU;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__pending 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__pending;
    vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__settle 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pairing__DOT__settle;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_error 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__stream_error;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__after_ack;
    vlSelfRef.tb_media__DOT__dut__DOT__image_bytes 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__image_bytes;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__length;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_y;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__wanted_y;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_h;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__first_pad;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__drawn_rows;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__x_error;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__y_error;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__padding;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__rgba;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__input_finished;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__burst_pixel;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__low_pixel;
    vlSelfRef.tb_media__DOT__dut__DOT__raw_load_last 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_last;
    vlSelfRef.tb_media__DOT__pixels = vlSelfRef.__Vdly__tb_media__DOT__pixels;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__position;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__offset;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__pad_left;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__channel;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__source_x;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample_x;
    vlSelfRef.tb_media__DOT__load_ready = vlSelfRef.__Vdly__tb_media__DOT__load_ready;
    vlSelfRef.tb_media__DOT__dut__DOT__raw_load_addr 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_load_addr;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__dest_row;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__top_down;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__draw_w;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__out_x;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__blank_row;
    vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__was_enabled 
        = ((1U & (~ (IData)(vlSelfRef.tb_media__DOT__reset))) 
           && (IData)(vlSelfRef.tb_media__DOT__paired));
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
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_done) 
           | (0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decode_error)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache_q 
        = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache
        [((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))
           ? 0U : (0x1ffU & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos) 
                             + ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid) 
                                & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_ready)))))];
    __Vtableidx1 = (((IData)(vlSelfRef.tb_media__DOT__ack) 
                     << 1U) | (IData)(vlSelfRef.tb_media__DOT__reset));
    vlSelfRef.tb_media__DOT__dut__DOT__raw_load_ack 
        = Vtb_media__ConstPool__TABLE_h97bd9a81_0[__Vtableidx1];
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__last_swaps = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_name = 0ULL;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_scan = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pair_found = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__pair_index = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0U;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__pairing__DOT__last_swaps 
            = vlSelfRef.tb_media__DOT__frame_swaps;
        if ((1U & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
                   | (vlSelfRef.tb_media__DOT__name 
                      != vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_name)))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_name 
                = vlSelfRef.tb_media__DOT__name;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_scan = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pair_found = 0U;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0U;
        } else {
            if ((((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid) 
                  & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_found))) 
                 & (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__shared_wav_name 
                    == vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_name))) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pair_found = 1U;
                vlSelfRef.tb_media__DOT__dut__DOT__pair_index 
                    = vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index;
            }
            if (vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_issue) {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 1U;
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_scan 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan)));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index 
                    = (0xfU & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan));
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid = 0U;
            }
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__required_end 
        = ((IData)(vlSelfRef.tb_media__DOT__reset) ? 0ULL
            : (0x1ffffffffULL & (VL_EXTEND_QI(33,32, 
                                              ([&]() {
                            __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__96__Vfuncout 
                                = (((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                     [0xdU] << 0x18U) 
                                    | (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0xcU] << 0x10U)) 
                                   | ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                       [0xbU] << 8U) 
                                      | vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header
                                      [0xaU]));
                        }(), __Vfunc_tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__h32__96__Vfuncout)) 
                                 + ((QData)((IData)(
                                                    (0x1ffcU 
                                                     & ((IData)(3U) 
                                                        + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_bytes))))) 
                                    * (QData)((IData)(
                                                      (0x7ffU 
                                                       & vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__abs_height)))))));
    if (vlSelfRef.tb_media__DOT__reset) {
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__scaled = 0U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift = 0U;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor = 1U;
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = 0ULL;
        vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0U;
    } else {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 0U;
        if (((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy)))) {
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 1U;
            if (vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited) {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                    = ((IData)(0x280U) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
            } else {
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                    = ((IData)(0x1e0U) * (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width));
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
            }
            vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem = 0ULL;
            vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count = 0U;
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
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy = 0U;
                vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider_done = 1U;
            } else {
                vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count)));
            }
        }
    }
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_index;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_lookup_valid;
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
    vlSelfRef.tb_media__DOT__name = vlSelfRef.__Vdly__tb_media__DOT__name;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_name 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_name;
    vlSelfRef.tb_media__DOT__dut__DOT__pair_found = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__pair_found;
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__catalog__DOT__pair_scan;
    vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__raw_catalog_ready;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__sample565 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__inside_x)
            ? (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__row_q)
            : 0U);
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__pos;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache[vlSelfRef.__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0] 
            = vlSelfRef.__VdlyVal__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__cache__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state;
    vlSelfRef.tb_media__DOT__ack = vlSelfRef.__Vdly__tb_media__DOT__ack;
    if (vlSelfRef.__VdlySet__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0) {
        vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header[__VdlyDim0__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0] 
            = __VdlyVal__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__header__v0;
    }
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__busy;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__count;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width_limited;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__height;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__width;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state;
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor 
        = vlSelfRef.__Vdly__tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__divisor;
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_ready 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_ready));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_done 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_done));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__catalog__sd_byte_valid 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready)) 
           & (IData)(tb_media__DOT__dut__DOT__img_bv));
    vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_issue 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) 
           & ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__name_phase) 
                  | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__pair_found))) 
              & ((vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_name 
                  == vlSelfRef.tb_media__DOT__name) 
                 & ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__catalog__DOT__pair_scan) 
                    < (IData)(vlSelfRef.tb_media__DOT__wav_count)))));
    vlSelfRef.tb_media__DOT__catalog_ready = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__raw_catalog_ready) 
                                              & ((~ (IData)(vlSelfRef.tb_media__DOT__platform_found)) 
                                                 | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__boot_finished)));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__stream_busy 
        = ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
           & ((9U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)) 
              & (0xfU != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__cancel) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__file_stream__DOT__state)));
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
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__byte_ready 
        = ((3U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state)) 
              | (6U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__state))));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__trial 
        = (((QData)((IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__rem)) 
            << 1U) | (QData)((IData)((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
                                      >> 0x1fU))));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_ready 
        = ((IData)(tb_media__DOT__dut__DOT__img_ready) 
           & (IData)(vlSelfRef.tb_media__DOT__catalog_ready));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_done 
        = ((IData)(tb_media__DOT__dut__DOT__img_done) 
           & (IData)(vlSelfRef.tb_media__DOT__catalog_ready));
    vlSelfRef.tb_media__DOT__dut__DOT____Vcellinp__images__sd_byte_valid 
        = ((IData)(tb_media__DOT__dut__DOT__img_bv) 
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
    vlSelfRef.tb_media__DOT__dut__DOT__config_sd_ready 
        = ((IData)(tb_media__DOT__dut__DOT__img_ready) 
           & (IData)(tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__config_sd_done 
        = ((IData)(tb_media__DOT__dut__DOT__img_done) 
           & (IData)(tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__config_bv = 
        ((IData)(tb_media__DOT__dut__DOT__img_bv) & (IData)(tb_media__DOT__dut__DOT____VdfgRegularize_h3b018e90_0_1));
    vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__images__DOT__decoder__DOT__divider__DOT__take));
}
