#include <memory>
#include "verilated.h"
#define VM_STRING_IMPL(x) #x
#define VM_STRING(x) VM_STRING_IMPL(x)
#include VM_STRING(VMODEL.h)
double sc_time_stamp() { return 0; }
int main(int argc, char** argv) {
    auto context = std::make_unique<VerilatedContext>();
    context->commandArgs(argc, argv);
    context->fatalOnError(false);
    auto top = std::make_unique<VMODEL>(context.get(), "");
    while (!context->gotFinish()) {
        top->eval();
        if (!top->eventsPending()) break;
        context->time(top->nextTimeSlot());
    }
    top->final();
    return context->gotError() || !context->gotFinish() ? 1 : 0;
}
