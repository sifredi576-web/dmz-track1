// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scene_loader.h for the primary calling header

#ifndef VERILATED_VTB_SCENE_LOADER___024ROOT_H_
#define VERILATED_VTB_SCENE_LOADER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scene_loader__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scene_loader___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_scene_loader__DOT__clk;
    CData/*0:0*/ tb_scene_loader__DOT__reset;
    CData/*0:0*/ tb_scene_loader__DOT__start;
    CData/*0:0*/ tb_scene_loader__DOT__stream_error;
    CData/*0:0*/ tb_scene_loader__DOT__bv;
    CData/*0:0*/ tb_scene_loader__DOT__last;
    CData/*7:0*/ tb_scene_loader__DOT__data;
    CData/*0:0*/ tb_scene_loader__DOT__br;
    CData/*0:0*/ tb_scene_loader__DOT__busy;
    CData/*0:0*/ tb_scene_loader__DOT__ready;
    CData/*0:0*/ tb_scene_loader__DOT__commit;
    CData/*7:0*/ tb_scene_loader__DOT__error;
    CData/*6:0*/ tb_scene_loader__DOT__resources;
    CData/*5:0*/ tb_scene_loader__DOT__pages;
    CData/*7:0*/ tb_scene_loader__DOT__widgets;
    CData/*7:0*/ tb_scene_loader__DOT__run__Vstatic__value;
    CData/*0:0*/ tb_scene_loader__DOT__dut__DOT__header_done;
    CData/*0:0*/ tb_scene_loader__DOT__dut__DOT__bad_prefix;
    CData/*0:0*/ tb_scene_loader__DOT__dut__DOT__bad_reserved;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scene_loader__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_scene_loader__DOT__dut__DOT__count_sum;
    IData/*31:0*/ tb_scene_loader__DOT__cycle;
    IData/*31:0*/ tb_scene_loader__DOT__writes;
    IData/*31:0*/ tb_scene_loader__DOT__commits;
    IData/*31:0*/ tb_scene_loader__DOT__run__Vstatic__n;
    IData/*20:0*/ tb_scene_loader__DOT__dut__DOT__position;
    IData/*31:0*/ tb_scene_loader__DOT__dut__DOT__expected_crc;
    IData/*31:0*/ tb_scene_loader__DOT__dut__DOT__crc;
    IData/*20:0*/ tb_scene_loader__DOT__dut__DOT__payload_bytes;
    IData/*31:0*/ tb_scene_loader__DOT__dut__DOT__header_length;
    IData/*31:0*/ tb_scene_loader__DOT__dut__DOT__header_crc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 3424> tb_scene_loader__DOT__course;
    VlUnpacked<CData/*7:0*/, 320> tb_scene_loader__DOT__exhibit;
    VlUnpacked<CData/*7:0*/, 32> tb_scene_loader__DOT__dut__DOT__header;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc1fc6e86__0;
    VlTriggerScheduler __VtrigSched_hc1fc6ec7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_scene_loader__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scene_loader___024root(Vtb_scene_loader__Syms* symsp, const char* v__name);
    ~Vtb_scene_loader___024root();
    VL_UNCOPYABLE(Vtb_scene_loader___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
