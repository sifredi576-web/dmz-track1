// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ui_keys.h for the primary calling header

#include "Vtb_ui_keys__pch.h"
#include "Vtb_ui_keys__Syms.h"
#include "Vtb_ui_keys___024root.h"

void Vtb_ui_keys___024root___ctor_var_reset(Vtb_ui_keys___024root* vlSelf);

Vtb_ui_keys___024root::Vtb_ui_keys___024root(Vtb_ui_keys__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ui_keys___024root___ctor_var_reset(this);
}

void Vtb_ui_keys___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ui_keys___024root::~Vtb_ui_keys___024root() {
}
