// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMKTB__SYMS_H_
#define VERILATED_VMKTB__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VmkTb.h"

// INCLUDE MODULE CLASSES
#include "VmkTb___024root.h"

// SYMS CLASS (contains all model state)
class VmkTb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VmkTb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VmkTb___024root                TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_mkTb__spiflash_ctrl;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterA_outDataCore;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterA_outDataCore__error_checks;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterB_outDataCore;
    VerilatedScope __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterB_outDataCore__error_checks;

    // CONSTRUCTORS
    VmkTb__Syms(VerilatedContext* contextp, const char* namep, VmkTb* modelp);
    ~VmkTb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
