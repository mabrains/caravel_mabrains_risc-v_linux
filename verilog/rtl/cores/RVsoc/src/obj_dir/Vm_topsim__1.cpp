// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_topsim.h for the primary calling header

#include "Vm_topsim.h"
#include "Vm_topsim__Syms.h"

VL_INLINE_OPT void Vm_topsim::_combo__TOP__5(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_combo__TOP__5\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_topsim__DOT__RST_X = vlTOPp->RST_X;
    vlTOPp->m_topsim__DOT__CLK = vlTOPp->CLK;
    vlTOPp->m_topsim__DOT__CORE_RST_X = ((IData)(vlTOPp->RST_X) 
                                         & (IData)(vlTOPp->m_topsim__DOT__w_init_done));
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__RST_X = vlTOPp->m_topsim__DOT__RST_X;
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__CLK = vlTOPp->m_topsim__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__CLK = vlTOPp->m_topsim__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__CLK = vlTOPp->m_topsim__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__RST_X = vlTOPp->m_topsim__DOT__CORE_RST_X;
    vlTOPp->m_topsim__DOT__p__DOT__w_state = ((1U & 
                                               ((~ (IData)(vlTOPp->m_topsim__DOT__CORE_RST_X)) 
                                                | (IData)(vlTOPp->m_topsim__DOT__w_halt)))
                                               ? 0U
                                               : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_com)
                                                   ? 0xaU
                                                   : 
                                                  (0xfU 
                                                   & (((IData)(vlTOPp->m_topsim__DOT__w_busy) 
                                                       | (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1_busy))
                                                       ? (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))
                                                        ? 0U
                                                        : 
                                                       ((((1U 
                                                           == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nalign4)) 
                                                         & (3U 
                                                            != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)))
                                                         ? 1U
                                                         : 
                                                        (((((5U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                            & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO))) 
                                                           & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD))) 
                                                          & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE)))
                                                          ? 9U
                                                          : 
                                                         (((6U 
                                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE))
                                                           ? 8U
                                                           : 
                                                          (((6U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                            & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD))
                                                            ? 9U
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)))))))))));
    vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__mmu__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__mmu__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__mmu__DOT__RST_X;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__CLK = vlTOPp->m_topsim__DOT__p__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__CLK 
        = vlTOPp->m_topsim__DOT__p__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__CLK = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__p__DOT__RST_X;
    vlTOPp->m_topsim__DOT__p__DOT__w_d_en_t = ((6U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_state)) 
                                               & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD) 
                                                  | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                                                     & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC)))));
    vlTOPp->m_topsim__DOT__p__DOT__w_d_we_t = ((8U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_state)) 
                                               & (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE) 
                                                   | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC)) 
                                                      & (~ vlTOPp->m_topsim__DOT__p__DOT__r_wb_data))) 
                                                  | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                                                      & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_LR))) 
                                                     & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC)))));
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__RST_X;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__CLK 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__RST_X;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__CLK 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__RST_X;
}

void Vm_topsim::_eval(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_eval\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vm_topsim::_change_request(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_change_request\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vm_topsim::_change_request_1(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_change_request_1\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vm_topsim::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_X & 0xfeU))) {
        Verilated::overWidthError("RST_X");}
}
#endif  // VL_DEBUG
