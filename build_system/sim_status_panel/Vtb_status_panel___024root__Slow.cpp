// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_status_panel.h for the primary calling header

#include "Vtb_status_panel__pch.h"
#include "Vtb_status_panel__Syms.h"
#include "Vtb_status_panel___024root.h"

void Vtb_status_panel___024root___ctor_var_reset(Vtb_status_panel___024root* vlSelf);

Vtb_status_panel___024root::Vtb_status_panel___024root(Vtb_status_panel__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_status_panel___024root___ctor_var_reset(this);
}

void Vtb_status_panel___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_status_panel___024root::~Vtb_status_panel___024root() {
}
