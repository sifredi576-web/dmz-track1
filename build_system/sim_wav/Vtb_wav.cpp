// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_wav__pch.h"

//============================================================
// Constructors

Vtb_wav::Vtb_wav(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_wav__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_wav::Vtb_wav(const char* _vcname__)
    : Vtb_wav(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_wav::~Vtb_wav() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_wav___024root___eval_debug_assertions(Vtb_wav___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_wav___024root___eval_static(Vtb_wav___024root* vlSelf);
void Vtb_wav___024root___eval_initial(Vtb_wav___024root* vlSelf);
void Vtb_wav___024root___eval_settle(Vtb_wav___024root* vlSelf);
void Vtb_wav___024root___eval(Vtb_wav___024root* vlSelf);

void Vtb_wav::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_wav::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_wav___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_wav___024root___eval_static(&(vlSymsp->TOP));
        Vtb_wav___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_wav___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_wav___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_wav::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_wav::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_wav::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_wav___024root___eval_final(Vtb_wav___024root* vlSelf);

VL_ATTR_COLD void Vtb_wav::final() {
    Vtb_wav___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_wav::hierName() const { return vlSymsp->name(); }
const char* Vtb_wav::modelName() const { return "Vtb_wav"; }
unsigned Vtb_wav::threads() const { return 1; }
void Vtb_wav::prepareClone() const { contextp()->prepareClone(); }
void Vtb_wav::atClone() const {
    contextp()->threadPoolpOnClone();
}
