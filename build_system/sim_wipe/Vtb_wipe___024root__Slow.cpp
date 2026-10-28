// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wipe.h for the primary calling header

#include "Vtb_wipe__pch.h"
#include "Vtb_wipe__Syms.h"
#include "Vtb_wipe___024root.h"

void Vtb_wipe___024root___ctor_var_reset(Vtb_wipe___024root* vlSelf);

Vtb_wipe___024root::Vtb_wipe___024root(Vtb_wipe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_wipe___024root___ctor_var_reset(this);
}

void Vtb_wipe___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_wipe___024root::~Vtb_wipe___024root() {
}
