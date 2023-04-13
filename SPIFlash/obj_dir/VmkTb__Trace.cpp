// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTb__Syms.h"


void VmkTb___024root__traceChgSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep);

void VmkTb___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VmkTb___024root* const __restrict vlSelf = static_cast<VmkTb___024root*>(voidSelf);
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VmkTb___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VmkTb___024root__traceChgSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i),32);
            tracep->chgIData(oldp+1,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__initial_block__DOT__i),32);
            tracep->chgIData(oldp+2,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__initial_block__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+3,(vlSelf->mkTb__DOT__start_wire__024whas));
            tracep->chgBit(oldp+4,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9))));
            tracep->chgBit(oldp+5,(vlSelf->mkTb__DOT__state_set_pw__024whas));
            tracep->chgCData(oldp+6,(vlSelf->mkTb__DOT__jj_1_repeat_count),2);
            tracep->chgCData(oldp+7,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9)
                                       ? ((2U & (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count))
                                           ? 1U : (2U 
                                                   & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                                      << 1U)))
                                       : 1U)),2);
            tracep->chgBit(oldp+8,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9))));
            tracep->chgCData(oldp+9,(vlSelf->mkTb__DOT__jj_repeat_count),2);
            tracep->chgCData(oldp+10,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9)
                                        ? ((2U & (IData)(vlSelf->mkTb__DOT__jj_repeat_count))
                                            ? 1U : 
                                           (2U & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                                  << 1U)))
                                        : 1U)),2);
            tracep->chgBit(oldp+11,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9))));
            tracep->chgBit(oldp+12,(vlSelf->mkTb__DOT__running));
            tracep->chgBit(oldp+13,(((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130) 
                                     & (~ (IData)(vlSelf->mkTb__DOT__running)))));
            tracep->chgBit(oldp+14,(vlSelf->mkTb__DOT__start_reg));
            tracep->chgBit(oldp+15,((1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)))));
            tracep->chgBit(oldp+16,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                     | ((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130) 
                                        & (~ (IData)(vlSelf->mkTb__DOT__running))))));
            tracep->chgBit(oldp+17,(vlSelf->mkTb__DOT__start_reg_1));
            tracep->chgBit(oldp+18,(vlSelf->mkTb__DOT__state_can_overlap));
            tracep->chgBit(oldp+19,(((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
                                     | ((~ ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9))) 
                                        & (IData)(vlSelf->mkTb__DOT__state_can_overlap)))));
            tracep->chgBit(oldp+20,(vlSelf->mkTb__DOT__state_fired));
            tracep->chgCData(oldp+21,(vlSelf->mkTb__DOT__state_mkFSMstate),5);
            tracep->chgCData(oldp+22,((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22))
                                        ? ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16)
                                            ? 0U : 
                                           ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)
                                             ? 1U : 
                                            ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)
                                              ? 2U : 
                                             ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)
                                               ? 3U
                                               : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)
                                                     ? 6U
                                                     : 7U)))))))
                                        : (((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22) 
                                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))
                                            ? ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)
                                                ? 8U
                                                : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)
                                                    ? 9U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)
                                                     ? 0xbU
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)
                                                       ? 0xeU
                                                       : 
                                                      ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)
                                                        ? 0xfU
                                                        : 
                                                       ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)
                                                         ? 0x10U
                                                         : 0x12U)))))))
                                            : 0xaU))),5);
            tracep->chgBit(oldp+23,(((((((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
                                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)) 
                                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
                                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
                                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))));
            tracep->chgSData(oldp+24,(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr),9);
            tracep->chgCData(oldp+25,(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data),8);
            tracep->chgCData(oldp+26,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata)
                                        ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT)
                                        : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R))),8);
            tracep->chgBit(oldp+27,(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate));
            tracep->chgBit(oldp+28,(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte));
            tracep->chgBit(oldp+29,(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate));
            tracep->chgBit(oldp+30,(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_read_byte));
            tracep->chgBit(oldp+31,(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr));
            tracep->chgBit(oldp+32,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22));
            tracep->chgBit(oldp+33,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22));
            tracep->chgBit(oldp+34,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22));
            tracep->chgBit(oldp+35,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22));
            tracep->chgBit(oldp+36,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22));
            tracep->chgBit(oldp+37,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22));
            tracep->chgBit(oldp+38,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22));
            tracep->chgBit(oldp+39,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22));
            tracep->chgBit(oldp+40,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32));
            tracep->chgBit(oldp+41,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22));
            tracep->chgBit(oldp+42,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22));
            tracep->chgBit(oldp+43,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22));
            tracep->chgBit(oldp+44,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32));
            tracep->chgBit(oldp+45,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9));
            tracep->chgBit(oldp+46,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9));
            tracep->chgBit(oldp+47,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9));
            tracep->chgBit(oldp+48,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9));
            tracep->chgBit(oldp+49,(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start));
            tracep->chgBit(oldp+50,(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16));
            tracep->chgCData(oldp+51,(((2U & (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count))
                                        ? 1U : (2U 
                                                & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                                   << 1U)))),2);
            tracep->chgCData(oldp+52,(((2U & (IData)(vlSelf->mkTb__DOT__jj_repeat_count))
                                        ? 1U : (2U 
                                                & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                                   << 1U)))),2);
            tracep->chgBit(oldp+53,(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1));
            tracep->chgBit(oldp+54,(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2));
            tracep->chgCData(oldp+55,((2U & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                             << 1U))),2);
            tracep->chgCData(oldp+56,((2U & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                             << 1U))),2);
            tracep->chgBit(oldp+57,(vlSelf->mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106));
            tracep->chgBit(oldp+58,(vlSelf->mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83));
            tracep->chgBit(oldp+59,(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123));
            tracep->chgBit(oldp+60,(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130));
            tracep->chgBit(oldp+61,(vlSelf->mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103));
            tracep->chgBit(oldp+62,(vlSelf->mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78));
            tracep->chgBit(oldp+63,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__ss));
            tracep->chgBit(oldp+64,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__sck));
            tracep->chgBit(oldp+65,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__mosi));
            tracep->chgCData(oldp+66,((2U | (1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr))))),2);
            tracep->chgCData(oldp+67,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr) 
                                       << 1U)),2);
            tracep->chgCData(oldp+68,((2U | (1U & (
                                                   (~ 
                                                    (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                       ? 0U
                                                       : 2U) 
                                                     >> 1U)) 
                                                   | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                       ? 0U
                                                       : 2U))))),2);
            tracep->chgCData(oldp+69,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                        ? 0U : 2U)),2);
            tracep->chgBit(oldp+70,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas));
            tracep->chgBit(oldp+71,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas));
            tracep->chgBit(oldp+72,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas))));
            tracep->chgBit(oldp+73,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas));
            tracep->chgBit(oldp+74,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas));
            tracep->chgBit(oldp+75,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas));
            tracep->chgBit(oldp+76,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))));
            tracep->chgBit(oldp+77,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas));
            tracep->chgBit(oldp+78,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas));
            tracep->chgBit(oldp+79,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas));
            tracep->chgBit(oldp+80,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit));
            tracep->chgBit(oldp+81,((1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                                           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata)))));
            tracep->chgBit(oldp+82,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21))));
            tracep->chgIData(oldp+83,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt),32);
            tracep->chgIData(oldp+84,((((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                        | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))
                                        ? ((IData)(1U) 
                                           + vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)
                                        : 0U)),32);
            tracep->chgBit(oldp+85,(((((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                       | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17))));
            tracep->chgCData(oldp+86,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command),8);
            tracep->chgBit(oldp+87,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1));
            tracep->chgCData(oldp+88,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_h),8);
            tracep->chgBit(oldp+89,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
                                     & (0x101U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr)))));
            tracep->chgCData(oldp+90,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_l),8);
            tracep->chgBit(oldp+91,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
                                     & (0x100U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr)))));
            tracep->chgCData(oldp+92,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt),3);
            tracep->chgCData(oldp+93,((7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt) 
                                              + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas)
                                                  ? 1U
                                                  : 0U)) 
                                             + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)
                                                 ? 7U
                                                 : 0U)))),3);
            tracep->chgBit(oldp+94,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte))));
            tracep->chgCData(oldp+95,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1),2);
            tracep->chgCData(oldp+96,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas)
                                        ? (2U | (1U 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr))))
                                        : 0U)),2);
            tracep->chgCData(oldp+97,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt),3);
            tracep->chgCData(oldp+98,((7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt) 
                                              + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas)
                                                  ? 1U
                                                  : 0U)) 
                                             + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                                 ? 7U
                                                 : 0U)))),3);
            tracep->chgBit(oldp+99,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21))));
            tracep->chgCData(oldp+100,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1),2);
            tracep->chgCData(oldp+101,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas)
                                         ? (2U | (1U 
                                                  & ((~ 
                                                      (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                         ? 0U
                                                         : 2U) 
                                                       >> 1U)) 
                                                     | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                         ? 0U
                                                         : 2U))))
                                         : 0U)),2);
            tracep->chgCData(oldp+102,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count),7);
            tracep->chgCData(oldp+103,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)
                                         ? (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)))
                                         : 0U)),7);
            tracep->chgBit(oldp+104,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1))));
            tracep->chgCData(oldp+105,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count),7);
            tracep->chgCData(oldp+106,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)
                                         ? (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)))
                                         : 0U)),7);
            tracep->chgBit(oldp+107,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205))));
            tracep->chgCData(oldp+108,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count),7);
            tracep->chgCData(oldp+109,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)
                                         ? (0x7fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)))
                                         : 0U)),7);
            tracep->chgBit(oldp+110,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np))));
            tracep->chgBit(oldp+111,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg));
            tracep->chgBit(oldp+112,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
                                       & (0x108U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr))) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start))));
            tracep->chgBit(oldp+113,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1));
            tracep->chgBit(oldp+114,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap));
            tracep->chgBit(oldp+115,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap))));
            tracep->chgBit(oldp+116,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired));
            tracep->chgCData(oldp+117,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate),6);
            tracep->chgCData(oldp+118,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN),6);
            tracep->chgBit(oldp+119,(((((((((((((((
                                                   (((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
                                                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21)) 
                                                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)) 
                                                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)) 
                                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
                                                                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
                                                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
                                                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                                                              | (7U 
                                                                 == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                                             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1)) 
                                                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)) 
                                                           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)) 
                                                         | (0xcU 
                                                            == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                                        | (0xdU 
                                                           == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
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
                                            | (0x19U 
                                               == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                           | (0x1aU 
                                              == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                                       | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))));
            tracep->chgBit(oldp+120,((1U & (~ (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20))))));
            tracep->chgBit(oldp+121,(((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
                                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16)) 
                                       | (0xdU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                      | (7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))));
            tracep->chgCData(oldp+122,((0xffU & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr))),8);
            tracep->chgCData(oldp+123,((0xffU & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)),8);
            tracep->chgCData(oldp+124,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__024DIB),8);
            tracep->chgCData(oldp+125,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R),8);
            tracep->chgCData(oldp+126,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R),8);
            tracep->chgBit(oldp+127,((1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)))));
            tracep->chgCData(oldp+128,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT),8);
            tracep->chgBit(oldp+129,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ));
            tracep->chgBit(oldp+130,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata));
            tracep->chgBit(oldp+131,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ));
            tracep->chgBit(oldp+132,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full));
            tracep->chgCData(oldp+133,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT),8);
            tracep->chgBit(oldp+134,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ));
            tracep->chgBit(oldp+135,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata));
            tracep->chgBit(oldp+136,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ));
            tracep->chgBit(oldp+137,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full));
            tracep->chgCData(oldp+138,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)
                                         ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_h)
                                         : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)
                                             ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_l)
                                             : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                                 ? 
                                                ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata)
                                                  ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT)
                                                  : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R))
                                                 : 
                                                ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)
                                                  ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)
                                                  : 
                                                 ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29) 
                                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)
                                                     ? 6U
                                                     : 0xaaU)))))))),8);
            tracep->chgCData(oldp+139,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata),8);
            tracep->chgBit(oldp+140,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write));
            tracep->chgBit(oldp+141,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read));
            tracep->chgBit(oldp+142,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write));
            tracep->chgBit(oldp+143,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq));
            tracep->chgBit(oldp+144,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq));
            tracep->chgBit(oldp+145,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np));
            tracep->chgBit(oldp+146,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1));
            tracep->chgBit(oldp+147,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17));
            tracep->chgBit(oldp+148,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17));
            tracep->chgBit(oldp+149,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21));
            tracep->chgBit(oldp+150,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20));
            tracep->chgBit(oldp+151,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25));
            tracep->chgBit(oldp+152,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25));
            tracep->chgBit(oldp+153,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25));
            tracep->chgBit(oldp+154,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20));
            tracep->chgBit(oldp+155,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25));
            tracep->chgBit(oldp+156,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16));
            tracep->chgBit(oldp+157,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21));
            tracep->chgBit(oldp+158,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21));
            tracep->chgBit(oldp+159,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21));
            tracep->chgBit(oldp+160,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21));
            tracep->chgBit(oldp+161,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30));
            tracep->chgBit(oldp+162,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32));
            tracep->chgBit(oldp+163,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21));
            tracep->chgBit(oldp+164,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29));
            tracep->chgBit(oldp+165,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32));
            tracep->chgBit(oldp+166,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16));
            tracep->chgBit(oldp+167,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np));
            tracep->chgBit(oldp+168,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1));
            tracep->chgBit(oldp+169,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2));
            tracep->chgBit(oldp+170,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start));
            tracep->chgBit(oldp+171,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9));
            tracep->chgIData(oldp+172,(((IData)(1U) 
                                        + vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)),32);
            tracep->chgCData(oldp+173,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata)
                                         ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT)
                                         : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R))),8);
            tracep->chgCData(oldp+174,((0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)))),7);
            tracep->chgCData(oldp+175,((0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)))),7);
            tracep->chgCData(oldp+176,((0x7fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)))),7);
            tracep->chgBit(oldp+177,(((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                      | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+178,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25))));
            tracep->chgBit(oldp+179,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20))));
            tracep->chgBit(oldp+180,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205));
            tracep->chgBit(oldp+181,((0x80000100U > 
                                      (0x80000000U 
                                       ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt))));
            tracep->chgBit(oldp+182,((7U > (4U ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt)))));
            tracep->chgBit(oldp+183,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291));
            tracep->chgCData(oldp+184,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R2),8);
            tracep->chgCData(oldp+185,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R2),8);
            tracep->chgBit(oldp+186,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty));
            tracep->chgBit(oldp+187,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head));
            tracep->chgBit(oldp+188,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head));
            tracep->chgBit(oldp+189,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail));
            tracep->chgBit(oldp+190,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail));
            tracep->chgCData(oldp+191,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[0]),8);
            tracep->chgCData(oldp+192,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[1]),8);
            tracep->chgBit(oldp+193,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail)))));
            tracep->chgBit(oldp+194,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head)))));
            tracep->chgBit(oldp+195,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+196,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror));
            tracep->chgBit(oldp+197,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty));
            tracep->chgBit(oldp+198,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head));
            tracep->chgBit(oldp+199,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head));
            tracep->chgBit(oldp+200,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail));
            tracep->chgBit(oldp+201,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail));
            tracep->chgCData(oldp+202,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[0]),8);
            tracep->chgCData(oldp+203,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[1]),8);
            tracep->chgBit(oldp+204,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail)))));
            tracep->chgBit(oldp+205,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head)))));
            tracep->chgBit(oldp+206,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+207,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror));
            tracep->chgBit(oldp+208,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas));
            tracep->chgBit(oldp+209,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas));
            tracep->chgIData(oldp+210,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt),32);
            tracep->chgIData(oldp+211,(((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                         ? (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                                            - (IData)(1U))
                                         : 7U)),32);
            tracep->chgBit(oldp+212,(((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)) 
                                      | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+213,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13) 
                                      & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata) 
                                         >> (7U & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)))));
            tracep->chgBit(oldp+214,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10))));
            tracep->chgCData(oldp+215,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata) 
                                        & (~ ((7U >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                               ? ((IData)(1U) 
                                                  << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                               : 0U)))),8);
            tracep->chgBit(oldp+216,((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))));
            tracep->chgBit(oldp+217,((1U & (~ ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13))))));
            tracep->chgBit(oldp+218,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)) 
                                      | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+219,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg));
            tracep->chgBit(oldp+220,((1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start)))));
            tracep->chgBit(oldp+221,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write))));
            tracep->chgBit(oldp+222,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1));
            tracep->chgBit(oldp+223,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap));
            tracep->chgBit(oldp+224,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap))));
            tracep->chgBit(oldp+225,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired));
            tracep->chgCData(oldp+226,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate),3);
            tracep->chgCData(oldp+227,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7)
                                         ? 0U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                                     ? 4U
                                                     : 2U)))))),3);
            tracep->chgBit(oldp+228,((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7) 
                                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)) 
                                        | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
                                      | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgCData(oldp+229,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata),8);
            tracep->chgBit(oldp+230,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13));
            tracep->chgBit(oldp+231,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10));
            tracep->chgBit(oldp+232,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start));
            tracep->chgBit(oldp+233,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7));
            tracep->chgIData(oldp+234,((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                                        - (IData)(1U))),32);
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata) 
                                            >> (7U 
                                                & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)))));
            tracep->chgBit(oldp+236,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13))));
            tracep->chgCData(oldp+237,(((7U >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                         ? (0xffU & 
                                            ((IData)(1U) 
                                             << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt))
                                         : 0U)),8);
            tracep->chgCData(oldp+238,((0xffU & (~ 
                                                 ((7U 
                                                   >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                                   ? 
                                                  ((IData)(1U) 
                                                   << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                                   : 0U)))),8);
            tracep->chgBit(oldp+239,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88));
        }
        tracep->chgBit(oldp+240,(vlSelf->CLK));
        tracep->chgBit(oldp+241,(vlSelf->RST_N));
    }
}

void VmkTb___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VmkTb___024root* const __restrict vlSelf = static_cast<VmkTb___024root*>(voidSelf);
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
