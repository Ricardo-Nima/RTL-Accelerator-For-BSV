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
    if ((1U & (~ (IData)(vlSelf->RST_N)))) {
        vlSelf->top__DOT__counter__DOT__forcnt = 0U;
    }
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap 
        = (1U & ((~ (IData)(vlSelf->RST_N)) | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN)));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
             | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write))) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg 
                = (1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start)));
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg = 0U;
    }
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas));
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
             | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss 
                = (1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)));
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss = 1U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
             | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck 
                = (1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)));
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck = 1U;
    }
    if (vlSelf->RST_N) {
        if (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
             | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15))) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi 
                = (1U & ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                         | ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata) 
                            >> (7U & vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt))));
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi = 1U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata 
                = (0xffU & vlSelf->top__DOT__counter__DOT__cnt);
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata = 0U;
    }
    if (vlSelf->RST_N) {
        if (((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
             | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
                = vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt__024D_IN;
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt = 7U;
    }
    vlSelf->top__DOT__counter__DOT__cnt = ((IData)(vlSelf->RST_N)
                                            ? vlSelf->top__DOT__counter__DOT__cnt__024D_IN
                                            : 0U);
    if (vlSelf->RST_N) {
        if (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN) {
            vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate 
                = vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN;
        }
    } else {
        vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate = 0U;
    }
    vlSelf->top__DOT__counter__DOT__cnt__024D_IN = 
        ((0xffffffffU == vlSelf->top__DOT__counter__DOT__cnt)
          ? 0U : ((IData)(1U) + vlSelf->top__DOT__counter__DOT__cnt));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt__024D_IN 
        = ((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
            ? (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
               - (IData)(1U)) : 7U);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13 
        = ((~ (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
               >> 0x1fU)) & ((1U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                             | (3U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15 
        = ((vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
            >> 0x1fU) & ((1U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         | (3U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60 
        = (((0U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
            | (6U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
           & ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1)) 
              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired)));
    vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60) 
           & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg)));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60) 
           & (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
           | ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1) 
              & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas) 
           & ((0U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
              | (6U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7 
        = ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas)) 
           & (6U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN 
        = (((((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
               | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
              | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
             | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
            | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
           | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                     << 7U) | (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate) 
                                << 3U) | (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7)))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN 
        = VmkTb__ConstPool__TABLE_d3652afe_0[__Vtableidx1];
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas 
        = (((((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
               | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
             | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
            | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
           | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
           | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
}

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__2(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF("count=%10#, oflow=%1#\n",32,vlSelf->top__DOT__counter__DOT__cnt,
                  1,(0xffffffffU == vlSelf->top__DOT__counter__DOT__cnt));
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((0x64U < vlSelf->top__DOT__counter__DOT__cnt))) {
            VL_FINISH_MT("mkTb.v", 57, "");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                         & ((((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                             | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                            | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"Hello.bsv\", line 26, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l26c13] and\n  [RL_spiFsm_action_l30c13, RL_spiFsm_action_l35c15, RL_spiFsm_action_l36c13,\n  RL_spiFsm_action_l37c14] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         & (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                             | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                            | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"Hello.bsv\", line 30, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l30c13] and\n  [RL_spiFsm_action_l35c15, RL_spiFsm_action_l36c13, RL_spiFsm_action_l37c14]\n  ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                         & ((4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                            | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"Hello.bsv\", line 35, column 15: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l35c15] and\n  [RL_spiFsm_action_l36c13, RL_spiFsm_action_l37c14] ) fired in the same clock\n  cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         & (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))))) {
            VL_WRITEF("Error: \"Hello.bsv\", line 36, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l36c13] and\n  [RL_spiFsm_action_l37c14] ) fired in the same clock cycle.\n\n");
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                         & (((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                               | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                             | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                            | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))))) {
            VL_WRITEF("Error: \"Hello.bsv\", line 24, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l24c13] and\n  [RL_spiFsm_action_l26c13, RL_spiFsm_action_l30c13, RL_spiFsm_action_l35c15,\n  RL_spiFsm_action_l36c13, RL_spiFsm_action_l37c14] ) fired in the same clock\n  cycle.\n\n");
        }
    }
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF(" (ss, sck, mosi) = (%1#, %1#, %1#)\n",
                  1,vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss,
                  1,(IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck),
                  1,vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi);
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
