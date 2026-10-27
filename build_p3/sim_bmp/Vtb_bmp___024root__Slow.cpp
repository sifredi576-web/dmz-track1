// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmp.h for the primary calling header

#include "Vtb_bmp__pch.h"
#include "Vtb_bmp__Syms.h"
#include "Vtb_bmp___024root.h"

void Vtb_bmp___024root___ctor_var_reset(Vtb_bmp___024root* vlSelf);

Vtb_bmp___024root::Vtb_bmp___024root(Vtb_bmp__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_bmp___024root___ctor_var_reset(this);
}

void Vtb_bmp___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_bmp___024root::~Vtb_bmp___024root() {
}
