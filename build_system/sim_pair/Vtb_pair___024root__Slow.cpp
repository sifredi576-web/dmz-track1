// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pair.h for the primary calling header

#include "Vtb_pair__pch.h"
#include "Vtb_pair__Syms.h"
#include "Vtb_pair___024root.h"

void Vtb_pair___024root___ctor_var_reset(Vtb_pair___024root* vlSelf);

Vtb_pair___024root::Vtb_pair___024root(Vtb_pair__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_pair___024root___ctor_var_reset(this);
}

void Vtb_pair___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_pair___024root::~Vtb_pair___024root() {
}
