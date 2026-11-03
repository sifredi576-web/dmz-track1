// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_overlay.h for the primary calling header

#include "Vtb_overlay__pch.h"
#include "Vtb_overlay__Syms.h"
#include "Vtb_overlay___024root.h"

void Vtb_overlay___024root___ctor_var_reset(Vtb_overlay___024root* vlSelf);

Vtb_overlay___024root::Vtb_overlay___024root(Vtb_overlay__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_overlay___024root___ctor_var_reset(this);
}

void Vtb_overlay___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_overlay___024root::~Vtb_overlay___024root() {
}
