#include <memory>
#include "verilated.h"
#include "Vtb_status_uart.h"
double sc_time_stamp() { return 0; }  // Context owns simulation time.
int main(int argc, char** argv) {
    auto context = std::make_unique<VerilatedContext>();
    context->commandArgs(argc, argv);
    // Return failures to the runner; avoid a Windows CRT abort dialog on $fatal.
    context->fatalOnError(false);
    auto top = std::make_unique<Vtb_status_uart>(context.get(), "");
    while (!context->gotFinish()) {
        top->eval();
        if (!top->eventsPending()) break;
        context->time(top->nextTimeSlot());
    }
    top->final();
    return context->gotError() || !context->gotFinish() ? 1 : 0;
}
