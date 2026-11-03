// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_scaling_course__pch.h"

//============================================================
// Constructors

Vtb_scaling_course::Vtb_scaling_course(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_scaling_course__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_scaling_course::Vtb_scaling_course(const char* _vcname__)
    : Vtb_scaling_course(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_scaling_course::~Vtb_scaling_course() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_scaling_course___024root___eval_debug_assertions(Vtb_scaling_course___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_scaling_course___024root___eval_static(Vtb_scaling_course___024root* vlSelf);
void Vtb_scaling_course___024root___eval_initial(Vtb_scaling_course___024root* vlSelf);
void Vtb_scaling_course___024root___eval_settle(Vtb_scaling_course___024root* vlSelf);
void Vtb_scaling_course___024root___eval(Vtb_scaling_course___024root* vlSelf);

void Vtb_scaling_course::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_scaling_course::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_scaling_course___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_scaling_course___024root___eval_static(&(vlSymsp->TOP));
        Vtb_scaling_course___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_scaling_course___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_scaling_course___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_scaling_course::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_scaling_course::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_scaling_course::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_scaling_course___024root___eval_final(Vtb_scaling_course___024root* vlSelf);

VL_ATTR_COLD void Vtb_scaling_course::final() {
    Vtb_scaling_course___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_scaling_course::hierName() const { return vlSymsp->name(); }
const char* Vtb_scaling_course::modelName() const { return "Vtb_scaling_course"; }
unsigned Vtb_scaling_course::threads() const { return 1; }
void Vtb_scaling_course::prepareClone() const { contextp()->prepareClone(); }
void Vtb_scaling_course::atClone() const {
    contextp()->threadPoolpOnClone();
}
