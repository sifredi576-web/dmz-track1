// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaler.h for the primary calling header

#include "Vtb_scaler__pch.h"
#include "Vtb_scaler__Syms.h"
#include "Vtb_scaler___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__stl(Vtb_scaler___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scaler___024root___eval_triggers__stl(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_triggers__stl\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_scaler___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
