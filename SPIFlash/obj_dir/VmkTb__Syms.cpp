// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VmkTb__Syms.h"
#include "VmkTb.h"
#include "VmkTb___024root.h"

// FUNCTIONS
VmkTb__Syms::~VmkTb__Syms()
{
}

VmkTb__Syms::VmkTb__Syms(VerilatedContext* contextp, const char* namep,VmkTb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_mkTb__spiflash_ctrl.configure(this, name(), "mkTb.spiflash_ctrl", "spiflash_ctrl", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterA_outDataCore.configure(this, name(), "mkTb.spiflash_ctrl.page_buffer_serverAdapterA_outDataCore", "page_buffer_serverAdapterA_outDataCore", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterA_outDataCore__error_checks.configure(this, name(), "mkTb.spiflash_ctrl.page_buffer_serverAdapterA_outDataCore.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterB_outDataCore.configure(this, name(), "mkTb.spiflash_ctrl.page_buffer_serverAdapterB_outDataCore", "page_buffer_serverAdapterB_outDataCore", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__spiflash_ctrl__page_buffer_serverAdapterB_outDataCore__error_checks.configure(this, name(), "mkTb.spiflash_ctrl.page_buffer_serverAdapterB_outDataCore.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
}
