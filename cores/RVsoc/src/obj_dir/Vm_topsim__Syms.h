// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VM_TOPSIM__SYMS_H_
#define VERILATED_VM_TOPSIM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vm_topsim.h"

// SYMS CLASS
class Vm_topsim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vm_topsim*                     TOPp;
    
    // CREATORS
    Vm_topsim__Syms(VerilatedContext* contextp, Vm_topsim* topp, const char* namep);
    ~Vm_topsim__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
