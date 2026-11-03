// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_trigger.h for the primary calling header

#include "Vtb_trigger__pch.h"
#include "Vtb_trigger__Syms.h"
#include "Vtb_trigger___024root.h"

void Vtb_trigger___024root___ctor_var_reset(Vtb_trigger___024root* vlSelf);

Vtb_trigger___024root::Vtb_trigger___024root(Vtb_trigger__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_trigger___024root___ctor_var_reset(this);
}

void Vtb_trigger___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_trigger___024root::~Vtb_trigger___024root() {
}
