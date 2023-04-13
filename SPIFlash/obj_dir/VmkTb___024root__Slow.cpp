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

void VmkTb___024root___initial__TOP__3(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___initial__TOP__3\n"); );
    // Body
    vlSelf->mkTb__DOT__jj_1_repeat_count = 2U;
    vlSelf->mkTb__DOT__jj_repeat_count = 2U;
    vlSelf->mkTb__DOT__running = 0U;
    vlSelf->mkTb__DOT__start_reg = 0U;
    vlSelf->mkTb__DOT__start_reg_1 = 0U;
    vlSelf->mkTb__DOT__state_can_overlap = 0U;
    vlSelf->mkTb__DOT__state_fired = 0U;
    vlSelf->mkTb__DOT__state_mkFSMstate = 0xaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty = 1U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[0U] = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[1U] = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__initial_block__DOT__i = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__mosi = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__sck = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1 = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty = 1U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[0U] = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[1U] = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__initial_block__DOT__i = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i = 0U;
    while ((0x100U > vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i)) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM[(0xffU 
                                                                             & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i)] = 0xaaU;
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i 
            = ((IData)(1U) + vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i);
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R2 = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R2 = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt = 0xaaaaaaaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_h = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_l = 0xaaU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1 = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1 = 2U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count = 0x2aU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count = 0x2aU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count = 0x2aU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1 = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired = 0U;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate = 0x2aU;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__ss = 0U;
}

extern const VlUnpacked<CData/*7:0*/, 512> VmkTb__ConstPool__TABLE_60b1dfb7_0;

void VmkTb___024root___settle__TOP__4(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___settle__TOP__4\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_repeat_count)) 
           & (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count)) 
           & (0xfU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count)) 
           & (0x12U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_repeat_count)) 
           & (0xbU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103 
        = (((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
            & (0xfU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
           | (0x10U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78 
        = (((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
            & (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
           | (9U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123 
        = ((0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
           | ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
              & (0x12U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata) 
           & (~ ((7U >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                  ? ((IData)(1U) << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                  : 0U)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt__024D_IN 
        = ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
            ? (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
               - (IData)(1U)) : 7U);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start 
        = ((((0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)) 
             | (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
            & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1)) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired))) 
           & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88 
        = ((((((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                   >> 0x1fU)) & (0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
              | ((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                     >> 0x1fU)) & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))) 
             | ((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                 >> 0x1fU) & (0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))) 
            | ((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                >> 0x1fU) & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt__024D_IN 
        = (((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
            | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))
            ? ((IData)(1U) + vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)
            : 0U);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit) 
           & ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (8U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20 
        = ((0x3fU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)) 
           & ((2U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20 
        = ((0x3fU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)) 
           & ((9U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0xaU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16 
        = ((0x3fU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)) 
           & ((0xfU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x10U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30 
        = ((0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)) 
           & (0x15U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17 
        = ((2U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)) 
           & (0x15U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17 
        = (((0x20U != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)) 
            & (2U != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command))) 
           & (0x15U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16 
        = ((((0x16U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
             | ((0x80000100U <= (0x80000000U ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)) 
                & (0x17U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))) 
            | ((0x80000100U <= (0x80000000U ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)) 
               & ((0x1bU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                  | (0x1cU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))))) 
           | ((0x80000100U <= (0x80000000U ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)) 
              & (0x1fU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1 
        = (((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit)) 
            & ((2U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)) 
               | (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)))) 
           & ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (8U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205 
        = (((((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit)) 
              & (2U != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command))) 
             & (0x20U != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command))) 
            & ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
               | (8U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))) 
           | (0xeU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np 
        = ((0x3fU != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)) 
           & ((2U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1 
        = ((0x3fU != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)) 
           & ((9U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0xaU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2 
        = ((0x3fU != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)) 
           & ((0xfU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x10U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32 
        = (((7U > (4U ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt))) 
            & (0x80000100U > (0x80000000U ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt))) 
           & ((0x17U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x1bU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291 
        = (((0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
            | (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9 
        = ((IData)(vlSelf->mkTb__DOT__state_can_overlap) 
           & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103) 
              | (IData)(vlSelf->mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9 
        = ((IData)(vlSelf->mkTb__DOT__state_can_overlap) 
           & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78) 
              | (IData)(vlSelf->mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83)));
    vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130 
        = (((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123) 
            & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
               | (IData)(vlSelf->mkTb__DOT__state_fired))) 
           & (~ (IData)(vlSelf->mkTb__DOT__start_reg)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = (((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123) 
                                                  & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
                                                     | (IData)(vlSelf->mkTb__DOT__state_fired))) 
                                                 & (IData)(vlSelf->mkTb__DOT__start_reg));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
           | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1) 
              & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88) 
           & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88) 
           & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg)));
    vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_read_byte 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)))
            : 0U);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)))
            : 0U);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)
            ? (0x7fU & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)))
            : 0U);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__024DIB 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
            ? 0U : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291) 
           & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg));
    vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291) 
            & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg))) 
           & (7U > (4U ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt))));
    vlSelf->mkTb__DOT__jj_1_repeat_count__024D_IN = 
        ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9)
          ? ((2U & (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count))
              ? 1U : (2U & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                            << 1U))) : 1U);
    vlSelf->mkTb__DOT__jj_repeat_count__024D_IN = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->mkTb__DOT__jj_repeat_count))
                                                     ? 1U
                                                     : 
                                                    (2U 
                                                     & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                                        << 1U)))
                                                    : 1U);
    vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130) 
           & (~ (IData)(vlSelf->mkTb__DOT__running)));
    vlSelf->mkTb__DOT__start_wire__024whas = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                              | ((IData)(vlSelf->mkTb__DOT__start_reg_1) 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__state_fired))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13 
        = (((((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                  >> 0x1fU)) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas)) 
             & (0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
            | ((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                   >> 0x1fU)) & (2U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))) 
           | (((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                   >> 0x1fU)) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas)) 
              & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10 
        = (((((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
               >> 0x1fU) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas)) 
             & (0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
            | ((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                >> 0x1fU) & (2U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))) 
           | (((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                >> 0x1fU) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas)) 
              & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7 
        = ((((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
              >> 0x1fU) | (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas))) 
            & ((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                   >> 0x1fU)) | (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas)))) 
           & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read) 
           & (6U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read) 
            & (7U > (4U ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt)))) 
           & (0x1dU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (5U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0xbU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x11U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x12U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x13U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x14U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
            & (0x80000100U > (0x80000000U ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt))) 
           & ((0x1cU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x1fU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21 
        = ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
             & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))) 
            & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))) 
           & (0x18U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_read_byte) 
         & (((IData)(vlSelf->mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78) 
             | (0xaU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
            | (IData)(vlSelf->mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_read_byte) 
         & (((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103) 
             | (0x11U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
            | (IData)(vlSelf->mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start) 
           | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1) 
              & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (1U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (2U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (3U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (4U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22 = 
        (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
          & (IData)(vlSelf->mkTb__DOT__jj_repeat_count)) 
         & (0xbU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (6U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (7U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (0xdU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (0xeU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16 = (
                                                   ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                                    & (~ (IData)(vlSelf->mkTb__DOT__start_wire__024whas))) 
                                                   & (0x12U 
                                                      == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22 = 
        ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (((IData)(vlSelf->mkTb__DOT__start_wire__024whas) 
             & (0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
            | (((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                & (IData)(vlSelf->mkTb__DOT__start_wire__024whas)) 
               & (0x12U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7)
            ? 0U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)
                     ? 1U : ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                              ? 2U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)
                                       ? 3U : ((3U 
                                                == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                                ? 4U
                                                : 2U)))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024EN 
        = (((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)) 
             | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
           | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas 
        = (((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7) 
              | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
            | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
           & ((~ (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                    ? 0U : 2U) >> 1U)) | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                           ? 0U : 2U)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write 
        = (((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21) 
                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)) 
                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
           & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas));
    vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas) 
           & ((0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9 
        = ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas)) 
           & (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22));
    vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22));
    vlSelf->mkTb__DOT__state_set_pw__024whas = ((((
                                                   ((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
                                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32)) 
                                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22)) 
                                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)) 
                                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
                                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
                                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22));
    vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate 
        = (((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22) 
                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22)) 
                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)) 
                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_0_PLUS_IF_page___05FETC___05F_d86 
        = (7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                      ? 7U : 0U)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21))) 
              & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
              & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)) 
           & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN 
        = (((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21)) 
                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)) 
                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25))
            ? ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9)
                ? 0U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21)
                         ? 1U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)
                                  ? 2U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)
                                           ? 3U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1)) 
                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)) 
                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)) 
                  | (0xcU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                 | (0xdU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205))
                ? ((7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))
                    ? 8U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1)
                             ? 9U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)
                                      ? 0xaU : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)
                                                 ? 0xbU
                                                 : 
                                                ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)
                                                  ? 0xcU
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))
                                                   ? 0xdU
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2) 
                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16)) 
                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)) 
                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)) 
                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)) 
                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30)) 
                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17))
                    ? ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)
                        ? 0x10U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16)
                                    ? 0x11U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)
                                                ? 0x12U
                                                : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)
                                                    ? 0x13U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)
                                                     ? 0x14U
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)
                                                      ? 0x15U
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30)
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : (((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                             | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                        | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))
                        ? ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                            ? 0x18U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                        ? 0x19U : (
                                                   (0x19U 
                                                    == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))
                                                    ? 0x1aU
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))
                                                     ? 0x1bU
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)
                                                      ? 0x1cU
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)
                                                       ? 0x1dU
                                                       : 
                                                      ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)
                                                        ? 0x1eU
                                                        : 0x1fU)))))))
                        : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16)
                            ? 0x20U : 0x2aU)))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024EN 
        = (((((((((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21)) 
                                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)) 
                                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                                   | (7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1)) 
                                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)) 
                              | (0xcU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                             | (0xdU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205)) 
                           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)) 
                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16)) 
                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)) 
                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)) 
                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)) 
                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30)) 
                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17)) 
                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)) 
                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                 | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
            | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas 
        = (((((((((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16)) 
                                         | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                                     | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                    | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)) 
                                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17)) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)) 
                             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)) 
                           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16)) 
                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)) 
                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205)) 
                        | (0xdU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                       | (0xcU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)) 
                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)) 
                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1)) 
                  | (7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21));
    __Vtableidx1 = (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22) 
                     << 8U) | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22) 
                                << 7U) | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22) 
                                           << 6U) | 
                                          (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22) 
                                            << 5U) 
                                           | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22) 
                                               << 4U) 
                                              | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1)))))))));
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data 
        = VmkTb__ConstPool__TABLE_60b1dfb7_0[__Vtableidx1];
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1)) 
                 & (~ (IData)(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2))));
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr 
        = (((IData)(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1) 
            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22))
            ? 0U : (((IData)(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2) 
                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22))
                     ? 1U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)
                              ? 0x100U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)
                                           ? 0x101U
                                           : ((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22))
                                               ? 0x108U
                                               : 0xaaU)))));
    vlSelf->mkTb__DOT__state_can_overlap__024D_IN = 
        ((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
         | ((~ ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9))) 
            & (IData)(vlSelf->mkTb__DOT__state_can_overlap)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte))) 
              & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)) 
              & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
           & (0x108U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
           & (~ ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr) 
                 >> 8U)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
            & (~ ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr) 
                  >> 8U))) & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_7_PLUS_IF_page___05FETC___05F_d33 
        = (7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)
                                      ? 7U : 0U)));
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
    vlSelf->mkTb__DOT__start_wire__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_set_pw__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__jj_1_repeat_count = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__jj_1_repeat_count__024D_IN = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__jj_repeat_count = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__jj_repeat_count__024D_IN = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__start_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__start_reg_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_can_overlap = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_can_overlap__024D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_fired = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__state_mkFSMstate = VL_RAND_RESET_I(5);
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr = VL_RAND_RESET_I(9);
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_read_byte = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_h = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_l = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1 = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1 = VL_RAND_RESET_I(2);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count = VL_RAND_RESET_I(7);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count__024D_IN = VL_RAND_RESET_I(7);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count = VL_RAND_RESET_I(7);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count__024D_IN = VL_RAND_RESET_I(7);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count = VL_RAND_RESET_I(7);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count__024D_IN = VL_RAND_RESET_I(7);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap__024D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate = VL_RAND_RESET_I(6);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN = VL_RAND_RESET_I(6);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024EN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__ss = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__024DIB = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_7_PLUS_IF_page___05FETC___05F_d33 = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_0_PLUS_IF_page___05FETC___05F_d86 = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R2 = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R2 = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__initial_block__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__initial_block__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata__024D_IN = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap__024D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024D_IN = VL_RAND_RESET_I(3);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024EN = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata = VL_RAND_RESET_I(8);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7 = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
