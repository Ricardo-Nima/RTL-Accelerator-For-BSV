// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb.h for the primary calling header

#include "VmkTb___024root.h"
#include "VmkTb__Syms.h"

//==========

extern const VlUnpacked<CData/*3:0*/, 256> VmkTb__ConstPool__TABLE_d3652afe_0;

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__1(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap 
        = (1U & ((~ (IData)(vlSelf->RST_N)) | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN)));
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
        if (vlSelf->mkTb__DOT__start_reg__024EN) {
            vlSelf->mkTb__DOT__start_reg = (1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)));
        }
    } else {
        vlSelf->mkTb__DOT__start_reg = 0U;
    }
    vlSelf->mkTb__DOT__state_fired = ((IData)(vlSelf->RST_N) 
                                      & (IData)(vlSelf->mkTb__DOT__state_set_pw__024whas));
    vlSelf->mkTb__DOT__start_reg_1 = ((IData)(vlSelf->RST_N) 
                                      & (IData)(vlSelf->mkTb__DOT__start_wire__024whas));
    if (vlSelf->RST_N) {
        if (((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7) 
               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)) 
              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)) 
             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20))) {
            vlSelf->mkTb__DOT__state_mkFSMstate = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)
                                                       ? 3U
                                                       : 2U))));
        }
    } else {
        vlSelf->mkTb__DOT__state_mkFSMstate = 0U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
             | (IData)(vlSelf->mkTb__DOT__spi_writer__024EN_write))) {
            vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start)));
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg = 0U;
    }
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_fired 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas));
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg_1 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
             | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->mkTb__DOT__spi_writer__DOT__ss 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)));
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__ss = 1U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
             | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->mkTb__DOT__spi_writer__DOT__sck 
                = (1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)));
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__sck = 1U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
             | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15))) {
            vlSelf->mkTb__DOT__spi_writer__DOT__mosi 
                = (1U & ((~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                         | ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__wdata) 
                            >> (7U & vlSelf->mkTb__DOT__spi_writer__DOT__cnt))));
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__mosi = 1U;
    }
    vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49 
        = (((0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
            | (3U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__state_fired)));
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__spi_writer__024EN_write) {
            vlSelf->mkTb__DOT__spi_writer__DOT__wdata 
                = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)
                    ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)
                             ? 0x14U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)
                                         ? 0x65U : 0xaaU)));
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__wdata = 0U;
    }
    if (vlSelf->RST_N) {
        if (((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
             | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
                = vlSelf->mkTb__DOT__spi_writer__DOT__cnt__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__cnt = 7U;
    }
    vlSelf->mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2 
        = (((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
            & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
           & (~ (IData)(vlSelf->mkTb__DOT__running)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start = ((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
                                                 & (IData)(vlSelf->mkTb__DOT__start_reg));
    vlSelf->mkTb__DOT__start_reg__024EN = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                           | (((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
                                               & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                              & (~ (IData)(vlSelf->mkTb__DOT__running))));
    vlSelf->mkTb__DOT__start_wire__024whas = ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                              | ((IData)(vlSelf->mkTb__DOT__start_reg_1) 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__state_fired))));
    if (vlSelf->RST_N) {
        if (vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN) {
            vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate 
                = vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN;
        }
    } else {
        vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate = 0U;
    }
    vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7 = ((~ (IData)(vlSelf->mkTb__DOT__start_wire__024whas)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__spi_writer__DOT__cnt__024D_IN 
        = ((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
            ? (vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
               - (IData)(1U)) : 7U);
    vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13 
        = ((~ (vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
               >> 0x1fU)) & ((1U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                             | (3U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15 
        = ((vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
            >> 0x1fU) & ((1U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         | (3U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60 
        = (((0U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
            | (6U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
           & ((~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg_1)) 
              | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_fired)));
    vlSelf->mkTb__DOT__spi_writer__024RDY_write = ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60) 
                                                   & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg)));
    vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start 
        = ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60) 
           & (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20 = 
        ((IData)(vlSelf->mkTb__DOT__spi_writer__024RDY_write) 
         & (1U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20 = 
        ((IData)(vlSelf->mkTb__DOT__spi_writer__024RDY_write) 
         & (2U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)));
    vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20 = 
        (((IData)(vlSelf->mkTb__DOT__spi_writer__024RDY_write) 
          & (IData)(vlSelf->mkTb__DOT__start_wire__024whas)) 
         & ((0U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
            | (3U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))));
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas 
        = ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
           | ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg_1) 
              & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_fired))));
    vlSelf->mkTb__DOT__spi_writer__024EN_write = (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20) 
                                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)) 
                                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20));
    vlSelf->mkTb__DOT__state_set_pw__024whas = ((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7) 
                                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)) 
                                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20));
    vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13 
        = ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas) 
           & ((0U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
              | (6U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7 
        = ((~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas)) 
           & (6U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)));
    vlSelf->mkTb__DOT__state_can_overlap__024D_IN = 
        ((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
         | (IData)(vlSelf->mkTb__DOT__state_can_overlap));
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN 
        = (((((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
               | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
              | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
             | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
            | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
           | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)));
    __Vtableidx1 = (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                     << 7U) | (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate) 
                                << 3U) | (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                           << 2U) | 
                                          (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                            << 1U) 
                                           | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7)))));
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN 
        = VmkTb__ConstPool__TABLE_d3652afe_0[__Vtableidx1];
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas 
        = (((((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
               | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
              | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
             | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
            | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
           | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
    vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN 
        = ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
           | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
}

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__2(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                         & ((((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                              | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                             | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                            | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"SPIWriter.bsv\", line 26, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l26c13] and\n  [RL_spiFsm_action_l30c13, RL_spiFsm_action_l35c15, RL_spiFsm_action_l36c13,\n  RL_spiFsm_action_l37c14] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         & (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                             | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                            | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"SPIWriter.bsv\", line 30, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l30c13] and\n  [RL_spiFsm_action_l35c15, RL_spiFsm_action_l36c13, RL_spiFsm_action_l37c14]\n  ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                         & ((4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                            | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"SPIWriter.bsv\", line 35, column 15: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l35c15] and\n  [RL_spiFsm_action_l36c13, RL_spiFsm_action_l37c14] ) fired in the same clock\n  cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         & (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))))) {
            VL_WRITEF("Error: \"SPIWriter.bsv\", line 36, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l36c13] and\n  [RL_spiFsm_action_l37c14] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                         & (((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                               | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                              | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                             | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                            | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"SPIWriter.bsv\", line 24, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l24c13] and\n  [RL_spiFsm_action_l26c13, RL_spiFsm_action_l30c13, RL_spiFsm_action_l35c15,\n  RL_spiFsm_action_l36c13, RL_spiFsm_action_l37c14] ) fired in the same clock\n  cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20) 
                         & (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)))) {
            VL_WRITEF("Error: \"TbSPIWriter.bsv\", line 16, column 20: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l16c20] and\n  [RL_action_l17c20] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20) 
                         & ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20) 
                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20))))) {
            VL_WRITEF("Error: \"TbSPIWriter.bsv\", line 15, column 20: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_action_l15c20] and\n  [RL_action_l16c20, RL_action_l17c20] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTb__DOT__running) 
                          & (IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49)) 
                         & (~ (IData)(vlSelf->mkTb__DOT__start_reg))))) {
            VL_FINISH_MT("mkTb.v", 246, "");
        }
    }
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF(" (ss, sck, mosi) = (%1#, %1#, %1#)\n",
                  1,vlSelf->mkTb__DOT__spi_writer__DOT__ss,
                  1,(IData)(vlSelf->mkTb__DOT__spi_writer__DOT__sck),
                  1,vlSelf->mkTb__DOT__spi_writer__DOT__mosi);
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
