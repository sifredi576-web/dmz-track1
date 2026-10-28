// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_media.h for the primary calling header

#include "Vtb_media__pch.h"
#include "Vtb_media__Syms.h"
#include "Vtb_media___024root.h"

void Vtb_media___024root___ctor_var_reset(Vtb_media___024root* vlSelf);

Vtb_media___024root::Vtb_media___024root(Vtb_media__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_media___024root___ctor_var_reset(this);
}

void Vtb_media___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_media___024root::~Vtb_media___024root() {
}
