// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmp.h for the primary calling header

#include "Vtb_bmp__pch.h"
#include "Vtb_bmp__Syms.h"
#include "Vtb_bmp___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_bmp___024root___eval_initial__TOP__Vtiming__0(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/p3\tb_bmp.sv", 
                                         78);
    vlSelfRef.tb_bmp__DOT__reset = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.tb_bmp__DOT__done) 
                     | (0U != (IData)(vlSelfRef.tb_bmp__DOT__error)))))) {
        co_await vlSelfRef.__VtrigSched_hf82e2f98__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (tb_bmp.done | (8'h0 != tb_bmp.error)))", 
                                                             "sim/p3\tb_bmp.sv", 
                                                             79);
    }
    if (VL_TESTPLUSARGS_I(std::string{"bad"})) {
        if (VL_UNLIKELY((((8U != (IData)(vlSelfRef.tb_bmp__DOT__error)) 
                          | (0U != vlSelfRef.tb_bmp__DOT__bursts))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:80: Assertion failed in %Ntb_bmp: bad BMP not rejected\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 80, "", false);
        }
        VL_WRITEF_NX("PASS unsupported compressed BMP rejected\n",0);
    } else {
        if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.tb_bmp__DOT__error)) 
                           | (0x4b000U != vlSelfRef.tb_bmp__DOT__pixels)) 
                          | (0x4b00U != vlSelfRef.tb_bmp__DOT__bursts))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:82: Assertion failed in %Ntb_bmp: loader error=%0# pixels=%0# bursts=%0d status=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.tb_bmp__DOT__error),
                         32,vlSelfRef.tb_bmp__DOT__pixels,
                         32,vlSelfRef.tb_bmp__DOT__bursts,
                         8,(IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state));
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 82, "", false);
        }
        VL_WRITEF_NX("PASS FAT32 fragmented cluster chain, directory skip, BMP bottom-up, 307200 pixels, %0d bursts %0d sectors\n",0,
                     32,vlSelfRef.tb_bmp__DOT__bursts,
                     32,vlSelfRef.tb_bmp__DOT__sectors);
    }
    VL_FINISH_MT("sim/p3\\tb_bmp.sv", 85, "");
}

VL_INLINE_OPT VlCoroutine Vtb_bmp___024root___eval_initial__TOP__Vtiming__1(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2e90edd000ULL, 
                                         nullptr, "sim/p3\tb_bmp.sv", 
                                         87);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:87: Assertion failed in %Ntb_bmp: timeout state=%0# lba=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 8,(IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state),
                 32,vlSelfRef.tb_bmp__DOT__lba);
    VL_STOP_MT("sim/p3\\tb_bmp.sv", 87, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__act(Vtb_bmp___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_bmp___024root___eval_triggers__act(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_triggers__act\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h7019e768__0;
    __Vtrigprevexpr_h7019e768__0 = 0;
    // Body
    __Vtrigprevexpr_h7019e768__0 = ((IData)(vlSelfRef.tb_bmp__DOT__done) 
                                    | (0U != (IData)(vlSelfRef.tb_bmp__DOT__error)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_bmp__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_bmp__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(__Vtrigprevexpr_h7019e768__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h7019e768__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bmp__DOT__clk__0 
        = vlSelfRef.tb_bmp__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h7019e768__1 = __Vtrigprevexpr_h7019e768__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_bmp___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<8>/*255:0*/ Vtb_bmp__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_bmp___024root___nba_sequent__TOP__0(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___nba_sequent__TOP__0\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ tb_bmp__DOT__name;
    tb_bmp__DOT__name = 0;
    IData/*17:0*/ tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0;
    tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0 = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__disk__0__Vfuncout;
    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__l;
    __Vfunc_tb_bmp__DOT__disk__0__l = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__i;
    __Vfunc_tb_bmp__DOT__disk__0__i = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__c;
    __Vfunc_tb_bmp__DOT__disk__0__c = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__entry;
    __Vfunc_tb_bmp__DOT__disk__0__entry = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__ofs;
    __Vfunc_tb_bmp__DOT__disk__0__ofs = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__pix;
    __Vfunc_tb_bmp__DOT__disk__0__pix = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__x;
    __Vfunc_tb_bmp__DOT__disk__0__x = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__y;
    __Vfunc_tb_bmp__DOT__disk__0__y = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__channel;
    __Vfunc_tb_bmp__DOT__disk__0__channel = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__root_lba;
    __Vfunc_tb_bmp__DOT__disk__0__root_lba = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__file_lba;
    __Vfunc_tb_bmp__DOT__disk__0__file_lba = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__fat_end;
    __Vfunc_tb_bmp__DOT__disk__0__fat_end = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__file_bytes;
    __Vfunc_tb_bmp__DOT__disk__0__file_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__disk__0__value;
    __Vfunc_tb_bmp__DOT__disk__0__value = 0;
    CData/*0:0*/ __Vfunc_tb_bmp__DOT__disk__0__f16;
    __Vfunc_tb_bmp__DOT__disk__0__f16 = 0;
    CData/*0:0*/ __Vfunc_tb_bmp__DOT__disk__0__mbr;
    __Vfunc_tb_bmp__DOT__disk__0__mbr = 0;
    CData/*0:0*/ __Vfunc_tb_bmp__DOT__disk__0__rgba;
    __Vfunc_tb_bmp__DOT__disk__0__rgba = 0;
    CData/*0:0*/ __Vfunc_tb_bmp__DOT__disk__0__top;
    __Vfunc_tb_bmp__DOT__disk__0__top = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__expected__1__Vfuncout;
    __Vfunc_tb_bmp__DOT__expected__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__expected__1__a;
    __Vfunc_tb_bmp__DOT__expected__1__a = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__expected__1__x;
    __Vfunc_tb_bmp__DOT__expected__1__x = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__expected__1__y;
    __Vfunc_tb_bmp__DOT__expected__1__y = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__expected__1__r;
    __Vfunc_tb_bmp__DOT__expected__1__r = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__expected__1__g;
    __Vfunc_tb_bmp__DOT__expected__1__g = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__expected__1__b;
    __Vfunc_tb_bmp__DOT__expected__1__b = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__expected__2__Vfuncout;
    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__expected__2__a;
    __Vfunc_tb_bmp__DOT__expected__2__a = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__expected__2__x;
    __Vfunc_tb_bmp__DOT__expected__2__x = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__expected__2__y;
    __Vfunc_tb_bmp__DOT__expected__2__y = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__expected__2__r;
    __Vfunc_tb_bmp__DOT__expected__2__r = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__expected__2__g;
    __Vfunc_tb_bmp__DOT__expected__2__g = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__expected__2__b;
    __Vfunc_tb_bmp__DOT__expected__2__b = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__4__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__4__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__5__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__5__lba = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__6__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__7__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__7__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__8__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__9__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__10__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__10__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__11__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__12__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__12__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__13__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__14__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__15__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__16__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__17__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__18__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__18__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__19__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__19__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__20__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__21__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__22__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__23__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__23__lba = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__24__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__24__lba = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__upper__25__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__upper__25__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c;
    __Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__upper__26__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__upper__26__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c;
    __Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__upper__27__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__upper__27__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c;
    __Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d16__28__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d16__28__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d16__29__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d16__29__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d16__30__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d16__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d32__31__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d32__31__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__32__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__32__lba = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d16__33__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d16__33__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d16__34__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d16__34__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__d16__35__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__d16__35__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__36__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__36__lba = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__37__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__37__lba = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__38__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__39__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__39__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__40__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__41__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__42__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__43__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__44__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__44__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__45__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__45__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__46__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__47__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__48__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__49__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__49__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__50__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le32__51__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le32__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_bmp__DOT__dut__DOT__le16__52__Vfuncout;
    __Vfunc_tb_bmp__DOT__dut__DOT__le16__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__53__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__53__lba = 0;
    IData/*31:0*/ __Vtask_tb_bmp__DOT__dut__DOT__sector__54__lba;
    __Vtask_tb_bmp__DOT__dut__DOT__sector__54__lba = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__ack_delay;
    __Vdly__tb_bmp__DOT__ack_delay = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__reading;
    __Vdly__tb_bmp__DOT__reading = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__sd_ready;
    __Vdly__tb_bmp__DOT__sd_ready = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__current_lba;
    __Vdly__tb_bmp__DOT__current_lba = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__index;
    __Vdly__tb_bmp__DOT__index = 0;
    CData/*5:0*/ __Vdly__tb_bmp__DOT__dut__DOT__state;
    __Vdly__tb_bmp__DOT__dut__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_bmp__DOT__dut__DOT__after_read;
    __Vdly__tb_bmp__DOT__dut__DOT__after_read = 0;
    CData/*4:0*/ __Vdly__tb_bmp__DOT__dut__DOT__entry_index;
    __Vdly__tb_bmp__DOT__dut__DOT__entry_index = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__start;
    __Vdly__tb_bmp__DOT__start = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__lba;
    __Vdly__tb_bmp__DOT__lba = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__volume_base;
    __Vdly__tb_bmp__DOT__dut__DOT__volume_base = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__fat_base;
    __Vdly__tb_bmp__DOT__dut__DOT__fat_base = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__data_base;
    __Vdly__tb_bmp__DOT__dut__DOT__data_base = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__root_base;
    __Vdly__tb_bmp__DOT__dut__DOT__root_base = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__root_sectors;
    __Vdly__tb_bmp__DOT__dut__DOT__root_sectors = 0;
    CData/*7:0*/ __Vdly__tb_bmp__DOT__dut__DOT__spc;
    __Vdly__tb_bmp__DOT__dut__DOT__spc = 0;
    CData/*7:0*/ __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector;
    __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__cluster;
    __Vdly__tb_bmp__DOT__dut__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__file_size;
    __Vdly__tb_bmp__DOT__dut__DOT__file_size = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__file_offset;
    __Vdly__tb_bmp__DOT__dut__DOT__file_offset = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__bmp_offset;
    __Vdly__tb_bmp__DOT__dut__DOT__bmp_offset = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__dut__DOT__fat16;
    __Vdly__tb_bmp__DOT__dut__DOT__fat16 = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__dut__DOT__dir_is_fixed;
    __Vdly__tb_bmp__DOT__dut__DOT__dir_is_fixed = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__dut__DOT__rgba;
    __Vdly__tb_bmp__DOT__dut__DOT__rgba = 0;
    CData/*0:0*/ __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file;
    __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file = 0;
    SData/*8:0*/ __Vdly__tb_bmp__DOT__dut__DOT__dir_pos;
    __Vdly__tb_bmp__DOT__dut__DOT__dir_pos = 0;
    SData/*9:0*/ __Vdly__tb_bmp__DOT__dut__DOT__byte_pos;
    __Vdly__tb_bmp__DOT__dut__DOT__byte_pos = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index;
    __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index = 0;
    SData/*15:0*/ __Vdly__tb_bmp__DOT__dut__DOT__directory_sectors;
    __Vdly__tb_bmp__DOT__dut__DOT__directory_sectors = 0;
    CData/*1:0*/ __Vdly__tb_bmp__DOT__dut__DOT__channel;
    __Vdly__tb_bmp__DOT__dut__DOT__channel = 0;
    CData/*3:0*/ __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel;
    __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel = 0;
    SData/*15:0*/ __Vdly__tb_bmp__DOT__dut__DOT__low_pixel;
    __Vdly__tb_bmp__DOT__dut__DOT__low_pixel = 0;
    CData/*5:0*/ __Vdly__tb_bmp__DOT__dut__DOT__burst_x;
    __Vdly__tb_bmp__DOT__dut__DOT__burst_x = 0;
    SData/*8:0*/ __Vdly__tb_bmp__DOT__dut__DOT__source_y;
    __Vdly__tb_bmp__DOT__dut__DOT__source_y = 0;
    IData/*17:0*/ __Vdly__tb_bmp__DOT__dut__DOT__pending_addr;
    __Vdly__tb_bmp__DOT__dut__DOT__pending_addr = 0;
    IData/*31:0*/ __Vdly__tb_bmp__DOT__pixels;
    __Vdly__tb_bmp__DOT__pixels = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_bmp__DOT__data;
    VL_ZERO_W(256, __Vdly__tb_bmp__DOT__data);
    CData/*0:0*/ __Vdly__tb_bmp__DOT__last;
    __Vdly__tb_bmp__DOT__last = 0;
    CData/*7:0*/ __VdlyVal__tb_bmp__DOT__dut__DOT__entry__v0;
    __VdlyVal__tb_bmp__DOT__dut__DOT__entry__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_bmp__DOT__dut__DOT__entry__v0;
    __VdlyDim0__tb_bmp__DOT__dut__DOT__entry__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_bmp__DOT__dut__DOT__entry__v0;
    __VdlySet__tb_bmp__DOT__dut__DOT__entry__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_bmp__DOT__dut__DOT__cache__v0;
    __VdlyVal__tb_bmp__DOT__dut__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_bmp__DOT__dut__DOT__cache__v0;
    __VdlyDim0__tb_bmp__DOT__dut__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_bmp__DOT__dut__DOT__cache__v0;
    __VdlySet__tb_bmp__DOT__dut__DOT__cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_bmp__DOT__dut__DOT__header__v0;
    __VdlyVal__tb_bmp__DOT__dut__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_bmp__DOT__dut__DOT__header__v0;
    __VdlyDim0__tb_bmp__DOT__dut__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_bmp__DOT__dut__DOT__header__v0;
    __VdlySet__tb_bmp__DOT__dut__DOT__header__v0 = 0;
    // Body
    __Vdly__tb_bmp__DOT__ack_delay = vlSelfRef.tb_bmp__DOT__ack_delay;
    __Vdly__tb_bmp__DOT__reading = vlSelfRef.tb_bmp__DOT__reading;
    __Vdly__tb_bmp__DOT__sd_ready = vlSelfRef.tb_bmp__DOT__sd_ready;
    __Vdly__tb_bmp__DOT__current_lba = vlSelfRef.tb_bmp__DOT__current_lba;
    __Vdly__tb_bmp__DOT__index = vlSelfRef.tb_bmp__DOT__index;
    __Vdly__tb_bmp__DOT__dut__DOT__after_read = vlSelfRef.tb_bmp__DOT__dut__DOT__after_read;
    __Vdly__tb_bmp__DOT__start = vlSelfRef.tb_bmp__DOT__start;
    __Vdly__tb_bmp__DOT__lba = vlSelfRef.tb_bmp__DOT__lba;
    __Vdly__tb_bmp__DOT__dut__DOT__volume_base = vlSelfRef.tb_bmp__DOT__dut__DOT__volume_base;
    __Vdly__tb_bmp__DOT__dut__DOT__fat_base = vlSelfRef.tb_bmp__DOT__dut__DOT__fat_base;
    __Vdly__tb_bmp__DOT__dut__DOT__data_base = vlSelfRef.tb_bmp__DOT__dut__DOT__data_base;
    __Vdly__tb_bmp__DOT__dut__DOT__root_base = vlSelfRef.tb_bmp__DOT__dut__DOT__root_base;
    __Vdly__tb_bmp__DOT__dut__DOT__root_sectors = vlSelfRef.tb_bmp__DOT__dut__DOT__root_sectors;
    __Vdly__tb_bmp__DOT__dut__DOT__spc = vlSelfRef.tb_bmp__DOT__dut__DOT__spc;
    __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector = vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector;
    __Vdly__tb_bmp__DOT__dut__DOT__file_size = vlSelfRef.tb_bmp__DOT__dut__DOT__file_size;
    __Vdly__tb_bmp__DOT__dut__DOT__file_offset = vlSelfRef.tb_bmp__DOT__dut__DOT__file_offset;
    __Vdly__tb_bmp__DOT__dut__DOT__bmp_offset = vlSelfRef.tb_bmp__DOT__dut__DOT__bmp_offset;
    __Vdly__tb_bmp__DOT__dut__DOT__dir_is_fixed = vlSelfRef.tb_bmp__DOT__dut__DOT__dir_is_fixed;
    __Vdly__tb_bmp__DOT__dut__DOT__rgba = vlSelfRef.tb_bmp__DOT__dut__DOT__rgba;
    __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file = vlSelfRef.tb_bmp__DOT__dut__DOT__fat_for_file;
    __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index 
        = vlSelfRef.tb_bmp__DOT__dut__DOT__fixed_root_index;
    __Vdly__tb_bmp__DOT__dut__DOT__directory_sectors 
        = vlSelfRef.tb_bmp__DOT__dut__DOT__directory_sectors;
    __Vdly__tb_bmp__DOT__dut__DOT__channel = vlSelfRef.tb_bmp__DOT__dut__DOT__channel;
    __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel = vlSelfRef.tb_bmp__DOT__dut__DOT__burst_pixel;
    __Vdly__tb_bmp__DOT__dut__DOT__low_pixel = vlSelfRef.tb_bmp__DOT__dut__DOT__low_pixel;
    __Vdly__tb_bmp__DOT__dut__DOT__pending_addr = vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr;
    __Vdly__tb_bmp__DOT__pixels = vlSelfRef.tb_bmp__DOT__pixels;
    __Vdly__tb_bmp__DOT__data[0U] = vlSelfRef.tb_bmp__DOT__data[0U];
    __Vdly__tb_bmp__DOT__data[1U] = vlSelfRef.tb_bmp__DOT__data[1U];
    __Vdly__tb_bmp__DOT__data[2U] = vlSelfRef.tb_bmp__DOT__data[2U];
    __Vdly__tb_bmp__DOT__data[3U] = vlSelfRef.tb_bmp__DOT__data[3U];
    __Vdly__tb_bmp__DOT__data[4U] = vlSelfRef.tb_bmp__DOT__data[4U];
    __Vdly__tb_bmp__DOT__data[5U] = vlSelfRef.tb_bmp__DOT__data[5U];
    __Vdly__tb_bmp__DOT__data[6U] = vlSelfRef.tb_bmp__DOT__data[6U];
    __Vdly__tb_bmp__DOT__data[7U] = vlSelfRef.tb_bmp__DOT__data[7U];
    __Vdly__tb_bmp__DOT__last = vlSelfRef.tb_bmp__DOT__last;
    __VdlySet__tb_bmp__DOT__dut__DOT__entry__v0 = 0U;
    __VdlySet__tb_bmp__DOT__dut__DOT__header__v0 = 0U;
    __Vdly__tb_bmp__DOT__dut__DOT__cluster = vlSelfRef.tb_bmp__DOT__dut__DOT__cluster;
    __Vdly__tb_bmp__DOT__dut__DOT__burst_x = vlSelfRef.tb_bmp__DOT__dut__DOT__burst_x;
    __Vdly__tb_bmp__DOT__dut__DOT__fat16 = vlSelfRef.tb_bmp__DOT__dut__DOT__fat16;
    __Vdly__tb_bmp__DOT__dut__DOT__source_y = vlSelfRef.tb_bmp__DOT__dut__DOT__source_y;
    __Vdly__tb_bmp__DOT__dut__DOT__state = vlSelfRef.tb_bmp__DOT__dut__DOT__state;
    __Vdly__tb_bmp__DOT__dut__DOT__entry_index = vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index;
    __Vdly__tb_bmp__DOT__dut__DOT__dir_pos = vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos;
    __Vdly__tb_bmp__DOT__dut__DOT__byte_pos = vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos;
    __VdlySet__tb_bmp__DOT__dut__DOT__cache__v0 = 0U;
    if (vlSelfRef.tb_bmp__DOT__reset) {
        __Vdly__tb_bmp__DOT__dut__DOT__state = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__after_read = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__entry_index = 0U;
        __Vdly__tb_bmp__DOT__start = 0U;
        __Vdly__tb_bmp__DOT__lba = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__volume_base = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__fat_base = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__data_base = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__root_base = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__root_sectors = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__spc = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__cluster = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__file_size = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__file_offset = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__bmp_offset = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__fat16 = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__dir_is_fixed = 0U;
        vlSelfRef.tb_bmp__DOT__dut__DOT__top_down = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__rgba = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__dir_pos = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__byte_pos = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__directory_sectors = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__channel = 0U;
        vlSelfRef.tb_bmp__DOT__dut__DOT__blue = 0U;
        vlSelfRef.tb_bmp__DOT__dut__DOT__green = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__low_pixel = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__burst_x = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__source_y = 0U;
        __Vdly__tb_bmp__DOT__dut__DOT__pending_addr = 0U;
        vlSelfRef.tb_bmp__DOT__done = 0U;
        vlSelfRef.tb_bmp__DOT__error = 0U;
        __Vdly__tb_bmp__DOT__pixels = 0U;
        tb_bmp__DOT__name = 0ULL;
        __Vdly__tb_bmp__DOT__data[0U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__tb_bmp__DOT__data[1U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__tb_bmp__DOT__data[2U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__tb_bmp__DOT__data[3U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__tb_bmp__DOT__data[4U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__tb_bmp__DOT__data[5U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__tb_bmp__DOT__data[6U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__tb_bmp__DOT__data[7U] = Vtb_bmp__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_bmp__DOT__last = 0U;
    } else {
        __Vdly__tb_bmp__DOT__start = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) 
                | (5U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) 
               | (0xdU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) 
              | (4U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) 
             | (6U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_bmp__DOT__sd_ready) {
                    __Vdly__tb_bmp__DOT__lba = 0U;
                    __Vdly__tb_bmp__DOT__start = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__after_read = 2U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_bmp__DOT__sd_done) {
                    __Vdly__tb_bmp__DOT__dut__DOT__state 
                        = vlSelfRef.tb_bmp__DOT__dut__DOT__after_read;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                if ((0xaa55U != (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__signature))) {
                    vlSelfRef.tb_bmp__DOT__error = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                } else if (((0x200U == ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__4__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                            [0xcU] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0xbU]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__4__Vfuncout))) 
                            & (0U != vlSelfRef.tb_bmp__DOT__dut__DOT__header
                               [0xdU]))) {
                    __Vdly__tb_bmp__DOT__dut__DOT__volume_base = 0U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 3U;
                } else if ((0U != vlSelfRef.tb_bmp__DOT__dut__DOT__partition_start)) {
                    __Vdly__tb_bmp__DOT__dut__DOT__volume_base 
                        = vlSelfRef.tb_bmp__DOT__dut__DOT__partition_start;
                    __Vdly__tb_bmp__DOT__start = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__after_read = 3U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                    __Vtask_tb_bmp__DOT__dut__DOT__sector__5__lba 
                        = vlSelfRef.tb_bmp__DOT__dut__DOT__partition_start;
                    __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__5__lba;
                } else {
                    vlSelfRef.tb_bmp__DOT__error = 2U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                if (((((((0xaa55U != (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__signature)) 
                         | (0x200U != ([&]() {
                                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__6__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                          [0xcU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                         [0xbU]);
                                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__6__Vfuncout)))) 
                        | (0U == vlSelfRef.tb_bmp__DOT__dut__DOT__header
                           [0xdU])) | (0U != (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                              [0xdU] 
                                              & (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                 [0xdU] 
                                                 - (IData)(1U))))) 
                      | (0U == ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le16__7__Vfuncout 
                                            = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__7__Vfuncout)))) 
                     | (0U == vlSelfRef.tb_bmp__DOT__dut__DOT__header
                        [0x10U]))) {
                    vlSelfRef.tb_bmp__DOT__error = 3U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_bmp__DOT__dut__DOT__spc 
                        = vlSelfRef.tb_bmp__DOT__dut__DOT__header
                        [0xdU];
                    __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index = 0U;
                    __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector = 0U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 5U;
                    __Vdly__tb_bmp__DOT__dut__DOT__fat16 
                        = (0U != ([&]() {
                                __Vfunc_tb_bmp__DOT__dut__DOT__le16__8__Vfuncout 
                                    = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__8__Vfuncout)));
                    __Vdly__tb_bmp__DOT__dut__DOT__fat_base 
                        = (vlSelfRef.tb_bmp__DOT__dut__DOT__volume_base 
                           + VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__9__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                            [0xfU] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0xeU]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__9__Vfuncout))));
                    __Vdly__tb_bmp__DOT__dut__DOT__root_sectors 
                        = VL_SHIFTR_III(32,32,32, ((IData)(0xfU) 
                                                   + 
                                                   VL_EXTEND_II(32,16, 
                                                                ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le16__10__Vfuncout 
                                            = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                [0x12U] 
                                                << 8U) 
                                               | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0x11U]);
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__10__Vfuncout)))), 4U);
                    __Vdly__tb_bmp__DOT__dut__DOT__root_base 
                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__volume_base 
                            + VL_EXTEND_II(32,16, ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le16__11__Vfuncout 
                                            = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__11__Vfuncout)))) 
                           + (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                              [0x10U] * ((0U != ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__le16__12__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__12__Vfuncout)))
                                          ? VL_EXTEND_II(32,16, 
                                                         ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__le16__13__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__13__Vfuncout)))
                                          : ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le32__14__Vfuncout 
                                            = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                 [0x27U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x26U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x25U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                  [0x24U]));
                                    }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__14__Vfuncout))));
                    __Vdly__tb_bmp__DOT__dut__DOT__data_base 
                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__volume_base 
                             + VL_EXTEND_II(32,16, 
                                            ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__le16__15__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                    [0xfU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0xeU]);
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__15__Vfuncout)))) 
                            + (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                               [0x10U] * ((0U != ([&]() {
                                                __Vfunc_tb_bmp__DOT__dut__DOT__le16__16__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__16__Vfuncout)))
                                           ? VL_EXTEND_II(32,16, 
                                                          ([&]() {
                                                __Vfunc_tb_bmp__DOT__dut__DOT__le16__17__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__17__Vfuncout)))
                                           : ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__le32__18__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                     [0x27U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                       [0x26U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                       [0x25U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                      [0x24U]));
                                        }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__18__Vfuncout)))) 
                           + VL_SHIFTR_III(32,32,32, 
                                           ((IData)(0xfU) 
                                            + VL_EXTEND_II(32,16, 
                                                           ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__le16__19__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                    [0x12U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x11U]);
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__19__Vfuncout)))), 4U));
                    __Vdly__tb_bmp__DOT__dut__DOT__cluster 
                        = ((0U != ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__20__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                            [0x17U] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0x16U]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__20__Vfuncout)))
                            ? 0U : (0xfffffffU & ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le32__21__Vfuncout 
                                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                             [0x2fU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0x2eU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0x2dU] 
                                               << 8U) 
                                              | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                              [0x2cU]));
                                }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__21__Vfuncout)));
                    __Vdly__tb_bmp__DOT__dut__DOT__dir_is_fixed 
                        = (0U != ([&]() {
                                __Vfunc_tb_bmp__DOT__dut__DOT__le16__22__Vfuncout 
                                    = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__22__Vfuncout)));
                }
            } else if ((5U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                __Vdly__tb_bmp__DOT__dut__DOT__directory_sectors 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__directory_sectors)));
                __Vdly__tb_bmp__DOT__dut__DOT__dir_pos = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__entry_index = 0U;
                if ((0xfffU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__directory_sectors))) {
                    vlSelfRef.tb_bmp__DOT__error = 4U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                } else if (vlSelfRef.tb_bmp__DOT__dut__DOT__dir_is_fixed) {
                    if ((vlSelfRef.tb_bmp__DOT__dut__DOT__fixed_root_index 
                         >= vlSelfRef.tb_bmp__DOT__dut__DOT__root_sectors)) {
                        vlSelfRef.tb_bmp__DOT__error = 5U;
                        __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                    } else {
                        __Vtask_tb_bmp__DOT__dut__DOT__sector__23__lba 
                            = (vlSelfRef.tb_bmp__DOT__dut__DOT__root_base 
                               + vlSelfRef.tb_bmp__DOT__dut__DOT__fixed_root_index);
                        __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__23__lba;
                        __Vdly__tb_bmp__DOT__start = 1U;
                        __Vdly__tb_bmp__DOT__dut__DOT__after_read = 0xdU;
                        __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                    }
                } else if ((2U > vlSelfRef.tb_bmp__DOT__dut__DOT__cluster)) {
                    vlSelfRef.tb_bmp__DOT__error = 6U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                } else {
                    __Vtask_tb_bmp__DOT__dut__DOT__sector__24__lba 
                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__data_base 
                            + ((vlSelfRef.tb_bmp__DOT__dut__DOT__cluster 
                                - (IData)(2U)) * (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__spc))) 
                           + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector));
                    __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__24__lba;
                    __Vdly__tb_bmp__DOT__start = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__after_read = 0xdU;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                __VdlyVal__tb_bmp__DOT__dut__DOT__entry__v0 
                    = vlSelfRef.tb_bmp__DOT__dut__DOT__cache_byte;
                __VdlyDim0__tb_bmp__DOT__dut__DOT__entry__v0 
                    = vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index;
                __VdlySet__tb_bmp__DOT__dut__DOT__entry__v0 = 1U;
                if ((0x1fU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index))) {
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 4U;
                    __Vdly__tb_bmp__DOT__dut__DOT__entry_index = 0U;
                } else {
                    __Vdly__tb_bmp__DOT__dut__DOT__entry_index 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index)));
                }
            } else if ((4U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
                if ((0U == vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                     [0U])) {
                    vlSelfRef.tb_bmp__DOT__error = 5U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
                } else if (((((((0xe5U != vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                 [0U]) & (0U == (0x18U 
                                                 & vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                 [0xbU]))) 
                               & (0xfU != vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                  [0xbU])) & (0x42U 
                                              == ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c 
                                                = vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                [8U];
                                            __Vfunc_tb_bmp__DOT__dut__DOT__upper__25__Vfuncout 
                                                = (0xffU 
                                                   & (((0x61U 
                                                        <= (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c)) 
                                                       & (0x7aU 
                                                          >= (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c)))
                                                       ? 
                                                      ((IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c) 
                                                       - (IData)(0x20U))
                                                       : (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__25__c)));
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__25__Vfuncout)))) 
                             & (0x4dU == ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c 
                                            = vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                            [9U];
                                        __Vfunc_tb_bmp__DOT__dut__DOT__upper__26__Vfuncout 
                                            = (0xffU 
                                               & (((0x61U 
                                                    <= (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c)) 
                                                   & (0x7aU 
                                                      >= (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c)))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c) 
                                                   - (IData)(0x20U))
                                                   : (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__26__c)));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__26__Vfuncout)))) 
                            & (0x50U == ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c 
                                        = vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                        [0xaU];
                                    __Vfunc_tb_bmp__DOT__dut__DOT__upper__27__Vfuncout 
                                        = (0xffU & 
                                           (((0x61U 
                                              <= (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c)) 
                                             & (0x7aU 
                                                >= (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c)))
                                             ? ((IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c) 
                                                - (IData)(0x20U))
                                             : (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__27__c)));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__upper__27__Vfuncout))))) {
                    __Vdly__tb_bmp__DOT__dut__DOT__cluster 
                        = ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat16)
                            ? VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__d16__28__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                            [0x1bU] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                           [0x1aU]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__d16__28__Vfuncout)))
                            : (VL_EXTEND_II(32,16, 
                                            ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__d16__29__Vfuncout 
                                            = ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                [0x1bU] 
                                                << 8U) 
                                               | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                               [0x1aU]);
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__d16__29__Vfuncout))) 
                               | VL_SHIFTL_III(32,32,32, 
                                               VL_EXTEND_II(32,16, 
                                                            ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__d16__30__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                    [0x15U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                   [0x14U]);
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__d16__30__Vfuncout))), 0x10U)));
                    __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector = 0U;
                    __Vdly__tb_bmp__DOT__start = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__after_read = 7U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                    __Vfunc_tb_bmp__DOT__dut__DOT__d32__31__Vfuncout 
                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                             [0x1fU] << 0x18U) | (vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                  [0x1eU] 
                                                  << 0x10U)) 
                           | ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                               [0x1dU] << 8U) | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                              [0x1cU]));
                    __Vdly__tb_bmp__DOT__dut__DOT__file_size 
                        = __Vfunc_tb_bmp__DOT__dut__DOT__d32__31__Vfuncout;
                    tb_bmp__DOT__name = ((0xffffffffff000000ULL 
                                          & tb_bmp__DOT__name) 
                                         | (IData)((IData)(
                                                           ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                             [2U] 
                                                             << 0x10U) 
                                                            | ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                                [1U] 
                                                                << 8U) 
                                                               | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                               [0U])))));
                    tb_bmp__DOT__name = ((0xffff000000ffffffULL 
                                          & tb_bmp__DOT__name) 
                                         | ((QData)((IData)(
                                                            ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                              [5U] 
                                                              << 0x10U) 
                                                             | ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                                 [4U] 
                                                                 << 8U) 
                                                                | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                                [3U])))) 
                                            << 0x18U));
                    tb_bmp__DOT__name = ((0xffffffffffffULL 
                                          & tb_bmp__DOT__name) 
                                         | ((QData)((IData)(
                                                            ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                              [7U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                             [6U]))) 
                                            << 0x30U));
                    __Vtask_tb_bmp__DOT__dut__DOT__sector__32__lba 
                        = (vlSelfRef.tb_bmp__DOT__dut__DOT__data_base 
                           + ((((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat16)
                                 ? VL_EXTEND_II(32,16, 
                                                ([&]() {
                                                __Vfunc_tb_bmp__DOT__dut__DOT__d16__33__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                      [0x1bU] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                     [0x1aU]);
                                            }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__d16__33__Vfuncout)))
                                 : (VL_EXTEND_II(32,16, 
                                                 ([&]() {
                                                    __Vfunc_tb_bmp__DOT__dut__DOT__d16__34__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                          [0x1bU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                         [0x1aU]);
                                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__d16__34__Vfuncout))) 
                                    | VL_SHIFTL_III(32,32,32, 
                                                    VL_EXTEND_II(32,16, 
                                                                 ([&]() {
                                                        __Vfunc_tb_bmp__DOT__dut__DOT__d16__35__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                              [0x15U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_bmp__DOT__dut__DOT__entry
                                                             [0x14U]);
                                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__d16__35__Vfuncout))), 0x10U))) 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__spc)));
                    __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__32__lba;
                } else if ((0x1e0U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos))) {
                    if (vlSelfRef.tb_bmp__DOT__dut__DOT__dir_is_fixed) {
                        __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index 
                            = ((IData)(1U) + vlSelfRef.tb_bmp__DOT__dut__DOT__fixed_root_index);
                        __Vdly__tb_bmp__DOT__dut__DOT__state = 5U;
                    } else if ((((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector)) 
                                < (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__spc))) {
                        __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector)));
                        __Vdly__tb_bmp__DOT__dut__DOT__state = 5U;
                    } else {
                        __Vtask_tb_bmp__DOT__dut__DOT__sector__36__lba 
                            = (vlSelfRef.tb_bmp__DOT__dut__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_bmp__DOT__dut__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_bmp__DOT__dut__DOT__cluster, 7U)));
                        __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file = 0U;
                        __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__36__lba;
                        __Vdly__tb_bmp__DOT__start = 1U;
                        __Vdly__tb_bmp__DOT__dut__DOT__after_read = 6U;
                        __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                    }
                } else {
                    __Vdly__tb_bmp__DOT__dut__DOT__dir_pos 
                        = (0x1ffU & ((IData)(0x20U) 
                                     + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos)));
                    __Vdly__tb_bmp__DOT__dut__DOT__entry_index = 0U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0xdU;
                }
            } else if (((2U > vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry) 
                        | ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat16)
                            ? (0xfff8U <= vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry)
                            : (0xffffff8U <= vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry)))) {
                vlSelfRef.tb_bmp__DOT__error = ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat_for_file)
                                                 ? 7U
                                                 : 5U);
                __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
            } else {
                __Vdly__tb_bmp__DOT__dut__DOT__cluster 
                    = vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry;
                __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector = 0U;
                if (vlSelfRef.tb_bmp__DOT__dut__DOT__fat_for_file) {
                    __Vtask_tb_bmp__DOT__dut__DOT__sector__37__lba 
                        = (vlSelfRef.tb_bmp__DOT__dut__DOT__data_base 
                           + ((vlSelfRef.tb_bmp__DOT__dut__DOT__fat_entry 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__spc)));
                    __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__37__lba;
                    __Vdly__tb_bmp__DOT__start = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__after_read = 8U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
                } else {
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 5U;
                }
            }
        } else if ((7U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
            if (((((0x4d42U != ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le16__38__Vfuncout 
                                            = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                [1U] 
                                                << 8U) 
                                               | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0U]);
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__38__Vfuncout))) 
                   | (0x28U > ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le32__39__Vfuncout 
                                            = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                 [0x11U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x10U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0xfU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                  [0xeU]));
                                    }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__39__Vfuncout))) 
                  | (1U != ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__40__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                            [0x1bU] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0x1aU]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__40__Vfuncout)))) 
                 | (0U != ([&]() {
                                __Vfunc_tb_bmp__DOT__dut__DOT__le32__41__Vfuncout 
                                    = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                         [0x21U] << 0x18U) 
                                        | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0x20U] 
                                           << 0x10U)) 
                                       | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0x1fU] 
                                           << 8U) | 
                                          vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                          [0x1eU]));
                            }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__41__Vfuncout)))) {
                vlSelfRef.tb_bmp__DOT__error = 8U;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
            } else if ((((0x280U != ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le32__42__Vfuncout 
                                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                             [0x15U] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0x14U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0x13U] 
                                               << 8U) 
                                              | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                              [0x12U]));
                                }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__42__Vfuncout)) 
                         | ((0x1e0U != ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le32__43__Vfuncout 
                                            = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                 [0x19U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x18U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x17U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                  [0x16U]));
                                    }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__43__Vfuncout)) 
                            & (0xfffffe20U != ([&]() {
                                        __Vfunc_tb_bmp__DOT__dut__DOT__le32__44__Vfuncout 
                                            = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                 [0x19U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x18U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x17U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                  [0x16U]));
                                    }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__44__Vfuncout)))) 
                        | ((0x18U != ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__45__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                            [0x1dU] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0x1cU]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__45__Vfuncout))) 
                           & (0x20U != ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le16__46__Vfuncout 
                                        = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                            [0x1dU] 
                                            << 8U) 
                                           | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                           [0x1cU]);
                                }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__46__Vfuncout)))))) {
                vlSelfRef.tb_bmp__DOT__error = 9U;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
            } else if ((((0x36U > ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le32__47__Vfuncout 
                                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                             [0xdU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xcU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xbU] 
                                               << 8U) 
                                              | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                              [0xaU]));
                                }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__47__Vfuncout)) 
                         | (0x100000U < ([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le32__48__Vfuncout 
                                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                             [0xdU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xcU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xbU] 
                                               << 8U) 
                                              | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                              [0xaU]));
                                }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__48__Vfuncout))) 
                        | (vlSelfRef.tb_bmp__DOT__dut__DOT__file_size 
                           < (([&]() {
                                    __Vfunc_tb_bmp__DOT__dut__DOT__le32__49__Vfuncout 
                                        = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                             [0xdU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xcU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                               [0xbU] 
                                               << 8U) 
                                              | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                              [0xaU]));
                                }(), __Vfunc_tb_bmp__DOT__dut__DOT__le32__49__Vfuncout) 
                              + ((0x18U == ([&]() {
                                            __Vfunc_tb_bmp__DOT__dut__DOT__le16__50__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                    [0x1dU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                                   [0x1cU]);
                                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__50__Vfuncout)))
                                  ? 0xe1000U : 0x12c000U))))) {
                vlSelfRef.tb_bmp__DOT__error = 0xaU;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
            } else {
                __Vfunc_tb_bmp__DOT__dut__DOT__le32__51__Vfuncout 
                    = (((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                         [0xdU] << 0x18U) | (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                             [0xcU] 
                                             << 0x10U)) 
                       | ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                           [0xbU] << 8U) | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                          [0xaU]));
                __Vdly__tb_bmp__DOT__dut__DOT__bmp_offset 
                    = __Vfunc_tb_bmp__DOT__dut__DOT__le32__51__Vfuncout;
                __Vdly__tb_bmp__DOT__dut__DOT__file_offset = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__byte_pos = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__channel = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__burst_x = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__source_y = 0U;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 8U;
                vlSelfRef.tb_bmp__DOT__dut__DOT__top_down 
                    = (1U & (vlSelfRef.tb_bmp__DOT__dut__DOT__header
                             [0x19U] >> 7U));
                __Vdly__tb_bmp__DOT__dut__DOT__rgba 
                    = (0x20U == ([&]() {
                            __Vfunc_tb_bmp__DOT__dut__DOT__le16__52__Vfuncout 
                                = ((vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                    [0x1dU] << 8U) 
                                   | vlSelfRef.tb_bmp__DOT__dut__DOT__header
                                   [0x1cU]);
                        }(), (IData)(__Vfunc_tb_bmp__DOT__dut__DOT__le16__52__Vfuncout)));
            }
        } else if ((8U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
            if ((0x200U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos))) {
                __Vdly__tb_bmp__DOT__dut__DOT__state = 9U;
            } else if ((vlSelfRef.tb_bmp__DOT__dut__DOT__file_offset 
                        >= vlSelfRef.tb_bmp__DOT__dut__DOT__file_size)) {
                vlSelfRef.tb_bmp__DOT__error = 7U;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
            } else {
                __Vdly__tb_bmp__DOT__dut__DOT__byte_pos 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos)));
                __Vdly__tb_bmp__DOT__dut__DOT__file_offset 
                    = ((IData)(1U) + vlSelfRef.tb_bmp__DOT__dut__DOT__file_offset);
                if ((vlSelfRef.tb_bmp__DOT__dut__DOT__file_offset 
                     >= vlSelfRef.tb_bmp__DOT__dut__DOT__bmp_offset)) {
                    if ((0U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__channel))) {
                        vlSelfRef.tb_bmp__DOT__dut__DOT__blue 
                            = vlSelfRef.tb_bmp__DOT__dut__DOT__cache_byte;
                        __Vdly__tb_bmp__DOT__dut__DOT__channel = 1U;
                    } else if ((1U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__channel))) {
                        vlSelfRef.tb_bmp__DOT__dut__DOT__green 
                            = vlSelfRef.tb_bmp__DOT__dut__DOT__cache_byte;
                        __Vdly__tb_bmp__DOT__dut__DOT__channel = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__channel))) {
                        __Vdly__tb_bmp__DOT__dut__DOT__channel 
                            = ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__rgba)
                                ? 3U : 0U);
                        __Vdly__tb_bmp__DOT__pixels 
                            = ((IData)(1U) + vlSelfRef.tb_bmp__DOT__pixels);
                        if ((1U & (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_pixel))) {
                            VL_ASSIGNSEL_WI(256,32,
                                            (0xe0U 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_pixel), 4U)), __Vdly__tb_bmp__DOT__data, 
                                            (((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__color) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__low_pixel)));
                        } else {
                            __Vdly__tb_bmp__DOT__dut__DOT__low_pixel 
                                = vlSelfRef.tb_bmp__DOT__dut__DOT__color;
                        }
                        if ((0xfU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_pixel))) {
                            if ((0x27U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_x))) {
                                __Vdly__tb_bmp__DOT__dut__DOT__source_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__source_y)));
                                __Vdly__tb_bmp__DOT__dut__DOT__burst_x = 0U;
                            } else {
                                __Vdly__tb_bmp__DOT__dut__DOT__burst_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_x)));
                            }
                            __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel = 0U;
                            __Vdly__tb_bmp__DOT__dut__DOT__pending_addr 
                                = vlSelfRef.tb_bmp__DOT__dut__DOT__target_addr;
                            __Vdly__tb_bmp__DOT__last 
                                = (0x4afffU == vlSelfRef.tb_bmp__DOT__pixels);
                            __Vdly__tb_bmp__DOT__dut__DOT__state = 0xaU;
                        } else {
                            __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_pixel)));
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__channel))) {
                        __Vdly__tb_bmp__DOT__dut__DOT__channel = 0U;
                    }
                }
            }
        } else if ((9U == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
            __Vdly__tb_bmp__DOT__dut__DOT__byte_pos = 0U;
            if ((((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector)) 
                 < (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__spc))) {
                __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector)));
                __Vtask_tb_bmp__DOT__dut__DOT__sector__53__lba 
                    = ((IData)(1U) + ((vlSelfRef.tb_bmp__DOT__dut__DOT__data_base 
                                       + ((vlSelfRef.tb_bmp__DOT__dut__DOT__cluster 
                                           - (IData)(2U)) 
                                          * (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__spc))) 
                                      + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector)));
                __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__53__lba;
                __Vdly__tb_bmp__DOT__start = 1U;
                __Vdly__tb_bmp__DOT__dut__DOT__after_read = 8U;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
            } else {
                __Vtask_tb_bmp__DOT__dut__DOT__sector__54__lba 
                    = (vlSelfRef.tb_bmp__DOT__dut__DOT__fat_base 
                       + ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat16)
                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_bmp__DOT__dut__DOT__cluster, 8U)
                           : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_bmp__DOT__dut__DOT__cluster, 7U)));
                __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file = 1U;
                __Vdly__tb_bmp__DOT__lba = __Vtask_tb_bmp__DOT__dut__DOT__sector__54__lba;
                __Vdly__tb_bmp__DOT__start = 1U;
                __Vdly__tb_bmp__DOT__dut__DOT__after_read = 6U;
                __Vdly__tb_bmp__DOT__dut__DOT__state = 1U;
            }
        } else if ((0xaU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_bmp__DOT__load_ready) {
                __Vdly__tb_bmp__DOT__dut__DOT__state = 0xbU;
            }
        } else if ((0xbU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_bmp__DOT__ack) {
                if (vlSelfRef.tb_bmp__DOT__last) {
                    vlSelfRef.tb_bmp__DOT__done = 1U;
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 0xcU;
                } else {
                    __Vdly__tb_bmp__DOT__dut__DOT__state = 8U;
                }
            }
        } else if ((1U & (~ ((0xcU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state)) 
                             || (0x3fU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state)))))) {
            vlSelfRef.tb_bmp__DOT__error = 0xffU;
            __Vdly__tb_bmp__DOT__dut__DOT__state = 0x3fU;
        }
    }
    if (vlSelfRef.tb_bmp__DOT__bvalid) {
        __VdlyVal__tb_bmp__DOT__dut__DOT__cache__v0 
            = vlSelfRef.tb_bmp__DOT__bdata;
        __VdlyDim0__tb_bmp__DOT__dut__DOT__cache__v0 
            = vlSelfRef.tb_bmp__DOT__bindex;
        __VdlySet__tb_bmp__DOT__dut__DOT__cache__v0 = 1U;
        if ((0x40U > (IData)(vlSelfRef.tb_bmp__DOT__bindex))) {
            __VdlyVal__tb_bmp__DOT__dut__DOT__header__v0 
                = vlSelfRef.tb_bmp__DOT__bdata;
            __VdlyDim0__tb_bmp__DOT__dut__DOT__header__v0 
                = (0x3fU & (IData)(vlSelfRef.tb_bmp__DOT__bindex));
            __VdlySet__tb_bmp__DOT__dut__DOT__header__v0 = 1U;
        }
        if ((0x1feU == (IData)(vlSelfRef.tb_bmp__DOT__bindex))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__signature 
                = ((0xff00U & (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__signature)) 
                   | (IData)(vlSelfRef.tb_bmp__DOT__bdata));
        }
        if (((0x1c6U <= (IData)(vlSelfRef.tb_bmp__DOT__bindex)) 
             & (0x1c9U >= (IData)(vlSelfRef.tb_bmp__DOT__bindex)))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__partition_start 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_bmp__DOT__bindex) 
                                                          - (IData)(0x1c6U)), 3U)))) 
                    & vlSelfRef.tb_bmp__DOT__dut__DOT__partition_start) 
                   | (0xffffffffULL & ((IData)(vlSelfRef.tb_bmp__DOT__bdata) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_bmp__DOT__bindex) 
                                                          - (IData)(0x1c6U)), 3U)))));
        }
        if (((IData)(vlSelfRef.tb_bmp__DOT__bindex) 
             == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat_byte_offset))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_bmp__DOT__bdata));
        }
        if ((0x1ffU == (IData)(vlSelfRef.tb_bmp__DOT__bindex))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__signature 
                = ((0xffU & (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__signature)) 
                   | ((IData)(vlSelfRef.tb_bmp__DOT__bdata) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_bmp__DOT__bindex) 
             == ((IData)(1U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat_byte_offset)))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_bmp__DOT__bdata) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_bmp__DOT__bindex) 
             == ((IData)(2U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat_byte_offset)))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_bmp__DOT__bdata) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_bmp__DOT__bindex) 
             == ((IData)(3U) + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__fat_byte_offset)))) {
            vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_bmp__DOT__dut__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_bmp__DOT__bdata) 
                      << 0x18U));
        }
    }
    vlSelfRef.tb_bmp__DOT__dut__DOT__after_read = __Vdly__tb_bmp__DOT__dut__DOT__after_read;
    vlSelfRef.tb_bmp__DOT__dut__DOT__volume_base = __Vdly__tb_bmp__DOT__dut__DOT__volume_base;
    vlSelfRef.tb_bmp__DOT__dut__DOT__fat_base = __Vdly__tb_bmp__DOT__dut__DOT__fat_base;
    vlSelfRef.tb_bmp__DOT__dut__DOT__data_base = __Vdly__tb_bmp__DOT__dut__DOT__data_base;
    vlSelfRef.tb_bmp__DOT__dut__DOT__root_base = __Vdly__tb_bmp__DOT__dut__DOT__root_base;
    vlSelfRef.tb_bmp__DOT__dut__DOT__root_sectors = __Vdly__tb_bmp__DOT__dut__DOT__root_sectors;
    vlSelfRef.tb_bmp__DOT__dut__DOT__spc = __Vdly__tb_bmp__DOT__dut__DOT__spc;
    vlSelfRef.tb_bmp__DOT__dut__DOT__cluster_sector 
        = __Vdly__tb_bmp__DOT__dut__DOT__cluster_sector;
    vlSelfRef.tb_bmp__DOT__dut__DOT__file_size = __Vdly__tb_bmp__DOT__dut__DOT__file_size;
    vlSelfRef.tb_bmp__DOT__dut__DOT__file_offset = __Vdly__tb_bmp__DOT__dut__DOT__file_offset;
    vlSelfRef.tb_bmp__DOT__dut__DOT__bmp_offset = __Vdly__tb_bmp__DOT__dut__DOT__bmp_offset;
    vlSelfRef.tb_bmp__DOT__dut__DOT__dir_is_fixed = __Vdly__tb_bmp__DOT__dut__DOT__dir_is_fixed;
    vlSelfRef.tb_bmp__DOT__dut__DOT__rgba = __Vdly__tb_bmp__DOT__dut__DOT__rgba;
    vlSelfRef.tb_bmp__DOT__dut__DOT__fat_for_file = __Vdly__tb_bmp__DOT__dut__DOT__fat_for_file;
    vlSelfRef.tb_bmp__DOT__dut__DOT__fixed_root_index 
        = __Vdly__tb_bmp__DOT__dut__DOT__fixed_root_index;
    vlSelfRef.tb_bmp__DOT__dut__DOT__directory_sectors 
        = __Vdly__tb_bmp__DOT__dut__DOT__directory_sectors;
    vlSelfRef.tb_bmp__DOT__dut__DOT__channel = __Vdly__tb_bmp__DOT__dut__DOT__channel;
    vlSelfRef.tb_bmp__DOT__dut__DOT__burst_pixel = __Vdly__tb_bmp__DOT__dut__DOT__burst_pixel;
    vlSelfRef.tb_bmp__DOT__dut__DOT__low_pixel = __Vdly__tb_bmp__DOT__dut__DOT__low_pixel;
    vlSelfRef.tb_bmp__DOT__pixels = __Vdly__tb_bmp__DOT__pixels;
    vlSelfRef.tb_bmp__DOT__last = __Vdly__tb_bmp__DOT__last;
    if (__VdlySet__tb_bmp__DOT__dut__DOT__entry__v0) {
        vlSelfRef.tb_bmp__DOT__dut__DOT__entry[__VdlyDim0__tb_bmp__DOT__dut__DOT__entry__v0] 
            = __VdlyVal__tb_bmp__DOT__dut__DOT__entry__v0;
    }
    if (__VdlySet__tb_bmp__DOT__dut__DOT__header__v0) {
        vlSelfRef.tb_bmp__DOT__dut__DOT__header[__VdlyDim0__tb_bmp__DOT__dut__DOT__header__v0] 
            = __VdlyVal__tb_bmp__DOT__dut__DOT__header__v0;
    }
    vlSelfRef.tb_bmp__DOT__dut__DOT__cluster = __Vdly__tb_bmp__DOT__dut__DOT__cluster;
    vlSelfRef.tb_bmp__DOT__dut__DOT__burst_x = __Vdly__tb_bmp__DOT__dut__DOT__burst_x;
    vlSelfRef.tb_bmp__DOT__dut__DOT__fat16 = __Vdly__tb_bmp__DOT__dut__DOT__fat16;
    vlSelfRef.tb_bmp__DOT__dut__DOT__source_y = __Vdly__tb_bmp__DOT__dut__DOT__source_y;
    vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index = __Vdly__tb_bmp__DOT__dut__DOT__entry_index;
    vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos = __Vdly__tb_bmp__DOT__dut__DOT__dir_pos;
    vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos = __Vdly__tb_bmp__DOT__dut__DOT__byte_pos;
    if (__VdlySet__tb_bmp__DOT__dut__DOT__cache__v0) {
        vlSelfRef.tb_bmp__DOT__dut__DOT__cache[__VdlyDim0__tb_bmp__DOT__dut__DOT__cache__v0] 
            = __VdlyVal__tb_bmp__DOT__dut__DOT__cache__v0;
    }
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
    tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0 
        = (0x1ffU & ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__source_y)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__source_y))));
    vlSelfRef.tb_bmp__DOT__sd_done = 0U;
    vlSelfRef.tb_bmp__DOT__ack = 0U;
    vlSelfRef.tb_bmp__DOT__bvalid = 0U;
    if (((0xaU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state)) 
         & (IData)(vlSelfRef.tb_bmp__DOT__load_ready))) {
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[0U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr;
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr;
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=0 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[0U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        vlSelfRef.tb_bmp__DOT__bursts = ((IData)(1U) 
                                         + vlSelfRef.tb_bmp__DOT__bursts);
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[1U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(1U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(1U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=1 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[1U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        __Vdly__tb_bmp__DOT__ack_delay = 7U;
        vlSelfRef.tb_bmp__DOT__load_ready = 0U;
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[2U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(2U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(2U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=2 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[2U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[3U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(3U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(3U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=3 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[3U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[4U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(4U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(4U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=4 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[4U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[5U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(5U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(5U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=5 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[5U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[6U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(6U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(6U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=6 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[6U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_bmp__DOT__data[7U] 
                          != ((([&]() {
                                        __Vfunc_tb_bmp__DOT__expected__1__a 
                                            = ((IData)(7U) 
                                               + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                        __Vfunc_tb_bmp__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U))));
                                        __Vfunc_tb_bmp__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__1__a, (IData)(0x140U));
                                        __Vfunc_tb_bmp__DOT__expected__1__b 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__x);
                                        __Vfunc_tb_bmp__DOT__expected__1__g 
                                            = (0xffU 
                                               & __Vfunc_tb_bmp__DOT__expected__1__y);
                                        __Vfunc_tb_bmp__DOT__expected__1__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_bmp__DOT__expected__1__x 
                                                  ^ __Vfunc_tb_bmp__DOT__expected__1__y));
                                        __Vfunc_tb_bmp__DOT__expected__1__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_bmp__DOT__expected__1__b) 
                                                        >> 3U))));
                                    }(), (IData)(__Vfunc_tb_bmp__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_bmp__DOT__expected__2__a 
                                        = ((IData)(7U) 
                                           + vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr);
                                    __Vfunc_tb_bmp__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U)));
                                    __Vfunc_tb_bmp__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__expected__2__a, (IData)(0x140U));
                                    __Vfunc_tb_bmp__DOT__expected__2__b 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__x);
                                    __Vfunc_tb_bmp__DOT__expected__2__g 
                                        = (0xffU & __Vfunc_tb_bmp__DOT__expected__2__y);
                                    __Vfunc_tb_bmp__DOT__expected__2__r 
                                        = (0xffU & 
                                           (__Vfunc_tb_bmp__DOT__expected__2__x 
                                            ^ __Vfunc_tb_bmp__DOT__expected__2__y));
                                    __Vfunc_tb_bmp__DOT__expected__2__Vfuncout 
                                        = ((0xf800U 
                                            & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__r) 
                                               << 8U)) 
                                           | ((0x7e0U 
                                               & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__g) 
                                                  << 3U)) 
                                              | (0x1fU 
                                                 & ((IData)(__Vfunc_tb_bmp__DOT__expected__2__b) 
                                                    >> 3U))));
                                }(), (IData)(__Vfunc_tb_bmp__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_bmp.sv:72: Assertion failed in %Ntb_bmp.unnamedblk1: BMP pixel a=%0# j=7 actual=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),18,vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr,
                         32,vlSelfRef.tb_bmp__DOT__data[7U]);
            VL_STOP_MT("sim/p3\\tb_bmp.sv", 72, "", false);
        }
    }
    if (((IData)(vlSelfRef.tb_bmp__DOT__start) & (IData)(vlSelfRef.tb_bmp__DOT__sd_ready))) {
        vlSelfRef.tb_bmp__DOT__sectors = ((IData)(1U) 
                                          + vlSelfRef.tb_bmp__DOT__sectors);
        __Vdly__tb_bmp__DOT__reading = 1U;
        __Vdly__tb_bmp__DOT__sd_ready = 0U;
        __Vdly__tb_bmp__DOT__current_lba = vlSelfRef.tb_bmp__DOT__lba;
        __Vdly__tb_bmp__DOT__index = 0U;
    } else if (vlSelfRef.tb_bmp__DOT__reading) {
        vlSelfRef.tb_bmp__DOT__bvalid = 1U;
        vlSelfRef.tb_bmp__DOT__bindex = (0x1ffU & vlSelfRef.tb_bmp__DOT__index);
        __Vfunc_tb_bmp__DOT__disk__0__i = vlSelfRef.tb_bmp__DOT__index;
        __Vfunc_tb_bmp__DOT__disk__0__l = vlSelfRef.tb_bmp__DOT__current_lba;
        __Vfunc_tb_bmp__DOT__disk__0__c = 0;
        __Vfunc_tb_bmp__DOT__disk__0__entry = 0;
        __Vfunc_tb_bmp__DOT__disk__0__ofs = 0;
        __Vfunc_tb_bmp__DOT__disk__0__pix = 0;
        __Vfunc_tb_bmp__DOT__disk__0__x = 0;
        __Vfunc_tb_bmp__DOT__disk__0__y = 0;
        __Vfunc_tb_bmp__DOT__disk__0__channel = 0;
        __Vfunc_tb_bmp__DOT__disk__0__value = 0;
        __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0U;
        __Vfunc_tb_bmp__DOT__disk__0__f16 = (1U & VL_TESTPLUSARGS_I(
                                                                    std::string{"fat16"}));
        __Vfunc_tb_bmp__DOT__disk__0__mbr = (1U & VL_TESTPLUSARGS_I(
                                                                    std::string{"mbr"}));
        __Vfunc_tb_bmp__DOT__disk__0__rgba = (1U & VL_TESTPLUSARGS_I(
                                                                     std::string{"rgba"}));
        __Vfunc_tb_bmp__DOT__disk__0__top = (1U & VL_TESTPLUSARGS_I(
                                                                    std::string{"top"}));
        if (__Vfunc_tb_bmp__DOT__disk__0__f16) {
            __Vfunc_tb_bmp__DOT__disk__0__root_lba = 5U;
            __Vfunc_tb_bmp__DOT__disk__0__file_lba = 0xeU;
            __Vfunc_tb_bmp__DOT__disk__0__fat_end = 4U;
        } else {
            __Vfunc_tb_bmp__DOT__disk__0__root_lba = 0x11U;
            __Vfunc_tb_bmp__DOT__disk__0__file_lba = 0x19U;
            __Vfunc_tb_bmp__DOT__disk__0__fat_end = 0x10U;
        }
        __Vfunc_tb_bmp__DOT__disk__0__file_bytes = 
            ((IData)(__Vfunc_tb_bmp__DOT__disk__0__rgba)
              ? 0x12c036U : 0xe1036U);
        if (((IData)(__Vfunc_tb_bmp__DOT__disk__0__mbr) 
             & (0U == __Vfunc_tb_bmp__DOT__disk__0__l))) {
            if ((0x1c2U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0xcU;
            } else if ((0x1c7U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 8U;
            } else if ((0x1feU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x55U;
            } else if ((0x1ffU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0xaaU;
            }
        } else {
            if (__Vfunc_tb_bmp__DOT__disk__0__mbr) {
                __Vfunc_tb_bmp__DOT__disk__0__l = (__Vfunc_tb_bmp__DOT__disk__0__l 
                                                   - (IData)(0x800U));
            }
            if ((0U == __Vfunc_tb_bmp__DOT__disk__0__l)) {
                if (((((((((0U == __Vfunc_tb_bmp__DOT__disk__0__i) 
                           | (0xbU == __Vfunc_tb_bmp__DOT__disk__0__i)) 
                          | (0xcU == __Vfunc_tb_bmp__DOT__disk__0__i)) 
                         | (0xdU == __Vfunc_tb_bmp__DOT__disk__0__i)) 
                        | (0xeU == __Vfunc_tb_bmp__DOT__disk__0__i)) 
                       | (0x10U == __Vfunc_tb_bmp__DOT__disk__0__i)) 
                      | (0x24U == __Vfunc_tb_bmp__DOT__disk__0__i)) 
                     | (0x2cU == __Vfunc_tb_bmp__DOT__disk__0__i))) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                        = ((0U == __Vfunc_tb_bmp__DOT__disk__0__i)
                            ? 0xebU : ((0xbU == __Vfunc_tb_bmp__DOT__disk__0__i)
                                        ? 0U : ((0xcU 
                                                 == __Vfunc_tb_bmp__DOT__disk__0__i)
                                                 ? 2U
                                                 : 
                                                ((0xdU 
                                                  == __Vfunc_tb_bmp__DOT__disk__0__i)
                                                  ? 8U
                                                  : 
                                                 ((0xeU 
                                                   == __Vfunc_tb_bmp__DOT__disk__0__i)
                                                   ? 1U
                                                   : 
                                                  ((0x10U 
                                                    == __Vfunc_tb_bmp__DOT__disk__0__i)
                                                    ? 1U
                                                    : 
                                                   ((0x24U 
                                                     == __Vfunc_tb_bmp__DOT__disk__0__i)
                                                     ? 0x10U
                                                     : 2U)))))));
                } else if ((0x1feU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x55U;
                } else if ((0x1ffU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0xaaU;
                }
                if (__Vfunc_tb_bmp__DOT__disk__0__f16) {
                    if ((0x11U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                        __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x10U;
                    } else if ((0x16U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                        __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 4U;
                    } else if ((0x24U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                        __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0U;
                    } else if ((0x2cU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                        __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0U;
                    }
                }
            } else if ((VL_LTES_III(32, 1U, __Vfunc_tb_bmp__DOT__disk__0__l) 
                        & VL_LTES_III(32, __Vfunc_tb_bmp__DOT__disk__0__l, __Vfunc_tb_bmp__DOT__disk__0__fat_end))) {
                __Vfunc_tb_bmp__DOT__disk__0__entry 
                    = (VL_MULS_III(32, (__Vfunc_tb_bmp__DOT__disk__0__l 
                                        - (IData)(1U)), 
                                   ((IData)(__Vfunc_tb_bmp__DOT__disk__0__f16)
                                     ? 0x100U : 0x80U)) 
                       + VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__i, 
                                     ((IData)(__Vfunc_tb_bmp__DOT__disk__0__f16)
                                       ? 2U : 4U)));
                __Vfunc_tb_bmp__DOT__disk__0__value 
                    = ((2U == __Vfunc_tb_bmp__DOT__disk__0__entry)
                        ? 0xfffffffU : ((VL_LTES_III(32, 3U, __Vfunc_tb_bmp__DOT__disk__0__entry) 
                                         & __Vfunc_tb_bmp__DOT__disk__0__entry)
                                         ? (VL_GTES_III(32, __Vfunc_tb_bmp__DOT__disk__0__entry, 
                                                        ((IData)(__Vfunc_tb_bmp__DOT__disk__0__rgba)
                                                          ? 0x25bU
                                                          : 0x1c5U))
                                             ? ((IData)(__Vfunc_tb_bmp__DOT__disk__0__f16)
                                                 ? 0xffffU
                                                 : 0xfffffffU)
                                             : ((IData)(2U) 
                                                + __Vfunc_tb_bmp__DOT__disk__0__entry))
                                         : 0U));
                __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                    = (0xffU & (__Vfunc_tb_bmp__DOT__disk__0__value 
                                >> (0x1fU & VL_MULS_III(32, (IData)(8U), 
                                                        VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__i, 
                                                                       ((IData)(__Vfunc_tb_bmp__DOT__disk__0__f16)
                                                                         ? 2U
                                                                         : 4U))))));
            } else if ((__Vfunc_tb_bmp__DOT__disk__0__l 
                        == __Vfunc_tb_bmp__DOT__disk__0__root_lba)) {
                if ((0U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x41U;
                }
                if ((0xbU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0xfU;
                }
                if ((VL_LTES_III(32, 0x20U, __Vfunc_tb_bmp__DOT__disk__0__i) 
                     & VL_GTES_III(32, 0x27U, __Vfunc_tb_bmp__DOT__disk__0__i))) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                        = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, 0x50494344454d4f20ULL, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_bmp__DOT__disk__0__i 
                                                                      - (IData)(0x20U))))));
                }
                if ((VL_LTES_III(32, 0x3cU, __Vfunc_tb_bmp__DOT__disk__0__i) 
                     & VL_GTES_III(32, 0x3fU, __Vfunc_tb_bmp__DOT__disk__0__i))) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                        = (0xffU & VL_SHIFTR_III(8,32,32, __Vfunc_tb_bmp__DOT__disk__0__file_bytes, 
                                                 VL_MULS_III(32, (IData)(8U), 
                                                             (__Vfunc_tb_bmp__DOT__disk__0__i 
                                                              - (IData)(0x3cU)))));
                }
                if ((0x28U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x42U;
                } else if ((0x29U == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x4dU;
                } else if ((0x2aU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x50U;
                } else if ((0x2bU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x20U;
                } else if ((0x3aU == __Vfunc_tb_bmp__DOT__disk__0__i)) {
                    __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 3U;
                }
            } else if (VL_GTES_III(32, __Vfunc_tb_bmp__DOT__disk__0__l, __Vfunc_tb_bmp__DOT__disk__0__file_lba)) {
                __Vfunc_tb_bmp__DOT__disk__0__c = VL_DIVS_III(32, 
                                                              (__Vfunc_tb_bmp__DOT__disk__0__l 
                                                               - __Vfunc_tb_bmp__DOT__disk__0__file_lba), (IData)(8U));
                if ((0U == VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__c, (IData)(2U)))) {
                    __Vfunc_tb_bmp__DOT__disk__0__ofs 
                        = ((VL_MULS_III(32, (IData)(0x1000U), 
                                        VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__c, (IData)(2U))) 
                            + VL_MULS_III(32, (IData)(0x200U), 
                                          VL_MODDIVS_III(32, 
                                                         (__Vfunc_tb_bmp__DOT__disk__0__l 
                                                          - __Vfunc_tb_bmp__DOT__disk__0__file_lba), (IData)(8U)))) 
                           + __Vfunc_tb_bmp__DOT__disk__0__i);
                    if (VL_GTS_III(32, 0x36U, __Vfunc_tb_bmp__DOT__disk__0__ofs)) {
                        if (((((((((0U == __Vfunc_tb_bmp__DOT__disk__0__ofs) 
                                   | (1U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                                  | (2U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                                 | (3U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                                | (4U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                               | (0xaU == __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                              | (0xeU == __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                             | (0x12U == __Vfunc_tb_bmp__DOT__disk__0__ofs))) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                                = ((0U == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                    ? 0x42U : ((1U 
                                                == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                                ? 0x4dU
                                                : (
                                                   (2U 
                                                    == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                                    ? 0x36U
                                                    : 
                                                   ((3U 
                                                     == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                                     ? 0x10U
                                                     : 
                                                    ((4U 
                                                      == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                                      ? 0xeU
                                                      : 
                                                     ((0xaU 
                                                       == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                                       ? 0x36U
                                                       : 
                                                      ((0xeU 
                                                        == __Vfunc_tb_bmp__DOT__disk__0__ofs)
                                                        ? 0x28U
                                                        : 0x80U)))))));
                        } else if ((0x13U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 2U;
                        } else if ((0x16U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0xe0U;
                        } else if ((0x17U == __Vfunc_tb_bmp__DOT__disk__0__ofs)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 1U;
                        } else if ((0x1aU == __Vfunc_tb_bmp__DOT__disk__0__ofs)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 1U;
                        } else if ((0x1cU == __Vfunc_tb_bmp__DOT__disk__0__ofs)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x18U;
                        }
                        if ((VL_LTES_III(32, 2U, __Vfunc_tb_bmp__DOT__disk__0__ofs) 
                             & VL_GTES_III(32, 5U, __Vfunc_tb_bmp__DOT__disk__0__ofs))) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, __Vfunc_tb_bmp__DOT__disk__0__file_bytes, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_bmp__DOT__disk__0__ofs 
                                                                      - (IData)(2U)))));
                        }
                        if (((0x1cU == __Vfunc_tb_bmp__DOT__disk__0__ofs) 
                             & (IData)(__Vfunc_tb_bmp__DOT__disk__0__rgba))) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0x20U;
                        }
                        if ((((IData)(__Vfunc_tb_bmp__DOT__disk__0__top) 
                              & VL_LTES_III(32, 0x16U, __Vfunc_tb_bmp__DOT__disk__0__ofs)) 
                             & VL_GTES_III(32, 0x19U, __Vfunc_tb_bmp__DOT__disk__0__ofs))) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                                = (0xffU & VL_SHIFTR_III(8,32,32, 0xfffffe20U, 
                                                         VL_MULS_III(32, (IData)(8U), 
                                                                     (__Vfunc_tb_bmp__DOT__disk__0__ofs 
                                                                      - (IData)(0x16U)))));
                        }
                        if ((VL_TESTPLUSARGS_I(std::string{"bad"}) 
                             && (0x1eU == __Vfunc_tb_bmp__DOT__disk__0__ofs))) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 1U;
                        }
                    } else {
                        __Vfunc_tb_bmp__DOT__disk__0__pix 
                            = VL_DIVS_III(32, (__Vfunc_tb_bmp__DOT__disk__0__ofs 
                                               - (IData)(0x36U)), 
                                          ((IData)(__Vfunc_tb_bmp__DOT__disk__0__rgba)
                                            ? 4U : 3U));
                        __Vfunc_tb_bmp__DOT__disk__0__x 
                            = VL_MODDIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__pix, (IData)(0x280U));
                        __Vfunc_tb_bmp__DOT__disk__0__y 
                            = ((IData)(__Vfunc_tb_bmp__DOT__disk__0__top)
                                ? VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__pix, (IData)(0x280U))
                                : ((IData)(0x1dfU) 
                                   - VL_DIVS_III(32, __Vfunc_tb_bmp__DOT__disk__0__pix, (IData)(0x280U))));
                        __Vfunc_tb_bmp__DOT__disk__0__channel 
                            = VL_MODDIVS_III(32, (__Vfunc_tb_bmp__DOT__disk__0__ofs 
                                                  - (IData)(0x36U)), 
                                             ((IData)(__Vfunc_tb_bmp__DOT__disk__0__rgba)
                                               ? 4U
                                               : 3U));
                        if ((0U == __Vfunc_tb_bmp__DOT__disk__0__channel)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                                = (0xffU & __Vfunc_tb_bmp__DOT__disk__0__x);
                        } else if ((1U == __Vfunc_tb_bmp__DOT__disk__0__channel)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                                = (0xffU & __Vfunc_tb_bmp__DOT__disk__0__y);
                        } else if ((2U == __Vfunc_tb_bmp__DOT__disk__0__channel)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout 
                                = (0xffU & (__Vfunc_tb_bmp__DOT__disk__0__x 
                                            ^ __Vfunc_tb_bmp__DOT__disk__0__y));
                        } else if ((3U == __Vfunc_tb_bmp__DOT__disk__0__channel)) {
                            __Vfunc_tb_bmp__DOT__disk__0__Vfuncout = 0xffU;
                        }
                    }
                }
            }
        }
        vlSelfRef.tb_bmp__DOT__bdata = __Vfunc_tb_bmp__DOT__disk__0__Vfuncout;
        if ((0x1ffU == vlSelfRef.tb_bmp__DOT__index)) {
            __Vdly__tb_bmp__DOT__reading = 0U;
        } else {
            __Vdly__tb_bmp__DOT__index = ((IData)(1U) 
                                          + vlSelfRef.tb_bmp__DOT__index);
        }
    } else if ((1U & (~ (IData)(vlSelfRef.tb_bmp__DOT__sd_ready)))) {
        vlSelfRef.tb_bmp__DOT__sd_done = 1U;
        __Vdly__tb_bmp__DOT__sd_ready = 1U;
    }
    if (VL_LTS_III(32, 0U, vlSelfRef.tb_bmp__DOT__ack_delay)) {
        __Vdly__tb_bmp__DOT__ack_delay = (vlSelfRef.tb_bmp__DOT__ack_delay 
                                          - (IData)(1U));
        if ((1U == vlSelfRef.tb_bmp__DOT__ack_delay)) {
            vlSelfRef.tb_bmp__DOT__ack = 1U;
            vlSelfRef.tb_bmp__DOT__load_ready = 1U;
        }
    }
    vlSelfRef.tb_bmp__DOT__dut__DOT__target_addr = 
        (0x3ffffU & (VL_SHIFTL_III(18,18,32, tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0, 8U) 
                     + (VL_SHIFTL_III(18,18,32, tb_bmp__DOT__dut__DOT____VdfgRegularize_h5b62b4c5_1_0, 6U) 
                        + ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__burst_x) 
                           << 3U))));
    vlSelfRef.tb_bmp__DOT__data[0U] = __Vdly__tb_bmp__DOT__data[0U];
    vlSelfRef.tb_bmp__DOT__data[1U] = __Vdly__tb_bmp__DOT__data[1U];
    vlSelfRef.tb_bmp__DOT__data[2U] = __Vdly__tb_bmp__DOT__data[2U];
    vlSelfRef.tb_bmp__DOT__data[3U] = __Vdly__tb_bmp__DOT__data[3U];
    vlSelfRef.tb_bmp__DOT__data[4U] = __Vdly__tb_bmp__DOT__data[4U];
    vlSelfRef.tb_bmp__DOT__data[5U] = __Vdly__tb_bmp__DOT__data[5U];
    vlSelfRef.tb_bmp__DOT__data[6U] = __Vdly__tb_bmp__DOT__data[6U];
    vlSelfRef.tb_bmp__DOT__data[7U] = __Vdly__tb_bmp__DOT__data[7U];
    vlSelfRef.tb_bmp__DOT__dut__DOT__pending_addr = __Vdly__tb_bmp__DOT__dut__DOT__pending_addr;
    vlSelfRef.tb_bmp__DOT__start = __Vdly__tb_bmp__DOT__start;
    vlSelfRef.tb_bmp__DOT__lba = __Vdly__tb_bmp__DOT__lba;
    vlSelfRef.tb_bmp__DOT__ack_delay = __Vdly__tb_bmp__DOT__ack_delay;
    vlSelfRef.tb_bmp__DOT__reading = __Vdly__tb_bmp__DOT__reading;
    vlSelfRef.tb_bmp__DOT__sd_ready = __Vdly__tb_bmp__DOT__sd_ready;
    vlSelfRef.tb_bmp__DOT__current_lba = __Vdly__tb_bmp__DOT__current_lba;
    vlSelfRef.tb_bmp__DOT__index = __Vdly__tb_bmp__DOT__index;
    vlSelfRef.tb_bmp__DOT__dut__DOT__state = __Vdly__tb_bmp__DOT__dut__DOT__state;
    vlSelfRef.tb_bmp__DOT__dut__DOT__cache_byte = vlSelfRef.tb_bmp__DOT__dut__DOT__cache
        [(0x1ffU & ((0xdU == (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__state))
                     ? ((IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__dir_pos) 
                        + (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__entry_index))
                     : (IData)(vlSelfRef.tb_bmp__DOT__dut__DOT__byte_pos)))];
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
}
