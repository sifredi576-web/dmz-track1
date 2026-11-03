// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_widescreen.h for the primary calling header

#include "Vtb_widescreen__pch.h"
#include "Vtb_widescreen__Syms.h"
#include "Vtb_widescreen___024root.h"

void Vtb_widescreen___024root___ctor_var_reset(Vtb_widescreen___024root* vlSelf);

Vtb_widescreen___024root::Vtb_widescreen___024root(Vtb_widescreen__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_widescreen___024root___ctor_var_reset(this);
}

void Vtb_widescreen___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_widescreen___024root::~Vtb_widescreen___024root() {
}
