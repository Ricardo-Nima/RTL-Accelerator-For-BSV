// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkSPIController.h for the primary calling header

#include "VmkSPIController___024root.h"
#include "VmkSPIController__Syms.h"

//==========

extern const VlUnpacked<CData/*7:0*/, 512> VmkSPIController__ConstPool__TABLE_60b1dfb7_0;

VL_INLINE_OPT void VmkSPIController___024root___sequent__TOP__1(VmkSPIController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkSPIController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkSPIController___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024RDY_operate;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024RDY_read_byte;
    CData/*0:0*/ mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1;
    CData/*0:0*/ mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2;
    CData/*0:0*/ mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106;
    CData/*0:0*/ mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83;
    CData/*0:0*/ mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123;
    CData/*0:0*/ mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103;
    CData/*0:0*/ mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7;
    CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88;
    CData/*7:0*/ __Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata;
    CData/*0:0*/ __Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full;
    CData/*0:0*/ __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata;
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full;
    __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0 = 0U;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata;
    __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full 
        = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full;
    __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0 = 0U;
    __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1 = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata)) 
                         & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.spiflash_ctrl.page_buffer_serverAdapterB_outDataCore.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full)) 
                         & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.spiflash_ctrl.page_buffer_serverAdapterB_outDataCore.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata)) 
                         & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.spiflash_ctrl.page_buffer_serverAdapterA_outDataCore.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full)) 
                         & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.spiflash_ctrl.page_buffer_serverAdapterA_outDataCore.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
        }
    }
    vlSelf->mkTb__DOT__state_can_overlap = (1U & ((~ (IData)(vlSelf->RST_N)) 
                                                  | (IData)(vlSelf->mkTb__DOT__state_can_overlap__024D_IN)));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_0_PLUS_IF_page___05FETC___05F_d86;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt = 0U;
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1 
        = ((IData)(vlSelf->RST_N) ? ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas)
                                      ? (2U | (1U & 
                                               ((~ 
                                                 (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                    ? 0U
                                                    : 2U) 
                                                  >> 1U)) 
                                                | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                    ? 0U
                                                    : 2U))))
                                      : 0U) : 0U);
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command 
                = vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command = 0xffU;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9))) {
            vlSelf->mkTb__DOT__jj_repeat_count = vlSelf->mkTb__DOT__jj_repeat_count__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__jj_repeat_count = 1U;
    }
    if (vlSelf->RST_N) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1 
            = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas)
                ? (2U | (1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr))))
                : 0U);
        vlSelf->mkTb__DOT__state_fired = ((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
                                          & 1U);
        vlSelf->mkTb__DOT__start_reg_1 = ((IData)(vlSelf->mkTb__DOT__start_wire__024whas) 
                                          & 1U);
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1 = 0U;
        vlSelf->mkTb__DOT__state_fired = 0U;
        vlSelf->mkTb__DOT__start_reg_1 = 0U;
    }
    if (vlSelf->RST_N) {
        if ((0x10U == (0x10U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head = 0U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail = 0U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty = 1U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata = 0U;
        } else if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ) 
                                       << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head;
        } else if ((9U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata = 0U;
        } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty 
                = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head) 
                   == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail));
        } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata = 1U;
        } else if ((6U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full) {
                __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail 
                    = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail;
                __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty = 0U;
                __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full 
                    = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail) 
                       != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head));
            }
        }
    } else {
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head = 0U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail = 0U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty = 1U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9))) {
            vlSelf->mkTb__DOT__jj_1_repeat_count = vlSelf->mkTb__DOT__jj_1_repeat_count__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__jj_1_repeat_count = 1U;
    }
    if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                            << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                       << 2U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head];
    } else if ((0xdU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                   << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                              << 2U) 
                                             | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                 << 1U) 
                                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R;
    } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head];
    } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start)));
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg = 0U;
    }
    if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
         & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
             & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))) 
            | (((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ)) 
                & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata)) 
               & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full))))) {
        __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R;
        __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0 = 1U;
        __Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail;
    }
    if (vlSelf->RST_N) {
        if ((0x10U == (0x10U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head = 0U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail = 0U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty = 1U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata = 0U;
        } else if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                       << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head;
        } else if ((9U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata = 0U;
        } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty 
                = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head) 
                   == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail));
        } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata = 1U;
        } else if ((6U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full) {
                __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail 
                    = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail;
                __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty = 0U;
                __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full 
                    = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail) 
                       != (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head));
            }
        }
    } else {
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head = 0U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail = 0U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty = 1U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
        __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata = 0U;
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_7_PLUS_IF_page___05FETC___05F_d33;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
             | ((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130) 
                & (~ (IData)(vlSelf->mkTb__DOT__running))))) {
            vlSelf->mkTb__DOT__start_reg = (1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)));
        }
    } else {
        vlSelf->mkTb__DOT__start_reg = 0U;
    }
    if (vlSelf->RST_N) {
        if ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
              & (0x108U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr))) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg = 0U;
    }
    if (vlSelf->RST_N) {
        if (((((((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
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
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))) {
            vlSelf->mkTb__DOT__state_mkFSMstate = (
                                                   ((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
                                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)) 
                                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
                                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
                                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
                                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)) 
                                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22))
                                                    ? 
                                                   ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)
                                                         ? 4U
                                                         : 
                                                        ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)
                                                          ? 5U
                                                          : 
                                                         ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)
                                                           ? 6U
                                                           : 7U)))))))
                                                    : 
                                                   (((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22) 
                                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))
                                                     ? 
                                                    ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)
                                                      ? 8U
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)
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
                                                     : 0xaU));
        }
    } else {
        vlSelf->mkTb__DOT__state_mkFSMstate = 0U;
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas));
    if (vlSelf->RST_N) {
        if (((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)) 
             | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt = 7U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit 
                = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata)));
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit = 1U;
    }
    if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas) {
        if (vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr) {
            __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0 
                = vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data;
            __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0 = 1U;
            __Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0 
                = (0xffU & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr));
        }
    }
    if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas) {
        if ((1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)))) {
            __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__024DIB;
            __Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1 = 1U;
            __Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1 
                = (0xffU & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt);
        }
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full;
    if (__Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[__Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0] 
            = __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr__v0;
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata 
        = __Vdly__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata;
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head))));
    mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1));
    if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R 
            = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr)
                ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data)
                : vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM
               [(0xffU & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr))]);
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail))));
    mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head))));
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2) {
            vlSelf->mkTb__DOT__running = 1U;
        }
    } else {
        vlSelf->mkTb__DOT__running = 0U;
    }
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_repeat_count)) 
           & (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count)) 
           & (0xfU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count)) 
           & (0x12U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83 
        = ((~ (IData)(vlSelf->mkTb__DOT__jj_repeat_count)) 
           & (0xbU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103 
        = (((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
            & (0xfU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
           | (0x10U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78 
        = (((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
            & (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
           | (9U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123 
        = ((0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
           | ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
              & (0x12U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    if (vlSelf->RST_N) {
        if ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata = 0U;
    }
    if (vlSelf->RST_N) {
        if (((((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
               | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17))) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt = 0U;
    }
    if (__Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM[__Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0] 
            = __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v0;
    }
    if (__Vdlyvset__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1) {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM[__Vdlyvdim0__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1] 
            = __Vdlyvval__mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM__v1;
    }
    mkTb__DOT__spiflash_ctrl__024RDY_read_byte = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                                  | (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9 
        = ((IData)(vlSelf->mkTb__DOT__state_can_overlap) 
           & ((IData)(mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103) 
              | (IData)(mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9 
        = ((IData)(vlSelf->mkTb__DOT__state_can_overlap) 
           & ((IData)(mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78) 
              | (IData)(mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83)));
    vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130 
        = (((IData)(mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123) 
            & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
               | (IData)(vlSelf->mkTb__DOT__state_fired))) 
           & (~ (IData)(vlSelf->mkTb__DOT__start_reg)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = (((IData)(mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123) 
                                                  & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
                                                     | (IData)(vlSelf->mkTb__DOT__state_fired))) 
                                                 & (IData)(vlSelf->mkTb__DOT__start_reg));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_read_byte) 
         & (((IData)(mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78) 
             | (0xaU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
            | (IData)(mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_read_byte) 
         & (((IData)(mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103) 
             | (0x11U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
            | (IData)(mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106)));
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
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata) 
           & (~ ((7U >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                  ? ((IData)(1U) << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                  : 0U)));
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024EN) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate = 0U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024EN) {
            vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate 
                = vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate = 0U;
    }
    vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16 = (
                                                   ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                                    & (~ (IData)(vlSelf->mkTb__DOT__start_wire__024whas))) 
                                                   & (0x12U 
                                                      == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)) 
           & (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas));
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
    mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88 
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
    mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291 
        = (((0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
            | (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte))) 
              & (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)) 
              & (~ (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
           | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1) 
              & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired))));
    mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88) 
           & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg)));
    mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88) 
           & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg)));
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
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291) 
           & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg));
    mkTb__DOT__spiflash_ctrl__024RDY_operate = (((IData)(mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291) 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg))) 
                                                & (7U 
                                                   > 
                                                   (4U 
                                                    ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt))));
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
    mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7 
        = ((((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
              >> 0x1fU) | (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas))) 
            & ((~ (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                   >> 0x1fU)) | (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas)))) 
           & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read) 
           & (6U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32 
        = (((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read) 
            & (7U > (4U ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt)))) 
           & (0x1dU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (4U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (5U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0xbU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x11U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x12U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x13U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
           & (0x14U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29 
        = (((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
            & (0x80000100U > (0x80000000U ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt))) 
           & ((0x1cU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x1fU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21 
        = ((((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write) 
             & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                | (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))) 
            & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
               | (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))) 
           & (0x18U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start) 
           | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1) 
              & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (1U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (2U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (3U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (4U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22 = 
        (((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
          & (IData)(vlSelf->mkTb__DOT__jj_repeat_count)) 
         & (0xbU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (((IData)(vlSelf->mkTb__DOT__start_wire__024whas) 
             & (0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
            | (((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                & (IData)(vlSelf->mkTb__DOT__start_wire__024whas)) 
               & (0x12U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (6U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (7U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (0xdU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22 = 
        ((IData)(mkTb__DOT__spiflash_ctrl__024RDY_operate) 
         & (0xeU == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas 
        = (((((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7) 
              | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
            | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024D_IN 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7)
            ? 0U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)
                     ? 1U : ((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                              ? 2U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)
                                       ? 3U : ((3U 
                                                == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                                ? 4U
                                                : 2U)))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024EN 
        = (((((IData)(mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)) 
             | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
           | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)));
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
    mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
           & (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21 
        = ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas) 
           & ((0U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
              | (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))));
    mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9 
        = ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas)) 
           & (0x20U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)));
    mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22));
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
    mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_0_PLUS_IF_page___05FETC___05F_d86 
        = (7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                      ? 7U : 0U)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full) 
               & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21))) 
              & (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas)));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ 
        = ((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq) 
           | (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
               & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
              & (~ (IData)(mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))));
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas 
        = (((((((((((((((((((((((((((((((((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
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
    vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN 
        = (((((((((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21)) 
                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)) 
                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)) 
               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25))
            ? ((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9)
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
        = (((((((((((((((((((((((((((((((((IData)(mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
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
    vlSelf->mkTb__DOT__state_can_overlap__024D_IN = 
        ((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
         | ((~ ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9))) 
            & (IData)(vlSelf->mkTb__DOT__state_can_overlap)));
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
                                                    | (((IData)(mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2) 
                                                        << 1U) 
                                                       | (IData)(mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1)))))))));
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data 
        = VmkSPIController__ConstPool__TABLE_60b1dfb7_0
        [__Vtableidx1];
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr 
        = (1U & ((~ (IData)(mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1)) 
                 & (~ (IData)(mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2))));
    vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr 
        = (((IData)(mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1) 
            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22))
            ? 0U : (((IData)(mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2) 
                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22))
                     ? 1U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)
                              ? 0x100U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)
                                           ? 0x101U
                                           : ((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22))
                                               ? 0x108U
                                               : 0xaaU)))));
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

VL_INLINE_OPT void VmkSPIController___024root___sequent__TOP__2(VmkSPIController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkSPIController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkSPIController___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) {
            VL_WRITEF("read_byte = %x\n",8,((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata)
                                             ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT)
                                             : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R)));
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32)) {
            VL_WRITEF("read_byte = %x\n",8,((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata)
                                             ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT)
                                             : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R)));
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22) 
                         & ((((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22) 
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
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 21, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l21c22] and\n  [RL_action_l22c22, RL_action_l24c22, RL_action_l25c22, RL_action_l26c22,\n  RL_action_l28c22, RL_action_l30c22, RL_action_l31c22,\n  RL_action_r_init_l32c9, RL_action_l32c32, RL_action_l34c22,\n  RL_action_l36c22, RL_action_l37c22, RL_action_r_init_l38c9,\n  RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22) 
                         & (((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22) 
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
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 22, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l22c22] and\n  [RL_action_l24c22, RL_action_l25c22, RL_action_l26c22, RL_action_l28c22,\n  RL_action_l30c22, RL_action_l31c22, RL_action_r_init_l32c9,\n  RL_action_l32c32, RL_action_l34c22, RL_action_l36c22, RL_action_l37c22,\n  RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22) 
                         & ((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22) 
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
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 24, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l24c22] and\n  [RL_action_l25c22, RL_action_l26c22, RL_action_l28c22, RL_action_l30c22,\n  RL_action_l31c22, RL_action_r_init_l32c9, RL_action_l32c32,\n  RL_action_l34c22, RL_action_l36c22, RL_action_l37c22,\n  RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22) 
                         & (((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22)) 
                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 25, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l25c22] and\n  [RL_action_l26c22, RL_action_l28c22, RL_action_l30c22, RL_action_l31c22,\n  RL_action_r_init_l32c9, RL_action_l32c32, RL_action_l34c22,\n  RL_action_l36c22, RL_action_l37c22, RL_action_r_init_l38c9,\n  RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22) 
                         & ((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22) 
                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22)) 
                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 26, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l26c22] and\n  [RL_action_l28c22, RL_action_l30c22, RL_action_l31c22,\n  RL_action_r_init_l32c9, RL_action_l32c32, RL_action_l34c22,\n  RL_action_l36c22, RL_action_l37c22, RL_action_r_init_l38c9,\n  RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22) 
                         & (((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22) 
                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 28, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l28c22] and\n  [RL_action_l30c22, RL_action_l31c22, RL_action_r_init_l32c9,\n  RL_action_l32c32, RL_action_l34c22, RL_action_l36c22, RL_action_l37c22,\n  RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22) 
                         & ((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 30, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l30c22] and\n  [RL_action_l31c22, RL_action_r_init_l32c9, RL_action_l32c32,\n  RL_action_l34c22, RL_action_l36c22, RL_action_l37c22,\n  RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22) 
                         & (((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 31, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l31c22] and\n  [RL_action_r_init_l32c9, RL_action_l32c32, RL_action_l34c22,\n  RL_action_l36c22, RL_action_l37c22, RL_action_r_init_l38c9,\n  RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32) 
                         & (((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 32, column 32: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l32c32] and\n  [RL_action_l34c22, RL_action_l36c22, RL_action_l37c22,\n  RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9) 
                         & ((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 32, column 9: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_r_init_l32c9] and\n  [RL_action_l32c32, RL_action_l34c22, RL_action_l36c22, RL_action_l37c22,\n  RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22) 
                         & ((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 34, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l34c22] and\n  [RL_action_l36c22, RL_action_l37c22, RL_action_r_init_l38c9,\n  RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22) 
                         & (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 36, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l36c22] and\n  [RL_action_l37c22, RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the\n  same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22) 
                         & ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 37, column 22: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l37c22] and\n  [RL_action_r_init_l38c9, RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9) 
                         & (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32)))) {
            VL_WRITEF("Error: \"TbSPIFlashController.bsv\", line 38, column 9: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_r_init_l38c9] and\n  [RL_action_l38c32] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__running) 
                         & (IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130)))) {
            VL_FINISH_MT("mkTb.v", 648, "");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13) 
                         & (((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)) 
                             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
                            | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"SPIController.bsv\", line 31, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l31c13] and\n  [RL_spiFsm_action_l35c13, RL_spiFsm_action_l41c10, RL_spiFsm_action_l45c14]\n  ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)) 
                         & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                            | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"SPIController.bsv\", line 35, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l35c13] and\n  [RL_spiFsm_action_l41c10, RL_spiFsm_action_l45c14] ) fired in the same clock\n  cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                         & (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))))) {
            VL_WRITEF("Error: \"SPIController.bsv\", line 41, column 10: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l41c10] and\n  [RL_spiFsm_action_l45c14] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1) 
                                >> 1U) & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full)))))) {
            VL_WRITEF("ERROR: %NmkTb.spiflash_ctrl: mkBRAMAdapter overrun\n",
                      vlSymsp->name());
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1) 
                                >> 1U) & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full)))))) {
            VL_WRITEF("ERROR: %NmkTb.spiflash_ctrl: mkBRAMAdapter overrun\n",
                      vlSymsp->name());
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21) 
                         & (((((((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 47, column 21: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l47c21]\n  and [RL_spiFlashFsm_action_d_init_np, RL_spiFlashFsm_action_np,\n  RL_spiFlashFsm_action_l50c20, RL_spiFlashFsm_action_l51c25,\n  RL_spiFlashFsm_action_l52c25, RL_spiFlashFsm_action_l53c25,\n  RL_spiFlashFsm_action_l54c20, RL_spiFlashFsm_action_d_init_np_1,\n  RL_spiFlashFsm_action_np_1, RL_spiFlashFsm_action_l60c20,\n  RL_spiFlashFsm_action_l61c25, RL_spiFlashFsm_action_l62c30,\n  RL_spiFlashFsm_action_l63c20, RL_spiFlashFsm_action_d_init_np_2,\n  RL_spiFlashFsm_action_np_2, RL_spiFlashFsm_action_l67c16,\n  RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np) 
                         & ((((((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_d_init_np]\n  and [RL_spiFlashFsm_action_np, RL_spiFlashFsm_action_l50c20,\n  RL_spiFlashFsm_action_l51c25, RL_spiFlashFsm_action_l52c25,\n  RL_spiFlashFsm_action_l53c25, RL_spiFlashFsm_action_l54c20,\n  RL_spiFlashFsm_action_d_init_np_1, RL_spiFlashFsm_action_np_1,\n  RL_spiFlashFsm_action_l60c20, RL_spiFlashFsm_action_l61c25,\n  RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np) 
                         & (((((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_np] and\n  [RL_spiFlashFsm_action_l50c20, RL_spiFlashFsm_action_l51c25,\n  RL_spiFlashFsm_action_l52c25, RL_spiFlashFsm_action_l53c25,\n  RL_spiFlashFsm_action_l54c20, RL_spiFlashFsm_action_d_init_np_1,\n  RL_spiFlashFsm_action_np_1, RL_spiFlashFsm_action_l60c20,\n  RL_spiFlashFsm_action_l61c25, RL_spiFlashFsm_action_l62c30,\n  RL_spiFlashFsm_action_l63c20, RL_spiFlashFsm_action_d_init_np_2,\n  RL_spiFlashFsm_action_np_2, RL_spiFlashFsm_action_l67c16,\n  RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20) 
                         & ((((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 50, column 20: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l50c20]\n  and [RL_spiFlashFsm_action_l51c25, RL_spiFlashFsm_action_l52c25,\n  RL_spiFlashFsm_action_l53c25, RL_spiFlashFsm_action_l54c20,\n  RL_spiFlashFsm_action_d_init_np_1, RL_spiFlashFsm_action_np_1,\n  RL_spiFlashFsm_action_l60c20, RL_spiFlashFsm_action_l61c25,\n  RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25) 
                         & (((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 51, column 25: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l51c25]\n  and [RL_spiFlashFsm_action_l52c25, RL_spiFlashFsm_action_l53c25,\n  RL_spiFlashFsm_action_l54c20, RL_spiFlashFsm_action_d_init_np_1,\n  RL_spiFlashFsm_action_np_1, RL_spiFlashFsm_action_l60c20,\n  RL_spiFlashFsm_action_l61c25, RL_spiFlashFsm_action_l62c30,\n  RL_spiFlashFsm_action_l63c20, RL_spiFlashFsm_action_d_init_np_2,\n  RL_spiFlashFsm_action_np_2, RL_spiFlashFsm_action_l67c16,\n  RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25) 
                         & ((((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 52, column 25: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l52c25]\n  and [RL_spiFlashFsm_action_l53c25, RL_spiFlashFsm_action_l54c20,\n  RL_spiFlashFsm_action_d_init_np_1, RL_spiFlashFsm_action_np_1,\n  RL_spiFlashFsm_action_l60c20, RL_spiFlashFsm_action_l61c25,\n  RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25) 
                         & (((((((((((((((((((((((((7U 
                                                    == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 53, column 25: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l53c25]\n  and [RL_spiFlashFsm_action_l54c20, RL_spiFlashFsm_action_d_init_np_1,\n  RL_spiFlashFsm_action_np_1, RL_spiFlashFsm_action_l60c20,\n  RL_spiFlashFsm_action_l61c25, RL_spiFlashFsm_action_l62c30,\n  RL_spiFlashFsm_action_l63c20, RL_spiFlashFsm_action_d_init_np_2,\n  RL_spiFlashFsm_action_np_2, RL_spiFlashFsm_action_l67c16,\n  RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                         & ((((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 54, column 20: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l54c20]\n  and [RL_spiFlashFsm_action_d_init_np_1, RL_spiFlashFsm_action_np_1,\n  RL_spiFlashFsm_action_l60c20, RL_spiFlashFsm_action_l61c25,\n  RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1) 
                         & (((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets\n  [RL_spiFlashFsm_action_d_init_np_1] and [RL_spiFlashFsm_action_np_1,\n  RL_spiFlashFsm_action_l60c20, RL_spiFlashFsm_action_l61c25,\n  RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1) 
                         & ((((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_np_1] and\n  [RL_spiFlashFsm_action_l60c20, RL_spiFlashFsm_action_l61c25,\n  RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20) 
                         & (((((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 60, column 20: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l60c20]\n  and [RL_spiFlashFsm_action_l61c25, RL_spiFlashFsm_action_l62c30,\n  RL_spiFlashFsm_action_l63c20, RL_spiFlashFsm_action_d_init_np_2,\n  RL_spiFlashFsm_action_np_2, RL_spiFlashFsm_action_l67c16,\n  RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25) 
                         & ((((((((((((((((((((0xcU 
                                               == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
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
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 61, column 25: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l61c25]\n  and [RL_spiFlashFsm_action_l62c30, RL_spiFlashFsm_action_l63c20,\n  RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0xcU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                         & (((((((((((((((((((0xdU 
                                              == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 62, column 30: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l62c30]\n  and [RL_spiFlashFsm_action_l63c20, RL_spiFlashFsm_action_d_init_np_2,\n  RL_spiFlashFsm_action_np_2, RL_spiFlashFsm_action_l67c16,\n  RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205) 
                         & (((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets\n  [RL_spiFlashFsm_action_d_init_np_2] and [RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0xdU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                         & ((((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 63, column 20: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l63c20]\n  and [RL_spiFlashFsm_action_d_init_np_2, RL_spiFlashFsm_action_np_2,\n  RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2) 
                         & ((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_np_2] and\n  [RL_spiFlashFsm_action_l67c16, RL_spiFlashFsm_action_l68c21,\n  RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21) 
                         & ((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 68, column 21: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l68c21]\n  and [RL_spiFlashFsm_action_l69c21, RL_spiFlashFsm_action_l70c21,\n  RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                         & (((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 67, column 16: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l67c16]\n  and [RL_spiFlashFsm_action_l68c21, RL_spiFlashFsm_action_l69c21,\n  RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21) 
                         & (((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 69, column 21: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l69c21]\n  and [RL_spiFlashFsm_action_l70c21, RL_spiFlashFsm_action_l71c21,\n  RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21) 
                         & ((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21) 
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
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 70, column 21: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l70c21]\n  and [RL_spiFlashFsm_action_l71c21, RL_spiFlashFsm_action_l73c30,\n  RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21) 
                         & (((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17)) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 71, column 21: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l71c21]\n  and [RL_spiFlashFsm_action_l73c30, RL_spiFlashFsm_action_f_init_l75c17,\n  RL_spiFlashFsm_action_l76c32, RL_spiFlashFsm_action_l77c21,\n  RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30) 
                         & ((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 73, column 30: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l73c30]\n  and [RL_spiFlashFsm_action_f_init_l75c17, RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17) 
                         & (((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 75, column 24: (R0001)\n  Mutually exclusive rules (from the ME sets\n  [RL_spiFlashFsm_action_f_init_l75c17] and [RL_spiFlashFsm_action_l76c32,\n  RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32) 
                         & ((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21) 
                                  | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 76, column 32: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l76c32]\n  and [RL_spiFlashFsm_action_l77c21, RL_spiFlashFsm_action_l81c34,\n  RL_spiFlashFsm_action_f_update_l75c17, RL_spiFlashFsm_action_f_init_l84c17,\n  RL_spiFlashFsm_action_l85c29, RL_spiFlashFsm_action_l86c32,\n  RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] ) fired\n  in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21) 
                         & (((((((0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                 | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 77, column 21: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l77c21]\n  and [RL_spiFlashFsm_action_l81c34, RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                         & ((((((0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 81, column 34: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l81c34]\n  and [RL_spiFlashFsm_action_f_update_l75c17,\n  RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                         & (((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17) 
                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 75, column 41: (R0001)\n  Mutually exclusive rules (from the ME sets\n  [RL_spiFlashFsm_action_f_update_l75c17] and\n  [RL_spiFlashFsm_action_f_init_l84c17, RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17) 
                         & ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29) 
                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 84, column 24: (R0001)\n  Mutually exclusive rules (from the ME sets\n  [RL_spiFlashFsm_action_f_init_l84c17] and [RL_spiFlashFsm_action_l85c29,\n  RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29) 
                         & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32) 
                             | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 85, column 29: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l85c29]\n  and [RL_spiFlashFsm_action_l86c32, RL_spiFlashFsm_action_f_update_l84c17,\n  RL_spiFlashFsm_action_l88c16] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                         & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16)))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 84, column 41: (R0001)\n  Mutually exclusive rules (from the ME sets\n  [RL_spiFlashFsm_action_f_update_l84c17] and [RL_spiFlashFsm_action_l88c16] )\n  fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32) 
                         & ((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))))) {
            VL_WRITEF("Error: \"SPIFlashController.bsv\", line 86, column 32: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFlashFsm_action_l86c32]\n  and [RL_spiFlashFsm_action_f_update_l84c17, RL_spiFlashFsm_action_l88c16] )\n  fired in the same clock cycle.\n\n");
        }
    }
}

void VmkSPIController___024root___eval(VmkSPIController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkSPIController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkSPIController___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        VmkSPIController___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->CLK)) & (IData)(vlSelf->__Vclklast__TOP__CLK))) {
        VmkSPIController___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

QData VmkSPIController___024root___change_request_1(VmkSPIController___024root* vlSelf);

VL_INLINE_OPT QData VmkSPIController___024root___change_request(VmkSPIController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkSPIController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkSPIController___024root___change_request\n"); );
    // Body
    return (VmkSPIController___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VmkSPIController___024root___change_request_1(VmkSPIController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkSPIController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkSPIController___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkSPIController___024root___eval_debug_assertions(VmkSPIController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkSPIController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkSPIController___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
