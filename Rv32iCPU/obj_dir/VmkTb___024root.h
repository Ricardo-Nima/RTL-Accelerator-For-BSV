// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmkTb.h for the primary calling header

#ifndef VERILATED_VMKTB___024ROOT_H_
#define VERILATED_VMKTB___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VmkTb__Syms;
class VmkTb_VerilatedVcd;


//----------

VL_MODULE(VmkTb___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas;
        CData/*0:0*/ mkTb__DOT__start_wire__024whas;
        CData/*0:0*/ mkTb__DOT__state_set_pw__024whas;
        CData/*2:0*/ mkTb__DOT__data_ram_serverAdapterA_cnt;
        CData/*1:0*/ mkTb__DOT__data_ram_serverAdapterA_s1;
        CData/*2:0*/ mkTb__DOT__data_ram_serverAdapterB_cnt;
        CData/*1:0*/ mkTb__DOT__data_ram_serverAdapterB_s1;
        CData/*2:0*/ mkTb__DOT__instr_ram_serverAdapter_cnt;
        CData/*1:0*/ mkTb__DOT__instr_ram_serverAdapter_s1;
        CData/*0:0*/ mkTb__DOT__running;
        CData/*0:0*/ mkTb__DOT__start_reg;
        CData/*0:0*/ mkTb__DOT__start_reg__024EN;
        CData/*0:0*/ mkTb__DOT__start_reg_1;
        CData/*0:0*/ mkTb__DOT__state_can_overlap;
        CData/*0:0*/ mkTb__DOT__state_can_overlap__024D_IN;
        CData/*0:0*/ mkTb__DOT__state_fired;
        CData/*3:0*/ mkTb__DOT__state_mkFSMstate;
        CData/*3:0*/ mkTb__DOT__state_mkFSMstate__024D_IN;
        CData/*0:0*/ mkTb__DOT__state_mkFSMstate__024EN;
        CData/*0:0*/ mkTb__DOT__cpu__024EN_dbus_resp;
        CData/*0:0*/ mkTb__DOT__cpu__024RDY_dbus_resp;
        CData/*0:0*/ mkTb__DOT__cpu__024RDY_ibus_req;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_d_init_np;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l35c10;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l51c7;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l56c10;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_np;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_outData_enqAndDeq;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_fsm_start;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_idle_l34c15;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_outData_enqAndDeq;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways;
        CData/*0:0*/ mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2;
        CData/*0:0*/ mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1;
        CData/*2:0*/ mkTb__DOT__data_ram_serverAdapterA_cnt_0_PLUS_IF_data_ram_ETC___05F_d86;
        CData/*2:0*/ mkTb__DOT__data_ram_serverAdapterB_cnt_32_PLUS_IF_data_ra_ETC___05F_d138;
        CData/*2:0*/ mkTb__DOT__instr_ram_serverAdapter_cnt_7_PLUS_IF_instr_ra_ETC___05F_d33;
        CData/*0:0*/ mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271;
        CData/*0:0*/ mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287;
        CData/*0:0*/ mkTb__DOT__lastpc_13_EQ_cpu_ibus_req___05F14___05F_d215;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ex_dequeueing__024whas;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ex_enqueueing__024whas;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_enqw__024whas;
        CData/*1:0*/ mkTb__DOT__cpu__DOT__ex_cntr_r;
        CData/*1:0*/ mkTb__DOT__cpu__DOT__ex_cntr_r__024D_IN;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ;
    };
    struct {
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ld_fifo__024ENQ;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage;
        CData/*4:0*/ mkTb__DOT__cpu__DOT__y___05Fh5061;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96;
        CData/*0:0*/ mkTb__DOT__cpu__DOT___dfoo1;
        CData/*0:0*/ mkTb__DOT__cpu__DOT___dfoo3;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__enqerror;
        SData/*8:0*/ mkTb__DOT__jj_delay_count;
        SData/*8:0*/ mkTb__DOT__jj_delay_count__024D_IN;
        SData/*12:0*/ mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq9;
        SData/*11:0*/ mkTb__DOT__cpu__DOT__b___05Fh6854;
        IData/*31:0*/ mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget;
        IData/*31:0*/ mkTb__DOT__cnt;
    };
    struct {
        IData/*31:0*/ mkTb__DOT__cnt__024D_IN;
        IData/*31:0*/ mkTb__DOT__cyc;
        IData/*31:0*/ mkTb__DOT__cyc__024D_IN;
        IData/*31:0*/ mkTb__DOT__lastpc;
        IData/*31:0*/ mkTb__DOT__cpu__024ibus_req;
        IData/*31:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT;
        IData/*31:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT;
        IData/*31:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT;
        VlWide<3>/*69:0*/ mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread;
        VlWide<7>/*196:0*/ mkTb__DOT__cpu__DOT__ex_q_0;
        VlWide<7>/*196:0*/ mkTb__DOT__cpu__DOT__ex_q_1;
        VlWide<3>/*69:0*/ mkTb__DOT__cpu__DOT__lsq_rv;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_0;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_1;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_10;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_11;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_12;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_13;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_14;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_15;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_16;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_17;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_18;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_19;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_2;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_20;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_21;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_22;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_23;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_24;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_25;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_26;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_27;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_28;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_29;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_3;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_30;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_31;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_4;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_5;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_6;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_7;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_8;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__regfile_9;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__id_pc__024D_IN;
        VlWide<7>/*196:0*/ mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2;
        VlWide<7>/*196:0*/ mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__IF_ex_q_0_4_BITS_43_TO_34_88_CONCAT_ex_q_0_4_B_ETC___05F_d341;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__x___05Fh2546;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__x___05Fh6654;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__x___05Fh7232;
        IData/*20:0*/ mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq10;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg;
        IData/*31:0*/ mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg;
        IData/*31:0*/ mkTb__DOT__data_ram_memory__DOT__DOA_R;
        IData/*31:0*/ mkTb__DOT__data_ram_memory__DOT__DOA_R2;
    };
    struct {
        IData/*31:0*/ mkTb__DOT__data_ram_memory__DOT__DOB_R;
        IData/*31:0*/ mkTb__DOT__data_ram_memory__DOT__DOB_R2;
        IData/*31:0*/ mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__initial_block__DOT__i;
        IData/*31:0*/ mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__initial_block__DOT__i;
        IData/*31:0*/ mkTb__DOT__instr_ram_memory__DOT__DO_R;
        IData/*31:0*/ mkTb__DOT__instr_ram_memory__DOT__DO_R2;
        IData/*31:0*/ mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__initial_block__DOT__i;
        QData/*32:0*/ mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread;
        QData/*32:0*/ mkTb__DOT__cpu__DOT__boot_pc;
        QData/*32:0*/ mkTb__DOT__cpu__DOT__id_instr_rv;
        QData/*37:0*/ mkTb__DOT__cpu__DOT__wb;
        VlUnpacked<IData/*31:0*/, 16384> mkTb__DOT__data_ram_memory__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 2> mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr;
        VlUnpacked<IData/*31:0*/, 2> mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr;
        VlUnpacked<IData/*31:0*/, 16384> mkTb__DOT__instr_ram_memory__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 2> mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__CLK;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VmkTb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmkTb___024root);  ///< Copying not allowed
  public:
    VmkTb___024root(const char* name);
    ~VmkTb___024root();

    // INTERNAL METHODS
    void __Vconfigure(VmkTb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
