// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system_control.h for the primary calling header

#include "Vtb_system_control__pch.h"
#include "Vtb_system_control__Syms.h"
#include "Vtb_system_control___024root.h"

void Vtb_system_control___024root___ctor_var_reset(Vtb_system_control___024root* vlSelf);

Vtb_system_control___024root::Vtb_system_control___024root(Vtb_system_control__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_system_control___024root___ctor_var_reset(this);
}

void Vtb_system_control___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_system_control___024root::~Vtb_system_control___024root() {
}
