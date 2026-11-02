// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_platform_media.h for the primary calling header

#include "Vtb_platform_media__pch.h"
#include "Vtb_platform_media__Syms.h"
#include "Vtb_platform_media___024root.h"

void Vtb_platform_media___024root___ctor_var_reset(Vtb_platform_media___024root* vlSelf);

Vtb_platform_media___024root::Vtb_platform_media___024root(Vtb_platform_media__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_platform_media___024root___ctor_var_reset(this);
}

void Vtb_platform_media___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_platform_media___024root::~Vtb_platform_media___024root() {
}
