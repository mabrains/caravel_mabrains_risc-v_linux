// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vm_topsim__Syms.h"
#include "Vm_topsim.h"



// FUNCTIONS
Vm_topsim__Syms::~Vm_topsim__Syms()
{
}

Vm_topsim__Syms::Vm_topsim__Syms(VerilatedContext* contextp, Vm_topsim* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
