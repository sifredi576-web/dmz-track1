// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ui_controller.h for the primary calling header

#include "Vtb_ui_controller__pch.h"
#include "Vtb_ui_controller__Syms.h"
#include "Vtb_ui_controller___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0;

VL_INLINE_OPT VlCoroutine Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__0__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__0__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__1__n;
    __Vtask_tb_ui_controller__DOT__ticks__1__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__2__wanted;
    __Vtask_tb_ui_controller__DOT__land__2__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__3__n;
    __Vtask_tb_ui_controller__DOT__ticks__3__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__4__n;
    __Vtask_tb_ui_controller__DOT__ticks__4__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__5__n;
    __Vtask_tb_ui_controller__DOT__ticks__5__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__6__n;
    __Vtask_tb_ui_controller__DOT__ticks__6__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__7__n;
    __Vtask_tb_ui_controller__DOT__ticks__7__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__8__code;
    __Vtask_tb_ui_controller__DOT__event_send__8__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__9__n;
    __Vtask_tb_ui_controller__DOT__ticks__9__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__10__code;
    __Vtask_tb_ui_controller__DOT__event_send__10__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__11__n;
    __Vtask_tb_ui_controller__DOT__ticks__11__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__12__code;
    __Vtask_tb_ui_controller__DOT__event_send__12__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__13__n;
    __Vtask_tb_ui_controller__DOT__ticks__13__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__14__code;
    __Vtask_tb_ui_controller__DOT__event_send__14__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__15__n;
    __Vtask_tb_ui_controller__DOT__ticks__15__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__16__code;
    __Vtask_tb_ui_controller__DOT__event_send__16__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__17__n;
    __Vtask_tb_ui_controller__DOT__ticks__17__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__18__code;
    __Vtask_tb_ui_controller__DOT__event_send__18__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__19__n;
    __Vtask_tb_ui_controller__DOT__ticks__19__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__20__code;
    __Vtask_tb_ui_controller__DOT__event_send__20__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__21__n;
    __Vtask_tb_ui_controller__DOT__ticks__21__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__22__wanted;
    __Vtask_tb_ui_controller__DOT__land__22__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__23__n;
    __Vtask_tb_ui_controller__DOT__ticks__23__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__24__n;
    __Vtask_tb_ui_controller__DOT__ticks__24__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__25__n;
    __Vtask_tb_ui_controller__DOT__ticks__25__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__26__n;
    __Vtask_tb_ui_controller__DOT__ticks__26__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__27__n;
    __Vtask_tb_ui_controller__DOT__ticks__27__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__28__code;
    __Vtask_tb_ui_controller__DOT__event_send__28__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__29__n;
    __Vtask_tb_ui_controller__DOT__ticks__29__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__30__wanted;
    __Vtask_tb_ui_controller__DOT__land__30__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__31__n;
    __Vtask_tb_ui_controller__DOT__ticks__31__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__32__n;
    __Vtask_tb_ui_controller__DOT__ticks__32__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__33__n;
    __Vtask_tb_ui_controller__DOT__ticks__33__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__34__n;
    __Vtask_tb_ui_controller__DOT__ticks__34__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__35__n;
    __Vtask_tb_ui_controller__DOT__ticks__35__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__36__code;
    __Vtask_tb_ui_controller__DOT__event_send__36__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__37__n;
    __Vtask_tb_ui_controller__DOT__ticks__37__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__38__code;
    __Vtask_tb_ui_controller__DOT__event_send__38__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__39__n;
    __Vtask_tb_ui_controller__DOT__ticks__39__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__40__wanted;
    __Vtask_tb_ui_controller__DOT__land__40__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__41__n;
    __Vtask_tb_ui_controller__DOT__ticks__41__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__42__n;
    __Vtask_tb_ui_controller__DOT__ticks__42__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__43__n;
    __Vtask_tb_ui_controller__DOT__ticks__43__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__44__n;
    __Vtask_tb_ui_controller__DOT__ticks__44__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__45__n;
    __Vtask_tb_ui_controller__DOT__ticks__45__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__46__code;
    __Vtask_tb_ui_controller__DOT__event_send__46__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__47__n;
    __Vtask_tb_ui_controller__DOT__ticks__47__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__48__wanted;
    __Vtask_tb_ui_controller__DOT__land__48__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__49__n;
    __Vtask_tb_ui_controller__DOT__ticks__49__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__50__n;
    __Vtask_tb_ui_controller__DOT__ticks__50__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__51__n;
    __Vtask_tb_ui_controller__DOT__ticks__51__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__52__n;
    __Vtask_tb_ui_controller__DOT__ticks__52__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__53__n;
    __Vtask_tb_ui_controller__DOT__ticks__53__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__54__code;
    __Vtask_tb_ui_controller__DOT__event_send__54__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__55__n;
    __Vtask_tb_ui_controller__DOT__ticks__55__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__56__wanted;
    __Vtask_tb_ui_controller__DOT__land__56__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__57__n;
    __Vtask_tb_ui_controller__DOT__ticks__57__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__58__n;
    __Vtask_tb_ui_controller__DOT__ticks__58__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__59__n;
    __Vtask_tb_ui_controller__DOT__ticks__59__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__60__n;
    __Vtask_tb_ui_controller__DOT__ticks__60__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__61__n;
    __Vtask_tb_ui_controller__DOT__ticks__61__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__62__code;
    __Vtask_tb_ui_controller__DOT__event_send__62__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__63__n;
    __Vtask_tb_ui_controller__DOT__ticks__63__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__64__code;
    __Vtask_tb_ui_controller__DOT__event_send__64__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__65__n;
    __Vtask_tb_ui_controller__DOT__ticks__65__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__66__wanted;
    __Vtask_tb_ui_controller__DOT__land__66__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__67__n;
    __Vtask_tb_ui_controller__DOT__ticks__67__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__68__n;
    __Vtask_tb_ui_controller__DOT__ticks__68__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__69__n;
    __Vtask_tb_ui_controller__DOT__ticks__69__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__70__n;
    __Vtask_tb_ui_controller__DOT__ticks__70__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__71__n;
    __Vtask_tb_ui_controller__DOT__ticks__71__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__72__code;
    __Vtask_tb_ui_controller__DOT__event_send__72__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__73__n;
    __Vtask_tb_ui_controller__DOT__ticks__73__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__74__wanted;
    __Vtask_tb_ui_controller__DOT__land__74__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__75__n;
    __Vtask_tb_ui_controller__DOT__ticks__75__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__76__n;
    __Vtask_tb_ui_controller__DOT__ticks__76__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__77__n;
    __Vtask_tb_ui_controller__DOT__ticks__77__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__78__n;
    __Vtask_tb_ui_controller__DOT__ticks__78__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__79__n;
    __Vtask_tb_ui_controller__DOT__ticks__79__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__80__code;
    __Vtask_tb_ui_controller__DOT__event_send__80__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__81__n;
    __Vtask_tb_ui_controller__DOT__ticks__81__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__82__n;
    __Vtask_tb_ui_controller__DOT__ticks__82__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__83__code;
    __Vtask_tb_ui_controller__DOT__event_send__83__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__84__n;
    __Vtask_tb_ui_controller__DOT__ticks__84__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__85__n;
    __Vtask_tb_ui_controller__DOT__ticks__85__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__86__code;
    __Vtask_tb_ui_controller__DOT__event_send__86__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__87__n;
    __Vtask_tb_ui_controller__DOT__ticks__87__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__88__code;
    __Vtask_tb_ui_controller__DOT__event_send__88__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__89__n;
    __Vtask_tb_ui_controller__DOT__ticks__89__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__90__code;
    __Vtask_tb_ui_controller__DOT__event_send__90__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__91__n;
    __Vtask_tb_ui_controller__DOT__ticks__91__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__92__n;
    __Vtask_tb_ui_controller__DOT__ticks__92__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__93__n;
    __Vtask_tb_ui_controller__DOT__ticks__93__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__94__n;
    __Vtask_tb_ui_controller__DOT__ticks__94__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__95__code;
    __Vtask_tb_ui_controller__DOT__event_send__95__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__96__n;
    __Vtask_tb_ui_controller__DOT__ticks__96__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__97__n;
    __Vtask_tb_ui_controller__DOT__ticks__97__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__98__n;
    __Vtask_tb_ui_controller__DOT__ticks__98__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__99__code;
    __Vtask_tb_ui_controller__DOT__event_send__99__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__100__n;
    __Vtask_tb_ui_controller__DOT__ticks__100__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__101__code;
    __Vtask_tb_ui_controller__DOT__event_send__101__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__102__n;
    __Vtask_tb_ui_controller__DOT__ticks__102__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__103__code;
    __Vtask_tb_ui_controller__DOT__event_send__103__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__104__n;
    __Vtask_tb_ui_controller__DOT__ticks__104__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*3:0*/ __Vtask_tb_ui_controller__DOT__event_send__105__code;
    __Vtask_tb_ui_controller__DOT__event_send__105__code = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__106__n;
    __Vtask_tb_ui_controller__DOT__ticks__106__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__land__107__wanted;
    __Vtask_tb_ui_controller__DOT__land__107__wanted = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__108__n;
    __Vtask_tb_ui_controller__DOT__ticks__108__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__109__n;
    __Vtask_tb_ui_controller__DOT__ticks__109__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__110__n;
    __Vtask_tb_ui_controller__DOT__ticks__110__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__111__n;
    __Vtask_tb_ui_controller__DOT__ticks__111__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__112__n;
    __Vtask_tb_ui_controller__DOT__ticks__112__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__113__n;
    __Vtask_tb_ui_controller__DOT__ticks__113__n = 0;
    IData/*31:0*/ __Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_ui_controller__DOT__neighbors[0U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[0U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[1U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[1U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[2U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[2U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[3U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[3U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[4U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[4U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[5U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[5U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[6U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[6U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[7U] 
        = Vtb_ui_controller__ConstPool__CONST_hc2e2f098_0[7U];
    __Vtask_tb_ui_controller__DOT__ticks__0__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__0__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__0__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__0__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__reset = 0U;
    vlSelfRef.tb_ui_controller__DOT__cfg = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__1__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__1__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__1__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb_ui_controller__DOT__land__2__wanted = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__2__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__2__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__3__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__3__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__3__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__4__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__4__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__4__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__5__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__5__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__5__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__6__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__6__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__6__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__7__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__7__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__7__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__2__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 9U;
    vlSelfRef.tb_ui_controller__DOT__target = 1U;
    __Vtask_tb_ui_controller__DOT__event_send__8__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__8__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__9__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__9__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__9__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((5U != (IData)(vlSelfRef.tb_ui_controller__DOT__error)) 
                       | (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                      | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__score)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:38: Assertion failed in %Ntb_ui_controller: submit without choice\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 38, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 3U;
    vlSelfRef.tb_ui_controller__DOT__arg = 0U;
    __Vtask_tb_ui_controller__DOT__event_send__10__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__10__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__11__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__11__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__11__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & ((((~ (IData)(vlSelfRef.tb_ui_controller__DOT__choice_valid)) 
                              | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__choice))) 
                             | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__answered))) 
                            | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__score))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:39: Assertion failed in %Ntb_ui_controller: provisional choice\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 39, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__arg = 2U;
    __Vtask_tb_ui_controller__DOT__event_send__12__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__12__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__13__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__13__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__13__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_ui_controller__DOT__choice))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:40: Assertion failed in %Ntb_ui_controller: change provisional choice\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 40, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__arg = 0U;
    __Vtask_tb_ui_controller__DOT__event_send__14__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__14__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__15__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__15__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__15__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 9U;
    vlSelfRef.tb_ui_controller__DOT__target = 1U;
    __Vtask_tb_ui_controller__DOT__event_send__16__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__16__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__17__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__17__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__17__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((1U != (IData)(vlSelfRef.tb_ui_controller__DOT__score)) 
                       | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__answered))) 
                      | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__correct)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:42: Assertion failed in %Ntb_ui_controller: first score\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 42, "", false);
    }
    __Vtask_tb_ui_controller__DOT__event_send__18__code = 0xbU;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__18__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__19__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__19__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__19__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((1U != vlSelfRef.tb_ui_controller__DOT__notices) 
                       | (2U != (IData)(vlSelfRef.tb_ui_controller__DOT__last_priority))) 
                      | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__page_target)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:43: Assertion failed in %Ntb_ui_controller: busy priority dispatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 43, "", false);
    }
    __Vtask_tb_ui_controller__DOT__event_send__20__code = 7U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__20__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__21__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__21__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__21__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_ui_controller__DOT__page_target))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:44: Assertion failed in %Ntb_ui_controller: busy event changed pending page\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 44, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 0U;
    __Vtask_tb_ui_controller__DOT__land__22__wanted = 1U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__22__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__22__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__23__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__23__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__23__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__24__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__24__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__24__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__25__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__25__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__25__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__26__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__26__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__26__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__27__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__27__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__27__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__22__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    __Vtask_tb_ui_controller__DOT__event_send__28__code = 7U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__28__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__29__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__29__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__29__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 1U;
    __Vtask_tb_ui_controller__DOT__land__30__wanted = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__30__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__30__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__31__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__31__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__31__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__32__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__32__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__32__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__33__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__33__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__33__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__34__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__34__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__34__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__35__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__35__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__35__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__30__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 3U;
    vlSelfRef.tb_ui_controller__DOT__arg = 3U;
    __Vtask_tb_ui_controller__DOT__event_send__36__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__36__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__37__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__37__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__37__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((7U != (IData)(vlSelfRef.tb_ui_controller__DOT__error)) 
                       | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__choice))) 
                      | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__score)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:46: Assertion failed in %Ntb_ui_controller: committed answer editable\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 46, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 9U;
    vlSelfRef.tb_ui_controller__DOT__target = 1U;
    __Vtask_tb_ui_controller__DOT__event_send__38__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__38__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__39__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__39__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__39__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_ui_controller__DOT__score))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:47: Assertion failed in %Ntb_ui_controller: duplicate score\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 47, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 0U;
    __Vtask_tb_ui_controller__DOT__land__40__wanted = 1U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__40__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__40__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__41__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__41__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__41__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__42__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__42__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__42__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__43__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__43__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__43__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__44__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__44__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__44__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__45__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__45__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__45__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__40__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__back = 0U;
    __Vtask_tb_ui_controller__DOT__event_send__46__code = 6U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__46__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__47__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__47__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__47__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 1U;
    __Vtask_tb_ui_controller__DOT__land__48__wanted = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__48__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__48__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__49__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__49__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__49__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__50__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__50__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__50__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__51__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__51__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__51__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__52__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__52__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__52__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__53__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__53__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__53__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__48__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 1U;
    vlSelfRef.tb_ui_controller__DOT__target = 2U;
    __Vtask_tb_ui_controller__DOT__event_send__54__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__54__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__55__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__55__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__55__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__qid = 1U;
    vlSelfRef.tb_ui_controller__DOT__expected = 1U;
    __Vtask_tb_ui_controller__DOT__land__56__wanted = 2U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__56__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__56__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__57__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__57__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__57__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__58__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__58__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__58__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__59__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__59__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__59__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__60__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__60__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__60__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__61__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__61__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__61__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__56__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 3U;
    vlSelfRef.tb_ui_controller__DOT__arg = 0U;
    __Vtask_tb_ui_controller__DOT__event_send__62__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__62__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__63__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__63__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__63__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 9U;
    vlSelfRef.tb_ui_controller__DOT__target = 3U;
    __Vtask_tb_ui_controller__DOT__event_send__64__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__64__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__65__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__65__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__65__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((1U != (IData)(vlSelfRef.tb_ui_controller__DOT__score)) 
                       | (3U != (IData)(vlSelfRef.tb_ui_controller__DOT__answered))) 
                      | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__correct)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:51: Assertion failed in %Ntb_ui_controller: wrong answer scoring\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 51, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 0U;
    __Vtask_tb_ui_controller__DOT__land__66__wanted = 3U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__66__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__66__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__67__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__67__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__67__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__68__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__68__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__68__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__69__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__69__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__69__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__70__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__70__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__70__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__71__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__71__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__71__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__66__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 5U;
    __Vtask_tb_ui_controller__DOT__event_send__72__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__72__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__73__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__73__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__73__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 1U;
    vlSelfRef.tb_ui_controller__DOT__qid = 0U;
    vlSelfRef.tb_ui_controller__DOT__expected = 0U;
    __Vtask_tb_ui_controller__DOT__land__74__wanted = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__74__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__74__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__75__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__75__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__75__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__76__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__76__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__76__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__77__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__77__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__77__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__78__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__78__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__78__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__79__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__79__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__79__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__74__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.tb_ui_controller__DOT__score)) 
                       | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__answered))) 
                      | (IData)(vlSelfRef.tb_ui_controller__DOT__choice_valid))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:53: Assertion failed in %Ntb_ui_controller: restart did not clear\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 53, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__quiz = 0U;
    vlSelfRef.tb_ui_controller__DOT__neighbors[0U] 
        = (0x100U | (0xffff00ffU & vlSelfRef.tb_ui_controller__DOT__neighbors[0U]));
    vlSelfRef.tb_ui_controller__DOT__neighbors[1U] 
        = (0x200U | (0xffff00ffU & vlSelfRef.tb_ui_controller__DOT__neighbors[1U]));
    vlSelfRef.tb_ui_controller__DOT__enabled = 0xdU;
    __Vtask_tb_ui_controller__DOT__event_send__80__code = 4U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__80__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__81__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__81__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__81__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb_ui_controller__DOT__ticks__82__n = 0xaU;
    __Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__82__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__82__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((2U != (IData)(vlSelfRef.tb_ui_controller__DOT__focus)) 
                      | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting) 
                         | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_req) 
                               | ((IData)(vlSelfRef.tb_ui_controller__DOT__audio_req) 
                                  | (IData)(vlSelfRef.tb_ui_controller__DOT__control_req))))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:56: Assertion failed in %Ntb_ui_controller: skip disabled focus\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 56, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__enabled = 0U;
    __Vtask_tb_ui_controller__DOT__event_send__83__code = 4U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__83__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__84__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__84__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__84__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb_ui_controller__DOT__ticks__85__n = 0xcU;
    __Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__85__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__85__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting) 
                       | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving) 
                          | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_req) 
                             | ((IData)(vlSelfRef.tb_ui_controller__DOT__audio_req) 
                                | (IData)(vlSelfRef.tb_ui_controller__DOT__control_req))))) 
                      | (3U != (IData)(vlSelfRef.tb_ui_controller__DOT__error)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:57: Assertion failed in %Ntb_ui_controller: disabled cycle did not terminate\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 57, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__enabled = 0xffU;
    vlSelfRef.tb_ui_controller__DOT__operation = 1U;
    vlSelfRef.tb_ui_controller__DOT__target = 0x63U;
    __Vtask_tb_ui_controller__DOT__event_send__86__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__86__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__87__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__87__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__87__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((1U != (IData)(vlSelfRef.tb_ui_controller__DOT__error)) 
                      | (IData)(vlSelfRef.tb_ui_controller__DOT__page_req))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:58: Assertion failed in %Ntb_ui_controller: invalid jump\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 58, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 2U;
    vlSelfRef.tb_ui_controller__DOT__target = 0x40U;
    __Vtask_tb_ui_controller__DOT__event_send__88__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__88__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__89__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__89__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__89__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((2U != (IData)(vlSelfRef.tb_ui_controller__DOT__error)) 
                      | (IData)(vlSelfRef.tb_ui_controller__DOT__audio_req))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:59: Assertion failed in %Ntb_ui_controller: invalid audio\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 59, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 2U;
    vlSelfRef.tb_ui_controller__DOT__target = 2U;
    __Vtask_tb_ui_controller__DOT__event_send__90__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__90__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__91__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__91__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__91__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__audio_req)) 
                            | (2U != (IData)(vlSelfRef.tb_ui_controller__DOT__audio_target))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:60: Assertion failed in %Ntb_ui_controller: audio resource request\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 60, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__92__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__92__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__92__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__audio_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:61: Assertion failed in %Ntb_ui_controller: audio request lost\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 61, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__audio_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__93__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__93__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__93__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__audio_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__94__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__94__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__94__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__operation = 6U;
    vlSelfRef.tb_ui_controller__DOT__arg = 1U;
    __Vtask_tb_ui_controller__DOT__event_send__95__code = 5U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__95__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__96__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__96__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__96__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.tb_ui_controller__DOT__control_req)) 
                             | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__control_action))) 
                            | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__control_arg))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:62: Assertion failed in %Ntb_ui_controller: control action\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 62, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__control_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__97__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__97__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__97__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__control_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__98__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__98__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__98__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    __Vtask_tb_ui_controller__DOT__event_send__99__code = 0xaU;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__99__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__100__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__100__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__100__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((2U != vlSelfRef.tb_ui_controller__DOT__notices) 
                      | (1U != (IData)(vlSelfRef.tb_ui_controller__DOT__last_priority)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:64: Assertion failed in %Ntb_ui_controller: normal notice request\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 64, "", false);
    }
    __Vtask_tb_ui_controller__DOT__event_send__101__code = 0xbU;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__101__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__102__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__102__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__102__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((3U != vlSelfRef.tb_ui_controller__DOT__notices) 
                      | (2U != (IData)(vlSelfRef.tb_ui_controller__DOT__last_priority)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:65: Assertion failed in %Ntb_ui_controller: priority notice request\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 65, "", false);
    }
    __Vtask_tb_ui_controller__DOT__event_send__103__code = 0xcU;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__103__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__104__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__104__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__104__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_ui_controller__DOT__exits)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:66: Assertion failed in %Ntb_ui_controller: notice exit request\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 66, "", false);
    }
    __Vtask_tb_ui_controller__DOT__event_send__105__code = 7U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__event_code = __Vtask_tb_ui_controller__DOT__event_send__105__code;
    vlSelfRef.tb_ui_controller__DOT__ev = 1U;
    co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ui_controller.clk)", 
                                                         "sim/platform\tb_ui_controller.sv", 
                                                         25);
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__106__n = 3U;
    __Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__106__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__106__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__visible = 0x12U;
    vlSelfRef.tb_ui_controller__DOT__audio = 3U;
    __Vtask_tb_ui_controller__DOT__land__107__wanted = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)) 
                            | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_target) 
                               != __Vtask_tb_ui_controller__DOT__land__107__wanted)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:29: Assertion failed in %Ntb_ui_controller.land: page request expected %0d got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_ui_controller__DOT__land__107__wanted,
                     5,(IData)(vlSelfRef.tb_ui_controller__DOT__page_target));
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 29, "", false);
    }
    __Vtask_tb_ui_controller__DOT__ticks__108__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__108__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__108__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:30: Assertion failed in %Ntb_ui_controller.land: request lost without accept\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__109__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__109__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__109__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__110__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__110__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__110__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__111__n = 1U;
    __Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__111__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__111__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__112__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__112__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__112__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ui_controller__DOT__current) 
                      != __Vtask_tb_ui_controller__DOT__land__107__wanted)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:32: Assertion failed in %Ntb_ui_controller.land: page commit mismatch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 32, "", false);
    }
    if (VL_UNLIKELY(((1U & (((1U != (IData)(vlSelfRef.tb_ui_controller__DOT__focus)) 
                             | (~ (IData)(vlSelfRef.tb_ui_controller__DOT__audio_req))) 
                            | (3U != (IData)(vlSelfRef.tb_ui_controller__DOT__audio_target))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:69: Assertion failed in %Ntb_ui_controller: arrival focus/audio\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 69, "", false);
    }
    vlSelfRef.tb_ui_controller__DOT__cfg = 0U;
    __Vtask_tb_ui_controller__DOT__ticks__113__n = 2U;
    __Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ui_controller__DOT__ticks__113__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha9ad888b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ui_controller.clk)", 
                                                             "sim/platform\tb_ui_controller.sv", 
                                                             23);
        __Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ui_controller__DOT__ticks__113__tb_ui_controller__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ui_controller__DOT__page_req) 
                        | (IData)(vlSelfRef.tb_ui_controller__DOT__audio_req)) 
                       | (IData)(vlSelfRef.tb_ui_controller__DOT__control_req)) 
                      | (0U != (IData)(vlSelfRef.tb_ui_controller__DOT__score)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:70: Assertion failed in %Ntb_ui_controller: configuration invalidation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 70, "", false);
    }
    VL_WRITEF_NX("PASS generic focus, disabled skip, commit boundary, choice/submit, first-score lock, home/back, restart, bounds, request handshake and notice dispatch\n",0);
    VL_FINISH_MT("sim/platform\\tb_ui_controller.sv", 71, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xbebc200ULL, 
                                         nullptr, "sim/platform\tb_ui_controller.sv", 
                                         73);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_ui_controller.sv:73: Assertion failed in %Ntb_ui_controller: timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/platform\\tb_ui_controller.sv", 73, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__act(Vtb_ui_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ui_controller___024root___eval_triggers__act(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_triggers__act\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ui_controller__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ui_controller__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ui_controller__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ui_controller__DOT__clk__0 
        = vlSelfRef.tb_ui_controller__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ui_controller___024root___dump_triggers__act(vlSelf);
    }
#endif
}
