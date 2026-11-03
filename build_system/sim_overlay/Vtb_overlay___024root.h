// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_overlay.h for the primary calling header

#ifndef VERILATED_VTB_OVERLAY___024ROOT_H_
#define VERILATED_VTB_OVERLAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_overlay__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_overlay___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_overlay__DOT__ink;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_overlay__DOT__x;
    SData/*9:0*/ tb_overlay__DOT__y;
    VlWide<5>/*159:0*/ tb_overlay__DOT__s;
    IData/*23:0*/ tb_overlay__DOT__color;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_overlay__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_overlay___024root(Vtb_overlay__Syms* symsp, const char* v__name);
    ~Vtb_overlay___024root();
    VL_UNCOPYABLE(Vtb_overlay___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
