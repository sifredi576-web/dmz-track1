// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wav.h for the primary calling header

#include "Vtb_wav__pch.h"
#include "Vtb_wav__Syms.h"
#include "Vtb_wav___024root.h"

void Vtb_wav___024root___ctor_var_reset(Vtb_wav___024root* vlSelf);

Vtb_wav___024root::Vtb_wav___024root(Vtb_wav__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_wav___024root___ctor_var_reset(this);
}

void Vtb_wav___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_wav___024root::~Vtb_wav___024root() {
}
