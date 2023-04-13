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
        CData/*0:0*/ mkTb__DOT__start_wire__024whas;
        CData/*0:0*/ mkTb__DOT__state_set_pw__024whas;
        CData/*1:0*/ mkTb__DOT__jj_1_repeat_count;
        CData/*1:0*/ mkTb__DOT__jj_1_repeat_count__024D_IN;
        CData/*1:0*/ mkTb__DOT__jj_repeat_count;
        CData/*1:0*/ mkTb__DOT__jj_repeat_count__024D_IN;
        CData/*0:0*/ mkTb__DOT__running;
        CData/*0:0*/ mkTb__DOT__start_reg;
        CData/*0:0*/ mkTb__DOT__start_reg_1;
        CData/*0:0*/ mkTb__DOT__state_can_overlap;
        CData/*0:0*/ mkTb__DOT__state_can_overlap__024D_IN;
        CData/*0:0*/ mkTb__DOT__state_fired;
        CData/*4:0*/ mkTb__DOT__state_mkFSMstate;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__024operate_data;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024EN_operate;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024EN_read_byte;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024RDY_operate;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024RDY_read_byte;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__024operate_wr;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l21c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l22c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l24c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l25c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l26c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l28c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l30c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l31c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l32c32;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l34c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l36c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l37c22;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l38c32;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_fsm_start;
        CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_idle_l20c16;
        CData/*0:0*/ mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1;
        CData/*0:0*/ mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2;
        CData/*0:0*/ mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2;
        CData/*0:0*/ mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106;
        CData/*0:0*/ mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83;
        CData/*0:0*/ mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123;
        CData/*0:0*/ mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130;
        CData/*0:0*/ mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103;
        CData/*0:0*/ mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__busybit;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__command;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_addr_h;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_addr_l;
        CData/*2:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt;
        CData/*1:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1;
        CData/*2:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt;
        CData/*1:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1;
        CData/*6:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count;
    };
    struct {
        CData/*6:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count__024D_IN;
        CData/*6:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count;
        CData/*6:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count__024D_IN;
        CData/*6:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count;
        CData/*6:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count__024D_IN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap__024D_IN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired;
        CData/*5:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate;
        CData/*5:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024EN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__ss;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__024DIB;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1;
        CData/*2:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_7_PLUS_IF_page___05FETC___05F_d33;
        CData/*2:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_0_PLUS_IF_page___05FETC___05F_d86;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R2;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R2;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty;
    };
    struct {
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__mosi;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata__024D_IN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__sck;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap__024D_IN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired;
        CData/*2:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate;
        CData/*2:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024D_IN;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate__024EN;
        CData/*7:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7;
        CData/*0:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88;
        SData/*8:0*/ mkTb__DOT__spiflash_ctrl__024operate_addr;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__cnt;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__cnt__024D_IN;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__initial_block__DOT__i;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__initial_block__DOT__i;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt;
        IData/*31:0*/ mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt__024D_IN;
        VlUnpacked<CData/*7:0*/, 256> mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__RAM;
        VlUnpacked<CData/*7:0*/, 2> mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr;
        VlUnpacked<CData/*7:0*/, 2> mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr;
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