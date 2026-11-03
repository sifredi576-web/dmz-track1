// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_trigger__pch.h"

//============================================================
// Constructors

Vtb_trigger::Vtb_trigger(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_trigger__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_trigger::Vtb_trigger(const char* _vcname__)
    : Vtb_trigger(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_trigger::~Vtb_trigger() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_trigger___024root___eval_debug_assertions(Vtb_trigger___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_trigger___024root___eval_static(Vtb_trigger___024root* vlSelf);
void Vtb_trigger___024root___eval_initial(Vtb_trigger___024root* vlSelf);
void Vtb_trigger___024root___eval_settle(Vtb_trigger___024root* vlSelf);
void Vtb_trigger___024root___eval(Vtb_trigger___024root* vlSelf);

void Vtb_trigger::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_trigger::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_trigger___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_trigger___024root___eval_static(&(vlSymsp->TOP));
        Vtb_trigger___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_trigger___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_trigger___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_trigger::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_trigger::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_trigger::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_trigger___024root___eval_final(Vtb_trigger___024root* vlSelf);

VL_ATTR_COLD void Vtb_trigger::final() {
    Vtb_trigger___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_trigger::hierName() const { return vlSymsp->name(); }
const char* Vtb_trigger::modelName() const { return "Vtb_trigger"; }
unsigned Vtb_trigger::threads() const { return 1; }
void Vtb_trigger::prepareClone() const { contextp()->prepareClone(); }
void Vtb_trigger::atClone() const {
    contextp()->threadPoolpOnClone();
}
