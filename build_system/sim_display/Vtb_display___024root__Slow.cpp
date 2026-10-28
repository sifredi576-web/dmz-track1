// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_display.h for the primary calling header

#include "Vtb_display__pch.h"
#include "Vtb_display__Syms.h"
#include "Vtb_display___024root.h"

void Vtb_display___024root___ctor_var_reset(Vtb_display___024root* vlSelf);

Vtb_display___024root::Vtb_display___024root(Vtb_display__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_display___024root___ctor_var_reset(this);
}

void Vtb_display___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_display___024root::~Vtb_display___024root() {
}
