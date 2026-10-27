// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_wav.h for the primary calling header

#ifndef VERILATED_VTB_WAV___024ROOT_H_
#define VERILATED_VTB_WAV___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_wav__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_wav___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_wav__DOT__clk;
    CData/*0:0*/ tb_wav__DOT__reset;
    CData/*0:0*/ tb_wav__DOT__start;
    CData/*0:0*/ tb_wav__DOT__ready;
    CData/*0:0*/ tb_wav__DOT__pcm_valid;
    CData/*0:0*/ tb_wav__DOT__done;
    CData/*7:0*/ tb_wav__DOT__error;
    CData/*0:0*/ tb_wav__DOT__valid;
    CData/*0:0*/ tb_wav__DOT__pcm_ready;
    CData/*7:0*/ tb_wav__DOT__source_error;
    CData/*7:0*/ tb_wav__DOT____Vcellinp__dut__byte_data;
    CData/*0:0*/ tb_wav__DOT__held;
    CData/*3:0*/ tb_wav__DOT__dut__DOT__state;
    CData/*3:0*/ tb_wav__DOT__dut__DOT__index;
    CData/*0:0*/ tb_wav__DOT__dut__DOT__chunk_odd;
    CData/*0:0*/ tb_wav__DOT__dut__DOT__format_seen;
    CData/*1:0*/ tb_wav__DOT__dut__DOT__channel_byte;
    CData/*0:0*/ tb_wav__DOT__dut__DOT__consume;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wav__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h69dc0e1f__1;
    CData/*0:0*/ __Vtrigprevexpr_h041a9367__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_wav__DOT__used;
    IData/*31:0*/ tb_wav__DOT__sent;
    IData/*31:0*/ tb_wav__DOT__received;
    IData/*31:0*/ tb_wav__DOT__cycle;
    IData/*31:0*/ tb_wav__DOT__data_size_at;
    IData/*31:0*/ tb_wav__DOT__length;
    IData/*31:0*/ tb_wav__DOT__pair;
    IData/*31:0*/ tb_wav__DOT__pairs;
    IData/*31:0*/ tb_wav__DOT__total;
    IData/*31:0*/ tb_wav__DOT__held_pair;
    IData/*31:0*/ tb_wav__DOT__expected_error;
    IData/*31:0*/ tb_wav__DOT__dut__DOT__offset;
    IData/*31:0*/ tb_wav__DOT__dut__DOT__length;
    IData/*31:0*/ tb_wav__DOT__dut__DOT__riff_end;
    IData/*31:0*/ tb_wav__DOT__dut__DOT__remaining;
    IData/*23:0*/ tb_wav__DOT__dut__DOT__assembly;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__22__Vfuncout;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__23__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ tb_wav__DOT__dut__DOT__riff_length;
    QData/*32:0*/ tb_wav__DOT__dut__DOT__chunk_end;
    VlUnpacked<CData/*7:0*/, 256> tb_wav__DOT__file_data;
    VlUnpacked<CData/*7:0*/, 16> tb_wav__DOT__dut__DOT__header;
    std::string tb_wav__DOT__test_case;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf9582dc2__0;
    VlTriggerScheduler __VtrigSched_hbdec5951__0;
    VlTriggerScheduler __VtrigSched_h642ddb89__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_wav__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_wav___024root(Vtb_wav__Syms* symsp, const char* v__name);
    ~Vtb_wav___024root();
    VL_UNCOPYABLE(Vtb_wav___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
