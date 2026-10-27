// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_gallery__pch.h"

//============================================================
// Constructors

Vtb_gallery::Vtb_gallery(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_gallery__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_gallery::Vtb_gallery(const char* _vcname__)
    : Vtb_gallery(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_gallery::~Vtb_gallery() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_gallery___024root___eval_debug_assertions(Vtb_gallery___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_gallery___024root___eval_static(Vtb_gallery___024root* vlSelf);
void Vtb_gallery___024root___eval_initial(Vtb_gallery___024root* vlSelf);
void Vtb_gallery___024root___eval_settle(Vtb_gallery___024root* vlSelf);
void Vtb_gallery___024root___eval(Vtb_gallery___024root* vlSelf);

void Vtb_gallery::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_gallery::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_gallery___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_gallery___024root___eval_static(&(vlSymsp->TOP));
        Vtb_gallery___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_gallery___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_gallery___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_gallery::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_gallery::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_gallery::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_gallery___024root___eval_final(Vtb_gallery___024root* vlSelf);

VL_ATTR_COLD void Vtb_gallery::final() {
    Vtb_gallery___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_gallery::hierName() const { return vlSymsp->name(); }
const char* Vtb_gallery::modelName() const { return "Vtb_gallery"; }
unsigned Vtb_gallery::threads() const { return 1; }
void Vtb_gallery::prepareClone() const { contextp()->prepareClone(); }
void Vtb_gallery::atClone() const {
    contextp()->threadPoolpOnClone();
}
