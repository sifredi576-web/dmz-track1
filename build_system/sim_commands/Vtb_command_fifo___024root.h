// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_command_fifo.h for the primary calling header

#ifndef VERILATED_VTB_COMMAND_FIFO___024ROOT_H_
#define VERILATED_VTB_COMMAND_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_command_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_command_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_command_fifo__DOT__src;
    CData/*0:0*/ tb_command_fifo__DOT__dst;
    CData/*0:0*/ tb_command_fifo__DOT__reset;
    CData/*0:0*/ tb_command_fifo__DOT__push;
    CData/*0:0*/ tb_command_fifo__DOT__empty;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__wp;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__rp;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__wgray;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__rgray;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__rg1;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__rg2;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__wg1;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__wg2;
    CData/*0:0*/ tb_command_fifo__DOT__dut__DOT__push;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__rn;
    CData/*2:0*/ tb_command_fifo__DOT__dut__DOT__wn;
    CData/*1:0*/ __VdlyDim0__tb_command_fifo__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__tb_command_fifo__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_command_fifo__DOT__dst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_command_fifo__DOT__src__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_command_fifo__DOT__data;
    IData/*31:0*/ tb_command_fifo__DOT__result;
    IData/*31:0*/ tb_command_fifo__DOT__sent;
    IData/*31:0*/ tb_command_fifo__DOT__received;
    IData/*31:0*/ __VdlyVal__tb_command_fifo__DOT__dut__DOT__mem__v0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4> tb_command_fifo__DOT__dut__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2a0bf16b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_command_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_command_fifo___024root(Vtb_command_fifo__Syms* symsp, const char* v__name);
    ~Vtb_command_fifo___024root();
    VL_UNCOPYABLE(Vtb_command_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
