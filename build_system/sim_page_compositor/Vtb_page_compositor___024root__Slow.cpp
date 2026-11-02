// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_page_compositor.h for the primary calling header

#include "Vtb_page_compositor__pch.h"
#include "Vtb_page_compositor__Syms.h"
#include "Vtb_page_compositor___024root.h"

void Vtb_page_compositor___024root___ctor_var_reset(Vtb_page_compositor___024root* vlSelf);

Vtb_page_compositor___024root::Vtb_page_compositor___024root(Vtb_page_compositor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_page_compositor___024root___ctor_var_reset(this);
}

void Vtb_page_compositor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_page_compositor___024root::~Vtb_page_compositor___024root() {
}
