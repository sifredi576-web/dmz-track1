// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaler.h for the primary calling header

#include "Vtb_scaler__pch.h"
#include "Vtb_scaler__Syms.h"
#include "Vtb_scaler___024root.h"

void Vtb_scaler___024root___ctor_var_reset(Vtb_scaler___024root* vlSelf);

Vtb_scaler___024root::Vtb_scaler___024root(Vtb_scaler__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_scaler___024root___ctor_var_reset(this);
}

void Vtb_scaler___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_scaler___024root::~Vtb_scaler___024root() {
}
