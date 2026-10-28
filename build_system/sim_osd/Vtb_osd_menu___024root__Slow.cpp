// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_osd_menu.h for the primary calling header

#include "Vtb_osd_menu__pch.h"
#include "Vtb_osd_menu__Syms.h"
#include "Vtb_osd_menu___024root.h"

void Vtb_osd_menu___024root___ctor_var_reset(Vtb_osd_menu___024root* vlSelf);

Vtb_osd_menu___024root::Vtb_osd_menu___024root(Vtb_osd_menu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_osd_menu___024root___ctor_var_reset(this);
}

void Vtb_osd_menu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_osd_menu___024root::~Vtb_osd_menu___024root() {
}
