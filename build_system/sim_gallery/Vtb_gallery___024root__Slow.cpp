// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gallery.h for the primary calling header

#include "Vtb_gallery__pch.h"
#include "Vtb_gallery__Syms.h"
#include "Vtb_gallery___024root.h"

void Vtb_gallery___024root___ctor_var_reset(Vtb_gallery___024root* vlSelf);

Vtb_gallery___024root::Vtb_gallery___024root(Vtb_gallery__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_gallery___024root___ctor_var_reset(this);
}

void Vtb_gallery___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_gallery___024root::~Vtb_gallery___024root() {
}
