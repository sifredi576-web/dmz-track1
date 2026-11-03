// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_status_panel.h for the primary calling header

#include "Vtb_status_panel__pch.h"
#include "Vtb_status_panel__Syms.h"
#include "Vtb_status_panel___024root.h"

extern const VlWide<10>/*319:0*/ Vtb_status_panel__ConstPool__CONST_hd7d10382_0;

VL_INLINE_OPT VlCoroutine Vtb_status_panel___024root___eval_initial__TOP__Vtiming__0(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_status_panel__DOT__yy;
    tb_status_panel__DOT__yy = 0;
    IData/*31:0*/ tb_status_panel__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_status_panel__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__0__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__0__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__2__n;
    __Vtask_tb_status_panel__DOT__ticks__2__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__3__n;
    __Vtask_tb_status_panel__DOT__ticks__3__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__5__n;
    __Vtask_tb_status_panel__DOT__ticks__5__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__6__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__6__r;
    __Vfunc_tb_status_panel__DOT__label__6__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__6__cl;
    __Vfunc_tb_status_panel__DOT__label__6__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__7__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__7__n;
    __Vfunc_tb_status_panel__DOT__dg__7__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__8__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__8__n;
    __Vfunc_tb_status_panel__DOT__dg__8__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__9__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__9__n;
    __Vfunc_tb_status_panel__DOT__dg__9__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__11__n;
    __Vtask_tb_status_panel__DOT__ticks__11__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__12__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__12__r;
    __Vfunc_tb_status_panel__DOT__label__12__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__12__cl;
    __Vfunc_tb_status_panel__DOT__label__12__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__13__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__13__n;
    __Vfunc_tb_status_panel__DOT__dg__13__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__14__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__14__n;
    __Vfunc_tb_status_panel__DOT__dg__14__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__15__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__15__n;
    __Vfunc_tb_status_panel__DOT__dg__15__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__17__n;
    __Vtask_tb_status_panel__DOT__ticks__17__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__18__n;
    __Vtask_tb_status_panel__DOT__ticks__18__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__20__n;
    __Vtask_tb_status_panel__DOT__ticks__20__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__21__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__21__r;
    __Vfunc_tb_status_panel__DOT__label__21__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__21__cl;
    __Vfunc_tb_status_panel__DOT__label__21__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__22__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__22__n;
    __Vfunc_tb_status_panel__DOT__dg__22__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__23__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__23__n;
    __Vfunc_tb_status_panel__DOT__dg__23__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__24__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__24__n;
    __Vfunc_tb_status_panel__DOT__dg__24__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__26__n;
    __Vtask_tb_status_panel__DOT__ticks__26__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__27__n;
    __Vtask_tb_status_panel__DOT__ticks__27__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__29__n;
    __Vtask_tb_status_panel__DOT__ticks__29__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__30__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__30__r;
    __Vfunc_tb_status_panel__DOT__label__30__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__30__cl;
    __Vfunc_tb_status_panel__DOT__label__30__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__31__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__31__n;
    __Vfunc_tb_status_panel__DOT__dg__31__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__32__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__32__n;
    __Vfunc_tb_status_panel__DOT__dg__32__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__33__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__33__n;
    __Vfunc_tb_status_panel__DOT__dg__33__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__35__n;
    __Vtask_tb_status_panel__DOT__ticks__35__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__36__n;
    __Vtask_tb_status_panel__DOT__ticks__36__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__38__n;
    __Vtask_tb_status_panel__DOT__ticks__38__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__39__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__39__r;
    __Vfunc_tb_status_panel__DOT__label__39__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__39__cl;
    __Vfunc_tb_status_panel__DOT__label__39__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__40__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__40__n;
    __Vfunc_tb_status_panel__DOT__dg__40__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__41__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__41__n;
    __Vfunc_tb_status_panel__DOT__dg__41__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__42__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__42__n;
    __Vfunc_tb_status_panel__DOT__dg__42__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__44__n;
    __Vtask_tb_status_panel__DOT__ticks__44__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__45__n;
    __Vtask_tb_status_panel__DOT__ticks__45__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__47__n;
    __Vtask_tb_status_panel__DOT__ticks__47__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__48__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__48__r;
    __Vfunc_tb_status_panel__DOT__label__48__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__48__cl;
    __Vfunc_tb_status_panel__DOT__label__48__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__49__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__49__n;
    __Vfunc_tb_status_panel__DOT__dg__49__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__50__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__50__n;
    __Vfunc_tb_status_panel__DOT__dg__50__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__51__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__51__n;
    __Vfunc_tb_status_panel__DOT__dg__51__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__53__n;
    __Vtask_tb_status_panel__DOT__ticks__53__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__54__n;
    __Vtask_tb_status_panel__DOT__ticks__54__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__56__n;
    __Vtask_tb_status_panel__DOT__ticks__56__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__57__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__57__r;
    __Vfunc_tb_status_panel__DOT__label__57__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__57__cl;
    __Vfunc_tb_status_panel__DOT__label__57__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__58__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__58__n;
    __Vfunc_tb_status_panel__DOT__dg__58__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__59__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__59__n;
    __Vfunc_tb_status_panel__DOT__dg__59__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__60__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__60__n;
    __Vfunc_tb_status_panel__DOT__dg__60__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__62__n;
    __Vtask_tb_status_panel__DOT__ticks__62__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__63__n;
    __Vtask_tb_status_panel__DOT__ticks__63__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__65__n;
    __Vtask_tb_status_panel__DOT__ticks__65__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__66__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__66__r;
    __Vfunc_tb_status_panel__DOT__label__66__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__66__cl;
    __Vfunc_tb_status_panel__DOT__label__66__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__67__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__67__n;
    __Vfunc_tb_status_panel__DOT__dg__67__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__68__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__68__n;
    __Vfunc_tb_status_panel__DOT__dg__68__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__69__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__69__n;
    __Vfunc_tb_status_panel__DOT__dg__69__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__71__n;
    __Vtask_tb_status_panel__DOT__ticks__71__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__72__n;
    __Vtask_tb_status_panel__DOT__ticks__72__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__74__n;
    __Vtask_tb_status_panel__DOT__ticks__74__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__75__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__75__r;
    __Vfunc_tb_status_panel__DOT__label__75__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__75__cl;
    __Vfunc_tb_status_panel__DOT__label__75__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__76__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__76__n;
    __Vfunc_tb_status_panel__DOT__dg__76__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__77__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__77__n;
    __Vfunc_tb_status_panel__DOT__dg__77__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__78__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__78__n;
    __Vfunc_tb_status_panel__DOT__dg__78__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__80__n;
    __Vtask_tb_status_panel__DOT__ticks__80__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__81__n;
    __Vtask_tb_status_panel__DOT__ticks__81__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__83__n;
    __Vtask_tb_status_panel__DOT__ticks__83__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__84__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__84__r;
    __Vfunc_tb_status_panel__DOT__label__84__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__84__cl;
    __Vfunc_tb_status_panel__DOT__label__84__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__85__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__85__n;
    __Vfunc_tb_status_panel__DOT__dg__85__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__86__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__86__n;
    __Vfunc_tb_status_panel__DOT__dg__86__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__87__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__87__n;
    __Vfunc_tb_status_panel__DOT__dg__87__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__89__n;
    __Vtask_tb_status_panel__DOT__ticks__89__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__90__n;
    __Vtask_tb_status_panel__DOT__ticks__90__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__92__n;
    __Vtask_tb_status_panel__DOT__ticks__92__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__93__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__93__r;
    __Vfunc_tb_status_panel__DOT__label__93__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__93__cl;
    __Vfunc_tb_status_panel__DOT__label__93__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__94__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__94__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__94__n;
    __Vfunc_tb_status_panel__DOT__dg__94__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__95__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__95__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__95__n;
    __Vfunc_tb_status_panel__DOT__dg__95__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__96__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__96__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__96__n;
    __Vfunc_tb_status_panel__DOT__dg__96__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__98__n;
    __Vtask_tb_status_panel__DOT__ticks__98__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__99__n;
    __Vtask_tb_status_panel__DOT__ticks__99__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__101__n;
    __Vtask_tb_status_panel__DOT__ticks__101__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__102__Vfuncout;
    __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__102__r;
    __Vfunc_tb_status_panel__DOT__label__102__r = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__label__102__cl;
    __Vfunc_tb_status_panel__DOT__label__102__cl = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__103__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__103__n;
    __Vfunc_tb_status_panel__DOT__dg__103__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__104__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__104__n;
    __Vfunc_tb_status_panel__DOT__dg__104__n = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__105__Vfuncout;
    __Vfunc_tb_status_panel__DOT__dg__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_status_panel__DOT__dg__105__n;
    __Vfunc_tb_status_panel__DOT__dg__105__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__106__n;
    __Vtask_tb_status_panel__DOT__ticks__106__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__107__n;
    __Vtask_tb_status_panel__DOT__ticks__107__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__108__n;
    __Vtask_tb_status_panel__DOT__ticks__108__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__109__n;
    __Vtask_tb_status_panel__DOT__ticks__109__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__110__n;
    __Vtask_tb_status_panel__DOT__ticks__110__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__111__n;
    __Vtask_tb_status_panel__DOT__ticks__111__n = 0;
    IData/*31:0*/ __Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    VL_READMEM_N(true, 14, 512, 0, VL_CVT_PACK_STR_NW(10, Vtb_status_panel__ConstPool__CONST_hd7d10382_0)
                 ,  &(vlSelfRef.tb_status_panel__DOT__font_ref)
                 , 0, ~0ULL);
    __Vtask_tb_status_panel__DOT__ticks__0__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__0__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__0__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__0__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__reset = 0U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__2__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__2__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__2__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__3__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__3__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__3__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__5__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__5__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__5__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__6__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__6__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__6__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__6__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__6__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__6__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__6__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__6__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__6__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__6__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__7__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__7__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__7__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__7__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__7__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__7__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__7__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__7__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__7__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__7__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__7__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__7__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__8__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__8__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__8__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__8__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__8__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__8__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__8__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__8__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__8__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__8__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__8__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__8__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__6__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__9__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__9__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__9__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__9__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__9__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__9__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__9__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__9__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__9__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__9__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__9__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__6__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__9__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__6__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__6__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__6__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__6__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__paused = 1U;
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__11__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__11__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__11__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__12__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__12__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__12__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__12__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__12__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__12__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__12__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__12__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__12__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__12__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__13__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__13__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__13__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__13__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__13__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__13__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__13__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__13__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__13__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__13__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__13__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__13__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__14__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__14__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__14__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__14__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__14__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__14__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__14__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__14__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__14__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__14__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__14__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__14__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__12__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__15__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__15__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__15__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__15__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__15__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__15__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__15__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__15__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__15__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__15__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__15__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__12__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__15__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__12__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__12__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__12__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__12__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__st = 1U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__17__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__17__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__17__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__18__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__18__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__18__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__20__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__20__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__20__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__21__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__21__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__21__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__21__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__21__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__21__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__21__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__21__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__21__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__21__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__22__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__22__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__22__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__22__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__22__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__22__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__22__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__22__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__22__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__22__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__22__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__22__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__23__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__23__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__23__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__23__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__23__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__23__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__23__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__23__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__23__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__23__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__23__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__23__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__21__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__24__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__24__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__24__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__24__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__24__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__24__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__24__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__24__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__24__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__24__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__24__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__21__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__24__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__21__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__21__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__21__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__21__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__muted = 1U;
    vlSelfRef.tb_status_panel__DOT__st = 2U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__26__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__26__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__26__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__27__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__27__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__27__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__29__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__29__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__29__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__30__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__30__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__30__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__30__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__30__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__30__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__30__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__30__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__30__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__30__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__31__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__31__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__31__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__31__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__31__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__31__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__31__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__31__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__31__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__31__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__31__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__31__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__32__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__32__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__32__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__32__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__32__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__32__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__32__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__32__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__32__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__32__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__32__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__32__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__30__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__33__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__33__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__33__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__33__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__33__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__33__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__33__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__33__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__33__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__33__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__33__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__30__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__33__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__30__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__30__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__30__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__30__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__paused = 0U;
    vlSelfRef.tb_status_panel__DOT__muted = 0U;
    vlSelfRef.tb_status_panel__DOT__ended = 1U;
    vlSelfRef.tb_status_panel__DOT__st = 3U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__35__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__35__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__35__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__36__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__36__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__36__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__38__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__38__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__38__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__39__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__39__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__39__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__39__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__39__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__39__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__39__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__39__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__39__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__39__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__40__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__40__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__40__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__40__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__40__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__40__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__40__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__40__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__40__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__40__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__40__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__40__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__41__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__41__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__41__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__41__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__41__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__41__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__41__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__41__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__41__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__41__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__41__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__41__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__39__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__42__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__42__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__42__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__42__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__42__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__42__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__42__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__42__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__42__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__42__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__42__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__39__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__42__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__39__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__39__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__39__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__39__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__loading = 1U;
    vlSelfRef.tb_status_panel__DOT__st = 4U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__44__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__44__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__44__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__45__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__45__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__45__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__47__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__47__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__47__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__48__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__48__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__48__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__48__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__48__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__48__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__48__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__48__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__48__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__48__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__49__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__49__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__49__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__49__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__49__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__49__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__49__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__49__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__49__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__49__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__49__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__49__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__50__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__50__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__50__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__50__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__50__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__50__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__50__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__50__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__50__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__50__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__50__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__50__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__48__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__51__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__51__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__51__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__51__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__51__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__51__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__51__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__51__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__51__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__51__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__51__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__48__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__51__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__48__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__48__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__48__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__48__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__loading = 0U;
    vlSelfRef.tb_status_panel__DOT__aenabled = 0U;
    vlSelfRef.tb_status_panel__DOT__st = 5U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__53__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__53__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__53__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__54__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__54__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__54__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__56__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__56__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__56__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__57__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__57__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__57__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__57__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__57__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__57__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__57__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__57__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__57__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__57__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__58__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__58__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__58__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__58__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__58__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__58__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__58__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__58__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__58__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__58__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__58__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__58__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__59__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__59__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__59__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__59__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__59__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__59__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__59__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__59__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__59__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__59__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__59__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__59__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__57__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__60__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__60__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__60__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__60__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__60__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__60__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__60__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__60__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__60__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__60__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__60__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__57__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__60__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__57__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__57__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__57__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__57__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__fault = 1U;
    vlSelfRef.tb_status_panel__DOT__st = 6U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__62__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__62__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__62__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__63__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__63__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__63__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__65__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__65__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__65__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__66__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__66__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__66__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__66__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__66__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__66__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__66__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__66__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__66__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__66__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__67__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__67__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__67__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__67__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__67__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__67__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__67__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__67__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__67__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__67__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__67__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__67__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__68__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__68__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__68__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__68__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__68__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__68__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__68__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__68__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__68__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__68__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__68__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__68__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__66__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__69__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__69__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__69__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__69__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__69__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__69__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__69__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__69__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__69__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__69__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__69__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__66__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__69__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__66__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__66__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__66__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__66__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__fault = 0U;
    vlSelfRef.tb_status_panel__DOT__aenabled = 1U;
    vlSelfRef.tb_status_panel__DOT__active = 0U;
    vlSelfRef.tb_status_panel__DOT__st = 4U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__71__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__71__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__71__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__72__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__72__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__72__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__74__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__74__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__74__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__75__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__75__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__75__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__75__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__75__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__75__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__75__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__75__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__75__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__75__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__76__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__76__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__76__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__76__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__76__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__76__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__76__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__76__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__76__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__76__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__76__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__76__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__77__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__77__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__77__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__77__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__77__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__77__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__77__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__77__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__77__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__77__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__77__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__77__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__75__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__78__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__78__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__78__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__78__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__78__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__78__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__78__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__78__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__78__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__78__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__78__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__75__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__78__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__75__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__75__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__75__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__75__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__active = 1U;
    vlSelfRef.tb_status_panel__DOT__ended = 0U;
    vlSelfRef.tb_status_panel__DOT__st = 0U;
    vlSelfRef.tb_status_panel__DOT__b = 5U;
    vlSelfRef.tb_status_panel__DOT__c = 3U;
    vlSelfRef.tb_status_panel__DOT__volume = 0U;
    vlSelfRef.tb_status_panel__DOT__bf = 1U;
    vlSelfRef.tb_status_panel__DOT__cf = 1U;
    vlSelfRef.tb_status_panel__DOT__bu = 1U;
    vlSelfRef.tb_status_panel__DOT__cu = 0U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__80__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__80__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__80__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__81__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__81__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__81__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__83__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__83__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__83__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__84__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__84__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__84__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__84__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__84__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__84__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__84__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__84__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__84__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__84__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__85__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__85__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__85__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__85__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__85__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__85__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__85__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__85__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__85__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__85__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__85__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__85__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__86__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__86__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__86__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__86__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__86__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__86__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__86__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__86__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__86__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__86__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__86__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__86__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__84__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__87__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__87__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__87__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__87__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__87__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__87__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__87__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__87__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__87__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__87__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__87__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__84__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__87__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__84__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__84__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__84__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__84__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    tb_status_panel__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x78U;
    while (VL_LTS_III(32, 0U, tb_status_panel__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        vlSelfRef.tb_status_panel__DOT__frame = 1U;
        __Vtask_tb_status_panel__DOT__ticks__89__n = 1U;
        __Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_status_panel__DOT__ticks__89__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_status_panel.clk)", 
                                                                 "sim/system\tb_status_panel.sv", 
                                                                 41);
            __Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_status_panel__DOT__ticks__89__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_status_panel__DOT__frame = 0U;
        __Vtask_tb_status_panel__DOT__ticks__90__n = 3U;
        __Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        __Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = __Vtask_tb_status_panel__DOT__ticks__90__n;
        while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_status_panel.clk)", 
                                                                 "sim/system\tb_status_panel.sv", 
                                                                 41);
            __Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_status_panel__DOT__ticks__90__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        tb_status_panel__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_status_panel__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__bf = 0U;
    vlSelfRef.tb_status_panel__DOT__cf = 0U;
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__92__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__92__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__92__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__93__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__93__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__93__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__93__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__93__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__93__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__93__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__93__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__93__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__93__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__94__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__94__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__94__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__94__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__94__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__94__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__94__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__94__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__94__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__94__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__94__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__94__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__95__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__95__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__95__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__95__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__95__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__95__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__95__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__95__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__95__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__95__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__95__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__95__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__93__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__96__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__96__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__96__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__96__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__96__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__96__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__96__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__96__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__96__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__96__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__96__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__93__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__96__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__93__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__93__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__93__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__93__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__b = 4U;
    vlSelfRef.tb_status_panel__DOT__c = 4U;
    vlSelfRef.tb_status_panel__DOT__bf = 1U;
    vlSelfRef.tb_status_panel__DOT__cf = 1U;
    vlSelfRef.tb_status_panel__DOT__bu = 0U;
    vlSelfRef.tb_status_panel__DOT__cu = 1U;
    vlSelfRef.tb_status_panel__DOT__frame = 1U;
    __Vtask_tb_status_panel__DOT__ticks__98__n = 1U;
    __Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__98__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__98__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    __Vtask_tb_status_panel__DOT__ticks__99__n = 3U;
    __Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__99__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__99__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_status_panel__DOT__yy = 0x80U;
    while (VL_GTS_III(32, 0x120U, tb_status_panel__DOT__yy)) {
        vlSelfRef.tb_status_panel__DOT__xx = 0x240U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.tb_status_panel__DOT__xx)) {
            vlSelfRef.tb_status_panel__DOT__x = (0x3ffU 
                                                 & (vlSelfRef.tb_status_panel__DOT__xx 
                                                    - (IData)(2U)));
            vlSelfRef.tb_status_panel__DOT__y = (0x3ffU 
                                                 & tb_status_panel__DOT__yy);
            __Vtask_tb_status_panel__DOT__ticks__101__n = 4U;
            __Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_tb_status_panel__DOT__ticks__101__n;
            while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_status_panel.clk)", 
                                                                     "sim/system\tb_status_panel.sv", 
                                                                     41);
                __Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_status_panel__DOT__ticks__101__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_status_panel__DOT__row = VL_DIVS_III(32, 
                                                              (tb_status_panel__DOT__yy 
                                                               - (IData)(0x80U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__col = VL_DIVS_III(32, 
                                                              (vlSelfRef.tb_status_panel__DOT__xx 
                                                               - (IData)(0x240U)), (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__lx = VL_MODDIVS_III(32, vlSelfRef.tb_status_panel__DOT__xx, (IData)(0x10U));
            vlSelfRef.tb_status_panel__DOT__ly = VL_MODDIVS_III(32, tb_status_panel__DOT__yy, (IData)(0x10U));
            __Vfunc_tb_status_panel__DOT__label__102__cl 
                = vlSelfRef.tb_status_panel__DOT__col;
            __Vfunc_tb_status_panel__DOT__label__102__r 
                = vlSelfRef.tb_status_panel__DOT__row;
            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0U;
            if (((((((((0U == __Vfunc_tb_status_panel__DOT__label__102__r) 
                       | (1U == __Vfunc_tb_status_panel__DOT__label__102__r)) 
                      | (2U == __Vfunc_tb_status_panel__DOT__label__102__r)) 
                     | (3U == __Vfunc_tb_status_panel__DOT__label__102__r)) 
                    | (4U == __Vfunc_tb_status_panel__DOT__label__102__r)) 
                   | (5U == __Vfunc_tb_status_panel__DOT__label__102__r)) 
                  | (6U == __Vfunc_tb_status_panel__DOT__label__102__r)) 
                 | (7U == __Vfunc_tb_status_panel__DOT__label__102__r))) {
                if ((0U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 1U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 2U;
                    }
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 3U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 4U;
                        }
                    } else if ((1U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 5U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 6U;
                        }
                    } else if ((2U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 7U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 2U;
                        }
                    } else if ((3U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 8U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 9U;
                        }
                    } else if ((4U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0xaU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0xbU;
                        }
                    } else if ((5U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0xcU;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 1U;
                        }
                    } else if ((6U == vlSelfRef.tb_status_panel__DOT__st)) {
                        if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x12U;
                        } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                            __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x13U;
                        }
                    }
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 2U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0xdU;
                    }
                } else if ((3U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__103__n 
                            = vlSelfRef.tb_status_panel__DOT__volume;
                        __Vfunc_tb_status_panel__DOT__dg__103__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__103__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__103__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__103__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__103__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__103__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__103__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__103__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__103__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__103__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__103__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x1cU;
                    }
                } else if ((4U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0xeU;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0xfU;
                    }
                } else if ((5U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__dg__104__n 
                            = vlSelfRef.tb_status_panel__DOT__b;
                        __Vfunc_tb_status_panel__DOT__dg__104__Vfuncout 
                            = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__104__n) 
                                      | (1U == __Vfunc_tb_status_panel__DOT__dg__104__n)) 
                                     | (2U == __Vfunc_tb_status_panel__DOT__dg__104__n)) 
                                    | (3U == __Vfunc_tb_status_panel__DOT__dg__104__n)) 
                                   | (4U == __Vfunc_tb_status_panel__DOT__dg__104__n)) 
                                  | (5U == __Vfunc_tb_status_panel__DOT__dg__104__n)) 
                                 | (6U == __Vfunc_tb_status_panel__DOT__dg__104__n)) 
                                | (7U == __Vfunc_tb_status_panel__DOT__dg__104__n))
                                ? ((0U == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                    ? 0x14U : ((1U 
                                                == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                                ? 0x15U
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                                    ? 0x16U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                                      ? 0x18U
                                                      : 
                                                     ((5U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                                       ? 0x19U
                                                       : 
                                                      ((6U 
                                                        == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                                        ? 0x1aU
                                                        : 0x1bU)))))))
                                : ((8U == __Vfunc_tb_status_panel__DOT__dg__104__n)
                                    ? 0x1cU : 0U));
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout 
                            = __Vfunc_tb_status_panel__DOT__dg__104__Vfuncout;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x1dU;
                    } else if ((2U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x1cU;
                    } else if (vlSelfRef.tb_status_panel__DOT__bf) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout 
                            = ((IData)(vlSelfRef.tb_status_panel__DOT__bu)
                                ? 0x1eU : 0x1fU);
                    }
                } else if ((6U == __Vfunc_tb_status_panel__DOT__label__102__r)) {
                    if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x10U;
                    } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                        __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x11U;
                    }
                } else if ((0U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                    __Vfunc_tb_status_panel__DOT__dg__105__n 
                        = vlSelfRef.tb_status_panel__DOT__c;
                    __Vfunc_tb_status_panel__DOT__dg__105__Vfuncout 
                        = (((((((((0U == __Vfunc_tb_status_panel__DOT__dg__105__n) 
                                  | (1U == __Vfunc_tb_status_panel__DOT__dg__105__n)) 
                                 | (2U == __Vfunc_tb_status_panel__DOT__dg__105__n)) 
                                | (3U == __Vfunc_tb_status_panel__DOT__dg__105__n)) 
                               | (4U == __Vfunc_tb_status_panel__DOT__dg__105__n)) 
                              | (5U == __Vfunc_tb_status_panel__DOT__dg__105__n)) 
                             | (6U == __Vfunc_tb_status_panel__DOT__dg__105__n)) 
                            | (7U == __Vfunc_tb_status_panel__DOT__dg__105__n))
                            ? ((0U == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                ? 0x14U : ((1U == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                            ? 0x15U
                                            : ((2U 
                                                == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                                ? 0x16U
                                                : (
                                                   (3U 
                                                    == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                                    ? 0x17U
                                                    : 
                                                   ((4U 
                                                     == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                                     ? 0x18U
                                                     : 
                                                    ((5U 
                                                      == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                                      ? 0x19U
                                                      : 
                                                     ((6U 
                                                       == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                                       ? 0x1aU
                                                       : 0x1bU)))))))
                            : ((8U == __Vfunc_tb_status_panel__DOT__dg__105__n)
                                ? 0x1cU : 0U));
                    __Vfunc_tb_status_panel__DOT__label__102__Vfuncout 
                        = __Vfunc_tb_status_panel__DOT__dg__105__Vfuncout;
                } else if ((1U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x1dU;
                } else if ((2U == __Vfunc_tb_status_panel__DOT__label__102__cl)) {
                    __Vfunc_tb_status_panel__DOT__label__102__Vfuncout = 0x1cU;
                } else if (vlSelfRef.tb_status_panel__DOT__cf) {
                    __Vfunc_tb_status_panel__DOT__label__102__Vfuncout 
                        = ((IData)(vlSelfRef.tb_status_panel__DOT__cu)
                            ? 0x1eU : 0x1fU);
                }
            }
            vlSelfRef.tb_status_panel__DOT__g = __Vfunc_tb_status_panel__DOT__label__102__Vfuncout;
            vlSelfRef.tb_status_panel__DOT__expected 
                = ((((((VL_LTES_III(32, 1U, vlSelfRef.tb_status_panel__DOT__lx) 
                        & VL_GTS_III(32, 0xfU, vlSelfRef.tb_status_panel__DOT__lx)) 
                       & ((0xdU >= (0xfU & ((IData)(0xeU) 
                                            - vlSelfRef.tb_status_panel__DOT__lx))) 
                          && (1U & (vlSelfRef.tb_status_panel__DOT__font_ref
                                    [(0x1ffU & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.tb_status_panel__DOT__g) 
                                                + vlSelfRef.tb_status_panel__DOT__ly))] 
                                    >> (0xfU & ((IData)(0xeU) 
                                                - vlSelfRef.tb_status_panel__DOT__lx)))))) 
                      | (0x240U == vlSelfRef.tb_status_panel__DOT__xx)) 
                     | (0x27fU == vlSelfRef.tb_status_panel__DOT__xx)) 
                    | (0x80U == tb_status_panel__DOT__yy)) 
                   | (0x11fU == tb_status_panel__DOT__yy));
            vlSelfRef.tb_status_panel__DOT__expected_color 
                = ((((5U == vlSelfRef.tb_status_panel__DOT__row) 
                     & (IData)(vlSelfRef.tb_status_panel__DOT__bf)) 
                    | ((7U == vlSelfRef.tb_status_panel__DOT__row) 
                       & (IData)(vlSelfRef.tb_status_panel__DOT__cf)))
                    ? 0xffe56dU : ((1U == vlSelfRef.tb_status_panel__DOT__row)
                                    ? ((0U == vlSelfRef.tb_status_panel__DOT__st)
                                        ? 0x50ffb0U
                                        : ((6U == vlSelfRef.tb_status_panel__DOT__st)
                                            ? 0xff7070U
                                            : 0xffcf70U))
                                    : 0xc0eaffU));
            if (((VL_LTES_III(32, 0x248U, vlSelfRef.tb_status_panel__DOT__xx) 
                  & VL_GTS_III(32, 0x278U, vlSelfRef.tb_status_panel__DOT__xx)) 
                 & ((VL_LTES_III(32, 0x104U, tb_status_panel__DOT__yy) 
                     & VL_GTS_III(32, 0x108U, tb_status_panel__DOT__yy)) 
                    | (VL_LTES_III(32, 0x114U, tb_status_panel__DOT__yy) 
                       & VL_GTS_III(32, 0x118U, tb_status_panel__DOT__yy))))) {
                vlSelfRef.tb_status_panel__DOT__expected = 1U;
                vlSelfRef.tb_status_panel__DOT__expected_color 
                    = (VL_GTS_III(32, 0x110U, tb_status_panel__DOT__yy)
                        ? (((vlSelfRef.tb_status_panel__DOT__xx 
                             - (IData)(0x248U)) < ((IData)(6U) 
                                                   * (IData)(vlSelfRef.tb_status_panel__DOT__b)))
                            ? ((IData)(vlSelfRef.tb_status_panel__DOT__bf)
                                ? 0xffe56dU : 0x50cfffU)
                            : 0x20344cU) : (((vlSelfRef.tb_status_panel__DOT__xx 
                                              - (IData)(0x248U)) 
                                             < ((IData)(6U) 
                                                * (IData)(vlSelfRef.tb_status_panel__DOT__c)))
                                             ? ((IData)(vlSelfRef.tb_status_panel__DOT__cf)
                                                 ? 0xffe56dU
                                                 : 0x50cfffU)
                                             : 0x20344cU));
            }
            if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_status_panel__DOT__shade)) 
                                     | ((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                                        != (IData)(vlSelfRef.tb_status_panel__DOT__expected))) 
                                    | ((IData)(vlSelfRef.tb_status_panel__DOT__expected) 
                                       & (vlSelfRef.tb_status_panel__DOT__color 
                                          != vlSelfRef.tb_status_panel__DOT__expected_color))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:54: Assertion failed in %Ntb_status_panel.raster: Panel raster/state mismatch st=%0d x=%0d y=%0d glyph=%0d\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_panel__DOT__st,
                             32,vlSelfRef.tb_status_panel__DOT__xx,
                             32,tb_status_panel__DOT__yy,
                             32,vlSelfRef.tb_status_panel__DOT__g);
                VL_STOP_MT("sim/system\\tb_status_panel.sv", 54, "", false);
            }
            vlSelfRef.tb_status_panel__DOT__xx = ((IData)(1U) 
                                                  + vlSelfRef.tb_status_panel__DOT__xx);
        }
        tb_status_panel__DOT__yy = ((IData)(1U) + tb_status_panel__DOT__yy);
    }
    vlSelfRef.tb_status_panel__DOT__x = 0x23dU;
    vlSelfRef.tb_status_panel__DOT__y = 0xc8U;
    __Vtask_tb_status_panel__DOT__ticks__106__n = 5U;
    __Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__106__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__106__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                      | (IData)(vlSelfRef.tb_status_panel__DOT__shade))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:67: Assertion failed in %Ntb_status_panel: Panel leaked left into waveform\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_status_panel.sv", 67, "", false);
    }
    vlSelfRef.tb_status_panel__DOT__x = 0x27eU;
    vlSelfRef.tb_status_panel__DOT__y = 0xc8U;
    __Vtask_tb_status_panel__DOT__ticks__107__n = 5U;
    __Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__107__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__107__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                      | (IData)(vlSelfRef.tb_status_panel__DOT__shade))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:68: Assertion failed in %Ntb_status_panel: Panel leaked past screen\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_status_panel.sv", 68, "", false);
    }
    vlSelfRef.tb_status_panel__DOT__x = 0x24eU;
    vlSelfRef.tb_status_panel__DOT__y = 0x7fU;
    __Vtask_tb_status_panel__DOT__ticks__108__n = 5U;
    __Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__108__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__108__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                      | (IData)(vlSelfRef.tb_status_panel__DOT__shade))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:69: Assertion failed in %Ntb_status_panel: Panel leaked above\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_status_panel.sv", 69, "", false);
    }
    vlSelfRef.tb_status_panel__DOT__x = 0x24eU;
    vlSelfRef.tb_status_panel__DOT__y = 0x120U;
    __Vtask_tb_status_panel__DOT__ticks__109__n = 5U;
    __Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__109__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__109__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                      | (IData)(vlSelfRef.tb_status_panel__DOT__shade))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:70: Assertion failed in %Ntb_status_panel: Panel leaked below\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_status_panel.sv", 70, "", false);
    }
    vlSelfRef.tb_status_panel__DOT__x = 0x24eU;
    vlSelfRef.tb_status_panel__DOT__y = 0x96U;
    __Vtask_tb_status_panel__DOT__ticks__110__n = 4U;
    __Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__110__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__110__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_panel__DOT__en = 0U;
    __Vtask_tb_status_panel__DOT__ticks__111__n = 5U;
    __Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_status_panel__DOT__ticks__111__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h60d74859__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_panel.clk)", 
                                                             "sim/system\tb_status_panel.sv", 
                                                             41);
        __Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_status_panel__DOT__ticks__111__tb_status_panel__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_panel__DOT__ink) 
                      | (IData)(vlSelfRef.tb_status_panel__DOT__shade))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:72: Assertion failed in %Ntb_status_panel: Disabled panel paints\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_status_panel.sv", 72, "", false);
    }
    VL_WRITEF_NX("PASS 122880 Chinese panel pixels: play/pause/mute/end/load/no-audio/fault, volume, parameter values/arrows/bars, 120-frame highlight expiry, reset defaults, frame coherence, clipping and disable\n",0);
    VL_FINISH_MT("sim/system\\tb_status_panel.sv", 73, "");
}

VL_INLINE_OPT VlCoroutine Vtb_status_panel___024root___eval_initial__TOP__Vtiming__1(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2540be400ULL, 
                                         nullptr, "sim/system\tb_status_panel.sv", 
                                         75);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_status_panel.sv:75: Assertion failed in %Ntb_status_panel: Panel timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/system\\tb_status_panel.sv", 75, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__act(Vtb_status_panel___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_status_panel___024root___eval_triggers__act(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_triggers__act\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_status_panel__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_status_panel__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_status_panel__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_status_panel__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_status_panel__DOT__clk__0 
        = vlSelfRef.tb_status_panel__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_status_panel___024root___dump_triggers__act(vlSelf);
    }
#endif
}
