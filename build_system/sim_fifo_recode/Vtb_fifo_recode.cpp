// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fifo_recode__pch.h"

//============================================================
// Constructors

Vtb_fifo_recode::Vtb_fifo_recode(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fifo_recode__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fifo_recode::Vtb_fifo_recode(const char* _vcname__)
    : Vtb_fifo_recode(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fifo_recode::~Vtb_fifo_recode() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fifo_recode___024root___eval_debug_assertions(Vtb_fifo_recode___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fifo_recode___024root___eval_static(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___eval_initial(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___eval_settle(Vtb_fifo_recode___024root* vlSelf);
void Vtb_fifo_recode___024root___eval(Vtb_fifo_recode___024root* vlSelf);

void Vtb_fifo_recode::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fifo_recode::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fifo_recode___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fifo_recode___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fifo_recode___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fifo_recode___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fifo_recode___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fifo_recode::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_fifo_recode::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fifo_recode::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fifo_recode___024root___eval_final(Vtb_fifo_recode___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_recode::final() {
    Vtb_fifo_recode___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fifo_recode::hierName() const { return vlSymsp->name(); }
const char* Vtb_fifo_recode::modelName() const { return "Vtb_fifo_recode"; }
unsigned Vtb_fifo_recode::threads() const { return 1; }
void Vtb_fifo_recode::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fifo_recode::atClone() const {
    contextp()->threadPoolpOnClone();
}
