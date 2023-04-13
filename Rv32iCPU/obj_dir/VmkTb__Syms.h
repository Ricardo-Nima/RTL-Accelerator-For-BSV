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
    VerilatedScope __Vscope_mkTb;
    VerilatedScope __Vscope_mkTb__cpu__id_pc;
    VerilatedScope __Vscope_mkTb__cpu__id_pc__error_checks;
    VerilatedScope __Vscope_mkTb__cpu__if_pc_ff;
    VerilatedScope __Vscope_mkTb__cpu__if_pc_ff__error_checks;
    VerilatedScope __Vscope_mkTb__cpu__ld_fifo;
    VerilatedScope __Vscope_mkTb__cpu__ld_fifo__error_checks;
    VerilatedScope __Vscope_mkTb__data_ram_serverAdapterA_outDataCore;
    VerilatedScope __Vscope_mkTb__data_ram_serverAdapterA_outDataCore__error_checks;
    VerilatedScope __Vscope_mkTb__data_ram_serverAdapterB_outDataCore;
    VerilatedScope __Vscope_mkTb__data_ram_serverAdapterB_outDataCore__error_checks;
    VerilatedScope __Vscope_mkTb__instr_ram_serverAdapter_outDataCore;
    VerilatedScope __Vscope_mkTb__instr_ram_serverAdapter_outDataCore__error_checks;

    // CONSTRUCTORS
    VmkTb__Syms(VerilatedContext* contextp, const char* namep, VmkTb* modelp);
    ~VmkTb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
