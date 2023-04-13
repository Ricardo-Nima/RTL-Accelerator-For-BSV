// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMKSPICONTROLLER__SYMS_H_
#define VERILATED_VMKSPICONTROLLER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VmkSPIController.h"

// INCLUDE MODULE CLASSES
#include "VmkSPIController___024root.h"

// SYMS CLASS (contains all model state)
class VmkSPIController__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VmkSPIController* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VmkSPIController___024root     TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_mkTb__spiflash_ctrl;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterA_outDataCore;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterA_outDataCore__error_checks;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterB_outDataCore;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterB_outDataCore__error_checks;

    // CONSTRUCTORS
    VmkSPIController__Syms(VerilatedContext* contextp, const char* namep, VmkSPIController* modelp);
    ~VmkSPIController__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
