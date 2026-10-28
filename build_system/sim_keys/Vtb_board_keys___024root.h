// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_board_keys.h for the primary calling header

#ifndef VERILATED_VTB_BOARD_KEYS___024ROOT_H_
#define VERILATED_VTB_BOARD_KEYS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_board_keys__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_board_keys___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_board_keys__DOT__clk;
    CData/*0:0*/ tb_board_keys__DOT__reset;
    CData/*3:0*/ tb_board_keys__DOT__row_low;
    CData/*3:0*/ tb_board_keys__DOT__col_in;
    CData/*0:0*/ tb_board_keys__DOT__kv;
    CData/*3:0*/ tb_board_keys__DOT__code;
    CData/*0:0*/ tb_board_keys__DOT__uv;
    CData/*7:0*/ tb_board_keys__DOT__ub;
    CData/*0:0*/ tb_board_keys__DOT__cv;
    CData/*7:0*/ tb_board_keys__DOT__cb;
    CData/*0:0*/ tb_board_keys__DOT__paused;
    CData/*3:0*/ tb_board_keys__DOT__volume;
    CData/*7:0*/ tb_board_keys__DOT__previous_command;
    CData/*7:0*/ tb_board_keys__DOT__last_command;
    CData/*3:0*/ tb_board_keys__DOT__dut__DOT__ticks;
    CData/*1:0*/ tb_board_keys__DOT__dut__DOT__row;
    CData/*3:0*/ tb_board_keys__DOT__dut__DOT__col_meta;
    CData/*3:0*/ tb_board_keys__DOT__dut__DOT__col_sync;
    CData/*2:0*/ tb_board_keys__DOT__dut__DOT__stable_count;
    CData/*2:0*/ tb_board_keys__DOT__dut__DOT__release_count;
    CData/*0:0*/ tb_board_keys__DOT__dut__DOT__armed;
    CData/*0:0*/ tb_board_keys__DOT__merge__DOT__pending;
    CData/*7:0*/ tb_board_keys__DOT__merge__DOT__held;
    CData/*0:0*/ tb_board_keys__DOT__merge__DOT__mapped;
    CData/*7:0*/ tb_board_keys__DOT__merge__DOT__decoded;
    CData/*1:0*/ tb_board_keys__DOT__controls__DOT__mode;
    CData/*0:0*/ tb_board_keys__DOT__controls__DOT__restart;
    CData/*0:0*/ tb_board_keys__DOT__controls__DOT__beep_phase;
    CData/*1:0*/ tb_board_keys__DOT__controls__DOT__ms;
    CData/*1:0*/ tb_board_keys__DOT__controls__DOT__cs;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_board_keys__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_board_keys__DOT__kv__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_board_keys__DOT__pressed;
    SData/*15:0*/ tb_board_keys__DOT__dut__DOT__scan;
    SData/*15:0*/ tb_board_keys__DOT__dut__DOT__candidate;
    SData/*15:0*/ tb_board_keys__DOT__dut__DOT__complete;
    SData/*15:0*/ tb_board_keys__DOT__controls__DOT__restart_count;
    IData/*31:0*/ tb_board_keys__DOT__events;
    IData/*31:0*/ tb_board_keys__DOT__commands;
    IData/*31:0*/ tb_board_keys__DOT__last_key;
    IData/*24:0*/ tb_board_keys__DOT__controls__DOT__second_count;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h13cda066__0;
    VlTriggerScheduler __VtrigSched_h76dba12b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_board_keys__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_board_keys___024root(Vtb_board_keys__Syms* symsp, const char* v__name);
    ~Vtb_board_keys___024root();
    VL_UNCOPYABLE(Vtb_board_keys___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
