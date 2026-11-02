// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_pair__pch.h"

//============================================================
// Constructors

Vtb_pair::Vtb_pair(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_pair__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_pair::Vtb_pair(const char* _vcname__)
    : Vtb_pair(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_pair::~Vtb_pair() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_pair___024root___eval_debug_assertions(Vtb_pair___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_pair___024root___eval_static(Vtb_pair___024root* vlSelf);
void Vtb_pair___024root___eval_initial(Vtb_pair___024root* vlSelf);
void Vtb_pair___024root___eval_settle(Vtb_pair___024root* vlSelf);
void Vtb_pair___024root___eval(Vtb_pair___024root* vlSelf);

void Vtb_pair::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_pair::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_pair___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_pair___024root___eval_static(&(vlSymsp->TOP));
        Vtb_pair___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_pair___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_pair___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_pair::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_pair::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_pair::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_pair___024root___eval_final(Vtb_pair___024root* vlSelf);

VL_ATTR_COLD void Vtb_pair::final() {
    Vtb_pair___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_pair::hierName() const { return vlSymsp->name(); }
const char* Vtb_pair::modelName() const { return "Vtb_pair"; }
unsigned Vtb_pair::threads() const { return 1; }
void Vtb_pair::prepareClone() const { contextp()->prepareClone(); }
void Vtb_pair::atClone() const {
    contextp()->threadPoolpOnClone();
}
