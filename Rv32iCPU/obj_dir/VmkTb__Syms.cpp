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
    __Vscope_mkTb.configure(this, name(), "mkTb", "mkTb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__cpu__id_pc.configure(this, name(), "mkTb.cpu.id_pc", "id_pc", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__cpu__id_pc__error_checks.configure(this, name(), "mkTb.cpu.id_pc.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__cpu__if_pc_ff.configure(this, name(), "mkTb.cpu.if_pc_ff", "if_pc_ff", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__cpu__if_pc_ff__error_checks.configure(this, name(), "mkTb.cpu.if_pc_ff.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__cpu__ld_fifo.configure(this, name(), "mkTb.cpu.ld_fifo", "ld_fifo", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__cpu__ld_fifo__error_checks.configure(this, name(), "mkTb.cpu.ld_fifo.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__data_ram_serverAdapterA_outDataCore.configure(this, name(), "mkTb.data_ram_serverAdapterA_outDataCore", "data_ram_serverAdapterA_outDataCore", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__data_ram_serverAdapterA_outDataCore__error_checks.configure(this, name(), "mkTb.data_ram_serverAdapterA_outDataCore.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__data_ram_serverAdapterB_outDataCore.configure(this, name(), "mkTb.data_ram_serverAdapterB_outDataCore", "data_ram_serverAdapterB_outDataCore", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__data_ram_serverAdapterB_outDataCore__error_checks.configure(this, name(), "mkTb.data_ram_serverAdapterB_outDataCore.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__instr_ram_serverAdapter_outDataCore.configure(this, name(), "mkTb.instr_ram_serverAdapter_outDataCore", "instr_ram_serverAdapter_outDataCore", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_mkTb__instr_ram_serverAdapter_outDataCore__error_checks.configure(this, name(), "mkTb.instr_ram_serverAdapter_outDataCore.error_checks", "error_checks", -12, VerilatedScope::SCOPE_OTHER);
}
