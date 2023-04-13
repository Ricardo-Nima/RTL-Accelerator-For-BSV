// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb.h for the primary calling header

#include "VmkTb___024root.h"
#include "VmkTb__Syms.h"

//==========

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__1(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg;
    CData/*0:0*/ __Vdly__mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg;
    CData/*4:0*/ __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v0;
    CData/*4:0*/ __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v1;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v1;
    CData/*4:0*/ __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v2;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v2;
    CData/*4:0*/ __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v3;
    CData/*7:0*/ __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v3;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v3;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata;
    CData/*0:0*/ __Vdlyvdim0__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full;
    CData/*0:0*/ __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata;
    CData/*0:0*/ __Vdlyvdim0__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head;
    CData/*0:0*/ __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail;
    CData/*0:0*/ __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty;
    CData/*0:0*/ __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full;
    CData/*0:0*/ __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata;
    CData/*0:0*/ __Vdlyvdim0__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0;
    CData/*0:0*/ __Vdlyvset__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0;
    SData/*13:0*/ __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v0;
    SData/*13:0*/ __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v1;
    SData/*13:0*/ __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v2;
    SData/*13:0*/ __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v3;
    IData/*31:0*/ __Vdlyvval__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0;
    IData/*31:0*/ __Vdlyvval__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0;
    IData/*31:0*/ __Vdlyvval__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp39;
    // Body
    __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v0 = 0U;
    __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v1 = 0U;
    __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v2 = 0U;
    __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v3 = 0U;
    __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty;
    __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail;
    __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head;
    __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata;
    __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full;
    __Vdlyvset__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0 = 0U;
    __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty;
    __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail;
    __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head;
    __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata;
    __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full 
        = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full;
    __Vdly__mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg 
        = vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg;
    __Vdly__mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg 
        = vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg;
    __Vdlyvset__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0 = 0U;
    __Vdlyvset__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0 = 0U;
    __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty 
        = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty;
    __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail 
        = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail;
    __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head 
        = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head;
    __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata 
        = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata;
    __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full 
        = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata)) 
                         & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ)))) {
            vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.data_ram_serverAdapterB_outDataCore.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full)) 
                         & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.data_ram_serverAdapterB_outDataCore.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror = 0U;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata)) 
                         & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ)))) {
            vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.data_ram_serverAdapterA_outDataCore.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full)) 
                         & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.data_ram_serverAdapterA_outDataCore.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__deqerror = 0U;
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__enqerror = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg)) 
                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)))) {
            vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: FIFO2: %NmkTb.cpu.id_pc.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg)) 
                         & (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)))) {
            VL_WRITEF("Warning: FIFO2: %NmkTb.cpu.id_pc.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__deqerror = 0U;
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__enqerror = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg)) 
                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)))) {
            vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: FIFO2: %NmkTb.cpu.if_pc_ff.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)) 
                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ)) 
                         & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ))))) {
            VL_WRITEF("Warning: FIFO2: %NmkTb.cpu.if_pc_ff.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__deqerror = 0U;
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__enqerror = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)) 
                         & (IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp)))) {
            vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: FIFO1: %NmkTb.cpu.ld_fifo.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY((((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg) 
                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ)) 
                         & (~ (IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp))))) {
            VL_WRITEF("Warning: FIFO1: %NmkTb.cpu.ld_fifo.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__deqerror = 0U;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__enqerror = 0U;
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata)) 
                         & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ)))) {
            vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.instr_ram_serverAdapter_outDataCore.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full)) 
                         & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ)))) {
            VL_WRITEF("Warning: SizedFIFO: %NmkTb.instr_ram_serverAdapter_outDataCore.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    vlSelf->mkTb__DOT__cyc = ((IData)(vlSelf->RST_N)
                               ? vlSelf->mkTb__DOT__cyc__024D_IN
                               : 0U);
    vlSelf->mkTb__DOT__state_can_overlap = (1U & ((~ (IData)(vlSelf->RST_N)) 
                                                  | (IData)(vlSelf->mkTb__DOT__state_can_overlap__024D_IN)));
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2) {
            vlSelf->mkTb__DOT__running = 1U;
        }
    } else {
        vlSelf->mkTb__DOT__running = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas) 
             | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas))) {
            vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_0_PLUS_IF_data_ram_ETC___05F_d86;
        }
    } else {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10))) {
            vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt_32_PLUS_IF_data_ra_ETC___05F_d138;
        }
    } else {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
             | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas))) {
            vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt 
                = vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt_7_PLUS_IF_instr_ra_ETC___05F_d33;
        }
    } else {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np))) {
            vlSelf->mkTb__DOT__jj_delay_count = vlSelf->mkTb__DOT__jj_delay_count__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__jj_delay_count = 1U;
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        if ((1U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])) {
            __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v0 
                = (0xffU & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U]);
            __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v0 = 1U;
            __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v0 = 0U;
            __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v0 
                = (0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                              >> 2U));
        }
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        if ((2U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])) {
            __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v1 
                = (0xffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                            >> 8U));
            __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v1 = 1U;
            __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v1 = 8U;
            __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v1 
                = (0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                              >> 2U));
        }
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        if ((4U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])) {
            __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v2 
                = (0xffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                            >> 0x10U));
            __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v2 = 1U;
            __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v2 = 0x10U;
            __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v2 
                = (0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                              >> 2U));
        }
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        if ((8U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])) {
            __Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v3 
                = (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                   >> 0x18U);
            __Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v3 = 1U;
            __Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v3 = 0x18U;
            __Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v3 
                = (0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                              >> 2U));
        }
    }
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R2 
        = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R;
    if (vlSelf->RST_N) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1 
            = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)
                ? 3U : 0U);
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1 
            = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas)
                ? (2U | (IData)((2U != (3U & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget)))))
                : 0U);
    } else {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1 = 0U;
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1 = 0U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) {
            vlSelf->mkTb__DOT__lastpc = vlSelf->mkTb__DOT__cpu__024ibus_req;
        }
    } else {
        vlSelf->mkTb__DOT__lastpc = 0xffffffffU;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__start_reg__024EN) {
            vlSelf->mkTb__DOT__start_reg = (1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)));
        }
    } else {
        vlSelf->mkTb__DOT__start_reg = 0U;
    }
    if (vlSelf->RST_N) {
        if ((0x10U == (0x10U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head = 0U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail = 0U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty = 1U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata = 0U;
        } else if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                       << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head;
        } else if ((9U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata = 0U;
        } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty 
                = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head) 
                   == (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail));
        } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata = 1U;
        } else if ((6U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
            if (vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full) {
                __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail 
                    = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail;
                __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty = 0U;
                __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full 
                    = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail) 
                       != (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head));
            }
        }
    } else {
        __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head = 0U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail = 0U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty = 1U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full = 1U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata = 0U;
    }
    if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                            << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                       << 2U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head];
    } else if ((0xdU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                   << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                              << 2U) 
                                             | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                 << 1U) 
                                                | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R;
    } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head];
    } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R;
    }
    if (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
         & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
             & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))) 
            | (((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ)) 
                & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata)) 
               & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full))))) {
        __Vdlyvval__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R;
        __Vdlyvset__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0 = 1U;
        __Vdlyvdim0__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail;
    }
    vlSelf->mkTb__DOT__state_fired = ((IData)(vlSelf->RST_N) 
                                      & (IData)(vlSelf->mkTb__DOT__state_set_pw__024whas));
    if (vlSelf->RST_N) {
        if ((0x10U == (0x10U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head = 0U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail = 0U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty = 1U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata = 0U;
        } else if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                       << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head;
        } else if ((9U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata = 0U;
        } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty 
                = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head) 
                   == (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail));
        } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata = 1U;
        } else if ((6U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty))))))) {
            if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full) {
                __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail 
                    = vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail;
                __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty = 0U;
                __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full 
                    = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail) 
                       != (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head));
            }
        }
    } else {
        __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head = 0U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail = 0U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty = 1U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full = 1U;
        __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata = 0U;
    }
    vlSelf->mkTb__DOT__start_reg_1 = ((IData)(vlSelf->RST_N) 
                                      & (IData)(vlSelf->mkTb__DOT__start_wire__024whas));
    if (vlSelf->RST_N) {
        vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[0U] = (
                                                   ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                                                     >> 5U) 
                                                    & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287))
                                                    ? 0xaaaaaaaaU
                                                    : 
                                                   vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U]);
        vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[1U] = (
                                                   ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                                                     >> 5U) 
                                                    & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287))
                                                    ? 0xaaaaaaaaU
                                                    : 
                                                   vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U]);
        vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[2U] = (
                                                   ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                                                     >> 5U) 
                                                    & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287))
                                                    ? 0xaU
                                                    : 
                                                   vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U]);
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[0U] = 0xaaaaaaaaU;
        vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[1U] = 0xaaaaaaaaU;
        vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[2U] = 0xaU;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
             & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)))) {
            __Vdly__mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg = 1U;
        } else if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas) 
                    & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)))) {
            __Vdly__mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg)));
        }
    } else {
        __Vdly__mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg = 0U;
    }
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
        = ((((- (IData)((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                          & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg))) 
                         | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)) 
                            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg))))) 
             & vlSelf->mkTb__DOT__cpu__DOT__id_pc__024D_IN) 
            | ((- (IData)(((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas) 
                           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg))))) 
               & vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg)) 
           | ((- (IData)((1U & ((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)) 
                                  & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways))) 
                                 | ((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)) 
                                    & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg))) 
                                | ((~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg)))))) 
              & vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg));
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg 
        = (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg))
            ? vlSelf->mkTb__DOT__cpu__DOT__id_pc__024D_IN
            : vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg);
    vlSelf->mkTb__DOT__cpu__DOT__boot_pc = ((IData)(vlSelf->RST_N)
                                             ? ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)
                                                 ? 0x100000000ULL
                                                 : 0xaaaaaaaaULL)
                                             : 0xaaaaaaaaULL);
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
             & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)))) {
            __Vdly__mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg = 1U;
        } else if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ) 
                    & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ)))) {
            __Vdly__mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)));
        }
    } else {
        __Vdly__mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg = 0U;
    }
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg 
        = ((((- (IData)((((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
                          & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg))) 
                         | (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)) 
                            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg))))) 
             & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546) 
            | ((- (IData)(((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ) 
                           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg))))) 
               & vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg)) 
           | ((- (IData)((1U & ((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)) 
                                  & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ))) 
                                 | ((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)) 
                                    & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg))) 
                                | ((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ)) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)))))) 
              & vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg));
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg 
        = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg))
            ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546
            : vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg);
    vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R2 
        = vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R;
    vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv = ((IData)(vlSelf->RST_N)
                                                 ? 
                                                (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96))
                                                  ? 0xaaaaaaaaULL
                                                  : vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)
                                                 : 0xaaaaaaaaULL);
    if (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ) {
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U];
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U];
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[2U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U];
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U];
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U];
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[5U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U];
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[6U] 
            = vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U];
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3f00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x1fU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_31 
                = ((IData)((0x3f00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_31 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3b00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x1bU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_27 
                = ((IData)((0x3b00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_27 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3a00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x1aU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_26 
                = ((IData)((0x3a00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_26 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3900000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x19U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_25 
                = ((IData)((0x3900000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_25 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3800000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x18U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_24 
                = ((IData)((0x3800000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_24 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3700000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x17U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_23 
                = ((IData)((0x3700000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_23 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3600000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x16U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_22 
                = ((IData)((0x3600000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_22 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3500000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x15U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_21 
                = ((IData)((0x3500000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_21 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3400000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x14U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_20 
                = ((IData)((0x3400000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_20 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2600000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (6U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_6 
                = ((IData)((0x2600000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_6 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2500000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (5U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_5 
                = ((IData)((0x2500000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_5 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2400000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (4U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_4 
                = ((IData)((0x2400000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_4 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2200000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_2 
                = ((IData)((0x2200000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_2 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3e00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x1eU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_30 
                = ((IData)((0x3e00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_30 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3200000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x12U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_18 
                = ((IData)((0x3200000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_18 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3c00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x1cU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_28 
                = ((IData)((0x3c00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_28 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2f00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0xfU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_15 
                = ((IData)((0x2f00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_15 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2000000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_0 
                = ((IData)((0x2000000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_0 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2300000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (3U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_3 
                = ((IData)((0x2300000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_3 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3100000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x11U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_17 
                = ((IData)((0x3100000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_17 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2100000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_1 
                = ((IData)((0x2100000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_1 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3d00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x1dU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_29 
                = ((IData)((0x3d00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_29 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3000000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x10U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_16 
                = ((IData)((0x3000000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_16 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2a00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0xaU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_10 
                = ((IData)((0x2a00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_10 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2700000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (7U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_7 
                = ((IData)((0x2700000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_7 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2b00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0xbU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_11 
                = ((IData)((0x2b00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_11 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2800000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (8U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_8 
                = ((IData)((0x2800000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_8 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2c00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0xcU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_12 
                = ((IData)((0x2c00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_12 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2900000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (9U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_9 
                = ((IData)((0x2900000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_9 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2d00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0xdU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_13 
                = ((IData)((0x2d00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_13 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x2e00000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0xeU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_14 
                = ((IData)((0x2e00000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_14 = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)((0x3300000000ULL == (0x3f00000000ULL 
                                          & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
             | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                & (0x13U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))) {
            vlSelf->mkTb__DOT__cpu__DOT__regfile_19 
                = ((IData)((0x3300000000ULL == (0x3f00000000ULL 
                                                & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                    ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                    : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2);
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__regfile_19 = 0U;
    }
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1 = 
        ((IData)(vlSelf->RST_N) ? ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)
                                    ? 3U : 0U) : 0U);
    vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R2 
        = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R;
    if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                            << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                       << 2U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head];
    } else if ((0xdU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                   << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                              << 2U) 
                                             | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                                 << 1U) 
                                                | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R;
    } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head];
    } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R;
    }
    if (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ) 
         & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ) 
             & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty))) 
            | (((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ)) 
                & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata)) 
               & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full))))) {
        __Vdlyvval__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R;
        __Vdlyvset__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0 = 1U;
        __Vdlyvdim0__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail;
    }
    if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                            << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                       << 2U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head];
    } else if ((0xdU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                   << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                              << 2U) 
                                             | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                 << 1U) 
                                                | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R;
    } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr
            [vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head];
    } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT 
            = vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R;
    }
    if (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
         & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
             & (~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))) 
            | (((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ)) 
                & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata)) 
               & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full))))) {
        __Vdlyvval__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R;
        __Vdlyvset__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0 = 1U;
        __Vdlyvdim0__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0 
            = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail;
    }
    if (vlSelf->RST_N) {
        if ((0x10U == (0x10U & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                 << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                            << 2U) 
                                           | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                               << 1U) 
                                              | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head = 0U;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail = 0U;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty = 1U;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata = 0U;
        } else if ((0xcU == (0x1dU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                       << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail 
                = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head;
        } else if ((9U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata = 0U;
        } else if ((8U == (0x1dU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head 
                = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full = 1U;
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty 
                = ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head) 
                   == (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail));
        } else if ((4U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
            __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata = 1U;
        } else if ((6U == (0x1eU & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ) 
                                     << 3U) | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ) 
                                                << 2U) 
                                               | (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty))))))) {
            if (vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full) {
                __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail 
                    = vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail;
                __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty = 0U;
                __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full 
                    = ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail) 
                       != (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head));
            }
        }
    } else {
        __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head = 0U;
        __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail = 0U;
        __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty = 1U;
        __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full = 1U;
        __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata = 0U;
    }
    if (__Vdlyvset__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr[__Vdlyvdim0__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0] 
            = __Vdlyvval__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr__v0;
    }
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata;
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head;
    if (__Vdlyvset__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0) {
        vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr[__Vdlyvdim0__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0] 
            = __Vdlyvval__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr__v0;
    }
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty;
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata 
        = __Vdly__mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata;
    if (__Vdlyvset__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0) {
        vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr[__Vdlyvdim0__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0] 
            = __Vdlyvval__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr__v0;
    }
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty 
        = __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail 
        = __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head 
        = __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata 
        = __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata;
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full 
        = __Vdly__mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full;
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ) {
            vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg = 1U;
        } else if (vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) {
            vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg = 0U;
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg = 0U;
    }
    vlSelf->mkTb__DOT__cyc__024D_IN = ((IData)(1U) 
                                       + vlSelf->mkTb__DOT__cyc);
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R 
            = ((0xffffff00U & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R) 
               | (0xffU & ((1U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])
                            ? vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U]
                            : vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                           [(0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                                        >> 2U))])));
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R 
            = ((0xffff00ffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R) 
               | (0xff00U & (((2U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])
                               ? ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                                   << 0x18U) | (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                                                >> 8U))
                               : (vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                                  [(0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                                               >> 2U))] 
                                  >> 8U)) << 8U)));
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R 
            = ((0xff00ffffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R) 
               | (0xff0000U & (((4U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])
                                 ? ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                                     << 0x10U) | (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                                                  >> 0x10U))
                                 : (vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                                    [(0x3fffU & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                                                 >> 2U))] 
                                    >> 0x10U)) << 0x10U)));
    }
    if (vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R 
            = ((0xffffffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R) 
               | (((8U & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])
                    ? ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                        << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
                                  >> 0x18U)) : (vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                                                [(0x3fffU 
                                                  & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                                                     >> 2U))] 
                                                >> 0x18U)) 
                  << 0x18U));
    }
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
             & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)))) {
            vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg)));
        } else if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas) 
                    & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)))) {
            vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg = 1U;
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg = 1U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
             & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)))) {
            vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg)));
        } else if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ) 
                    & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ)))) {
            vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg = 1U;
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg = 1U;
    }
    vlSelf->mkTb__DOT__cpu__DOT__wb = ((IData)(vlSelf->RST_N)
                                        ? ((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                                             & (~ (
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))
                                            ? (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                    >> 0xcU)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((6U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                        >> 2U))) 
                                                                   & (7U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                           << 2U) 
                                                                          | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                             >> 0x1eU)))))
                                                                   ? 
                                                                  ((IData)(4U) 
                                                                   + 
                                                                   ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                                     << 0x1bU) 
                                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                       >> 5U)))
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                         << 2U) 
                                                                        | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                           >> 0x1eU))))
                                                                    ? 
                                                                   (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                                      << 0x1bU) 
                                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                        >> 5U)) 
                                                                    + 
                                                                    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                          << 2U) 
                                                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                            >> 0x1eU))))
                                                                     ? 
                                                                    vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                                                     : 
                                                                    ((0x33U 
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
                                                                     (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                        << 8U) 
                                                                       | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                          >> 0x18U)) 
                                                                      + 
                                                                      ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                        << 0xeU) 
                                                                       | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                          >> 0x12U)))
                                                                      : 
                                                                     ((0x13U 
                                                                       == 
                                                                       ((0x380U 
                                                                         & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                            << 5U)) 
                                                                        | (0x7fU 
                                                                           & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                               << 2U) 
                                                                              | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                                >> 0x1eU)))))
                                                                       ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                                                       : vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3))))))))
                                            : 0ULL)
                                        : 0ULL);
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1));
    if (vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R 
            = ((0xffffff00U & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R) 
               | (0xffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                  [(0x3fffU & vlSelf->mkTb__DOT__cnt)]));
    }
    if (vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R 
            = ((0xffff00ffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R) 
               | (0xff00U & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                  [(0x3fffU & vlSelf->mkTb__DOT__cnt)]));
    }
    if (vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R 
            = ((0xff00ffffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R) 
               | (0xff0000U & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                  [(0x3fffU & vlSelf->mkTb__DOT__cnt)]));
    }
    if (vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R 
            = ((0xffffffU & vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R) 
               | (0xff000000U & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                  [(0x3fffU & vlSelf->mkTb__DOT__cnt)]));
    }
    if (vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) {
        vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R 
            = vlSelf->mkTb__DOT__instr_ram_memory__DOT__RAM
            [(0x3fffU & (vlSelf->mkTb__DOT__cpu__024ibus_req 
                         >> 2U))];
    }
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail))));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head 
        = (1U & ((~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head)) 
                 & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head))));
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas 
        = (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full) 
            & ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1) 
               >> 1U)) & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas 
        = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
           | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas));
    vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg 
        = __Vdly__mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg;
    vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg 
        = __Vdly__mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg;
    if (__Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v0) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM[__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v0))) 
                & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                [__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v0) 
                                   << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v0))));
    }
    if (__Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v1) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM[__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v1))) 
                & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                [__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v1) 
                                   << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v1))));
    }
    if (__Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v2) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM[__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v2))) 
                & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                [__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v2) 
                                   << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v2))));
    }
    if (__Vdlyvset__mkTb__DOT__data_ram_memory__DOT__RAM__v3) {
        vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM[__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v3))) 
                & vlSelf->mkTb__DOT__data_ram_memory__DOT__RAM
                [__Vdlyvdim0__mkTb__DOT__data_ram_memory__DOT__RAM__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mkTb__DOT__data_ram_memory__DOT__RAM__v3) 
                                   << (IData)(__Vdlyvlsb__mkTb__DOT__data_ram_memory__DOT__RAM__v3))));
    }
    vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas 
        = ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
           | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas));
    vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg) 
                                                & vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[1U]);
    vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061 = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[2U] 
                                                     >> 0xcU))
                                                  : 0U);
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget 
        = ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata)
            ? vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT
            : vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R);
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg) 
           & (IData)((vlSelf->mkTb__DOT__cpu__DOT__boot_pc 
                      >> 0x20U)));
    if (vlSelf->RST_N) {
        if (((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
               & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) 
              | ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))) 
             | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr))) {
            if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                 & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))) {
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U];
            } else {
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U]
                            : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U]
                            : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U]
                            : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U]
                            : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U]
                            : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U]
                            : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                        ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U]
                            : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U])
                        : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U]
                            : 0xaU));
            }
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] = 0U;
    }
    if (vlSelf->RST_N) {
        if ((((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
             | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))) {
            vlSelf->mkTb__DOT__cnt = vlSelf->mkTb__DOT__cnt__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__cnt = 0U;
    }
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
    vlSelf->mkTb__DOT__cpu__024EN_dbus_resp = (((IData)(vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp) 
                                                & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
                                                   | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas))) 
                                               & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas 
        = (((IData)(vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp) 
            & ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
               | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas))) 
           & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas));
    vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416 
        = (vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget 
           >> (0x18U & ((((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                           ? ((vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] 
                               << 8U) | (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] 
                                         >> 0x18U))
                           : 0U) + ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                     ? vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U]
                                     : 0U)) << 3U)));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage 
        = ((((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg) 
             & (~ (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[2U] 
                   >> 5U))) & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg))) 
           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc)));
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
    vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq 
        = ((((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata) 
             & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full)) 
            & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas)) 
           & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas));
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
    vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ = 
        ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
         & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]);
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
    if (vlSelf->RST_N) {
        if (((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
               & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) 
              | ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))) 
             | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr))) {
            if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                 & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))) {
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U];
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U] 
                    = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U];
            } else {
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaaaaaaaaU));
                vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U] 
                    = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                        ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                            ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U]
                            : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                      ? 0U : 0xaU));
            }
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U] = 0U;
        vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U] = 0U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__state_mkFSMstate__024EN) {
            vlSelf->mkTb__DOT__state_mkFSMstate = vlSelf->mkTb__DOT__state_mkFSMstate__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__state_mkFSMstate = 0U;
    }
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
    if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
         & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
             >> 1U) | vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))) {
        __Vtemp32[0U] = (IData)((((QData)((IData)((0xfffffffcU 
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
        __Vtemp32[1U] = (IData)(((((QData)((IData)(
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
        __Vtemp32[0U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[0U];
        __Vtemp32[1U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv[1U];
    }
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U] 
        = __Vtemp32[0U];
    vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
        = __Vtemp32[1U];
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
    __Vtemp33[0U] = (IData)((((QData)((IData)(((0U 
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
    __Vtemp33[1U] = ((((((((0x33U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
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
    __Vtemp35[2U] = (((((0x33U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
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
    __Vtemp36[2U] = (((((((((((0x13U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
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
                      << 0x13U) | __Vtemp35[2U]);
    __Vtemp36[3U] = ((((((((((0x13U == (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
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
    __Vtemp39[3U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread) 
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
                                                 | __Vtemp36[3U])));
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
        = ((__Vtemp33[0U] << 5U) | (IData)(((((QData)((IData)(
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
        = ((__Vtemp33[0U] >> 0x1bU) | (__Vtemp33[1U] 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U] 
        = ((__Vtemp33[1U] >> 0x1bU) | (__Vtemp36[2U] 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U] 
        = ((__Vtemp36[2U] >> 0x1bU) | (__Vtemp39[3U] 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U] 
        = ((__Vtemp39[3U] >> 0x1bU) | (vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
                                       << 5U));
    vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U] 
        = (vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
           >> 0x1bU);
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
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget 
        = (((0U != (0xfU & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])) 
            << 1U) | (0U == (0xfU & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])));
    vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287 
        = ((((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
              & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U]) 
             & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U]) 
            >> 5U) & (7U > (4U ^ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt))));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr) 
             | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr))) {
            vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r 
                = vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r = 0U;
    }
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
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10 = 
        (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
          | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas)) 
         & (7U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271 
        = ((((0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
             | ((0x28U <= vlSelf->mkTb__DOT__cnt) & 
                (6U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))) 
            | ((0x28U <= vlSelf->mkTb__DOT__cnt) & 
               (9U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__state_fired)));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas 
        = ((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
            >> 5U) & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas 
        = (((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
             >> 5U) & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287)) 
           & (IData)((2U != (3U & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget)))));
    vlSelf->mkTb__DOT__jj_delay_count__024D_IN = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)
                                                   ? 
                                                  (0x1feU 
                                                   & ((IData)(vlSelf->mkTb__DOT__jj_delay_count) 
                                                      << 1U))
                                                   : 1U);
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
    vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2 
        = (((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
            & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
           & (~ (IData)(vlSelf->mkTb__DOT__running)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = ((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
                                                 & (IData)(vlSelf->mkTb__DOT__start_reg));
    vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_0_PLUS_IF_data_ram_ETC___05F_d86 
        = (7U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt) 
                  + ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas)
                      ? 1U : 0U)) + ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas)
                                      ? 7U : 0U)));
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
    vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas 
        = ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
           & (0U != (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)));
    vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage 
        = (((((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                       >> 0x20U)) & (2U != (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) 
             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg)) 
            & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)) 
           & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc)));
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
    vlSelf->mkTb__DOT__start_reg__024EN = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                           | (((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
                                               & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                              & (~ (IData)(vlSelf->mkTb__DOT__running))));
    vlSelf->mkTb__DOT__start_wire__024whas = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                              | ((IData)(vlSelf->mkTb__DOT__start_reg_1) 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__state_fired))));
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
    vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1) 
           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15));
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

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__2(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                           & (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage)) 
                          & ((0x67U == (0x7fU & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                  << 2U) 
                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                    >> 0x1eU)))) 
                             | (0x63U == (0x7fU & (
                                                   (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                    << 2U) 
                                                   | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                      >> 0x1eU)))))) 
                         & (((IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210) 
                             & (0x67U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                            & (0x63U != (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))))) {
            VL_WRITEF("Error: \"Rv32iCPU.bsv\", line 226, column 9: (R0002)\n  Conflict-free rules RL_ex_stage and RL_id_stage called conflicting methods\n  wset and wset of module instance if_pc_enqw.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) {
            VL_WRITEF("final: cycle=%5#   instructions=%5#   100*cpi=%4#   pc/4=%5#\n",
                      32,vlSelf->mkTb__DOT__cyc,32,
                      vlSelf->mkTb__DOT__cnt,32,VL_DIV_III(32, (IData)(
                                                                       (0x64ULL 
                                                                        * (QData)((IData)(vlSelf->mkTb__DOT__cyc)))), vlSelf->mkTb__DOT__cnt),
                      32,(vlSelf->mkTb__DOT__lastpc 
                          >> 2U));
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTb__DOT__running) 
                          & (IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271)) 
                         & (~ (IData)(vlSelf->mkTb__DOT__start_reg))))) {
            VL_FINISH_MT("mkTb.v", 840, "");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1) 
                                >> 1U) & (~ (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full)))))) {
            VL_WRITEF("ERROR: %NmkTb: mkBRAMAdapter overrun\n",
                      vlSymsp->name());
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1) 
                                >> 1U) & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full)))))) {
            VL_WRITEF("ERROR: %NmkTb: mkBRAMAdapter overrun\n",
                      vlSymsp->name());
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1) 
                                >> 1U) & (~ (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full)))))) {
            VL_WRITEF("ERROR: %NmkTb: mkBRAMAdapter overrun\n",
                      vlSymsp->name());
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) {
            VL_WRITEF("DataRAM[%x] = %11d\n",32,(vlSelf->mkTb__DOT__cnt 
                                                 << 2U),
                      32,((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata)
                           ? vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT
                           : vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R));
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10) 
                         & ((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                               | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"TbRv32iCPU.bsv\", line 35, column 10: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l35c10] and\n  [RL_action_l39c10, RL_action_d_init_np, RL_action_np, RL_action_l51c7,\n  RL_action_f_init_l54c7, RL_action_l55c18, RL_action_l56c10,\n  RL_action_f_update_l54c7] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                         & (((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                               | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"TbRv32iCPU.bsv\", line 39, column 10: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l39c10] and\n  [RL_action_d_init_np, RL_action_np, RL_action_l51c7, RL_action_f_init_l54c7,\n  RL_action_l55c18, RL_action_l56c10, RL_action_f_update_l54c7] ) fired in the\n  same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np) 
                         & ((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np) 
                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                               | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_d_init_np] and\n  [RL_action_np, RL_action_l51c7, RL_action_f_init_l54c7, RL_action_l55c18,\n  RL_action_l56c10, RL_action_f_update_l54c7] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np) 
                         & (((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7) 
                               | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"StmtFSM.bs\", line 41, column 0: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_np] and\n  [RL_action_l51c7, RL_action_f_init_l54c7, RL_action_l55c18,\n  RL_action_l56c10, RL_action_f_update_l54c7] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7) 
                         & ((((5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"TbRv32iCPU.bsv\", line 51, column 7: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l51c7] and\n  [RL_action_f_init_l54c7, RL_action_l55c18, RL_action_l56c10,\n  RL_action_f_update_l54c7] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                         & (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) 
                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"TbRv32iCPU.bsv\", line 54, column 16: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_f_init_l54c7] and\n  [RL_action_l55c18, RL_action_l56c10, RL_action_f_update_l54c7] ) fired in\n  the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) 
                         & ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10) 
                            | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"TbRv32iCPU.bsv\", line 55, column 18: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l55c18] and\n  [RL_action_l56c10, RL_action_f_update_l54c7] ) fired in the same clock\n  cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10) 
                         & (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))))) {
            VL_WRITEF("Error: \"TbRv32iCPU.bsv\", line 56, column 10: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l56c10] and\n  [RL_action_f_update_l54c7] ) fired in the same clock cycle.\n\n");
        }
    }
}

void VmkTb___024root___eval(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        VmkTb___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->CLK)) & (IData)(vlSelf->__Vclklast__TOP__CLK))) {
        VmkTb___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

QData VmkTb___024root___change_request_1(VmkTb___024root* vlSelf);

VL_INLINE_OPT QData VmkTb___024root___change_request(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___change_request\n"); );
    // Body
    return (VmkTb___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VmkTb___024root___change_request_1(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkTb___024root___eval_debug_assertions(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
