// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb.h for the primary calling header

#include "VmkTb___024root.h"
#include "VmkTb__Syms.h"

//==========


void VmkTb___024root___ctor_var_reset(VmkTb___024root* vlSelf);

VmkTb___024root::VmkTb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VmkTb___024root___ctor_var_reset(this);
}

void VmkTb___024root::__Vconfigure(VmkTb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VmkTb___024root::~VmkTb___024root() {
}

extern const VlWide<8>/*255:0*/ VmkTb__ConstPool__CONST_e69a7e50_0;

void VmkTb___024root___initial__TOP__3(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___initial__TOP__3\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp42;
    // Body
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[2U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[5U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[6U] = 0xaU;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty = 1U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__initial_block__DOT__i = 2U;
    vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R2 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty = 1U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full = 1U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata = 0U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head = 0U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail = 0U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__initial_block__DOT__i = 2U;
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R2 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R2 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty = 1U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__initial_block__DOT__i = 2U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(8, VmkTb__ConstPool__CONST_e69a7e50_0)
                 ,  &(vlSelf->mkTb__DOT__instr_ram_memory__DOT__RAM)
                 , 0U, 0x3fffULL);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg = 0U;
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg = 1U;
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg = 0U;
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg = 1U;
    __Vtemp42[0U] = 0x2e747874U;
    __Vtemp42[1U] = 0x64617461U;
    __Vtemp42[2U] = 0x2f6e6f5fU;
    __Vtemp42[3U] = 0x6d61726bU;
    __Vtemp42[4U] = 0x656e6368U;
    __Vtemp42[5U] = 0x62U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(6, __Vtemp42)
                 ,  &(vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM)
                 , 0U, 0x3fffULL);
    vlSelf->mkTb__DOT__cnt = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cyc = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt = 2U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1 = 2U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt = 2U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1 = 2U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt = 2U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1 = 2U;
    vlSelf->mkTb__DOT__jj_delay_count = 0xaaU;
    vlSelf->mkTb__DOT__lastpc = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__running = 0U;
    vlSelf->mkTb__DOT__start_reg = 0U;
    vlSelf->mkTb__DOT__start_reg_1 = 0U;
    vlSelf->mkTb__DOT__state_can_overlap = 0U;
    vlSelf->mkTb__DOT__state_fired = 0U;
    vlSelf->mkTb__DOT__state_mkFSMstate = 0xaU;
    vlSelf->mkTb__DOT__cpu__DOT__boot_pc = 0xaaaaaaaaULL;
    vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r = 2U;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] = 0xaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U] = 0xaU;
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv = 0xaaaaaaaaULL;
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[0U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[1U] = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[2U] = 0x2aU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_0 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_1 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_10 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_11 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_12 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_13 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_14 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_15 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_16 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_17 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_18 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_19 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_2 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_20 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_21 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_22 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_23 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_24 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_25 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_26 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_27 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_28 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_29 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_3 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_30 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_31 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_4 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_5 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_6 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_7 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_8 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__regfile_9 = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__cpu__DOT__wb = 0x2aaaaaaaaaULL;
}

void VmkTb___024root___settle__TOP__4(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___settle__TOP__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<4>/*127:0*/ __Vtemp51;
    VlWide<4>/*127:0*/ __Vtemp54;
    // Body
    vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg) 
                                                & vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U]);
    vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061 = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[2U] 
                                                     >> 0xcU))
                                                  : 0U);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget 
        = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata)
            ? vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT
            : vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__cyc__024D_IN = ((IData)(1U) 
                                       + vlSelf->mkTb__DOT__cyc);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7 = 
        (((IData)(vlSelf->mkTb__DOT__jj_delay_count) 
          >> 8U) & ((3U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                    | (4U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np = ((~ 
                                                  ((IData)(vlSelf->mkTb__DOT__jj_delay_count) 
                                                   >> 8U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                                                    | (4U 
                                                       == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways 
        = (((7U > (4U ^ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt))) 
            & (0x28U > vlSelf->mkTb__DOT__cnt)) & (
                                                   (6U 
                                                    == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                                                   | (9U 
                                                      == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271 
        = ((((0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
             | ((0x28U <= vlSelf->mkTb__DOT__cnt) & 
                (6U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))) 
            | ((0x28U <= vlSelf->mkTb__DOT__cnt) & 
               (9U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__state_fired)));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg) 
           & (IData)((vlSelf->mkTb__DOT__cpu__DOT__boot_pc 
                      >> 0x20U)));
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234 
        = (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
             << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                       >> 0x18U)) == ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                       << 0xeU) | (
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                   >> 0x12U)));
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238 
        = ((0x80000000U ^ ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                            << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                      >> 0x18U))) < 
           (0x80000000U ^ ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                            << 0xeU) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                        >> 0x12U))));
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242 
        = (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
             << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                       >> 0x18U)) < ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                      << 0xeU) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                  >> 0x12U)));
    vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 = (((
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                   << 8U) 
                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                     >> 0x18U)) 
                                                 + 
                                                 vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]);
    vlSelf->mkTb__DOT__cpu__DOT___dfoo1 = ((2U != (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)) 
                                           | (1U == 
                                              (3U & 
                                               ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r) 
                                                - (IData)(1U)))));
    vlSelf->mkTb__DOT__cpu__DOT___dfoo3 = ((1U != (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)) 
                                           | (0U == 
                                              (3U & 
                                               ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r) 
                                                - (IData)(1U)))));
    vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416 
        = (vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget 
           >> (0x18U & ((((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                           ? ((vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] 
                               << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] 
                                         >> 0x18U))
                           : 0U) + ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                     ? vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U]
                                     : 0U)) << 3U)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10 = 
        (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
          | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas)) 
         & (7U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas 
        = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
           | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas 
        = ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
           | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas));
    vlSelf->mkTb__DOT__jj_delay_count__024D_IN = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)
                                                   ? 
                                                  (0x1feU 
                                                   & ((IData)(vlSelf->mkTb__DOT__jj_delay_count) 
                                                      << 1U))
                                                   : 1U);
    vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2 
        = (((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
            & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
           & (~ (IData)(vlSelf->mkTb__DOT__running)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = ((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
                                                 & (IData)(vlSelf->mkTb__DOT__start_reg));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage 
        = ((((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg) 
             & (~ (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[2U] 
                   >> 5U))) & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg))) 
           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc)));
    vlSelf->mkTb__DOT__cpu__DOT__IF_ex_q_0_4_BITS_43_TO_34_88_CONCAT_ex_q_0_4_B_ETC___05F_d341 
        = ((0x93U == ((0x1ff80U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                   << 5U)) | (0x7fU 
                                              & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                  << 2U) 
                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                    >> 0x1eU)))))
            ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                 << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                           >> 0x18U)) << (0x1fU & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]))
            : ((0xb3U == ((0x1ff80U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                       << 5U)) | (0x7fU 
                                                  & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                      << 2U) 
                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                        >> 0x1eU)))))
                ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                     << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                               >> 0x18U)) << (0x1fU 
                                              & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                 >> 0x12U)))
                : ((0x133U == ((0x1ff80U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                            << 5U)) 
                               | (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                            << 2U) 
                                           | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                              >> 0x1eU)))))
                    ? ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238)
                        ? 1U : 0U) : ((0x293U == ((0x1ff80U 
                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                      << 5U)) 
                                                  | (0x7fU 
                                                     & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                         << 2U) 
                                                        | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                           >> 0x1eU)))))
                                       ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                            << 8U) 
                                           | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                              >> 0x18U)) 
                                          >> (0x1fU 
                                              & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]))
                                       : ((0x2b3U == 
                                           ((0x1ff80U 
                                             & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                << 5U)) 
                                            | (0x7fU 
                                               & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                   << 2U) 
                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                     >> 0x1eU)))))
                                           ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                << 8U) 
                                               | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                  >> 0x18U)) 
                                              >> (0x1fU 
                                                  & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                     >> 0x12U)))
                                           : ((0x8293U 
                                               == (
                                                   (0x1ff80U 
                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                       << 5U)) 
                                                   | (0x7fU 
                                                      & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                          << 2U) 
                                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                            >> 0x1eU)))))
                                               ? ((
                                                   ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                     << 8U) 
                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                       >> 0x18U)) 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])) 
                                                  | ((~ 
                                                      (0xffffffffU 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                      >> 0x17U))))))
                                               : ((0x82b3U 
                                                   == 
                                                   ((0x1ff80U 
                                                     & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                        << 5U)) 
                                                    | (0x7fU 
                                                       & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                           << 2U) 
                                                          | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                             >> 0x1eU)))))
                                                   ? 
                                                  ((((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                      << 8U) 
                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                        >> 0x18U)) 
                                                    >> 
                                                    (0x1fU 
                                                     & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                        >> 0x12U))) 
                                                   | ((~ 
                                                       (0xffffffffU 
                                                        >> 
                                                        (0x1fU 
                                                         & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                            >> 0x12U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                       >> 0x17U))))))
                                                   : 
                                                  ((0x113U 
                                                    == 
                                                    ((0x380U 
                                                      & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                         << 5U)) 
                                                     | (0x7fU 
                                                        & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                            << 2U) 
                                                           | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                              >> 0x1eU)))))
                                                    ? 
                                                   (((0x80000000U 
                                                      ^ 
                                                      ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                        << 8U) 
                                                       | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                          >> 0x18U))) 
                                                     < 
                                                     (0x80000000U 
                                                      ^ 
                                                      vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]))
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x1b3U 
                                                     == 
                                                     ((0x1ff80U 
                                                       & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                          << 5U)) 
                                                      | (0x7fU 
                                                         & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                             << 2U) 
                                                            | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                               >> 0x1eU)))))
                                                     ? 
                                                    ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0x193U 
                                                      == 
                                                      ((0x380U 
                                                        & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                           << 5U)) 
                                                       | (0x7fU 
                                                          & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                              << 2U) 
                                                             | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                >> 0x1eU)))))
                                                      ? 
                                                     ((((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                         << 8U) 
                                                        | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                           >> 0x18U)) 
                                                       < 
                                                       vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                                       ? 1U
                                                       : 0U)
                                                      : 0U))))))))));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2 
        = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
             ? (4U & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] 
                      >> 2U)) : 0U) ? (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                         ? (2U & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] 
                                                  >> 2U))
                                         : 0U) ? vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget
                                        : (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                             ? (1U 
                                                & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] 
                                                   >> 2U))
                                             : 0U) ? 
                                           (0xffffU 
                                            & vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416)
                                            : (0xffU 
                                               & vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416)))
            : (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                 ? (2U & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] 
                          >> 2U)) : 0U) ? vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget
                : (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                     ? (1U & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] 
                              >> 2U)) : 0U) ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416))
                    : (((- (IData)((1U & (vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416)))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt_32_PLUS_IF_data_ra_ETC___05F_d138 
        = (7U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)
                                      ? 7U : 0U)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
           & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas));
    vlSelf->mkTb__DOT__cpu__024EN_dbus_resp = (((IData)(vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp) 
                                                & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas))) 
                                               & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas 
        = (((IData)(vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp) 
            & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
               | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas))) 
           & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas 
        = (((~ (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv 
                        >> 0x20U))) & ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                       | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas))) 
           & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas));
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
        = ((((~ (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv 
                         >> 0x20U))) & ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                        | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas))) 
            & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas))
            ? (0x100000000ULL | (QData)((IData)(((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata)
                                                  ? vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT
                                                  : vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R))))
            : vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv);
    vlSelf->mkTb__DOT__start_reg__024EN = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                           | (((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
                                               & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                              & (~ (IData)(vlSelf->mkTb__DOT__running))));
    vlSelf->mkTb__DOT__start_wire__024whas = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                              | ((IData)(vlSelf->mkTb__DOT__start_reg_1) 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__state_fired))));
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ = 
        ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
         & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]);
    vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
           & (0U != (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)));
    if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
         & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
             >> 1U) | vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))) {
        __Vtemp47[0U] = (IData)((((QData)((IData)((0xfffffffcU 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((2U 
                                                                & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                                ? 
                                                               (((0U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                      >> 2U))) 
                                                                 | (1U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                        >> 2U))))
                                                                 ? 
                                                                (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                     >> 0x12U)) 
                                                                 << 
                                                                 (0x18U 
                                                                  & (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                                                     << 3U)))
                                                                 : 
                                                                ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                  << 0xeU) 
                                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                    >> 0x12U)))
                                                                : 
                                                               ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                 << 0xeU) 
                                                                | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                   >> 0x12U)))))));
        __Vtemp47[1U] = (IData)(((((QData)((IData)(
                                                   (0xfffffffcU 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((2U 
                                                                 & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                                 ? 
                                                                (((0U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                       >> 2U))) 
                                                                  | (1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                         >> 2U))))
                                                                  ? 
                                                                 (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                    << 0xeU) 
                                                                   | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                      >> 0x12U)) 
                                                                  << 
                                                                  (0x18U 
                                                                   & (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                                                      << 3U)))
                                                                  : 
                                                                 ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                     >> 0x12U)))
                                                                 : 
                                                                ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                  << 0xeU) 
                                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                    >> 0x12U)))))) 
                                 >> 0x20U));
    } else {
        __Vtemp47[0U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[0U];
        __Vtemp47[1U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[1U];
    }
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
        = __Vtemp47[0U];
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
        = __Vtemp47[1U];
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
        = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
            & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                >> 1U) | vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))
            ? (0x20U | ((0x10U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                  << 3U)) | ((2U & 
                                              vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                              ? (0xfU 
                                                 & ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                         >> 2U)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                          >> 2U)))
                                                      ? 
                                                     ((IData)(3U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))
                                                      : 0xfU)))
                                              : 0U)))
            : vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[2U]);
    vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3 
        = ((0x233U == ((0x1ff80U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                    << 5U)) | (0x7fU 
                                               & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                   << 2U) 
                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                     >> 0x1eU)))))
            ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                 << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                           >> 0x18U)) ^ ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                          << 0xeU) 
                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                            >> 0x12U)))
            : ((0x8033U == ((0x1ff80U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                         << 5U)) | 
                            (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                       << 2U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                 >> 0x1eU)))))
                ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                     << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                               >> 0x18U)) - ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                              << 0xeU) 
                                             | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                >> 0x12U)))
                : ((0x213U == ((0x380U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                          << 5U)) | 
                               (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                          << 2U) | 
                                         (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                          >> 0x1eU)))))
                    ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                         << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                   >> 0x18U)) ^ vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                    : ((0x333U == ((0x1ff80U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                << 5U)) 
                                   | (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                << 2U) 
                                               | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                  >> 0x1eU)))))
                        ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                             << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                       >> 0x18U)) | 
                           ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                             << 0xeU) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                         >> 0x12U)))
                        : ((0x313U == ((0x380U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                  << 5U)) 
                                       | (0x7fU & (
                                                   (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                    << 2U) 
                                                   | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                      >> 0x1eU)))))
                            ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                 << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                           >> 0x18U)) 
                               | vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                            : ((0x3b3U == ((0x1ff80U 
                                            & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                               << 5U)) 
                                           | (0x7fU 
                                              & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                  << 2U) 
                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                    >> 0x1eU)))))
                                ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                     << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                               >> 0x18U)) 
                                   & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                       << 0xeU) | (
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                   >> 0x12U)))
                                : ((0x393U == ((0x380U 
                                                & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                   << 5U)) 
                                               | (0x7fU 
                                                  & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                      << 2U) 
                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                        >> 0x1eU)))))
                                    ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                         << 8U) | (
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                   >> 0x18U)) 
                                       & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                    : vlSelf->mkTb__DOT__cpu__DOT__IF_ex_q_0_4_BITS_43_TO_34_88_CONCAT_ex_q_0_4_B_ETC___05F_d341)))))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10))) 
              & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
              & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas)) 
           & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas)) 
           & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas));
    vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143 
        = ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                          >> 0x13U))) ? ((1U & (IData)(
                                                       (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                        >> 0x12U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 0x11U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_31
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_30)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_29
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_28))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_27
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_26)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_25
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_24)))
                                          : ((1U & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 0x11U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_23
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_22)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_21
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_20))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_19
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_18)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_17
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_16))))
            : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                              >> 0x12U))) ? ((1U & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 0x11U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_15
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_14)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_13
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_12))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_11
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_10)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_9
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_8)))
                : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                  >> 0x11U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_7
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_6)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_5
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_4))
                    : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                      >> 0x10U))) ? 
                       ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                       >> 0xfU))) ? vlSelf->mkTb__DOT__cpu__DOT__regfile_3
                         : vlSelf->mkTb__DOT__cpu__DOT__regfile_2)
                        : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                          >> 0xfU)))
                            ? vlSelf->mkTb__DOT__cpu__DOT__regfile_1
                            : vlSelf->mkTb__DOT__cpu__DOT__regfile_0)))));
    vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149 
        = ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                          >> 0x18U))) ? ((1U & (IData)(
                                                       (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                        >> 0x17U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 0x16U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_31
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_30)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_29
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_28))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_27
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_26)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_25
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_24)))
                                          : ((1U & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 0x16U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_23
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_22)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_21
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_20))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_19
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_18)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_17
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_16))))
            : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                              >> 0x17U))) ? ((1U & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 0x16U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_15
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_14)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_13
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_12))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_11
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_10)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_9
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_8)))
                : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                  >> 0x16U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_7
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_6)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x14U)))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__regfile_5
                                                   : vlSelf->mkTb__DOT__cpu__DOT__regfile_4))
                    : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                      >> 0x15U))) ? 
                       ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                       >> 0x14U))) ? vlSelf->mkTb__DOT__cpu__DOT__regfile_3
                         : vlSelf->mkTb__DOT__cpu__DOT__regfile_2)
                        : ((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                          >> 0x14U)))
                            ? vlSelf->mkTb__DOT__cpu__DOT__regfile_1
                            : vlSelf->mkTb__DOT__cpu__DOT__regfile_0)))));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage 
        = (((((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                       >> 0x20U)) & (2U != (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) 
             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg)) 
            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)) 
           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc)));
    vlSelf->mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176 
        = (((- (IData)((1U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                      >> 0x1fU))))) 
            << 0xcU) | (0xfffU & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                          >> 0x14U))));
    vlSelf->mkTb__DOT__cpu__DOT__b___05Fh6854 = ((0xfe0U 
                                                  & ((IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0x19U)) 
                                                     << 5U)) 
                                                 | (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                               >> 7U))));
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq10 
        = ((0x100000U & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                  >> 0x1fU)) << 0x14U)) 
           | ((0xff000U & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                    >> 0xcU)) << 0xcU)) 
              | ((0x800U & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                     >> 0x14U)) << 0xbU)) 
                 | (0x7feU & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                       >> 0x15U)) << 1U)))));
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq9 
        = ((0x1000U & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                >> 0x1fU)) << 0xcU)) 
           | ((0x800U & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                  >> 7U)) << 0xbU)) 
              | ((0x7e0U & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                     >> 0x19U)) << 5U)) 
                 | (0x1eU & ((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                      >> 8U)) << 1U)))));
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76 
        = ((0x1fU & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                             >> 0xfU))) != (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061));
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80 
        = ((0x1fU & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                             >> 0x14U))) != (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061));
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89 
        = ((0x1fU & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                             >> 0xfU))) != (0x1fU & 
                                            (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                             >> 0xcU)));
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92 
        = ((0x1fU & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                             >> 0x14U))) != (0x1fU 
                                             & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                >> 0xcU)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10 = 
        ((((IData)(vlSelf->mkTb__DOT__start_wire__024whas) 
           & (0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
          | (((0x28U <= vlSelf->mkTb__DOT__cnt) & (IData)(vlSelf->mkTb__DOT__start_wire__024whas)) 
             & (6U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))) 
         | (((0x28U <= vlSelf->mkTb__DOT__cnt) & (IData)(vlSelf->mkTb__DOT__start_wire__024whas)) 
            & (9U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15 = (
                                                   ((0x28U 
                                                     <= vlSelf->mkTb__DOT__cnt) 
                                                    & (~ (IData)(vlSelf->mkTb__DOT__start_wire__024whas))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1 = 
        (((0x28U <= vlSelf->mkTb__DOT__cnt) & (~ (IData)(vlSelf->mkTb__DOT__start_wire__024whas))) 
         & (9U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget 
        = (((0U != (0xfU & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])) 
            << 1U) | (0U == (0xfU & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])));
    vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287 
        = ((((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
              & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U]) 
             & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U]) 
            >> 5U) & (7U > (4U ^ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas))) 
              & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas)) 
              & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas))) 
              & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas)) 
              & (~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654 = ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 6U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 5U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                               >> 4U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                >> 3U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq10 
                                                                        >> 0x14U)))) 
                                                         << 0x15U) 
                                                        | vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq10)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? vlSelf->mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq9) 
                                                                        >> 0xcU)))) 
                                                         << 0xdU) 
                                                        | (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq9))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 5U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                               >> 4U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? 
                                                       ((IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 0xcU)) 
                                                        << 0xcU)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->mkTb__DOT__cpu__DOT__b___05Fh6854) 
                                                                        >> 0xbU)))) 
                                                         << 0xcU) 
                                                        | (IData)(vlSelf->mkTb__DOT__cpu__DOT__b___05Fh6854))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                               >> 4U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? 
                                                       ((IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 0xcU)) 
                                                        << 0xcU)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? vlSelf->mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                 >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))
                                                        ? vlSelf->mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176
                                                        : 0U)
                                                       : 0U))))));
    vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96 
        = (1U & ((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)) 
                   | (~ vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U])) 
                  | ((((((((0x13U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                           & (3U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                          & (0x67U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                         & (0x33U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                        & (0x23U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                       & (0x63U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                      | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76)) 
                     & ((((0x33U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                          & (0x23U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                         & (0x63U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                        | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80)))) 
                 & ((~ (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                        >> 0x11U)) | ((((((((0x13U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                            & (3U != 
                                               (0x7fU 
                                                & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                           & (0x67U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (0x33U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (0x23U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        & (0x63U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89)) 
                                      & ((((0x33U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                           & (0x23U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (0x63U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92))))));
    vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210 
        = (1U & ((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)) 
                   | (~ vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U])) 
                  | ((((((0x13U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                         & (3U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                        & (0x33U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                       & (0x23U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                      | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76)) 
                     & (((0x33U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                         & (0x23U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                        | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80)))) 
                 & ((~ (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                        >> 0x11U)) | ((((((0x13U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                          & (3U != 
                                             (0x7fU 
                                              & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (0x33U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        & (0x23U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89)) 
                                      & (((0x33U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                          & (0x23U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92))))));
    vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas 
        = ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
            >> 5U) & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas 
        = (((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
             >> 5U) & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287)) 
           & (IData)((2U != (3U & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget)))));
    __Vtemp48[0U] = (IData)((((QData)((IData)(((0U 
                                                != 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                            >> 7U)))) 
                                               & (((((((3U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                      | (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                    | (0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))))) 
                              << 0x2cU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                        >> 7U))))) 
                                            << 0x27U) 
                                           | (QData)((IData)(
                                                             (0x7fU 
                                                              & (IData)(
                                                                        (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                         >> 0x19U))))))));
    __Vtemp48[1U] = ((((((((0x33U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                           | (0x23U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                          | (0x63U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                         & (IData)((vlSelf->mkTb__DOT__cpu__DOT__wb 
                                    >> 0x25U))) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                               >> 0x14U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                               >> 0x20U)))))
                        ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                        : vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149) 
                      << 0xdU) | (IData)(((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                          >> 7U)))) 
                                                             & (((((((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                                                     | (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                                    | (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                                   | (0x37U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                                  | (0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                                 | (0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                                | (0x33U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))))) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                           >> 7U))))) 
                                               << 0x27U) 
                                              | (QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(
                                                                           (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                            >> 0x19U))))))) 
                                          >> 0x20U)));
    __Vtemp50[2U] = (((((0x33U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                        | (0x23U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                       | (0x63U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                      << 0x12U) | ((0x3e000U & ((IData)(
                                                        (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                         >> 0x14U)) 
                                                << 0xdU)) 
                                   | (((((((0x33U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          | (0x63U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (IData)(
                                                   (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                    >> 0x25U))) 
                                        & ((0x1fU & (IData)(
                                                            (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                             >> 0x14U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                          >> 0x20U)))))
                                        ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                        : vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149) 
                                      >> 0x13U)));
    __Vtemp51[2U] = (((((((((((0x13U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                              | (3U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                             | (0x67U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                            | (0x33U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                           | (0x23U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                          | (0x63U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                         & (IData)((vlSelf->mkTb__DOT__cpu__DOT__wb 
                                    >> 0x25U))) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                               >> 0xfU))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                               >> 0x20U)))))
                        ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                        : vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143) 
                      << 0x13U) | __Vtemp50[2U]);
    __Vtemp51[3U] = ((((((((((0x13U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                             | (3U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                            | (0x67U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                           | (0x33U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                          | (0x23U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                         | (0x63U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                        & (IData)((vlSelf->mkTb__DOT__cpu__DOT__wb 
                                   >> 0x25U))) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                              >> 0x20U)))))
                       ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                       : vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143) 
                     >> 0xdU);
    __Vtemp54[3U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread) 
                      << 0x19U) | ((((((((0x13U == 
                                          (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                         | (3U == (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        | (0x67U == 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (0x33U == 
                                          (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                      | (0x23U == (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                     | (0x63U == (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                    << 0x18U) | ((0xf80000U 
                                                  & ((IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                              >> 0xfU)) 
                                                     << 0x13U)) 
                                                 | __Vtemp51[3U])));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U] 
        = (IData)((((QData)((IData)((7U & (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                   >> 0xcU))))) 
                    << 0x22U) | (((QData)((IData)((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))) 
                                  << 0x21U) | (((QData)((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                              >> 7U)))) 
                                                                 & (3U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654))))));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U] 
        = ((__Vtemp48[0U] << 5U) | (IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                          >> 0xcU))))) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 (0x23U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                                                >> 7U)))) 
                                                                     & (3U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654))))) 
                                            >> 0x20U)));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U] 
        = ((__Vtemp48[0U] >> 0x1bU) | (__Vtemp48[1U] 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U] 
        = ((__Vtemp48[1U] >> 0x1bU) | (__Vtemp51[2U] 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U] 
        = ((__Vtemp51[2U] >> 0x1bU) | (__Vtemp54[3U] 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U] 
        = ((__Vtemp54[3U] >> 0x1bU) | (vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U] 
        = (vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
           >> 0x1bU);
    vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
           & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96));
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas 
        = ((((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
               & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210)) 
              & (0x67U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
             & (0x63U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
            | ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
               & ((0x67U == (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                       << 2U) | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                 >> 0x1eU)))) 
                  | (0x63U == (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                         << 2U) | (
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                   >> 0x1eU))))))) 
           | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc));
    vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546 = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTb__DOT__cpu__DOT__boot_pc 
                                                              >> 0x20U)))
                                                   ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__boot_pc)
                                                   : 0U)
                                                  : 
                                                 (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                                                   & ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                            << 2U) 
                                                           | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                              >> 0x1eU)))) 
                                                      | (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                              << 2U) 
                                                             | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                >> 0x1eU))))))
                                                   ? 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                         << 2U) 
                                                        | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                           >> 0x1eU))))
                                                    ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                                    : 
                                                   (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                      << 0x1bU) 
                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & ((0x10U 
                                                          & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                          ? 
                                                         ((8U 
                                                           & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                           ? 
                                                          ((4U 
                                                            & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                            ? 
                                                           ((7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                 >> 2U))) 
                                                            & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                            : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242))
                                                           : 
                                                          ((4U 
                                                            & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                            ? 
                                                           (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238))
                                                            : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238)))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                           ? 
                                                          ((7U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                >> 2U))) 
                                                           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                           : 
                                                          ((4U 
                                                            & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                            ? 
                                                           (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234))
                                                            : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234)))))
                                                      ? 
                                                     vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                                      : 4U)))
                                                   : 
                                                  (((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
                                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210)) 
                                                     & (0x67U 
                                                        != 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                                    & (0x63U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))
                                                    ? 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))
                                                     ? 
                                                    (vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
                                                     + vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg))
                                                    : 0xaaaaaaaaU)));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_0_PLUS_IF_data_ram_ETC___05F_d86 
        = (7U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas)
                                      ? 7U : 0U)));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas) 
           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas)));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both 
        = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas) 
            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas)) 
           & (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas) 
           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)));
    vlSelf->mkTb__DOT__cpu__024RDY_ibus_req = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg) 
                                               | (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas));
    if (vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg) {
        vlSelf->mkTb__DOT__cpu__DOT__id_pc__024D_IN 
            = vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg;
        vlSelf->mkTb__DOT__cpu__024ibus_req = vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg;
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__id_pc__024D_IN 
            = vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546;
        vlSelf->mkTb__DOT__cpu__024ibus_req = vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546;
    }
    vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r__024D_IN 
        = (3U & ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                  ? ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r) 
                     - (IData)(1U)) : ((IData)(1U) 
                                       + (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))));
    vlSelf->mkTb__DOT__lastpc_13_EQ_cpu_ibus_req___05F14___05F_d215 
        = (vlSelf->mkTb__DOT__lastpc == vlSelf->mkTb__DOT__cpu__024ibus_req);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np 
        = (((IData)(vlSelf->mkTb__DOT__cpu__024RDY_ibus_req) 
            & (IData)(vlSelf->mkTb__DOT__lastpc_13_EQ_cpu_ibus_req___05F14___05F_d215)) 
           & ((1U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
              | (2U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways 
        = (((((IData)(vlSelf->mkTb__DOT__cpu__024RDY_ibus_req) 
              & (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg) 
                  | (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas)) 
                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg))) 
             & (7U > (4U ^ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt)))) 
            & (~ (IData)(vlSelf->mkTb__DOT__lastpc_13_EQ_cpu_ibus_req___05F14___05F_d215))) 
           & ((1U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
              | (2U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ = 
        ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg));
    vlSelf->mkTb__DOT__cnt__024D_IN = (((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways))
                                        ? ((IData)(1U) 
                                           + vlSelf->mkTb__DOT__cnt)
                                        : 0U);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt_7_PLUS_IF_instr_ra_ETC___05F_d33 
        = (7U & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas)
                                      ? 7U : 0U)));
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ = 
        ((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas) 
         & ((~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
            | (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg)));
    vlSelf->mkTb__DOT__state_mkFSMstate__024D_IN = 
        (((((((((IData)(vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1) 
                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)) 
               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
           | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways))
          ? ((IData)(vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1)
              ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)
                       ? 1U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)
                                ? 2U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)
                                         ? 3U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))
                                                    ? 6U
                                                    : 7U)))))))
          : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)
              ? 8U : ((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))
                       ? 9U : 0xaU)));
    vlSelf->mkTb__DOT__state_mkFSMstate__024EN = ((
                                                   (((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1) 
                                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15)) 
                                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)) 
                                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)) 
                                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
                                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                                                     | (5U 
                                                        == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                                                  | (8U 
                                                     == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__state_set_pw__024whas = ((((
                                                   (((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1) 
                                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15)) 
                                                        | (8U 
                                                           == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                                                     | (5U 
                                                        == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
                                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)) 
                                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10));
    vlSelf->mkTb__DOT__state_can_overlap__024D_IN = 
        ((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
         | (IData)(vlSelf->mkTb__DOT__state_can_overlap));
}

void VmkTb___024root___eval_initial(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    VmkTb___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VmkTb___024root___eval_settle(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval_settle\n"); );
    // Body
    VmkTb___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VmkTb___024root___final(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___final\n"); );
}

void VmkTb___024root___ctor_var_reset(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RST_N = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__start_wire__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_set_pw__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cnt = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cnt__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cyc = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cyc__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1 = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1 = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1 = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__jj_delay_count = VL_RAND_RESET_I(9);
    vlSelf->mkTb__DOT__jj_delay_count__024D_IN = VL_RAND_RESET_I(9);
    vlSelf->mkTb__DOT__lastpc = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__start_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__start_reg__024EN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__start_reg_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_can_overlap = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_can_overlap__024D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_fired = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_mkFSMstate = VL_RAND_RESET_I(4);
    vlSelf->mkTb__DOT__state_mkFSMstate__024D_IN = VL_RAND_RESET_I(4);
    vlSelf->mkTb__DOT__state_mkFSMstate__024EN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__024ibus_req = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__024EN_dbus_resp = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__024RDY_ibus_req = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_outData_enqAndDeq = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_outData_enqAndDeq = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_0_PLUS_IF_data_ram_ETC___05F_d86 = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt_32_PLUS_IF_data_ra_ETC___05F_d138 = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt_7_PLUS_IF_instr_ra_ETC___05F_d33 = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__lastpc_13_EQ_cpu_ibus_req___05F14___05F_d215 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread);
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread = VL_RAND_RESET_Q(33);
    vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__boot_pc = VL_RAND_RESET_Q(33);
    vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r__024D_IN = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(197, vlSelf->mkTb__DOT__cpu__DOT__ex_q_0);
    VL_RAND_RESET_W(197, vlSelf->mkTb__DOT__cpu__DOT__ex_q_1);
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(70, vlSelf->mkTb__DOT__cpu__DOT__lsq_rv);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_0 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_1 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_10 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_11 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_12 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_13 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_14 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_15 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_16 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_17 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_18 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_19 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_2 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_20 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_21 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_22 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_23 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_24 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_25 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_26 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_27 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_28 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_29 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_3 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_30 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_31 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_4 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_5 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_6 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_7 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_8 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__regfile_9 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__wb = VL_RAND_RESET_Q(38);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(197, vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT);
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(197, vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1);
    vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__IF_ex_q_0_4_BITS_43_TO_34_88_CONCAT_ex_q_0_4_B_ETC___05F_d341 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq10 = VL_RAND_RESET_I(21);
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq9 = VL_RAND_RESET_I(13);
    vlSelf->mkTb__DOT__cpu__DOT__b___05Fh6854 = VL_RAND_RESET_I(12);
    vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061 = VL_RAND_RESET_I(5);
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT___dfoo1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT___dfoo3 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R2 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R2 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__initial_block__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__initial_block__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->mkTb__DOT__instr_ram_memory__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R2 = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__initial_block__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
