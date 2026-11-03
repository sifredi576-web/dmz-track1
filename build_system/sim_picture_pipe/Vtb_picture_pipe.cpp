// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_picture_pipe__pch.h"

//============================================================
// Constructors

Vtb_picture_pipe::Vtb_picture_pipe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_picture_pipe__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_picture_pipe::Vtb_picture_pipe(const char* _vcname__)
    : Vtb_picture_pipe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_picture_pipe::~Vtb_picture_pipe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_picture_pipe___024root___eval_debug_assertions(Vtb_picture_pipe___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_picture_pipe___024root___eval_static(Vtb_picture_pipe___024root* vlSelf);
void Vtb_picture_pipe___024root___eval_initial(Vtb_picture_pipe___024root* vlSelf);
void Vtb_picture_pipe___024root___eval_settle(Vtb_picture_pipe___024root* vlSelf);
void Vtb_picture_pipe___024root___eval(Vtb_picture_pipe___024root* vlSelf);

void Vtb_picture_pipe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_picture_pipe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_picture_pipe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_picture_pipe___024root___eval_static(&(vlSymsp->TOP));
        Vtb_picture_pipe___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_picture_pipe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_picture_pipe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_picture_pipe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_picture_pipe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_picture_pipe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_picture_pipe___024root___eval_final(Vtb_picture_pipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_picture_pipe::final() {
    Vtb_picture_pipe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_picture_pipe::hierName() const { return vlSymsp->name(); }
const char* Vtb_picture_pipe::modelName() const { return "Vtb_picture_pipe"; }
unsigned Vtb_picture_pipe::threads() const { return 1; }
void Vtb_picture_pipe::prepareClone() const { contextp()->prepareClone(); }
void Vtb_picture_pipe::atClone() const {
    contextp()->threadPoolpOnClone();
}
