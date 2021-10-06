// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_topsim.h for the primary calling header

#include "Vm_topsim.h"
#include "Vm_topsim__Syms.h"

//==========

VerilatedContext* Vm_topsim::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vm_topsim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vm_topsim::eval\n"); );
    Vm_topsim__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 22, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
            } else {
                __Vchange = _change_request(vlSymsp);
            }
        } while (VL_UNLIKELY(__Vchange));
    }
    
    void Vm_topsim::_eval_initial_loop(Vm_topsim__Syms* __restrict vlSymsp) {
        vlSymsp->__Vm_didInit = true;
        _eval_initial(vlSymsp);
        // Evaluate till stable
        int __VclockLoop = 0;
        QData __Vchange = 1;
        do {
            _eval_settle(vlSymsp);
            _eval(vlSymsp);
            if (VL_UNLIKELY(++__VclockLoop > 100)) {
                // About to fail, so enable debug to see what's not settling.
                // Note you must run make with OPT=-DVL_DEBUG for debug prints.
                int __Vsaved_debug = Verilated::debug();
                Verilated::debug(1);
                __Vchange = _change_request(vlSymsp);
                Verilated::debug(__Vsaved_debug);
                VL_FATAL_MT("top.v", 22, "",
                    "Verilated model didn't DC converge\n"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
                } else {
                    __Vchange = _change_request(vlSymsp);
                }
            } while (VL_UNLIKELY(__Vchange));
        }
        
        VL_INLINE_OPT void Vm_topsim::_sequent__TOP__3(Vm_topsim__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_sequent__TOP__3\n"); );
            Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in;
            CData/*7:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__Vfuncout;
            CData/*3:0*/ __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in;
            CData/*2:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state;
            CData/*4:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_consf_cnts;
            CData/*3:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__cons_fifo__v0;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__cons_fifo__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__cons_fifo__v0;
            CData/*0:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_zero_we;
            CData/*1:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0;
            CData/*1:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0;
            CData/*1:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0;
            CData/*4:0*/ __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0;
            CData/*4:0*/ __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1;
            CData/*4:0*/ __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2;
            CData/*4:0*/ __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5;
            CData/*5:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0;
            CData/*5:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1;
            CData/*5:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2;
            CData/*5:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3;
            CData/*5:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4;
            CData/*5:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5;
            CData/*3:0*/ __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt;
            CData/*1:0*/ __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state;
            CData/*0:0*/ __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2;
            CData/*7:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3;
            CData/*4:0*/ __Vdlyvdim0__m_topsim__DOT__p__DOT__regs__DOT__mem__v0;
            CData/*0:0*/ __Vdlyvset__m_topsim__DOT__p__DOT__regs__DOT__mem__v0;
            CData/*3:0*/ __Vdly__m_topsim__DOT__UartTx_init__DOT__cnt;
            SData/*10:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0;
            SData/*10:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1;
            SData/*10:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2;
            SData/*10:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3;
            SData/*8:0*/ __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd;
            SData/*11:0*/ __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum;
            SData/*12:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0;
            SData/*8:0*/ __Vdly__m_topsim__DOT__UartTx_init__DOT__cmd;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__L1_pte;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__L0_pte;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr3;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr2;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__r_zeroaddr;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum;
            VlWide<6>/*184:0*/ __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data;
            VlWide<5>/*143:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0;
            IData/*31:0*/ __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt;
            IData/*26:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0;
            IData/*26:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1;
            IData/*26:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2;
            IData/*26:0*/ __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3;
            IData/*31:0*/ __Vdly__m_topsim__DOT__p__DOT__mstatus;
            IData/*31:0*/ __Vdly__m_topsim__DOT__p__DOT__mip;
            IData/*31:0*/ __Vdly__m_topsim__DOT__p__DOT__mie;
            IData/*31:0*/ __Vdlyvval__m_topsim__DOT__p__DOT__regs__DOT__mem__v0;
            IData/*31:0*/ __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum;
            VlWide<3>/*95:0*/ __Vtemp16;
            VlWide<4>/*127:0*/ __Vtemp32;
            QData/*39:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0;
            QData/*39:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0;
            QData/*39:0*/ __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0;
            QData/*63:0*/ __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit;
            QData/*63:0*/ __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt;
            // Body
            vlTOPp->__Vdly__m_topsim__DOT__r_cnt = vlTOPp->m_topsim__DOT__r_cnt;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0 = 0U;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage;
            __Vdly__m_topsim__DOT__UartTx_init__DOT__cnt 
                = vlTOPp->m_topsim__DOT__UartTx_init__DOT__cnt;
            __Vdly__m_topsim__DOT__UartTx_init__DOT__cmd 
                = vlTOPp->m_topsim__DOT__UartTx_init__DOT__cmd;
            __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum 
                = vlTOPp->m_topsim__DOT__UartTx_init__DOT__waitnum;
            vlTOPp->__Vdly__m_topsim__DOT__tx_ready 
                = vlTOPp->m_topsim__DOT__tx_ready;
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt;
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U];
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U];
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U];
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U];
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U];
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U];
            __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__waddr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__waddr;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3 = 0U;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr;
            vlTOPp->__Vdlyvset__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 = 0U;
            __Vdly__m_topsim__DOT__mmu__DOT__r_zero_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_we;
            __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr3 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr3;
            __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr2;
            __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr;
            __Vdly__m_topsim__DOT__mmu__DOT__r_zeroaddr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_zeroaddr;
            __Vdlyvset__m_topsim__DOT__p__DOT__regs__DOT__mem__v0 = 0U;
            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__mtime 
                = vlTOPp->m_topsim__DOT__p__DOT__mtime;
            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0 = 0U;
            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data;
            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test;
            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt;
            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit;
            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_tohost 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost;
            __Vdly__m_topsim__DOT__mmu__DOT__r_consf_cnts 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__cons_fifo__v0 = 0U;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_state 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode;
            __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt;
            __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd 
                = vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd;
            __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum 
                = vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3 = 0U;
            __Vdly__m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus 
                = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus;
            __Vdly__m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus 
                = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus;
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_pc 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc;
            __Vdly__m_topsim__DOT__mmu__DOT__L0_pte 
                = vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte;
            __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state;
            __Vdly__m_topsim__DOT__mmu__DOT__L1_pte 
                = vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte;
            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4 = 0U;
            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5 = 0U;
            __Vdly__m_topsim__DOT__p__DOT__mie = vlTOPp->m_topsim__DOT__p__DOT__mie;
            __Vdly__m_topsim__DOT__p__DOT__mip = vlTOPp->m_topsim__DOT__p__DOT__mip;
            __Vdly__m_topsim__DOT__p__DOT__mstatus 
                = vlTOPp->m_topsim__DOT__p__DOT__mstatus;
            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv 
                = vlTOPp->m_topsim__DOT__p__DOT__priv;
            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__pc 
                = vlTOPp->m_topsim__DOT__p__DOT__pc;
            if (VL_UNLIKELY(vlTOPp->m_topsim__DOT__w_uart_we)) {
                VL_WRITEF("%c",8,vlTOPp->m_topsim__DOT__w_uart_data);
            }
            if (VL_UNLIKELY(((IData)(vlTOPp->m_topsim__DOT__r_finish) 
                             & (~ (IData)(vlTOPp->m_topsim__DOT__r_uart_busy))))) {
                VL_WRITEF("FINISH!\n");
                if (VL_UNLIKELY((0x55d4a81ULL > vlTOPp->m_topsim__DOT__p__DOT__mtime))) {
                    VL_FCLOSE_I(vlTOPp->m_topsim__DOT__fp); vlTOPp->m_topsim__DOT__fp = 0;
                }
                VL_FINISH_MT("top.v", 249, "");
            }
            if (VL_UNLIKELY(vlTOPp->m_topsim__DOT__w_halt)) {
                VL_WRITEF("HALT detect! at PC:%x\n",
                          32,vlTOPp->m_topsim__DOT__p__DOT__pc);
                VL_FINISH_MT("top.v", 241, "");
            }
            if (VL_UNLIKELY((0x55d4a80ULL < vlTOPp->m_topsim__DOT__p__DOT__mtime))) {
                VL_WRITEF("Simulation Time out...\n");
                VL_FINISH_MT("top.v", 408, "");
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if (VL_UNLIKELY((0ULL == VL_MODDIV_QQQ(64, vlTOPp->m_topsim__DOT__p__DOT__mtime, 0xf4240ULL)))) {
                    VL_WRITEF("MTIME=%09# %20#\n",32,
                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                              64,vlTOPp->m_topsim__DOT__p__DOT__mtimecmp);
                }
            }
            if ((((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1) 
                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1_busy)))) {
                if (((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)) 
                     | (5U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))) {
                    if (VL_UNLIKELY((vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt 
                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt)))) {
                        VL_WRITEF("CAUTION! DIV FAIL! %x/%x true:%x unit:%x %x\n",
                                  32,vlTOPp->m_topsim__DOT__p__DOT__r_rrs1,
                                  32,vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2,
                                  32,vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt,
                                  32,(IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                              >> 0x20U)),
                                  32,(IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt));
                        VL_FINISH_MT("rvcorem.v", 953, "");
                    }
                }
                if (((6U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)) 
                     | (7U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))) {
                    if (VL_UNLIKELY((vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt 
                                     != (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                                 >> 0x20U))))) {
                        VL_WRITEF("CAUTION! REM FAIL! %x/%x true:%x unit:%x %x\n",
                                  32,vlTOPp->m_topsim__DOT__p__DOT__r_rrs1,
                                  32,vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2,
                                  32,vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt,
                                  32,(IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                              >> 0x20U)),
                                  32,(IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt));
                        VL_FINISH_MT("rvcorem.v", 962, "");
                    }
                }
            }
            vlTOPp->__Vdly__m_topsim__DOT__r_cnt = 
                ((IData)(1U) + vlTOPp->m_topsim__DOT__r_cnt);
            vlTOPp->m_topsim__DOT__p__DOT__r_data_en 
                = vlTOPp->m_topsim__DOT__p__DOT__w_d_en_t;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_idx 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idx;
            if (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwe) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[0U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[0U];
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[1U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[1U];
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[2U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[2U];
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[3U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[3U];
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[4U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[4U];
                __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr;
            }
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start 
                = ((IData)(vlTOPp->RST_X) ? ((IData)(vlTOPp->m_topsim__DOT__w_rxd)
                                              ? 0U : 
                                             (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start))))
                    : 0U);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_dram_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_arg;
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_aces) {
                vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_served_irq_nxt;
            }
            __Vtemp16[1U] = (IData)((((QData)((IData)(
                                                      ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                        [
                                                        (0x7ffffffU 
                                                         & ((IData)(0xfU) 
                                                            + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                        << 0x18U) 
                                                       | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                           [
                                                           (0x7ffffffU 
                                                            & ((IData)(0xeU) 
                                                               + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                           << 0x10U) 
                                                          | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                              [
                                                              (0x7ffffffU 
                                                               & ((IData)(0xdU) 
                                                                  + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                              << 8U) 
                                                             | vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                             [
                                                             (0x7ffffffU 
                                                              & ((IData)(0xcU) 
                                                                 + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))]))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                    [
                                                                    (0x7ffffffU 
                                                                     & ((IData)(0xbU) 
                                                                        + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                                    << 0x18U) 
                                                                   | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                       [
                                                                       (0x7ffffffU 
                                                                        & ((IData)(0xaU) 
                                                                           + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                                       << 0x10U) 
                                                                      | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                          [
                                                                          (0x7ffffffU 
                                                                           & ((IData)(9U) 
                                                                              + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                                          << 8U) 
                                                                         | vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                         [
                                                                         (0x7ffffffU 
                                                                          & ((IData)(8U) 
                                                                             + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))])))))));
            __Vtemp16[2U] = (IData)(((((QData)((IData)(
                                                       ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                         [
                                                         (0x7ffffffU 
                                                          & ((IData)(0xfU) 
                                                             + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                         << 0x18U) 
                                                        | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                            [
                                                            (0x7ffffffU 
                                                             & ((IData)(0xeU) 
                                                                + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                            << 0x10U) 
                                                           | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                               [
                                                               (0x7ffffffU 
                                                                & ((IData)(0xdU) 
                                                                   + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                               << 8U) 
                                                              | vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                              [
                                                              (0x7ffffffU 
                                                               & ((IData)(0xcU) 
                                                                  + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))]))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                     [
                                                                     (0x7ffffffU 
                                                                      & ((IData)(0xbU) 
                                                                         + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                                     << 0x18U) 
                                                                    | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                        [
                                                                        (0x7ffffffU 
                                                                         & ((IData)(0xaU) 
                                                                            + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                                        << 0x10U) 
                                                                       | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                           [
                                                                           (0x7ffffffU 
                                                                            & ((IData)(9U) 
                                                                               + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                                           << 8U) 
                                                                          | vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                                          [
                                                                          (0x7ffffffU 
                                                                           & ((IData)(8U) 
                                                                              + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))])))))) 
                                     >> 0x20U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[0U] 
                = ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                    [(0x7ffffffU & ((IData)(3U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                    << 0x18U) | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                  [(0x7ffffffU & ((IData)(2U) 
                                                  + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                  << 0x10U) | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                [(0x7ffffffU 
                                                  & ((IData)(1U) 
                                                     + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                << 8U) 
                                               | vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                               [(0x7ffffffU 
                                                 & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr)])));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[1U] 
                = ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                    [(0x7ffffffU & ((IData)(7U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                    << 0x18U) | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                  [(0x7ffffffU & ((IData)(6U) 
                                                  + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                  << 0x10U) | ((vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                                [(0x7ffffffU 
                                                  & ((IData)(5U) 
                                                     + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))] 
                                                << 8U) 
                                               | vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                                               [(0x7ffffffU 
                                                 & ((IData)(4U) 
                                                    + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr))])));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[2U] 
                = __Vtemp16[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[3U] 
                = __Vtemp16[2U];
            if (vlTOPp->RST_X) {
                if (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd = 1U;
                    __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum = 0U;
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_we) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready = 0U;
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U] 
                            = (0xfffffffeU & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[0U] 
                                              << 1U));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] 
                            = ((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[0U] 
                                      >> 0x1fU)) | 
                               (0xfffffffeU & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[1U] 
                                               << 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] 
                            = ((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[1U] 
                                      >> 0x1fU)) | 
                               (0xfffffffeU & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[2U] 
                                               << 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] 
                            = ((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[2U] 
                                      >> 0x1fU)) | 
                               (0xfffffffeU & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[3U] 
                                               << 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] 
                            = ((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[3U] 
                                      >> 0x1fU)) | 
                               (0xfffffffeU & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[4U] 
                                               << 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] 
                            = ((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[4U] 
                                      >> 0x1fU)) | 
                               (0xfffffffeU & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[5U] 
                                               << 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt = 0xbaU;
                    }
                } else {
                    if ((0xdU <= (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum))) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd 
                            = (1U & vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U]);
                        vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready 
                            = (1U == vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt);
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum = 1U;
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U] 
                            = ((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] 
                                << 0x1fU) | (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U] 
                                             >> 1U));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] 
                            = ((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] 
                                << 0x1fU) | (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] 
                                             >> 1U));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] 
                            = ((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] 
                                << 0x1fU) | (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] 
                                             >> 1U));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] 
                            = ((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] 
                                << 0x1fU) | (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] 
                                             >> 1U));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] 
                            = ((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] 
                                << 0x1fU) | (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] 
                                             >> 1U));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] 
                            = (0x1000000U | (0xffffffU 
                                             & (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] 
                                                >> 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt 
                            = (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt 
                               - (IData)(1U));
                    } else {
                        __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum 
                            = (0xfffU & ((IData)(1U) 
                                         + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum)));
                    }
                }
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd = 1U;
                vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready = 1U;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U] = 0xffffffffU;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] = 0xffffffffU;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] = 0xffffffffU;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] = 0xffffffffU;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] = 0xffffffffU;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] = 0x1ffffffU;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum = 0U;
                __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt = 0U;
            }
            if (vlTOPp->RST_X) {
                if (vlTOPp->m_topsim__DOT__tx_ready) {
                    vlTOPp->m_topsim__DOT__init_txd = 1U;
                    __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum = 0U;
                    if (vlTOPp->m_topsim__DOT__uartwe) {
                        vlTOPp->__Vdly__m_topsim__DOT__tx_ready = 0U;
                        __Vdly__m_topsim__DOT__UartTx_init__DOT__cmd 
                            = ((IData)(vlTOPp->m_topsim__DOT__uartdata) 
                               << 1U);
                        __Vdly__m_topsim__DOT__UartTx_init__DOT__cnt = 0xaU;
                    }
                } else {
                    if ((0xdU <= vlTOPp->m_topsim__DOT__UartTx_init__DOT__waitnum)) {
                        vlTOPp->m_topsim__DOT__init_txd 
                            = (1U & (IData)(vlTOPp->m_topsim__DOT__UartTx_init__DOT__cmd));
                        vlTOPp->__Vdly__m_topsim__DOT__tx_ready 
                            = (1U == (IData)(vlTOPp->m_topsim__DOT__UartTx_init__DOT__cnt));
                        __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum = 1U;
                        __Vdly__m_topsim__DOT__UartTx_init__DOT__cmd 
                            = (0x100U | (0xffU & ((IData)(vlTOPp->m_topsim__DOT__UartTx_init__DOT__cmd) 
                                                  >> 1U)));
                        __Vdly__m_topsim__DOT__UartTx_init__DOT__cnt 
                            = (0xfU & ((IData)(vlTOPp->m_topsim__DOT__UartTx_init__DOT__cnt) 
                                       - (IData)(1U)));
                    } else {
                        __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum 
                            = ((IData)(1U) + vlTOPp->m_topsim__DOT__UartTx_init__DOT__waitnum);
                    }
                }
            } else {
                vlTOPp->m_topsim__DOT__init_txd = 1U;
                vlTOPp->__Vdly__m_topsim__DOT__tx_ready = 1U;
                __Vdly__m_topsim__DOT__UartTx_init__DOT__cmd = 0x1ffU;
                __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum = 0U;
                __Vdly__m_topsim__DOT__UartTx_init__DOT__cnt = 0U;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_tag 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_tag;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_divisor 
                = ((IData)(vlTOPp->m_topsim__DOT__CORE_RST_X)
                    ? ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)
                        ? vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_divisor
                        : vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_divisor)
                    : 0U);
            if (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE1) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data1;
                __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0 
                    = (0x7ffffffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tw);
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE2) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data2;
                __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1 
                    = (0x7ffffffU & ((IData)(1U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tw));
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE3) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data3;
                __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2 
                    = (0x7ffffffU & ((IData)(2U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tw));
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE4) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data4;
                __Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3 
                    = (0x7ffffffU & ((IData)(3U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tw));
            }
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                = ((IData)(vlTOPp->m_topsim__DOT__CORE_RST_X)
                    ? ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)
                        ? (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_dividend))
                        : ((1U & (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_differ 
                                          >> 0x20U)))
                            ? (0xfffffffffffffffeULL 
                               & (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                  << 1U)) : (((QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_differ)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | (0xfffffffeU 
                                                                   & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt) 
                                                                      << 1U))))))))
                    : 0ULL);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                [vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr][0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                [vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr][1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                [vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr][2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                [vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr][3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[4U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                [vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr][4U];
            if (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init) {
                vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_div_first = 0U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1)))) {
                    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_div_first = 1U;
                }
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__r_checksum 
                = ((IData)(vlTOPp->RST_X) ? (((~ (IData)(vlTOPp->m_topsim__DOT__w_init_done)) 
                                              & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we))
                                              ? (vlTOPp->m_topsim__DOT__mmu__DOT__r_checksum 
                                                 + vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data)
                                              : vlTOPp->m_topsim__DOT__mmu__DOT__r_checksum)
                    : 0U);
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_aces) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_odata 
                    = ((0U != vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask)
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask
                        : 0U);
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we) {
                vlTOPp->__Vdlyvval__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 
                    = (((QData)((IData)(vlTOPp->m_topsim__DOT__w_mtime)) 
                        << 8U) | (QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data)));
                vlTOPp->__Vdlyvset__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 = 1U;
                vlTOPp->__Vdlyvdim0__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr;
                vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr)));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_count 
                = ((IData)(vlTOPp->m_topsim__DOT__CORE_RST_X)
                    ? ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)
                        ? 0U : (0x3fU & ((IData)(1U) 
                                         + (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_count))))
                    : 0U);
            if ((7U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_atom_wdata 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_alu_a_rslt;
            }
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_mul_SU 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_mul_SU;
            }
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_mul_SS;
            }
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_mul_UU 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_mul_UU;
            }
            if ((7U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_mem_rdata 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                [(0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_addr 
                            >> 2U))];
            if (((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (0xffffffffU == vlTOPp->m_topsim__DOT__w_pagefault))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_cpc 
                    = vlTOPp->m_topsim__DOT__p__DOT__pc;
            }
            if (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we) 
                 & (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state)))) {
                __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr3 
                    = ((IData)(4U) + vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr3);
            }
            if ((0x1001000U <= vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr3)) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_dtree_done = 1U;
            }
            if (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we) 
                 & (4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state)))) {
                __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr2 
                    = ((IData)(4U) + vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr2);
            }
            if ((0x5000000U <= vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr2)) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_disk_done = 1U;
            }
            if (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we) 
                 & (2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state)))) {
                __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr 
                    = ((IData)(4U) + vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr);
            }
            if ((0x900000U <= vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr)) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_bbl_done = 1U;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__r_virt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_virt;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend 
                = ((IData)(vlTOPp->m_topsim__DOT__CORE_RST_X) 
                   & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)
                       ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                          >> 0x1fU) : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend)));
            if ((1U & ((~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)) 
                       & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_done))))) {
                __Vdly__m_topsim__DOT__mmu__DOT__r_zero_we = 1U;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_we) {
                __Vdly__m_topsim__DOT__mmu__DOT__r_zeroaddr 
                    = ((IData)(4U) + vlTOPp->m_topsim__DOT__mmu__DOT__r_zeroaddr);
                __Vdly__m_topsim__DOT__mmu__DOT__r_zero_we = 0U;
            }
            if ((0x8000000U <= vlTOPp->m_topsim__DOT__mmu__DOT__r_zeroaddr)) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_done = 1U;
            }
            vlTOPp->m_topsim__DOT__p__DOT__r_init_stage 
                = (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_state));
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe) {
                vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq;
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_rs1 
                    = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                >> 0xfU));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_rs2 
                    = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                >> 0x14U));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__r_dev 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dev;
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_funct5 
                    = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                >> 0x1bU));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE 
                    = (0x23U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir));
            }
            if (vlTOPp->m_topsim__DOT__p__DOT__w_regfile_we) {
                if ((0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rd))) {
                    __Vdlyvval__m_topsim__DOT__p__DOT__regs__DOT__mem__v0 
                        = vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_data;
                    __Vdlyvset__m_topsim__DOT__p__DOT__regs__DOT__mem__v0 = 1U;
                    __Vdlyvdim0__m_topsim__DOT__p__DOT__regs__DOT__mem__v0 
                        = vlTOPp->m_topsim__DOT__p__DOT__r_rd;
                }
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD 
                    = (3U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_MSTA 
                    = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_op_csr) 
                       & (0x300U == (0xfffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                               >> 0x14U))));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_SSTA 
                    = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_op_csr) 
                       & (0x100U == (0xfffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                               >> 0x14U))));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_MRET 
                    = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_op_priv) 
                       & (0x302U == (0xfffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                               >> 0x14U))));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_SRET 
                    = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_op_priv) 
                       & (0x102U == (0xfffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                               >> 0x14U))));
            }
            if ((6U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_data_wdata 
                    = vlTOPp->m_topsim__DOT__p__DOT__r_rrs2;
            } else {
                if ((7U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                    vlTOPp->m_topsim__DOT__p__DOT__r_data_wdata 
                        = vlTOPp->m_topsim__DOT__p__DOT__w_alu_a_rslt;
                }
            }
            if ((1U & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_aces_t 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_aces;
            }
            if ((1U & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_served_irq_t 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_served_irq_nxt;
            }
            if ((1U & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_pending_irq_t 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_pending_irq_nxt;
            }
            if ((1U & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_virt_irq_oe_t 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__r_clint_odata 
                = ((0xbff8U == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)
                    ? (IData)(vlTOPp->m_topsim__DOT__w_mtime)
                    : ((0xbffcU == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)
                        ? (IData)((vlTOPp->m_topsim__DOT__w_mtime 
                                   >> 0x20U)) : ((0x4000U 
                                                  == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)
                                                  ? (IData)(vlTOPp->m_topsim__DOT__w_mtimecmp)
                                                  : 
                                                 ((0x4004U 
                                                   == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)
                                                   ? (IData)(
                                                             (vlTOPp->m_topsim__DOT__w_mtimecmp 
                                                              >> 0x20U))
                                                   : 0U))));
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                vlTOPp->__Vdly__m_topsim__DOT__p__DOT__mtime 
                    = (1ULL + vlTOPp->m_topsim__DOT__p__DOT__mtime);
            }
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor 
                = ((IData)(vlTOPp->m_topsim__DOT__CORE_RST_X) 
                   & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)
                       ? (vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2 
                          >> 0x1fU) : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)));
            if (vlTOPp->m_topsim__DOT__w_tlb_flush) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__r_valid = 0U;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_we) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__r_valid 
                    = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__r_valid) 
                       | (0xfU & ((IData)(1U) << (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_widx))));
            }
            if (vlTOPp->m_topsim__DOT__w_tlb_flush) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__r_valid = 0U;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_we) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__r_valid 
                    = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__r_valid) 
                       | (0xfU & ((IData)(1U) << (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_widx))));
            }
            if (vlTOPp->m_topsim__DOT__w_tlb_flush) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid = 0U;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid 
                    = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid) 
                       | (0xfU & ((IData)(1U) << (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_widx))));
            }
            if (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_le) 
                 & (0U == vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_addr 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_addr;
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_ctrl 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_ctrl;
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_le 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_le;
                __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt = 1U;
            } else {
                if ((5U == vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt)) {
                    __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt = 0U;
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt)) {
                        __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt 
                            = ((IData)(1U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt);
                    }
                }
            }
            if ((2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                if ((1U & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    vlTOPp->m_topsim__DOT__p__DOT__r_ir16 
                        = (0xffffU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0x10U));
                }
            }
            vlTOPp->m_topsim__DOT__p__DOT__r_data_ctrl 
                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO)
                    ? 2U : (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3));
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7 
                    = (0x7fU & ((0x13U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                 ? ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                     ? 0U : (0x20U 
                                             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct7)))
                                 : (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct7)));
            }
            vlTOPp->m_topsim__DOT__p__DOT__r_data_we 
                = vlTOPp->m_topsim__DOT__p__DOT__w_d_we_t;
            if ((((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                  & (1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state))) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_if_irl 
                    = (0xffffU & (vlTOPp->m_topsim__DOT__w_insn_data 
                                  >> 0x10U));
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct7 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_funct7;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_w) {
                if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rd))) {
                    __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0 
                        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_d;
                    __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0 = 1U;
                    __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0 
                        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rd;
                }
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_we) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0 
                    = (((QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_wtag)) 
                        << 0x16U) | (QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata)));
                __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_widx;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_we) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0 
                    = (((QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_wtag)) 
                        << 0x16U) | (QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata)));
                __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_widx;
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0 
                    = (((QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_wtag)) 
                        << 0x16U) | (QData)((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata)));
                __Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0 = 1U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_widx;
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs2 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs2;
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_funct3;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_addr2 
                = (3U & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                [(0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                            >> 2U))];
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DeviceFeaturesSel 
                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                            }
                        }
                    }
                }
            }
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DriverFeatures 
                                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                }
                            }
                        }
                    }
                }
            }
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    if ((0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                        vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DriverFeaturesSel 
                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                        if ((0x30U 
                                             != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                            if ((0x38U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                if (
                                                    (0x44U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                    if (
                                                        (0x50U 
                                                         != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                        vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptAcknowledge 
                                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DeviceFeaturesSel 
                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DriverFeatures 
                                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    if ((0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                        vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DriverFeaturesSel 
                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                        if ((0x30U 
                                             != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                            if ((0x38U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                if (
                                                    (0x44U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                    if (
                                                        (0x50U 
                                                         != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                        vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptAcknowledge 
                                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                        if ((0x30U 
                                             != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                            if ((0x38U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueNum 
                                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                        if ((0x30U 
                                             != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                            if ((0x38U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueNum 
                                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe)))) {
                __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state = 2U;
                __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe;
                __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[0U];
            } else {
                if ((((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                      | ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                         & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe))) 
                     | ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                        & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall))))) {
                    if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state))) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[0U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[0U];
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[1U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[1U];
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[2U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[2U];
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[3U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[3U];
                    } else {
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[0U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[0U];
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[1U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[1U];
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[2U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[2U];
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[3U] 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[3U];
                    }
                    if (((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                         & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe))) {
                        __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit 
                            = (1ULL + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit);
                    }
                    if (((3U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                         & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test))) {
                        VL_EXTEND_WI(128,32, __Vtemp32, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data);
                        if (VL_UNLIKELY((0U != ((((
                                                   __Vtemp32[0U] 
                                                   ^ 
                                                   vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[0U]) 
                                                  | (__Vtemp32[1U] 
                                                     ^ 
                                                     vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[1U])) 
                                                 | (__Vtemp32[2U] 
                                                    ^ 
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[2U])) 
                                                | (__Vtemp32[3U] 
                                                   ^ 
                                                   vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[3U]))))) {
                            VL_WRITEF("%10#: CACHE DATA WRONG!!, ADDR:%x DATA%x %x\n",
                                      32,(IData)(vlTOPp->m_topsim__DOT__w_mtime),
                                      32,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr,
                                      128,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata.data(),
                                      32,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data);
                            VL_FINISH_MT("top.v", 668, "");
                        }
                    }
                    __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state = 0U;
                } else {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) {
                        __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state = 3U;
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t2;
                        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t;
                    } else {
                        if (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_le) {
                            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt 
                                = (1ULL + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt);
                            __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state = 1U;
                            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr 
                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t2;
                            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl 
                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t;
                        }
                    }
                }
            }
            if (VL_UNLIKELY((0x42c1d80U == (IData)(vlTOPp->m_topsim__DOT__w_mtime)))) {
                VL_WRITEF("cnt = %20#, hit = %20#\nhit rate = %f\n",
                          64,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt,
                          64,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit,
                          64,((1.0 * VL_ITOR_D_Q(64, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit)) 
                              / VL_ITOR_D_Q(64, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt)));
            }
            if (VL_UNLIKELY((0x7a120U == (IData)(vlTOPp->m_topsim__DOT__w_mtime)))) {
                VL_WRITEF("cnt = %20#, hit = %20#\nhit rate = %f\n",
                          64,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt,
                          64,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit,
                          64,((1.0 * VL_ITOR_D_Q(64, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit)) 
                              / VL_ITOR_D_Q(64, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt)));
            }
            if (VL_UNLIKELY((0x3a2c940U == (IData)(vlTOPp->m_topsim__DOT__w_mtime)))) {
                VL_WRITEF("cnt = %20#, hit = %20#\nhit rate = %f\n",
                          64,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt,
                          64,vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit,
                          64,((1.0 * VL_ITOR_D_Q(64, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit)) 
                              / VL_ITOR_D_Q(64, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt)));
            }
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_state 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? (3U & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)
                              ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)
                              : ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))
                                  ? 0U : ((IData)(1U) 
                                          + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)))))
                    : 0U);
            if ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_mstatus_t 
                    = vlTOPp->m_topsim__DOT__p__DOT__mstatus;
            } else {
                if ((9U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                    vlTOPp->m_topsim__DOT__p__DOT__r_mstatus_t 
                        = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                            & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))
                            ? ((0x102U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                ? (0xfffffeffU & (0x20U 
                                                  | ((vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                      & (~ 
                                                         ((IData)(1U) 
                                                          << 
                                                          (1U 
                                                           & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                              >> 8U))))) 
                                                     | ((1U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                            >> 5U)) 
                                                        << 
                                                        (1U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                            >> 8U))))))
                                : ((0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                    ? (0xffffe7ffU 
                                       & (0x80U | (
                                                   (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                    & (~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                            >> 0xbU))))) 
                                                   | ((1U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                          >> 7U)) 
                                                      << 
                                                      (3U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                          >> 0xbU))))))
                                    : vlTOPp->m_topsim__DOT__p__DOT__mstatus))
                            : vlTOPp->m_topsim__DOT__p__DOT__mstatus);
                }
            }
            if ((0U != vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_done)) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_done = 0U;
                if ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_head 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_head)));
                    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_en 
                        = ((1U >= (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts))
                            ? 0U : 1U);
                    __Vdly__m_topsim__DOT__mmu__DOT__r_consf_cnts 
                        = (0x1fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts) 
                                    - (IData)(1U)));
                }
                vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode = 0U;
            } else {
                if (vlTOPp->m_topsim__DOT__mmu__DOT__r_key_we) {
                    if ((0x10U > (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts))) {
                        __Vdly__m_topsim__DOT__mmu__DOT__r_consf_cnts 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts)));
                        __Vdlyvval__m_topsim__DOT__mmu__DOT__cons_fifo__v0 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__r_key_data;
                        __Vdlyvset__m_topsim__DOT__mmu__DOT__cons_fifo__v0 = 1U;
                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__cons_fifo__v0 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_tail;
                        vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_en = 1U;
                        vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_tail 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_tail)));
                    }
                } else {
                    if ((4U == (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_req) 
                                 << 2U) | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_req) 
                                            << 1U) 
                                           | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req))))) {
                        vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode = 1U;
                        vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qnum 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qnum;
                        vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qsel 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qsel;
                    } else {
                        if ((2U == (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_req) 
                                     << 2U) | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_req) 
                                                << 1U) 
                                               | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req))))) {
                            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode = 2U;
                            vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qnum 
                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qnum;
                            vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qsel 
                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qsel;
                        } else {
                            if ((1U == (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_req) 
                                         << 2U) | (
                                                   ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_req) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req))))) {
                                vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode = 3U;
                                vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qnum 
                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qnum;
                                vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qsel = 0U;
                            }
                        }
                    }
                }
            }
            if ((2U == (0xffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost 
                                   >> 0x10U)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_done = 1U;
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_mic_addr 
                    = (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs1 
                       + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_imm);
            }
            if (vlTOPp->RST_X) {
                if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd = 1U;
                    __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum = 0U;
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready = 0U;
                        __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd 
                            = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data) 
                               << 1U);
                        __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt = 0xaU;
                    }
                } else {
                    if ((0xdU <= vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum)) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd 
                            = (1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd));
                        vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready 
                            = (1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt));
                        __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum = 1U;
                        __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd 
                            = (0x100U | (0xffU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd) 
                                                  >> 1U)));
                        __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt 
                            = (0xfU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt) 
                                       - (IData)(1U)));
                    } else {
                        __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum 
                            = ((IData)(1U) + vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum);
                    }
                }
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd = 1U;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready = 1U;
                __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd = 0x1ffU;
                __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum = 0U;
                __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt = 0U;
            }
            if ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe))) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0 
                    = (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t);
                __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0 = 1U;
                __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0 = 0U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0 
                    = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                 >> 2U));
            }
            if ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe))) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1 
                    = (0xffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t 
                                >> 8U));
                __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1 = 1U;
                __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1 = 8U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1 
                    = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                 >> 2U));
            }
            if ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe))) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2 
                    = (0xffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t 
                                >> 0x10U));
                __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2 = 1U;
                __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2 = 0x10U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2 
                    = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                 >> 2U));
            }
            if ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe))) {
                __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3 
                    = (0xffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t 
                                >> 0x18U));
                __Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3 = 1U;
                __Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3 = 0x18U;
                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3 
                    = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                 >> 2U));
            }
            if ((0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                if ((9U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                    vlTOPp->m_topsim__DOT__p__DOT__r_priv_t 
                        = (3U & (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))
                                  ? ((0x102U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                      ? (1U & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                               >> 8U))
                                      : ((0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                          ? (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                             >> 0xbU)
                                          : (IData)(vlTOPp->m_topsim__DOT__p__DOT__priv)))
                                  : (IData)(vlTOPp->m_topsim__DOT__p__DOT__priv)));
                }
            }
            vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_pc 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? (((3U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)) 
                        | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc
                        : ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_tkn)
                            ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_jmp_pc
                            : ((IData)(4U) + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc)))
                    : 0U);
            if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))) {
                if (((~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)) 
                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_use_tlb))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_hit) {
                        __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 7U;
                        vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_addr 
                            = ((4U == (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                        << 2U) | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))))
                                ? ((0xfffff000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_addr 
                                                   << 0xaU)) 
                                   | (0xfffU & vlTOPp->m_topsim__DOT__w_insn_addr))
                                : ((2U == (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                                               << 1U) 
                                              | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))))
                                    ? ((0xfffff000U 
                                        & (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_addr 
                                           << 0xaU)) 
                                       | (0xfffU & vlTOPp->m_topsim__DOT__w_data_addr))
                                    : ((1U == (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))))
                                        ? ((0xfffff000U 
                                            & (vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_addr 
                                               << 0xaU)) 
                                           | (0xfffU 
                                              & vlTOPp->m_topsim__DOT__w_data_addr))
                                        : 0U)));
                        vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use 
                            = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                << 2U) | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                                           << 1U) | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite)));
                    } else {
                        __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 1U;
                    }
                }
            } else {
                if (((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)))) {
                    __Vdly__m_topsim__DOT__mmu__DOT__L1_pte 
                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata;
                    __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 2U;
                } else {
                    if ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))) {
                        __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 3U;
                    } else {
                        if (((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                             & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)))) {
                            __Vdly__m_topsim__DOT__mmu__DOT__L0_pte 
                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata;
                            __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 4U;
                        } else {
                            if ((4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))) {
                                if ((1U & vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte)) {
                                    if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr))) {
                                        if (vlTOPp->m_topsim__DOT__mmu__DOT__L1_success) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__L1_p_addr;
                                            vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 0U;
                                        } else {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr = 0U;
                                            vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 1U;
                                        }
                                    } else {
                                        if ((1U & vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte)) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr))) {
                                                if (vlTOPp->m_topsim__DOT__mmu__DOT__L0_success) {
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr 
                                                        = vlTOPp->m_topsim__DOT__mmu__DOT__L0_p_addr;
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 0U;
                                                } else {
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr = 0U;
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr = 0U;
                                            vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr = 0U;
                                    vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 1U;
                                }
                                __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 5U;
                            } else {
                                if ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))) {
                                    __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 0U;
                                    vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr = 0U;
                                    vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 0U;
                                } else {
                                    if ((7U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))) {
                                        __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state = 0U;
                                        vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__p__DOT__r_tlb_req 
                = (((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_state)) 
                    & (1U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_if_state)))
                    ? 2U : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_d_en_t)
                             ? 0U : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_d_we_t)
                                      ? 1U : 3U)));
            vlTOPp->m_topsim__DOT__p__DOT__r_com = 
                ((((0xaU != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                   & (0xbU != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) 
                  & (0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)))
                  ? (7U & (((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                            << 2U) | (((0xffffffffU 
                                        != vlTOPp->m_topsim__DOT__w_pagefault) 
                                       << 1U) | ((5U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_ECALL)))))
                  : 0U);
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((((0xffffffffU == vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                      | ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                         & (0U != (0x80000000U & vlTOPp->m_topsim__DOT__p__DOT__pending_exception)))) 
                     | ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_ECALL)))) {
                    vlTOPp->m_topsim__DOT__p__DOT__e_icount 
                        = (1ULL + vlTOPp->m_topsim__DOT__p__DOT__e_icount);
                }
            }
            if ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__rdata 
                    = ((0x23U >= (0x3fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr) 
                                           >> 2U)))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                       [(0x3fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr) 
                                  >> 2U))] : 0U);
                if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound2 
                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                    if ((0x23U >= (0x3fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr) 
                                            >> 2U)))) {
                        __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound2;
                        __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0 = 1U;
                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0 
                            = (0x3fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr) 
                                        >> 2U));
                    }
                }
            } else {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__rdata 
                        = (((((((((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                  | (4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (8U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0xcU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x10U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x34U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                            | (0x60U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))
                            ? ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__MagicValue
                                : ((4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Version
                                    : ((8U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                        ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DeviceID
                                        : ((0xcU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                            ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__VendorID
                                            : ((0x10U 
                                                == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                                ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DeviceFeatures
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueNumMax
                                                    : 
                                                   ((0x44U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                                     ? 
                                                    ((0x23U 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(9U) 
                                                          * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel)))
                                                      ? 
                                                     vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(9U) 
                                                         * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel))]
                                                      : 0U)
                                                     : vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus)))))))
                            : ((0x70U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Status
                                : ((0xfcU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__ConfigGeneration
                                    : 0U)));
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                        if ((0x30U 
                                             != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                            if ((0x38U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                if (
                                                    (0x44U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound3 
                                                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                                    if (
                                                        (0x23U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(9U) 
                                                             * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel)))) {
                                                        __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1 
                                                            = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound3;
                                                        __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1 = 1U;
                                                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1 
                                                            = 
                                                            (0x3fU 
                                                             & ((IData)(9U) 
                                                                * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel));
                                                    }
                                                } else {
                                                    if (
                                                        (0x50U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                                        vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound4 
                                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                                        __Vdly__m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus 
                                                            = 
                                                            (1U 
                                                             | vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus);
                                                        if (
                                                            (0x23U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 ((IData)(9U) 
                                                                  * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel))))) {
                                                            __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2 
                                                                = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound4;
                                                            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2 = 1U;
                                                            __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2 
                                                                = 
                                                                (0x3fU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    ((IData)(9U) 
                                                                     * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel)));
                                                        }
                                                    } else {
                                                        __Vdly__m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus 
                                                            = 
                                                            (vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus 
                                                             & (~ vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x70U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x80U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound5 
                                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                    if ((0x23U >= (0x3fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(9U) 
                                                       * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel))))) {
                                        __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3 
                                            = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound5;
                                        __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3 = 1U;
                                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3 
                                            = (0x3fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  ((IData)(9U) 
                                                   * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel)));
                                    }
                                } else {
                                    if ((0x90U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                        vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound6 
                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                        if ((0x23U 
                                             >= (0x3fU 
                                                 & ((IData)(4U) 
                                                    + 
                                                    ((IData)(9U) 
                                                     * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel))))) {
                                            __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound6;
                                            __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4 = 1U;
                                            __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4 
                                                = (0x3fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(9U) 
                                                       * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel)));
                                        }
                                    } else {
                                        if ((0xa0U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound7 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                            if ((0x23U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(9U) 
                                                      * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel))))) {
                                                __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5 
                                                    = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound7;
                                                __Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5 = 1U;
                                                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5 
                                                    = 
                                                    (0x3fU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        ((IData)(9U) 
                                                         * vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                 | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__r_rdata 
                    = ((0x11U >= (0x1fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr) 
                                           >> 2U)))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                       [(0x1fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr) 
                                  >> 2U))] : 0U);
                if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound2 
                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                    if ((0x11U >= (0x1fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr) 
                                            >> 2U)))) {
                        __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0 
                            = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound2;
                        __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0 = 1U;
                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0 
                            = (0x1fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr) 
                                        >> 2U));
                    }
                }
            } else {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__r_rdata 
                        = (((((((((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                  | (4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (8U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0xcU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x10U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x34U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                            | (0x60U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))
                            ? ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__MagicValue
                                : ((4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Version
                                    : ((8U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                        ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DeviceID
                                        : ((0xcU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                            ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__VendorID
                                            : ((0x10U 
                                                == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                                ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DeviceFeatures
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueNumMax
                                                    : 
                                                   ((0x44U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                                     ? 
                                                    ((0x11U 
                                                      >= 
                                                      (0x1fU 
                                                       & ((IData)(9U) 
                                                          * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel)))
                                                      ? 
                                                     vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(9U) 
                                                         * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel))]
                                                      : 0U)
                                                     : vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus)))))))
                            : ((0x70U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Status
                                : ((0xfcU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__ConfigGeneration
                                    : 0U)));
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                        if ((0x30U 
                                             != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                            if ((0x38U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                if (
                                                    (0x44U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound3 
                                                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                                    if (
                                                        (0x11U 
                                                         >= 
                                                         (0x1fU 
                                                          & ((IData)(9U) 
                                                             * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel)))) {
                                                        __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1 
                                                            = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound3;
                                                        __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1 = 1U;
                                                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(9U) 
                                                                * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel));
                                                    }
                                                } else {
                                                    if (
                                                        (0x50U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                                        vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound4 
                                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                                        __Vdly__m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus 
                                                            = 
                                                            (1U 
                                                             | vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus);
                                                        if (
                                                            (0x11U 
                                                             >= 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 ((IData)(9U) 
                                                                  * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel))))) {
                                                            __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2 
                                                                = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound4;
                                                            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2 = 1U;
                                                            __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    ((IData)(9U) 
                                                                     * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel)));
                                                        }
                                                    } else {
                                                        __Vdly__m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus 
                                                            = 
                                                            (vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus 
                                                             & (~ vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x70U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x80U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound5 
                                        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                    if ((0x11U >= (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(9U) 
                                                       * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel))))) {
                                        __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3 
                                            = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound5;
                                        __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3 = 1U;
                                        __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3 
                                            = (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  ((IData)(9U) 
                                                   * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel)));
                                    }
                                } else {
                                    if ((0x90U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                        vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound6 
                                            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                        if ((0x11U 
                                             >= (0x1fU 
                                                 & ((IData)(4U) 
                                                    + 
                                                    ((IData)(9U) 
                                                     * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel))))) {
                                            __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound6;
                                            __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4 = 1U;
                                            __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4 
                                                = (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((IData)(9U) 
                                                       * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel)));
                                        }
                                    } else {
                                        if ((0xa0U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound7 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                            if ((0x11U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     ((IData)(9U) 
                                                      * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel))))) {
                                                __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5 
                                                    = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound7;
                                                __Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5 = 1U;
                                                __Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        ((IData)(9U) 
                                                         * vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req) {
                __Vdly__m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus 
                    = (1U | vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus);
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x140U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            vlTOPp->m_topsim__DOT__p__DOT__sscratch 
                                                = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if (((((((((0x340U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                           | (0x341U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x342U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                         | (0x343U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                        | (0x104U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                       | (0x144U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x303U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                    if ((0x340U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        vlTOPp->m_topsim__DOT__p__DOT__mscratch 
                                            = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x140U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x141U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x142U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    if (
                                                        (0x143U 
                                                         != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                        if (
                                                            (0x305U 
                                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                            vlTOPp->m_topsim__DOT__p__DOT__mcounteren 
                                                                = 
                                                                (5U 
                                                                 & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        vlTOPp->m_topsim__DOT__p__DOT__scounteren 
                                            = (5U & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if (((((((((0x340U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                           | (0x341U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x342U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                         | (0x343U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                        | (0x104U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                       | (0x144U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x303U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                    if ((0x340U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x341U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x342U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x343U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    if (
                                                        (0x104U 
                                                         != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                        if (
                                                            (0x144U 
                                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                            if (
                                                                (0x302U 
                                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                vlTOPp->m_topsim__DOT__p__DOT__medeleg 
                                                                    = 
                                                                    ((0xffff0000U 
                                                                      & vlTOPp->m_topsim__DOT__p__DOT__medeleg) 
                                                                     | (0xffffU 
                                                                        & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                if ((0x4c4b400ULL < vlTOPp->m_topsim__DOT__p__DOT__mtime)) {
                    if (vlTOPp->m_topsim__DOT__w_plic_we) {
                        __Vdly__m_topsim__DOT__p__DOT__mip 
                            = vlTOPp->m_topsim__DOT__w_wmip;
                    } else {
                        if ((vlTOPp->m_topsim__DOT__p__DOT__mtimecmp 
                             < vlTOPp->m_topsim__DOT__p__DOT__mtime)) {
                            __Vdly__m_topsim__DOT__p__DOT__mip 
                                = (0x80U | vlTOPp->m_topsim__DOT__p__DOT__mip);
                        }
                    }
                }
            }
            if (((7U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 | (9U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)))) {
                if (vlTOPp->m_topsim__DOT__w_plic_we) {
                    __Vdly__m_topsim__DOT__p__DOT__mip 
                        = vlTOPp->m_topsim__DOT__w_wmip;
                }
            }
            if (((8U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if (vlTOPp->m_topsim__DOT__w_clint_we) {
                    __Vdly__m_topsim__DOT__p__DOT__mip 
                        = (0xffffff7fU & vlTOPp->m_topsim__DOT__p__DOT__mip);
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if (((((((((0x340U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                           | (0x341U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x342U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                         | (0x343U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                        | (0x104U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                       | (0x144U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x303U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                    if ((0x340U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x341U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x342U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x343U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    if (
                                                        (0x104U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                        __Vdly__m_topsim__DOT__p__DOT__mie 
                                                            = 
                                                            ((vlTOPp->m_topsim__DOT__p__DOT__mie 
                                                              & (~ vlTOPp->m_topsim__DOT__p__DOT__mideleg)) 
                                                             | (vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr 
                                                                & vlTOPp->m_topsim__DOT__p__DOT__mideleg));
                                                    } else {
                                                        if (
                                                            (0x144U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                            __Vdly__m_topsim__DOT__p__DOT__mip 
                                                                = 
                                                                ((vlTOPp->m_topsim__DOT__p__DOT__mip 
                                                                  & (~ vlTOPp->m_topsim__DOT__p__DOT__mideleg)) 
                                                                 | (vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr 
                                                                    & vlTOPp->m_topsim__DOT__p__DOT__mideleg));
                                                        } else {
                                                            if (
                                                                (0x302U 
                                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                vlTOPp->m_topsim__DOT__p__DOT__mideleg 
                                                                    = 
                                                                    ((0xfffffdddU 
                                                                      & vlTOPp->m_topsim__DOT__p__DOT__mideleg) 
                                                                     | (0x222U 
                                                                        & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x304U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        __Vdly__m_topsim__DOT__p__DOT__mie 
                                            = ((0xfffffd55U 
                                                & vlTOPp->m_topsim__DOT__p__DOT__mie) 
                                               | (0x2aaU 
                                                  & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
                                    } else {
                                        if ((0x344U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            __Vdly__m_topsim__DOT__p__DOT__mip 
                                                = (
                                                   (0xffffffddU 
                                                    & vlTOPp->m_topsim__DOT__p__DOT__mip) 
                                                   | (0x22U 
                                                      & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if ((1U & (~ ((((((
                                                   ((0x340U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                    | (0x341U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                   | (0x342U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                  | (0x343U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                 | (0x104U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                | (0x144U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x302U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x303U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                    if ((0x304U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x344U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x180U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                vlTOPp->m_topsim__DOT__p__DOT__satp 
                                                    = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((1U & (~ (IData)((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg))))) {
                        vlTOPp->m_topsim__DOT__p__DOT__mcause 
                            = vlTOPp->m_topsim__DOT__p__DOT__cause;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((1U & (~ (IData)((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg))))) {
                            vlTOPp->m_topsim__DOT__p__DOT__mcause 
                                = vlTOPp->m_topsim__DOT__p__DOT__cause;
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if (((((((((0x340U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                           | (0x341U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x342U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                         | (0x343U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                        | (0x104U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                       | (0x144U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x303U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                    if ((0x340U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x341U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x342U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                vlTOPp->m_topsim__DOT__p__DOT__mcause 
                                                    = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                        vlTOPp->m_topsim__DOT__p__DOT__scause 
                            = vlTOPp->m_topsim__DOT__p__DOT__cause;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                            vlTOPp->m_topsim__DOT__p__DOT__scause 
                                = vlTOPp->m_topsim__DOT__p__DOT__cause;
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x140U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x141U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x142U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    vlTOPp->m_topsim__DOT__p__DOT__scause 
                                                        = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                        __Vdly__m_topsim__DOT__p__DOT__mstatus 
                            = vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t3;
                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv = 1U;
                    } else {
                        __Vdly__m_topsim__DOT__p__DOT__mstatus 
                            = vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t3;
                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv = 3U;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                            __Vdly__m_topsim__DOT__p__DOT__mstatus 
                                = vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t3;
                            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv = 1U;
                        } else {
                            __Vdly__m_topsim__DOT__p__DOT__mstatus 
                                = vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t3;
                            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv = 3U;
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if (((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                         & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))) {
                        if ((2U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                            if ((0x102U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                __Vdly__m_topsim__DOT__p__DOT__mstatus 
                                    = (0xfffffeffU 
                                       & (0x20U | (
                                                   (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                    & (~ 
                                                       ((IData)(1U) 
                                                        << 
                                                        (1U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                            >> 8U))))) 
                                                   | ((1U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                          >> 5U)) 
                                                      << 
                                                      (1U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                          >> 8U))))));
                                vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv 
                                    = (1U & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                             >> 8U));
                            } else {
                                if ((0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    __Vdly__m_topsim__DOT__p__DOT__mstatus 
                                        = (0xffffe7ffU 
                                           & (0x80U 
                                              | ((vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                          >> 0xbU))))) 
                                                 | ((1U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                        >> 7U)) 
                                                    << 
                                                    (3U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                        >> 0xbU))))));
                                    vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv 
                                        = (3U & (vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                                                 >> 0xbU));
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if ((1U & (~ ((((((
                                                   ((0x340U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                    | (0x341U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                   | (0x342U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                  | (0x343U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                 | (0x104U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                                | (0x144U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x302U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x303U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                    if ((0x304U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x344U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x180U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x300U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    __Vdly__m_topsim__DOT__p__DOT__mstatus 
                                                        = 
                                                        ((0xfff1e644U 
                                                          & vlTOPp->m_topsim__DOT__p__DOT__mstatus) 
                                                         | (0xe19bbU 
                                                            & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
                                                } else {
                                                    if (
                                                        (0x100U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                        __Vdly__m_topsim__DOT__p__DOT__mstatus 
                                                            = 
                                                            ((0xfff1e644U 
                                                              & vlTOPp->m_topsim__DOT__p__DOT__mstatus) 
                                                             | (0xe19bbU 
                                                                & vlTOPp->m_topsim__DOT__p__DOT__w_sstatus));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__p__DOT__r_insn_addr 
                = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nalign4) 
                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v))
                    ? vlTOPp->m_topsim__DOT__p__DOT__w_vadr2
                    : (((2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_if_state)) 
                        | (3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_if_state)))
                        ? vlTOPp->m_topsim__DOT__p__DOT__w_vadr2
                        : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_usestate)
                            ? vlTOPp->m_topsim__DOT__p__DOT__w_vadr1
                            : vlTOPp->m_topsim__DOT__p__DOT__pc)));
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((1U & (~ (IData)((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg))))) {
                        vlTOPp->m_topsim__DOT__p__DOT__mepc 
                            = vlTOPp->m_topsim__DOT__p__DOT__pc;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((1U & (~ (IData)((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg))))) {
                            vlTOPp->m_topsim__DOT__p__DOT__mepc 
                                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_tkn)
                                    ? vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc
                                    : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_cinsn)
                                        ? ((IData)(2U) 
                                           + vlTOPp->m_topsim__DOT__p__DOT__pc)
                                        : ((IData)(4U) 
                                           + vlTOPp->m_topsim__DOT__p__DOT__pc)));
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if (((((((((0x340U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                           | (0x341U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x342U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                         | (0x343U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                        | (0x104U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                       | (0x144U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x303U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                    if ((0x340U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x341U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            vlTOPp->m_topsim__DOT__p__DOT__mepc 
                                                = (0xfffffffeU 
                                                   & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                        vlTOPp->m_topsim__DOT__p__DOT__sepc 
                            = vlTOPp->m_topsim__DOT__p__DOT__pc;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                            vlTOPp->m_topsim__DOT__p__DOT__sepc 
                                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_tkn)
                                    ? vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc
                                    : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_cinsn)
                                        ? ((IData)(2U) 
                                           + vlTOPp->m_topsim__DOT__p__DOT__pc)
                                        : ((IData)(4U) 
                                           + vlTOPp->m_topsim__DOT__p__DOT__pc)));
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x140U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                vlTOPp->m_topsim__DOT__p__DOT__sepc 
                                                    = 
                                                    (0xfffffffeU 
                                                     & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((1U & (~ (IData)((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg))))) {
                        vlTOPp->m_topsim__DOT__p__DOT__mtval 
                            = vlTOPp->m_topsim__DOT__p__DOT__pending_tval;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((1U & (~ (IData)((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg))))) {
                            vlTOPp->m_topsim__DOT__p__DOT__mtval 
                                = vlTOPp->m_topsim__DOT__p__DOT__pending_tval;
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if ((1U & (~ ((((((((0x105U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                                | (0x106U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                               | (0x140U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                              | (0x141U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                             | (0x142U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                            | (0x143U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                           | (0x305U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x306U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))))) {
                                if (((((((((0x340U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                           | (0x341U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                          | (0x342U 
                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                         | (0x343U 
                                            == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                        | (0x104U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                       | (0x144U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x302U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x303U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                    if ((0x340U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x341U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x342U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x343U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    vlTOPp->m_topsim__DOT__p__DOT__mtval 
                                                        = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)) {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                        vlTOPp->m_topsim__DOT__p__DOT__stval 
                            = vlTOPp->m_topsim__DOT__p__DOT__pending_tval;
                    }
                } else {
                    if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                        if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)) {
                            vlTOPp->m_topsim__DOT__p__DOT__stval 
                                = vlTOPp->m_topsim__DOT__p__DOT__pending_tval;
                        }
                    }
                }
            } else {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x140U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x141U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x142U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    if (
                                                        (0x143U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                        vlTOPp->m_topsim__DOT__p__DOT__stval 
                                                            = vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U] 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U] 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U] 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U] 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U] 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[4U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U] 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd[5U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt 
                = __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt;
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__waitnum 
                = __Vdly__m_topsim__DOT__UartTx_init__DOT__waitnum;
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__cmd 
                = __Vdly__m_topsim__DOT__UartTx_init__DOT__cmd;
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__cnt 
                = __Vdly__m_topsim__DOT__UartTx_init__DOT__cnt;
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v0;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v1;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v2;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem__v3;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0][0U] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[0U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0][1U] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[1U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0][2U] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[2U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0][3U] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[3U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0][4U] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem__v0[4U];
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr3 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr3;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr2 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr2;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_initaddr;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_we 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_zero_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_zeroaddr 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_zeroaddr;
            if (__Vdlyvset__m_topsim__DOT__p__DOT__regs__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__p__DOT__regs__DOT__mem__v0] 
                    = __Vdlyvval__m_topsim__DOT__p__DOT__regs__DOT__mem__v0;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt 
                = __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt;
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem__v0;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem__v0;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem__v0;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem__v0;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test 
                = __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data 
                = __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit 
                = __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt 
                = __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state 
                = __Vdly__m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state;
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__cons_fifo__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__cons_fifo__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__cons_fifo__v0;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_consf_cnts;
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum 
                = __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum;
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd 
                = __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd;
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt 
                = __Vdly__m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt;
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0] 
                    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0))) 
                        & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                        [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0) 
                                           << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v0))));
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1] 
                    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1))) 
                        & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                        [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1) 
                                           << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v1))));
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2] 
                    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2))) 
                        & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                        [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2) 
                                           << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v2))));
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3] 
                    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3))) 
                        & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem
                        [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3) 
                                           << (IData)(__Vdlyvlsb__m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem__v3))));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                = __Vdly__m_topsim__DOT__mmu__DOT__L0_pte;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state 
                = __Vdly__m_topsim__DOT__mmu__DOT__r_pw_state;
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                = __Vdly__m_topsim__DOT__mmu__DOT__L1_pte;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus 
                = __Vdly__m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus;
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v0;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v1;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v2;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v3;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v4;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5) {
                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__disk__DOT__Queue__v5;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus 
                = __Vdly__m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus;
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v0;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v1;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v2;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v3;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v4;
            }
            if (__Vdlyvset__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5) {
                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue
                            [__Vdlyvdim0__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5] 
                    = __Vdlyvval__m_topsim__DOT__mmu__DOT__console__DOT__Queue__v5;
            }
            vlTOPp->m_topsim__DOT__p__DOT__mie = __Vdly__m_topsim__DOT__p__DOT__mie;
            vlTOPp->m_topsim__DOT__p__DOT__mip = __Vdly__m_topsim__DOT__p__DOT__mip;
            vlTOPp->m_topsim__DOT__p__DOT__mstatus 
                = __Vdly__m_topsim__DOT__p__DOT__mstatus;
            vlTOPp->m_topsim__DOT__r_finish = vlTOPp->m_topsim__DOT__w_finish;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_busy 
                = (1U & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready)));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_ready 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_txd 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd;
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0x24U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0x20U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0x1cU)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0x18U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0x14U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0x10U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 0xcU)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 8U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in 
                = (0xfU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                                   >> 4U)));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in 
                = (0xfU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata));
            __Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__Vfuncout 
                = (((((((((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in)) 
                          | (1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                         | (2U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                        | (3U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                       | (4U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                      | (5U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                     | (6U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                    | (7U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in)))
                    ? ((0U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                        ? 0x30U : ((1U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                    ? 0x31U : ((2U 
                                                == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                ? 0x32U
                                                : (
                                                   (3U 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                    ? 0x33U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                     ? 0x34U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                      ? 0x35U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                       ? 0x36U
                                                       : 0x37U)))))))
                    : (((((((((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in)) 
                              | (9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                             | (0xaU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                            | (0xbU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                           | (0xcU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                          | (0xdU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                         | (0xeU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))) 
                        | (0xfU == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in)))
                        ? ((8U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                            ? 0x38U : ((9U == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                        ? 0x39U : (
                                                   (0xaU 
                                                    == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                    ? 0x41U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                     ? 0x42U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                      ? 0x43U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                       ? 0x44U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__in))
                                                        ? 0x45U
                                                        : 0x46U)))))))
                        : 0x58U));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[0U] 
                = (0x7f007f00U | (((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__8__Vfuncout) 
                                   << 0x10U) | (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__9__Vfuncout)));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[1U] 
                = (0x7f000000U | (0xffffffU & (0x7f00U 
                                               | ((0xff0000U 
                                                   & ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__6__Vfuncout) 
                                                      << 0x10U)) 
                                                  | (0xffffffU 
                                                     & (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__7__Vfuncout))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[2U] 
                = (0x7f000000U | (0xffffffU & (0x7f00U 
                                               | ((0xff0000U 
                                                   & ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__4__Vfuncout) 
                                                      << 0x10U)) 
                                                  | (0xffffffU 
                                                     & (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__5__Vfuncout))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[3U] 
                = ((0xffffffU & (0x7f00U | ((0xff0000U 
                                             & ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__2__Vfuncout) 
                                                << 0x10U)) 
                                            | (0xffffffU 
                                               & (IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__3__Vfuncout))))) 
                   | (0xff000000U & ((IData)((((QData)((IData)(
                                                               (0xa7f007fU 
                                                                | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__Vfuncout) 
                                                                   << 8U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0x7f207fU 
                                                                 | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__Vfuncout) 
                                                                    << 0x18U)))))) 
                                     << 0x18U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[4U] 
                = ((0xffffffU & ((IData)((((QData)((IData)(
                                                           (0xa7f007fU 
                                                            | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__Vfuncout) 
                                                               << 8U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0x7f207fU 
                                                             | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__Vfuncout) 
                                                                << 0x18U)))))) 
                                 >> 8U)) | (0xff000000U 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          (0xa7f007fU 
                                                                           | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__Vfuncout) 
                                                                              << 8U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (0x7f207fU 
                                                                            | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__Vfuncout) 
                                                                               << 0x18U))))) 
                                                        >> 0x20U)) 
                                               << 0x18U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout[5U] 
                = (0xffffffU & ((IData)(((((QData)((IData)(
                                                           (0xa7f007fU 
                                                            | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__0__Vfuncout) 
                                                               << 8U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0x7f207fU 
                                                             | ((IData)(__Vfunc_m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__ascii__1__Vfuncout) 
                                                                << 0x18U))))) 
                                         >> 0x20U)) 
                                >> 8U));
        }
        
        VL_INLINE_OPT void Vm_topsim::_sequent__TOP__4(Vm_topsim__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_sequent__TOP__4\n"); );
            Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            VlWide<4>/*127:0*/ __Vtemp45;
            // Body
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe;
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__TXD 
                = vlTOPp->m_topsim__DOT__init_txd;
            if ((((0xaU < vlTOPp->m_topsim__DOT__r_cnt) 
                  & (IData)(vlTOPp->m_topsim__DOT__tx_ready)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__uartwe)))) {
                vlTOPp->m_topsim__DOT__uartdata = vlTOPp->m_topsim__DOT__mem_bbl
                    [vlTOPp->m_topsim__DOT__imemaddr];
                vlTOPp->m_topsim__DOT__uartwe = 1U;
                vlTOPp->m_topsim__DOT__imemaddr = (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlTOPp->m_topsim__DOT__imemaddr));
            } else {
                vlTOPp->m_topsim__DOT__uartwe = 0U;
                vlTOPp->m_topsim__DOT__uartdata = 0U;
            }
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_differ 
                = (0x1ffffffffULL & ((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                      >> 0x1fU) - (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_divisor))));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__r_odata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__r_odata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__r_odata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__r_odata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__r_odata[4U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[4U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mvalid 
                = (1U & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[4U] 
                         >> 0xfU));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mtag 
                = (0x7fffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata[4U]);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_checksum 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_checksum;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy 
                = (0x20U > (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_count));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_SU 
                = vlTOPp->m_topsim__DOT__p__DOT__r_mul_SU;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_SS 
                = vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_UU 
                = vlTOPp->m_topsim__DOT__p__DOT__r_mul_UU;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__r_odata1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata1;
            if (vlTOPp->RST_X) {
                if (((~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done)) 
                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN))) {
                    vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data 
                        = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA) 
                            << 0x18U) | (0xffffffU 
                                         & (vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data 
                                            >> 8U)));
                    vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_addr 
                        = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__waddr;
                    vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we 
                        = (3U == (3U & vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__waddr));
                    vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__waddr 
                        = ((IData)(1U) + vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__waddr);
                } else {
                    vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we = 0U;
                    if ((0x1901000U <= vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__waddr)) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done = 1U;
                    }
                }
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data = 0U;
                vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__waddr = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_addr = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done = 0U;
            }
            vlTOPp->m_topsim__DOT__w_init_stage = vlTOPp->m_topsim__DOT__p__DOT__r_init_stage;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_iirq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_iirq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq1 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq 
                   | vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_irqmask);
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq2 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq 
                   & (~ vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_irqmask));
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq1 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq 
                   | vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_irqmask);
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq2 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq 
                   & (~ vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_irqmask));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_funct5 
                = vlTOPp->m_topsim__DOT__p__DOT__r_funct5;
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_rd 
                    = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                >> 7U));
            }
            vlTOPp->m_topsim__DOT__w_data_wdata = vlTOPp->m_topsim__DOT__p__DOT__r_data_wdata;
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_rrs2;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask_nxt 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_pending_irq_t 
                   & (~ vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_served_irq_t));
            vlTOPp->m_topsim__DOT__w_plic_we = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_virt_irq_oe_t) 
                                                | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_aces_t));
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2 
                    = ((0x13U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                        ? vlTOPp->m_topsim__DOT__p__DOT__r_imm
                        : vlTOPp->m_topsim__DOT__p__DOT__w_rrs2);
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall 
                = (0U != vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt);
            vlTOPp->m_topsim__DOT__w_data_ctrl = vlTOPp->m_topsim__DOT__p__DOT__r_data_ctrl;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_funct7 
                = vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7;
            vlTOPp->m_topsim__DOT__w_data_we = vlTOPp->m_topsim__DOT__p__DOT__r_data_we;
            vlTOPp->m_topsim__DOT__p__DOT__r_if_state 
                = vlTOPp->m_topsim__DOT__p__DOT__w_if_state;
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rd 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rd;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_funct3 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_funct3 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__r_odata2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qnum 
                = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueNum;
            VL_SHIFTR_WWI(128,128,7, __Vtemp45, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata, 
                          (0x78U & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr 
                                    << 3U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t 
                = __Vtemp45[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__r_key_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_key_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_mic_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__TXD 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd;
            vlTOPp->m_topsim__DOT__w_txd = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_rec_done)
                                             ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd)
                                             : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd));
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__READY 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready;
            if ((1U == (0xffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost 
                                   >> 0x10U)))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we = 1U;
                vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data 
                    = (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost);
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data = 0U;
            }
            if ((2U == (0xffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost 
                                   >> 0x10U)))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    vlTOPp->m_topsim__DOT__w_finish = 1U;
                } else {
                    vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_tohost = 0U;
                }
            } else {
                vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_tohost 
                    = (((0x40008000U == vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr) 
                        & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata
                        : ((1U == (0xffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost 
                                              >> 0x10U)))
                            ? 0U : vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS 
                    = (0x73U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir));
            }
            if ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                if ((0x40U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                    if (VL_LIKELY((0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                        if (VL_UNLIKELY((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                      32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                      7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                      32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                            VL_FINISH_MT("microc.v", 135, "");
                        } else {
                            if ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                                if (VL_LIKELY((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt 
                                                = ((IData)(4U) 
                                                   + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc);
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                } else {
                                    VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                    VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                              7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                    VL_FINISH_MT("microc.v", 135, "");
                                }
                            } else {
                                if ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt 
                                                = ((IData)(4U) 
                                                   + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc);
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                } else {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                }
                            }
                        }
                    } else {
                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                  32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                  7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                  32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                        VL_FINISH_MT("microc.v", 135, "");
                    }
                } else {
                    if ((0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                        if ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                            if (VL_UNLIKELY((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                          32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                          7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                          32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                VL_FINISH_MT("microc.v", 135, "");
                            } else {
                                if ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                } else {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                }
                            }
                        } else {
                            if (VL_UNLIKELY((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                          32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                          7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                          32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                VL_FINISH_MT("microc.v", 135, "");
                            } else {
                                if (VL_UNLIKELY((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                    VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                    VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                              7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                    VL_FINISH_MT("microc.v", 135, "");
                                } else {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                            if (VL_UNLIKELY((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                          32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                          7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                          32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                VL_FINISH_MT("microc.v", 135, "");
                            } else {
                                if ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt 
                                                = (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc 
                                                   + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm);
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                } else {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                                if (VL_LIKELY((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                } else {
                                    VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                    VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                              7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                    VL_FINISH_MT("microc.v", 135, "");
                                }
                            } else {
                                if (VL_UNLIKELY((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                    VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                    VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                              7,(IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                              32,vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                    VL_FINISH_MT("microc.v", 135, "");
                                } else {
                                    if (VL_LIKELY((2U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                        if (VL_LIKELY(
                                                      (1U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        } else {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                            VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                            VL_FINISH_MT("microc.v", 135, "");
                                        }
                                    } else {
                                        VL_WRITEF("UNKNOWN OPCODE DETECT in Micro Controller!!\n");
                                        vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
                                        VL_WRITEF("PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc,
                                                  7,
                                                  (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode),
                                                  32,
                                                  vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir);
                                        VL_FINISH_MT("microc.v", 135, "");
                                    }
                                }
                            }
                        }
                    }
                }
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_jmp_pc 
                    = ((0x67U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                        ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                           + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm)
                        : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc 
                           + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm));
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_tkn 
                    = (((0x6fU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)) 
                        | (0x67U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))
                        ? 1U : ((0x63U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                 ? (1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_b_rslt))
                                 : 0U));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata 
                = (0x3ffffcU & (vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr 
                                >> 0xaU));
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_paddr 
                = (0xfffff000U & (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                  << 2U));
            vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_acs 
                = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                   | ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                      | (5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))));
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_paddr 
                = (0xfffff000U & (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                  << 2U));
            vlTOPp->m_topsim__DOT__w_tlb_req = (3U 
                                                & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_tlb_req));
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_ECALL 
                    = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_op_priv) 
                       & (0U == (0xfffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                           >> 0x14U))));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__rdata;
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                        if ((0x30U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((2U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we) {
                        if ((1U & (~ ((((((((0x14U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                                            | (0x20U 
                                               == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                           | (0x24U 
                                              == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                          | (0x30U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                         | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                        | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                       | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) 
                                      | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)))))) {
                            if ((0x70U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))) {
                                vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Status 
                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__r_rdata;
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if (((((((((0x14U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                   | (0x20U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                  | (0x24U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                 | (0x30U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                               | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                             | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))) {
                            if ((0x14U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                if ((0x20U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                    if ((0x24U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                        if ((0x30U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel 
                                                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                          | (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))))) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                    if (vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we) {
                        if ((1U & (~ ((((((((0x14U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)) 
                                            | (0x20U 
                                               == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                           | (0x24U 
                                              == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                          | (0x30U 
                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                         | (0x38U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                        | (0x44U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                       | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                      | (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)))))) {
                            if ((0x70U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) {
                                vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Status 
                                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__w_mip = vlTOPp->m_topsim__DOT__p__DOT__mip;
            vlTOPp->m_topsim__DOT__p__DOT__pending_interrupts 
                = (vlTOPp->m_topsim__DOT__p__DOT__mip 
                   & vlTOPp->m_topsim__DOT__p__DOT__mie);
            if (((8U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if (vlTOPp->m_topsim__DOT__w_clint_we) {
                    vlTOPp->m_topsim__DOT__p__DOT__mtimecmp 
                        = vlTOPp->m_topsim__DOT__w_wmtimecmp;
                }
            }
            vlTOPp->m_topsim__DOT__w_satp = vlTOPp->m_topsim__DOT__p__DOT__satp;
            vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t 
                = (0xde133U & (0x6000U | vlTOPp->m_topsim__DOT__p__DOT__mstatus));
            vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t 
                = (0x6000U | vlTOPp->m_topsim__DOT__p__DOT__mstatus);
            vlTOPp->m_topsim__DOT__w_mstatus = vlTOPp->m_topsim__DOT__p__DOT__mstatus;
            vlTOPp->m_topsim__DOT__w_insn_addr = vlTOPp->m_topsim__DOT__p__DOT__r_insn_addr;
            if ((1U & (~ ((~ (IData)(vlTOPp->m_topsim__DOT__CORE_RST_X)) 
                          | (IData)(vlTOPp->m_topsim__DOT__w_halt))))) {
                if ((0xffffffffU == vlTOPp->m_topsim__DOT__w_pagefault)) {
                    if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                         & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                        vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v 
                            = (1U & (~ ((((0xffffffffU 
                                           != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                                          | (0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) 
                                         | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_tkn)) 
                                        | (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_cinsn)))));
                    }
                }
            }
            if ((1U & ((~ (IData)(vlTOPp->m_topsim__DOT__CORE_RST_X)) 
                       | (IData)(vlTOPp->m_topsim__DOT__w_halt)))) {
                vlTOPp->__Vdly__m_topsim__DOT__p__DOT__pc = 0x80000000U;
            } else {
                if ((0xffffffffU != vlTOPp->m_topsim__DOT__w_pagefault)) {
                    vlTOPp->m_topsim__DOT__p__DOT__pending_tval 
                        = ((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))
                            ? vlTOPp->m_topsim__DOT__p__DOT__pc
                            : (((6U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                & (8U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)))
                                ? 0U : vlTOPp->m_topsim__DOT__p__DOT__r_mem_addr));
                } else {
                    if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                         & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__pc 
                            = ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)
                                ? ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)
                                    ? vlTOPp->m_topsim__DOT__p__DOT__stvec
                                    : vlTOPp->m_topsim__DOT__p__DOT__mtvec)
                                : ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)
                                    ? ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_deleg)
                                        ? vlTOPp->m_topsim__DOT__p__DOT__stvec
                                        : vlTOPp->m_topsim__DOT__p__DOT__mtvec)
                                    : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_tkn)
                                        ? vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc
                                        : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_cinsn)
                                            ? ((IData)(2U) 
                                               + vlTOPp->m_topsim__DOT__p__DOT__pc)
                                            : ((IData)(4U) 
                                               + vlTOPp->m_topsim__DOT__p__DOT__pc)))));
                    } else {
                        if ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                            vlTOPp->m_topsim__DOT__p__DOT__pending_tval = 0U;
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_odata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_odata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_odata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_odata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_txd 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_txd;
            vlTOPp->m_topsim__DOT__r_cnt = vlTOPp->__Vdly__m_topsim__DOT__r_cnt;
            vlTOPp->m_topsim__DOT__tx_ready = vlTOPp->__Vdly__m_topsim__DOT__tx_ready;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mvalid) 
                   & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mtag) 
                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_tag)));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_busy 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__waddr 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__waddr;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_init_stage 
                = vlTOPp->m_topsim__DOT__w_init_stage;
            vlTOPp->m_topsim__DOT__p__DOT__w_init_stage 
                = vlTOPp->m_topsim__DOT__w_init_stage;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_data_wdata 
                = vlTOPp->m_topsim__DOT__w_data_wdata;
            vlTOPp->m_topsim__DOT__p__DOT__w_data_wdata 
                = vlTOPp->m_topsim__DOT__w_data_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_we 
                = vlTOPp->m_topsim__DOT__w_plic_we;
            vlTOPp->m_topsim__DOT__p__DOT__w_plic_we 
                = vlTOPp->m_topsim__DOT__w_plic_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_stall 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we 
                = ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                   & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall) 
                   | (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_data_ctrl 
                = vlTOPp->m_topsim__DOT__w_data_ctrl;
            vlTOPp->m_topsim__DOT__p__DOT__w_data_ctrl 
                = vlTOPp->m_topsim__DOT__w_data_ctrl;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_data_we 
                = vlTOPp->m_topsim__DOT__w_data_we;
            vlTOPp->m_topsim__DOT__p__DOT__w_data_we 
                = vlTOPp->m_topsim__DOT__w_data_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_wdata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_ctrl 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t 
                = ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                    ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata))))
                    : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                        ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                           << 0x10U)) 
                           | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata))
                        : vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t 
                   >> ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_addr2) 
                       << 3U));
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_qnum 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qnum;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata 
                = ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl)))
                    ? ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl))
                        ? (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)
                        : ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t 
                                                          >> 7U)))) 
                                           << 8U)) 
                           | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)))
                    : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl)))
                        ? ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl))
                            ? (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)
                            : ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t 
                                                              >> 0xfU)))) 
                                               << 0x10U)) 
                               | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)))
                        : vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_addr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_addr2 
                = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                             >> 2U));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sb 
                = (0xfU & ((IData)(1U) << (3U & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr)));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sh 
                = (0xfU & ((IData)(3U) << (2U & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_txd 
                = vlTOPp->m_topsim__DOT__w_txd;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_tohost;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_finish 
                = vlTOPp->m_topsim__DOT__w_finish;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_pc;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_idata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_idata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_idata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_req 
                = vlTOPp->m_topsim__DOT__w_tlb_req;
            vlTOPp->m_topsim__DOT__p__DOT__w_tlb_req 
                = vlTOPp->m_topsim__DOT__w_tlb_req;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_isread 
                = (0U == (IData)(vlTOPp->m_topsim__DOT__w_tlb_req));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite 
                = (1U == (IData)(vlTOPp->m_topsim__DOT__w_tlb_req));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode 
                = (2U == (IData)(vlTOPp->m_topsim__DOT__w_tlb_req));
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_odata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_odata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mip 
                = vlTOPp->m_topsim__DOT__w_mip;
            vlTOPp->m_topsim__DOT__p__DOT__w_mip = vlTOPp->m_topsim__DOT__w_mip;
            vlTOPp->m_topsim__DOT__w_wmip = ((0U != vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask_nxt)
                                              ? (0xa00U 
                                                 | vlTOPp->m_topsim__DOT__w_mip)
                                              : (0xfffff5ffU 
                                                 & vlTOPp->m_topsim__DOT__w_mip));
            vlTOPp->m_topsim__DOT__w_clint_we = ((6U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev)) 
                                                 & (IData)(vlTOPp->m_topsim__DOT__w_data_we));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_satp 
                = vlTOPp->m_topsim__DOT__w_satp;
            vlTOPp->m_topsim__DOT__p__DOT__w_satp = vlTOPp->m_topsim__DOT__w_satp;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mstatus 
                = vlTOPp->m_topsim__DOT__w_mstatus;
            vlTOPp->m_topsim__DOT__p__DOT__w_mstatus 
                = vlTOPp->m_topsim__DOT__w_mstatus;
            if ((0x80000U & vlTOPp->m_topsim__DOT__w_mstatus)) {
                vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr 
                    = (7U & ((vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                              >> 1U) | (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                        >> 3U)));
                vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr 
                    = (7U & ((vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                              >> 1U) | (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                        >> 3U)));
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr 
                    = (7U & (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                             >> 1U));
                vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr 
                    = (7U & (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                             >> 1U));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_addr 
                = vlTOPp->m_topsim__DOT__w_insn_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_waddr 
                = (0xfffffU & (vlTOPp->m_topsim__DOT__w_insn_addr 
                               >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_raddr 
                = (0xfffffU & (vlTOPp->m_topsim__DOT__w_insn_addr 
                               >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_wtag 
                = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_insn_addr 
                               >> 0xeU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_widx 
                = (3U & (vlTOPp->m_topsim__DOT__w_insn_addr 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__p__DOT__w_insn_addr 
                = vlTOPp->m_topsim__DOT__w_insn_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_rtag 
                = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_insn_addr 
                               >> 0xeU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx 
                = (3U & (vlTOPp->m_topsim__DOT__w_insn_addr 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff
                [vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr];
            if (vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_rec_done) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state))) {
                    vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr)));
                    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe = 1U;
                    vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state = 1U;
                } else {
                    if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state))) {
                        vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state 
                            = (0xfffU & (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr) 
                                          == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr))
                                          ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state)
                                          : ((IData)(1U) 
                                             + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state))));
                        vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe = 0U;
                    }
                }
            }
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__READY 
                = vlTOPp->m_topsim__DOT__tx_ready;
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__DATA 
                = vlTOPp->m_topsim__DOT__uartdata;
            vlTOPp->m_topsim__DOT__UartTx_init__DOT__WE 
                = vlTOPp->m_topsim__DOT__uartwe;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_odata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_odata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_odata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_odata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_oe 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_le 
                = ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                   & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe)));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_clr 
                = ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_busy 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_busy;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__ADDR 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__WE 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__DONE 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__DATA 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data;
            if (vlTOPp->RST_X) {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage))) {
                    vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage 
                        = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start) 
                            == (0x1fffU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__waitcnt) 
                                           >> 1U)))
                            ? 1U : (0xfU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage)));
                    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN = 0U;
                } else {
                    if (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt) 
                         != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__waitcnt))) {
                        vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt 
                            = (0x1fffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt)));
                        vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN = 0U;
                    } else {
                        vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage 
                            = ((9U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage))
                                ? 0U : (0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage))));
                        vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA 
                            = (((IData)(vlTOPp->m_topsim__DOT__w_rxd) 
                                << 7U) | (0x7fU & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA) 
                                                   >> 1U)));
                        vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt = 1U;
                        vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN 
                            = ((8U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage))
                                ? 1U : 0U);
                    }
                }
            } else {
                vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt = 1U;
                vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN = 0U;
            }
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__rd 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rd;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_in1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs2;
            vlTOPp->m_topsim__DOT__p__DOT__w_sin2 = vlTOPp->m_topsim__DOT__p__DOT__r_rrs2;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs2;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_in2 
                = vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in2 
                = vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin2 
                = vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin2 
                = vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_shamt 
                = (0x1fU & vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_stall 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_stall 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__rd 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rd;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_idata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lbu 
                = (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lhu 
                = (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lb 
                = ((0xffffff00U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 
                                                >> 7U)))) 
                                   << 8U)) | (0xffU 
                                              & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lh 
                = ((0xffff0000U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 
                                                >> 0xfU)))) 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata;
            vlTOPp->m_topsim__DOT__mmu__DOT__r_data_data 
                = ((6U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__r_clint_odata
                    : ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_odata
                        : ((4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev))
                            ? ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_virt))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data
                                : vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data)
                            : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata)));
            vlTOPp->m_topsim__DOT__w_insn_data = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata;
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__WE 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we;
            vlTOPp->m_topsim__DOT__w_uart_we = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__DATA 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data;
            vlTOPp->m_topsim__DOT__w_uart_data = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_addr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc;
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs1;
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_imm;
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir;
            }
            if ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_op;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_we 
                = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail))) 
                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_we 
                = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail))) 
                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite));
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_write 
                = (0x40U | (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                            | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite)
                                ? 0x80U : 0U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_write 
                = (0x40U | (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                            | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite)
                                ? 0x80U : 0U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_write 
                = (1U & ((~ (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                             >> 6U)) | ((~ (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                            >> 7U)) 
                                        & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))));
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_write 
                = (1U & ((~ (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                             >> 6U)) | ((~ (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                            >> 7U)) 
                                        & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we 
                = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail))) 
                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__RST_X 
                = (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode));
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_mode 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_mode 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode;
            if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_busy = 1U;
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata 
                    = vlTOPp->m_topsim__DOT__w_data_wdata;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_busy = 0U;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_wmip 
                = vlTOPp->m_topsim__DOT__w_wmip;
            vlTOPp->m_topsim__DOT__p__DOT__w_wmip = vlTOPp->m_topsim__DOT__w_wmip;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_clint_we 
                = vlTOPp->m_topsim__DOT__w_clint_we;
            vlTOPp->m_topsim__DOT__p__DOT__w_clint_we 
                = vlTOPp->m_topsim__DOT__w_clint_we;
            vlTOPp->m_topsim__DOT__w_mtimecmp = vlTOPp->m_topsim__DOT__p__DOT__mtimecmp;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_addr 
                = (0x3fffffU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem
                                       [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx]));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_tagmatch 
                = ((0x3ffffU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem
                                        [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx] 
                                        >> 0x16U))) 
                   == vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_rtag);
            if ((0x7fU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                vlTOPp->m_topsim__DOT__w_halt = 1U;
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    vlTOPp->m_topsim__DOT__p__DOT__stvec 
                                        = (0xfffffffcU 
                                           & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr);
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                          & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))))) {
                if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                     & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                    if ((1U & (~ ((0x73U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)) 
                                  & (0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))))) {
                        if (vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) {
                            if (((((((((0x105U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)) 
                                       | (0x106U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                      | (0x140U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                     | (0x141U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                    | (0x142U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                   | (0x143U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                  | (0x305U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) 
                                 | (0x306U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))) {
                                if ((0x105U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                    if ((0x106U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                        if ((0x140U 
                                             != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                            if ((0x141U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                if (
                                                    (0x142U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                    if (
                                                        (0x143U 
                                                         != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                        if (
                                                            (0x305U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                            vlTOPp->m_topsim__DOT__p__DOT__mtvec 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (vlTOPp->__Vdlyvset__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0) {
                vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff
                            [vlTOPp->__Vdlyvdim0__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0] 
                    = vlTOPp->__Vdlyvval__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_le 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_le;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_clr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_clr;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwe 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_clr) 
                   | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we));
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage;
            vlTOPp->m_topsim__DOT__w_rxd = vlTOPp->m_topsim__DOT__init_txd;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_divisor 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_lcm_data 
                = ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl)))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lb
                    : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl)))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lh
                        : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2));
            vlTOPp->m_topsim__DOT__w_data_data = vlTOPp->m_topsim__DOT__mmu__DOT__r_data_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_data 
                = vlTOPp->m_topsim__DOT__w_insn_data;
            vlTOPp->m_topsim__DOT__p__DOT__w_insn_data 
                = vlTOPp->m_topsim__DOT__w_insn_data;
            vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                = ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state))
                    ? ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v)
                        ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__w_insn_data 
                                           << 0x10U)) 
                           | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16))
                        : ((0xffff0000U & (vlTOPp->m_topsim__DOT__w_insn_data 
                                           << 0x10U)) 
                           | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_irl)))
                    : vlTOPp->m_topsim__DOT__w_insn_data);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_uart_we 
                = vlTOPp->m_topsim__DOT__w_uart_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_uart_data 
                = vlTOPp->m_topsim__DOT__w_uart_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_addr1 
                = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_addr 
                             >> 2U));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state 
                = vlTOPp->__Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_state;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_idata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_idata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qsel 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qsel 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mtimecmp 
                = vlTOPp->m_topsim__DOT__w_mtimecmp;
            vlTOPp->m_topsim__DOT__p__DOT__w_mtimecmp 
                = vlTOPp->m_topsim__DOT__w_mtimecmp;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_odata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_tagmatch) 
                   & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid) 
                      >> (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx)));
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__w_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwe;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__DATA 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__EN 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN) 
                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_rxd 
                = vlTOPp->m_topsim__DOT__w_rxd;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mem_rdata 
                = ((0U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                   >> 0x1cU))) ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_lcm_data
                    : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_dram_data);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_data_data 
                = vlTOPp->m_topsim__DOT__w_data_data;
            vlTOPp->m_topsim__DOT__p__DOT__w_data_data 
                = vlTOPp->m_topsim__DOT__w_data_data;
            vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata 
                = vlTOPp->m_topsim__DOT__w_data_data;
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_ic 
                = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1 
                = (8U | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               >> 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs2 
                = (8U | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               >> 2U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd 
                = (8U | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               >> 2U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                = ((0x40U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                             << 1U)) | ((0x38U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 7U)) 
                                        | (4U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 4U))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm2 
                = ((0xc0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                             << 1U)) | (0x38U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_nzuimm 
                = ((0x3c0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                              >> 1U)) | ((0x30U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 7U)) 
                                         | ((8U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 2U)) 
                                            | (4U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 4U)))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct1 
                = (3U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                         >> 0xaU));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct2 
                = ((4U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                          >> 0xaU)) | (3U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 5U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs1 
                = (8U | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               >> 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs2 
                = (8U | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               >> 2U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd 
                = (8U | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               >> 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                = ((0xfffff800U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xcU)))) 
                                   << 0xbU)) | ((0x400U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                    << 2U)) 
                                                | ((0x300U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       >> 1U)) 
                                                   | ((0x80U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          << 1U)) 
                                                      | ((0x40U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                             >> 1U)) 
                                                         | ((0x20U 
                                                             & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                                << 3U)) 
                                                            | ((0x10U 
                                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                                   >> 7U)) 
                                                               | (0xeU 
                                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                                     >> 2U)))))))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                = ((0xffffff00U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xcU)))) 
                                   << 8U)) | ((0xc0U 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  << 1U)) 
                                              | ((0x20U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 3U)) 
                                                 | ((0x18U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                        >> 7U)) 
                                                    | (6U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          >> 2U))))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm3 
                = ((0xffffffe0U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xcU)))) 
                                   << 5U)) | (0x1fU 
                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 2U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm4 
                = ((0xfffffe00U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xcU)))) 
                                   << 9U)) | ((0x180U 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  << 4U)) 
                                              | ((0x40U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 1U)) 
                                                 | ((0x20U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                        << 3U)) 
                                                    | (0x10U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          >> 2U))))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2 
                = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                            >> 2U));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd 
                = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                            >> 7U));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm1 
                = ((0x1c0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                              << 4U)) | ((0x20U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 7U)) 
                                         | (0x18U & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 2U))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 
                = ((0xc0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                             << 4U)) | ((0x20U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 7U)) 
                                        | (0x1cU & 
                                           (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 2U))));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm3 
                = ((0x1c0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                              >> 1U)) | (0x38U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                = ((0xc0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                             >> 1U)) | (0x3cU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                = ((0xffffffe0U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xcU)))) 
                                   << 5U)) | (0x1fU 
                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 2U)));
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_nzuimm 
                = ((0x20U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                             >> 7U)) | (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 2U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_in1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_in1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_op 
                = (0x7fU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rd 
                = (0x1fU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                            >> 7U));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_funct3 
                = (7U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_funct7 
                = (0x7fU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                            >> 0x19U));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_funct12 
                = (0xfffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                             >> 0x14U));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__w_inst 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs1 
                = (0x1fU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                            >> 0xfU));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs2 
                = (0x1fU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                            >> 0x14U));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode 
                = (0x7fU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I 
                = ((0xfffff800U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                >> 0x1fU)))) 
                                   << 0xbU)) | (0x7ffU 
                                                & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                   >> 0x14U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_S 
                = ((0xfffff800U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                >> 0x1fU)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                      >> 7U))));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_B 
                = ((0xfffff000U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                >> 0x1fU)))) 
                                   << 0xcU)) | ((0x800U 
                                                 & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                         >> 7U)))));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_U 
                = (0xfffff000U & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_J 
                = ((0xfff00000U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                >> 0x1fU)))) 
                                   << 0x14U)) | ((0xff000U 
                                                  & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir) 
                                                 | ((0x800U 
                                                     & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                        >> 9U)) 
                                                    | ((0x7e0U 
                                                        & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                             >> 0x14U))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_C 
                = (0x1fU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                            >> 0xfU));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_we 
                = ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                    ? 1U : ((0x37U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                             ? 1U : ((0x17U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                      ? 1U : ((0x6fU 
                                               == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                               ? 1U
                                               : ((0x67U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                                   ? 1U
                                                   : 
                                                  ((0x33U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                                    ? 1U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                                     ? 1U
                                                     : 0U)))))));
            if ((0x13U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_fn7 
                    = (0x7fU & ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                                 ? 0U : (0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct7))));
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm;
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_fn7 
                    = (0x7fU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct7));
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs2;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we 
                = ((0x23U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)) 
                   & (2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)));
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_qsel 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qsel;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_qsel 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qsel;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_oe 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe;
            vlTOPp->m_topsim__DOT__p__DOT__r_halt = vlTOPp->m_topsim__DOT__w_halt;
            if ((0xffffffffU != vlTOPp->m_topsim__DOT__w_pagefault)) {
                vlTOPp->m_topsim__DOT__p__DOT__pending_exception 
                    = vlTOPp->m_topsim__DOT__w_pagefault;
            } else {
                if ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                    vlTOPp->m_topsim__DOT__p__DOT__pending_exception = 0xffffffffU;
                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                } else {
                    if (((0xbU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                         & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                        if ((0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)) {
                            vlTOPp->m_topsim__DOT__p__DOT__pending_exception 
                                = (0x80000000U | vlTOPp->m_topsim__DOT__p__DOT__irq_num);
                        }
                    } else {
                        if ((5U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                            if ((0x40U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                if (VL_LIKELY((0x20U 
                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                    if ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                        if (VL_UNLIKELY(
                                                        (8U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                            vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                            vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                            VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                            VL_FINISH_MT("rvcorem.v", 373, "");
                                        } else {
                                            if (VL_UNLIKELY(
                                                            (4U 
                                                             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                          32,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                          7,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                VL_FINISH_MT("rvcorem.v", 373, "");
                                            } else {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))) {
                                                            if (
                                                                (0U 
                                                                 == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + (IData)(vlTOPp->m_topsim__DOT__p__DOT__priv));
                                                                vlTOPp->m_topsim__DOT__p__DOT__pending_exception 
                                                                    = 
                                                                    ((IData)(8U) 
                                                                     + (IData)(vlTOPp->m_topsim__DOT__p__DOT__priv));
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                    if (
                                                                        (2U 
                                                                         == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 1U;
                                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc 
                                                                            = vlTOPp->m_topsim__DOT__p__DOT__r_rcsr;
                                                                    } else {
                                                                        if (
                                                                            (0x102U 
                                                                             == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                            vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 1U;
                                                                            vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc 
                                                                                = vlTOPp->m_topsim__DOT__p__DOT__r_rcsr;
                                                                        } else {
                                                                            if (
                                                                                (0x302U 
                                                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 1U;
                                                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc 
                                                                                = vlTOPp->m_topsim__DOT__p__DOT__r_rcsr;
                                                                            } else {
                                                                                if (
                                                                                (0x105U 
                                                                                != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))) {
                                                                                if (
                                                                                (9U 
                                                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct7))) {
                                                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr 
                                                                = vlTOPp->m_topsim__DOT__p__DOT__w_alu_c_rslt;
                                                        }
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                            if (VL_LIKELY(
                                                          (4U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 1U;
                                                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                            = 
                                                            ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_cinsn)
                                                              ? 
                                                             ((IData)(2U) 
                                                              + vlTOPp->m_topsim__DOT__p__DOT__pc)
                                                              : 
                                                             ((IData)(4U) 
                                                              + vlTOPp->m_topsim__DOT__p__DOT__pc));
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc 
                                                            = 
                                                            (vlTOPp->m_topsim__DOT__p__DOT__pc 
                                                             + vlTOPp->m_topsim__DOT__p__DOT__r_imm);
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            } else {
                                                VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                          32,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                          7,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                VL_FINISH_MT("rvcorem.v", 373, "");
                                            }
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 1U;
                                                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                            = 
                                                            ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_cinsn)
                                                              ? 
                                                             ((IData)(2U) 
                                                              + vlTOPp->m_topsim__DOT__p__DOT__pc)
                                                              : 
                                                             ((IData)(4U) 
                                                              + vlTOPp->m_topsim__DOT__p__DOT__pc));
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc 
                                                            = 
                                                            (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                             + vlTOPp->m_topsim__DOT__p__DOT__r_imm);
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            } else {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn 
                                                            = vlTOPp->m_topsim__DOT__p__DOT__w_alu_b_rslt;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc 
                                                            = 
                                                            (vlTOPp->m_topsim__DOT__p__DOT__pc 
                                                             + vlTOPp->m_topsim__DOT__p__DOT__r_imm);
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                              32,(IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                              32,vlTOPp->m_topsim__DOT__p__DOT__pc,
                                              7,(IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                              32,vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                }
                            } else {
                                if ((0x20U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                    if ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                        if (VL_UNLIKELY(
                                                        (8U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                            vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                            vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                            VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                            VL_FINISH_MT("rvcorem.v", 373, "");
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                            = vlTOPp->m_topsim__DOT__p__DOT__r_imm;
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            } else {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                            = vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt;
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                            if (VL_LIKELY(
                                                          (4U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        if (vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC) {
                                                            vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                                = 
                                                                (1U 
                                                                 & (~ 
                                                                    ((vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                                      == vlTOPp->m_topsim__DOT__p__DOT__load_res) 
                                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__reserved))));
                                                        }
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            } else {
                                                VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                          32,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                          7,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                VL_FINISH_MT("rvcorem.v", 373, "");
                                            }
                                        } else {
                                            if (VL_UNLIKELY(
                                                            (4U 
                                                             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                          32,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                          7,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                VL_FINISH_MT("rvcorem.v", 373, "");
                                            } else {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_UNLIKELY(
                                                                    (1U 
                                                                     & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))))) {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                        if (VL_UNLIKELY(
                                                        (8U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                            VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                            vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                            vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                            VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                      32,
                                                      (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                      7,
                                                      (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                      32,
                                                      vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                            VL_FINISH_MT("rvcorem.v", 373, "");
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                            = 
                                                            (vlTOPp->m_topsim__DOT__p__DOT__pc 
                                                             + vlTOPp->m_topsim__DOT__p__DOT__r_imm);
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            } else {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_LIKELY(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                        vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data 
                                                            = vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt;
                                                    } else {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            }
                                        }
                                    } else {
                                        if ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))) {
                                            if (VL_LIKELY(
                                                          (4U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_UNLIKELY(
                                                                    (1U 
                                                                     & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))))) {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            } else {
                                                VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                          32,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                          7,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                VL_FINISH_MT("rvcorem.v", 373, "");
                                            }
                                        } else {
                                            if (VL_UNLIKELY(
                                                            (4U 
                                                             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                          32,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                          7,
                                                          (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                          32,
                                                          vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                VL_FINISH_MT("rvcorem.v", 373, "");
                                            } else {
                                                if (VL_LIKELY(
                                                              (2U 
                                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode)))) {
                                                    if (VL_UNLIKELY(
                                                                    (1U 
                                                                     & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))))) {
                                                        VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                        vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                        VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                                  32,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                                  7,
                                                                  (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                                  32,
                                                                  vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                        VL_FINISH_MT("rvcorem.v", 373, "");
                                                    }
                                                } else {
                                                    VL_WRITEF("UNKNOWN OPCODE DETECT!!\n");
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
                                                    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
                                                    VL_WRITEF("TC:%08# PC:%08x OPCODE=%7b, ir=%8x\nSimulation Stopped...\n",
                                                              32,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__pc,
                                                              7,
                                                              (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode),
                                                              32,
                                                              vlTOPp->m_topsim__DOT__p__DOT__r_ir);
                                                    VL_FINISH_MT("rvcorem.v", 373, "");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__KEY_DATA 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_key_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__KEY_WE 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_key_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__RXD 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_rxd;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_d 
                = ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mem_rdata
                    : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_in2 
                = vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2 
                = vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata;
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_shamt 
                = (0x1fU & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm);
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_shamt 
                = (0x1fU & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_nzuimm);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rs1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs1 
                = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs1))
                    ? 0U : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem
                   [vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs1]);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rs2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs2 
                = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs2))
                    ? 0U : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem
                   [vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rs2]);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_imm 
                = ((0x40U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                    ? ((0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                        ? ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                            ? ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                ? 0U : ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                         ? 0U : ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_C
                                                   : 0U)
                                                  : 0U)))
                            : ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                ? ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                    ? ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                        ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                            ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_J
                                            : 0U) : 0U)
                                    : 0U) : ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I
                                                   : 0U)
                                                  : 0U)
                                              : ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_B
                                                   : 0U)
                                                  : 0U))))
                        : 0U) : ((0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                  ? ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                      ? ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                          ? 0U : ((4U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_U
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                      : ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                          ? 0U : ((4U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_S
                                                     : 0U)
                                                    : 0U))))
                                  : ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                      ? ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                          ? 0U : ((4U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_U
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                          ? 0U : ((4U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I
                                                     : 0U)
                                                    : 0U))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_w 
                = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_we) 
                    & (0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) 
                   & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_funct7 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_fn7;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_in2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_in2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_shamt 
                = (0x1fU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2);
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe 
                = ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we) 
                     & (0U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                       >> 0x1cU)))) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)))
                    ? (0xfU & ((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                                ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sw)
                                : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sh)
                                    : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sb))))
                    : 0U);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_aces 
                = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))
                    ? 2U : (((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)) 
                             & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we))
                             ? 1U : (((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)) 
                                      & (3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))
                                      ? 0U : 3U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_we 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we) 
                   & (0U != (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                     >> 0x1cU))));
            vlTOPp->m_topsim__DOT__w_pagefault = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail)
                                                   ? 
                                                  ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode)
                                                    ? 0xcU
                                                    : 
                                                   ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread)
                                                     ? 0xdU
                                                     : 0xfU))
                                                   : 0xffffffffU);
            vlTOPp->m_topsim__DOT__p__DOT__pc = vlTOPp->__Vdly__m_topsim__DOT__p__DOT__pc;
            vlTOPp->m_topsim__DOT__p__DOT__mtime = vlTOPp->__Vdly__m_topsim__DOT__p__DOT__mtime;
            vlTOPp->m_topsim__DOT__p__DOT__priv = vlTOPp->__Vdly__m_topsim__DOT__p__DOT__priv;
            vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__RXD 
                = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__RXD;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_wdata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_d;
            vlTOPp->m_topsim__DOT__p__DOT__w_alu_a_rslt 
                = ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                    ? ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                        ? ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                            ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : ((vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                  > vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)
                                                  ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                  : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                            : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : ((vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                  < vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)
                                                  ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                  : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata))))
                        : ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                            ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : (VL_GTS_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2)
                                                  ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                  : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                            : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : (VL_LTS_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2)
                                                  ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                  : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))))
                    : ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                        ? ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                            ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                 & vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                            : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                 | vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata))))
                        : ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                            ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? 0U : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                         ? 0U : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                 ^ vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                            : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                    ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                    : 0U) : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                              ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                              : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                 + vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata))))));
            if (((((((((0U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU)))) | 
                       (1U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU))))) 
                      | (2U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                          << 3U)) | 
                                (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                       >> 0xdU))))) 
                     | (3U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU))))) 
                    | (5U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                        << 3U)) | (7U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                      >> 0xdU))))) 
                   | (6U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                       << 3U)) | (7U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     >> 0xdU))))) 
                  | (7U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      << 3U)) | (7U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                    >> 0xdU))))) 
                 | (8U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                     << 3U)) | (7U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU)))))) {
                vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                    = ((0U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU)))) ? 
                       (0x10013U | ((0xfff00000U & 
                                     (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_nzuimm 
                                      << 0x14U)) | 
                                    ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd) 
                                     << 7U))) : ((1U 
                                                  == 
                                                  ((0x18U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         >> 0xdU))))
                                                  ? 
                                                 (0x3007U 
                                                  | ((0xfff00000U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm2 
                                                         << 0x14U)) 
                                                     | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1) 
                                                         << 0xfU) 
                                                        | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd) 
                                                           << 7U))))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   ((0x18U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          >> 0xdU))))
                                                   ? 
                                                  (0x2003U 
                                                   | ((0xfff00000U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                          << 0x14U)) 
                                                      | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1) 
                                                          << 0xfU) 
                                                         | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd) 
                                                            << 7U))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    ((0x18U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                           >> 0xdU))))
                                                    ? 
                                                   (0x2007U 
                                                    | ((0xfff00000U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                           << 0x14U)) 
                                                       | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1) 
                                                           << 0xfU) 
                                                          | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd) 
                                                             << 7U))))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((0x18U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                            >> 0xdU))))
                                                     ? 
                                                    (0x3027U 
                                                     | ((0xfe000000U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                            << 0x14U)) 
                                                        | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs2) 
                                                            << 0x14U) 
                                                           | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1) 
                                                               << 0xfU) 
                                                              | (0xf80U 
                                                                 & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                                    << 7U))))))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      ((0x18U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                           << 3U)) 
                                                       | (7U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                             >> 0xdU))))
                                                      ? 
                                                     (0x2023U 
                                                      | ((0xfe000000U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                             << 0x14U)) 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs2) 
                                                             << 0x14U) 
                                                            | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1) 
                                                                << 0xfU) 
                                                               | (0xf80U 
                                                                  & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                                     << 7U))))))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       ((0x18U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                            << 3U)) 
                                                        | (7U 
                                                           & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                              >> 0xdU))))
                                                       ? 
                                                      (0x2027U 
                                                       | ((0xfe000000U 
                                                           & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                              << 0x14U)) 
                                                          | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs2) 
                                                              << 0x14U) 
                                                             | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1) 
                                                                 << 0xfU) 
                                                                | (0xf80U 
                                                                   & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 
                                                                      << 7U))))))
                                                       : 
                                                      (0x13U 
                                                       | ((0xfff00000U 
                                                           & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                                                              << 0x14U)) 
                                                          | ((0xf8000U 
                                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org)))))))))));
            } else {
                if (((((((((9U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU)))) 
                           | (0xaU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                       | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) 
                          | (0xbU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                << 3U)) 
                                      | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))) 
                         | (0xdU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               << 3U)) 
                                     | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                              >> 0xdU))))) 
                        | (0xeU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                              << 3U)) 
                                    | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xdU))))) 
                       | (0xfU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU))))) 
                      | (0xcU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                  | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                           >> 0xdU))))) 
                     | (0x10U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                  | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                           >> 0xdU)))))) {
                    vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                        = ((9U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU))))
                            ? (0xefU | ((0x80000000U 
                                         & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                            << 0xbU)) 
                                        | ((0x7fe00000U 
                                            & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                               << 0x14U)) 
                                           | ((0x100000U 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                                  << 9U)) 
                                              | (0xff000U 
                                                 & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1)))))
                            : ((0xaU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                         | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 0xdU))))
                                ? (0x13U | ((0xfff00000U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm3 
                                                << 0x14U)) 
                                            | (0xf80U 
                                               & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org)))
                                : ((0xbU == ((0x18U 
                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                             | (7U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))
                                    ? ((2U == (0x1fU 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 7U)))
                                        ? (0x10113U 
                                           | (0xfff00000U 
                                              & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm4 
                                                 << 0x14U)))
                                        : (0x37U | 
                                           ((0xfffff000U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                                                << 0xcU)) 
                                            | (0xf80U 
                                               & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org))))
                                    : ((0xdU == ((0x18U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       >> 0xdU))))
                                        ? (0x6fU | 
                                           ((0x80000000U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                                << 0xbU)) 
                                            | ((0x7fe00000U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                                   << 0x14U)) 
                                               | ((0x100000U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                                      << 9U)) 
                                                  | (0xff000U 
                                                     & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1)))))
                                        : ((0xeU == 
                                            ((0x18U 
                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                             | (7U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))
                                            ? (0x63U 
                                               | ((0x80000000U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                      << 0x13U)) 
                                                  | ((0x7e000000U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                         << 0x14U)) 
                                                     | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs1) 
                                                         << 0xfU) 
                                                        | ((0xf00U 
                                                            & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                               << 7U)) 
                                                           | (0x80U 
                                                              & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                                 >> 4U)))))))
                                            : ((0xfU 
                                                == 
                                                ((0x18U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       >> 0xdU))))
                                                ? (0x1063U 
                                                   | ((0x80000000U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                             << 0x14U)) 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs1) 
                                                             << 0xfU) 
                                                            | ((0xf00U 
                                                                & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                                   << 7U)) 
                                                               | (0x80U 
                                                                  & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 
                                                                     >> 4U)))))))
                                                : (
                                                   (0xcU 
                                                    == 
                                                    ((0x18U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                           >> 0xdU))))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct1))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct1))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct2))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct2))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct2))
                                                         ? 
                                                        (0x7033U 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs2) 
                                                             << 0x14U) 
                                                            | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                << 0xfU) 
                                                               | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                  << 7U))))
                                                         : 
                                                        (0x6033U 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs2) 
                                                             << 0x14U) 
                                                            | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                << 0xfU) 
                                                               | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                  << 7U)))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct2))
                                                         ? 
                                                        (0x4033U 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs2) 
                                                             << 0x14U) 
                                                            | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                << 0xfU) 
                                                               | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                  << 7U))))
                                                         : 
                                                        (0x40000033U 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs2) 
                                                             << 0x14U) 
                                                            | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                << 0xfU) 
                                                               | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                                  << 7U)))))))
                                                      : 
                                                     (0x7013U 
                                                      | ((0xfff00000U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                                                             << 0x14U)) 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                             << 0xfU) 
                                                            | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                               << 7U)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct1))
                                                      ? 
                                                     (0x40005013U 
                                                      | ((0x3ff00000U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                                                             << 0x14U)) 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                             << 0xfU) 
                                                            | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                               << 7U))))
                                                      : 
                                                     (0x5013U 
                                                      | ((0xfff00000U 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                                                             << 0x14U)) 
                                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                             << 0xfU) 
                                                            | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd) 
                                                               << 7U))))))
                                                    : 
                                                   (0x1013U 
                                                    | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_shamt) 
                                                        << 0x14U) 
                                                       | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                           << 0xfU) 
                                                          | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                             << 7U)))))))))));
                } else {
                    if (((((((((0x11U == ((0x18U & 
                                           (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                          | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU)))) 
                               | (0x12U == ((0x18U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                << 3U)) 
                                            | (7U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) 
                              | (0x13U == ((0x18U & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                           | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))) 
                             | (0x15U == ((0x18U & 
                                           (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                          | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))) 
                            | (0x16U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                         | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 0xdU))))) 
                           | (0x17U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  << 3U)) 
                                        | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 0xdU))))) 
                          | (0x14U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                       | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) 
                         | (0x18U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                << 3U)) 
                                      | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU)))))) {
                        vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                            = ((0x11U == ((0x18U & 
                                           (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                          | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))
                                ? (0x13007U | ((0xfff00000U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm1 
                                                   << 0x14U)) 
                                               | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                  << 7U)))
                                : ((0x12U == ((0x18U 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  << 3U)) 
                                              | (7U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                    >> 0xdU))))
                                    ? (0x12003U | (
                                                   (0xfff00000U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 
                                                       << 0x14U)) 
                                                   | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                      << 7U)))
                                    : ((0x13U == ((0x18U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                        >> 0xdU))))
                                        ? (0x12007U 
                                           | ((0xfff00000U 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 
                                                  << 0x14U)) 
                                              | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                 << 7U)))
                                        : ((0x15U == 
                                            ((0x18U 
                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                             | (7U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))
                                            ? (0x13027U 
                                               | ((0xfe000000U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm3 
                                                      << 0x14U)) 
                                                  | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                      << 0x14U) 
                                                     | (0xf80U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm3 
                                                           << 7U)))))
                                            : ((0x16U 
                                                == 
                                                ((0x18U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       >> 0xdU))))
                                                ? (0x12023U 
                                                   | ((0xfe000000U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                          << 0x14U)) 
                                                      | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                          << 0x14U) 
                                                         | (0xf80U 
                                                            & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                               << 7U)))))
                                                : (
                                                   (0x17U 
                                                    == 
                                                    ((0x18U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                           >> 0xdU))))
                                                    ? 
                                                   (0x12027U 
                                                    | ((0xfe000000U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                           << 0x14U)) 
                                                       | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                           << 0x14U) 
                                                          | (0xf80U 
                                                             & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                                << 7U)))))
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     ((0x18U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                            >> 0xdU))))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd))
                                                       ? 0x100073U
                                                       : 
                                                      ((0x1000U 
                                                        & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org)
                                                        ? 
                                                       (0xe7U 
                                                        | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                           << 0xfU))
                                                        : 
                                                       (0x67U 
                                                        | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                           << 0xfU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org)
                                                       ? 
                                                      (0x33U 
                                                       | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                           << 0x14U) 
                                                          | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                              << 0xfU) 
                                                             | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                                << 7U))))
                                                       : 
                                                      (0x33U 
                                                       | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                           << 0x14U) 
                                                          | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                             << 7U)))))
                                                     : vlTOPp->m_topsim__DOT__p__DOT__w_ir_org)))))));
                    } else {
                        if ((0x19U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                       | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) {
                            vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                        } else {
                            if ((0x1aU == ((0x18U & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                           | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))) {
                                vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                    = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                            } else {
                                if ((0x1bU == ((0x18U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     >> 0xdU))))) {
                                    vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                        = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                } else {
                                    if ((0x1cU == (
                                                   (0x18U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         >> 0xdU))))) {
                                        vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                            = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                    } else {
                                        if ((0x1dU 
                                             == ((0x18U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       >> 0xdU))))) {
                                            vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                                = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                        } else {
                                            if ((0x1eU 
                                                 == 
                                                 ((0x18U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                        >> 0xdU))))) {
                                                vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                                    = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                            } else {
                                                if (
                                                    (0x1fU 
                                                     == 
                                                     ((0x18U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                            >> 0xdU))))) {
                                                    vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                                        = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rdata1 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rdata2 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs2;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__r_imm 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_imm;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_w;
            if ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_b_rslt 
                    = ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                        ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                            ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               >= vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)
                            : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               < vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2))
                        : ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                            ? VL_GTES_III(1,32,32, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin1, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin2)
                            : VL_LTS_III(1,32,32, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin1, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin2)));
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt 
                    = ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                        ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                            ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)
                            : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               | vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2))
                        : ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                            ? ((0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_fn7))
                                ? VL_SHIFTRS_III(32,32,5, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin1, (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_shamt))
                                : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                                   >> (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_shamt)))
                            : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               ^ vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)));
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_b_rslt 
                    = ((~ ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3) 
                           >> 1U)) & ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                                       ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                                          != vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)
                                       : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                                          == vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)));
                vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt 
                    = ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                        ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                            ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               < vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)
                            : VL_LTS_III(32,32,32, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin1, vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin2))
                        : ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3))
                            ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                               << (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_shamt))
                            : ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_fn7))
                                ? (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                                   - vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2)
                                : (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 
                                   + vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_in2))));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_req 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_aces;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_mmuwe 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_we)
                    : (IData)(vlTOPp->m_topsim__DOT__w_data_we));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_pagefault 
                = vlTOPp->m_topsim__DOT__w_pagefault;
            vlTOPp->m_topsim__DOT__p__DOT__w_pagefault 
                = vlTOPp->m_topsim__DOT__w_pagefault;
            vlTOPp->m_topsim__DOT__p__DOT__w_vadr1 
                = (0xfffffffcU & vlTOPp->m_topsim__DOT__p__DOT__pc);
            vlTOPp->m_topsim__DOT__p__DOT__w_vadr2 
                = ((IData)(2U) + vlTOPp->m_topsim__DOT__p__DOT__pc);
            vlTOPp->m_topsim__DOT__p__DOT__w_core_pc 
                = vlTOPp->m_topsim__DOT__p__DOT__pc;
            vlTOPp->m_topsim__DOT__p__DOT__w_nalign4 
                = (7U == (7U & (vlTOPp->m_topsim__DOT__p__DOT__pc 
                                >> 1U)));
            if ((2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_cinsn 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_cinsn;
            }
            if ((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__irq_num 
                    = (((((((((1U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t) 
                              | (2U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                             | (4U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                            | (8U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                           | (0x10U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                          | (0x20U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                         | (0x40U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                        | (0x80U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t))
                        ? ((1U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                            ? 0U : ((2U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                     ? 1U : ((4U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                              ? 2U : 
                                             ((8U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                               ? 3U
                                               : ((0x10U 
                                                   == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                   ? 4U
                                                   : 
                                                  ((0x20U 
                                                    == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                     ? 6U
                                                     : 7U)))))))
                        : (((((((((0x100U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t) 
                                  | (0x200U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                 | (0x400U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                | (0x800U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                               | (0x1000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                              | (0x2000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                             | (0x4000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                            | (0x8000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t))
                            ? ((0x100U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                ? 8U : ((0x200U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                         ? 9U : ((0x400U 
                                                  == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                  ? 0xaU
                                                  : 
                                                 ((0x800U 
                                                   == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                   ? 0xbU
                                                   : 
                                                  ((0x1000U 
                                                    == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                    ? 0xcU
                                                    : 
                                                   ((0x2000U 
                                                     == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                     ? 0xdU
                                                     : 
                                                    ((0x4000U 
                                                      == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                      ? 0xeU
                                                      : 0xfU)))))))
                            : (((((((((0x10000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t) 
                                      | (0x20000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                     | (0x40000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                    | (0x80000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                   | (0x100000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                  | (0x200000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                 | (0x400000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                | (0x800000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t))
                                ? ((0x10000U == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                    ? 0x10U : ((0x20000U 
                                                == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                ? 0x11U
                                                : (
                                                   (0x40000U 
                                                    == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                    ? 0x12U
                                                    : 
                                                   ((0x80000U 
                                                     == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                     ? 0x13U
                                                     : 
                                                    ((0x100000U 
                                                      == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                      ? 0x14U
                                                      : 
                                                     ((0x200000U 
                                                       == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                       ? 0x15U
                                                       : 
                                                      ((0x400000U 
                                                        == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                        ? 0x16U
                                                        : 0x17U)))))))
                                : (((((((((0x1000000U 
                                           == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t) 
                                          | (0x2000000U 
                                             == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                         | (0x4000000U 
                                            == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                        | (0x8000000U 
                                           == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                       | (0x10000000U 
                                          == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                      | (0x20000000U 
                                         == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                     | (0x40000000U 
                                        == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)) 
                                    | (0x80000000U 
                                       == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t))
                                    ? ((0x1000000U 
                                        == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                        ? 0x18U : (
                                                   (0x2000000U 
                                                    == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                    ? 0x19U
                                                    : 
                                                   ((0x4000000U 
                                                     == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                     ? 0x1aU
                                                     : 
                                                    ((0x8000000U 
                                                      == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                      ? 0x1bU
                                                      : 
                                                     ((0x10000000U 
                                                       == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                       ? 0x1cU
                                                       : 
                                                      ((0x20000000U 
                                                        == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                        ? 0x1dU
                                                        : 
                                                       ((0x40000000U 
                                                         == vlTOPp->m_topsim__DOT__p__DOT__w_irq_t)
                                                         ? 0x1eU
                                                         : 0x1fU)))))))
                                    : 0x20U))));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_imm 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_imm;
            }
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                    = vlTOPp->m_topsim__DOT__p__DOT__r_rcsr_t;
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_rrs1;
            }
            vlTOPp->m_topsim__DOT__p__DOT__w_sstatus 
                = ((0xfff21eccU & vlTOPp->m_topsim__DOT__p__DOT__mstatus) 
                   | (0xde133U & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
            vlTOPp->m_topsim__DOT__w_mtime = vlTOPp->m_topsim__DOT__p__DOT__mtime;
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_funct7 
                    = (0x7fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                >> 0x19U));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_opcode 
                    = (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir);
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_funct12 
                    = (0xfffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                 >> 0x14U));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_funct3 
                    = (7U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                             >> 0xcU));
            }
            if ((((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                  & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_LR))) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                vlTOPp->m_topsim__DOT__p__DOT__reserved = 1U;
            }
            if ((((((9U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO)) 
                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC)) 
                  & (~ vlTOPp->m_topsim__DOT__p__DOT__r_wb_data)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                vlTOPp->m_topsim__DOT__p__DOT__reserved = 0U;
            }
            vlTOPp->m_topsim__DOT__w_priv = vlTOPp->m_topsim__DOT__p__DOT__priv;
            if ((((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                  & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_LR))) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                vlTOPp->m_topsim__DOT__p__DOT__load_res 
                    = vlTOPp->m_topsim__DOT__p__DOT__r_mem_addr;
            }
            vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__p__DOT__w_alu_a_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__r_iw 
                = vlTOPp->m_topsim__DOT__p__DOT__w_ir_t;
            vlTOPp->m_topsim__DOT__p__DOT__w_nop = 
                (((0x53U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__w_ir_t)) 
                  | (7U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__w_ir_t))) 
                 | (0x27U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__w_ir_t)));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_b_rslt;
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__w_usestate 
                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nalign4) 
                   & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v)));
            vlTOPp->m_topsim__DOT__p__DOT__w_cinsn 
                = (3U != (3U & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mtime 
                = vlTOPp->m_topsim__DOT__w_mtime;
            vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_mtime 
                = (IData)((vlTOPp->m_topsim__DOT__w_mtime 
                           >> 0U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_mtime 
                = (IData)((vlTOPp->m_topsim__DOT__w_mtime 
                           >> 0U));
            vlTOPp->m_topsim__DOT__p__DOT__w_mtime 
                = vlTOPp->m_topsim__DOT__w_mtime;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req 
                = (((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_en) 
                      & (0x4d3f640ULL < vlTOPp->m_topsim__DOT__w_mtime)) 
                     & (0ULL == (0x3ffffULL & vlTOPp->m_topsim__DOT__w_mtime))) 
                    & (0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) 
                   & (IData)(vlTOPp->m_topsim__DOT__w_init_stage));
            vlTOPp->m_topsim__DOT__p__DOT__r_wb_data 
                = vlTOPp->__Vdly__m_topsim__DOT__p__DOT__r_wb_data;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_priv 
                = vlTOPp->m_topsim__DOT__w_priv;
            vlTOPp->m_topsim__DOT__p__DOT__w_priv = vlTOPp->m_topsim__DOT__w_priv;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_ctrl 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)
                    : ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                              | (~ (vlTOPp->m_topsim__DOT__w_satp 
                                    >> 0x1fU)))) ? (IData)(vlTOPp->m_topsim__DOT__w_data_ctrl)
                        : ((0U != (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use)))
                            ? (IData)(vlTOPp->m_topsim__DOT__w_data_ctrl)
                            : ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                ? 2U : ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                         ? 2U : ((5U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                                  ? 2U
                                                  : (IData)(vlTOPp->m_topsim__DOT__w_data_ctrl)))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_success 
                = (1U & (~ (((((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr)) 
                               | (6U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr))) 
                              | ((1U == vlTOPp->m_topsim__DOT__w_priv) 
                                 & ((vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                     >> 4U) & (~ (vlTOPp->m_topsim__DOT__w_mstatus 
                                                  >> 0x12U))))) 
                             | ((0U == vlTOPp->m_topsim__DOT__w_priv) 
                                & (~ (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                      >> 4U)))) | (~ 
                                                   ((2U 
                                                     >= (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)) 
                                                    & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr) 
                                                       >> (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_paddr 
                = ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                          | (~ (vlTOPp->m_topsim__DOT__w_satp 
                                >> 0x1fU)))) ? vlTOPp->m_topsim__DOT__w_insn_addr
                    : vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_addr);
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_success 
                = (1U & (~ (((((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
                               | (6U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr))) 
                              | ((1U == vlTOPp->m_topsim__DOT__w_priv) 
                                 & ((vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                     >> 4U) & (~ (vlTOPp->m_topsim__DOT__w_mstatus 
                                                  >> 0x12U))))) 
                             | ((0U == vlTOPp->m_topsim__DOT__w_priv) 
                                & (~ (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                      >> 4U)))) | (~ 
                                                   ((2U 
                                                     >= (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)) 
                                                    & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr) 
                                                       >> (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_use_tlb 
                = (((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                    & (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                        | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread)) 
                       | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))) 
                   & (~ ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                         | (~ (vlTOPp->m_topsim__DOT__w_satp 
                               >> 0x1fU)))));
            vlTOPp->m_topsim__DOT__p__DOT__cause = 
                ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)
                  ? vlTOPp->m_topsim__DOT__p__DOT__pending_exception
                  : (0x80000000U | vlTOPp->m_topsim__DOT__p__DOT__irq_num));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_imm 
                = vlTOPp->m_topsim__DOT__p__DOT__r_imm;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_rcsr 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rcsr;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_in1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_rrs1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__p__DOT__w_mul_UU 
                = ((QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs1)) 
                   * (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs2)));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__p__DOT__w_sin1 = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin1 
                = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_keyreq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qnum 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueNum
                    : vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata);
            vlTOPp->m_topsim__DOT__p__DOT__w_data_t 
                = ((0x300U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                    ? vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr
                    : vlTOPp->m_topsim__DOT__p__DOT__w_sstatus);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_funct3 
                = vlTOPp->m_topsim__DOT__p__DOT__r_funct3;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_funct3 
                = vlTOPp->m_topsim__DOT__p__DOT__r_funct3;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_funct3 
                = vlTOPp->m_topsim__DOT__p__DOT__r_funct3;
            vlTOPp->m_topsim__DOT__p__DOT__w_alu_c_rslt 
                = ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                    ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                        ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                               & (~ vlTOPp->m_topsim__DOT__p__DOT__r_imm))
                            : (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                               | vlTOPp->m_topsim__DOT__p__DOT__r_imm))
                        : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? vlTOPp->m_topsim__DOT__p__DOT__r_imm
                            : 0U)) : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                       ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                           ? (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                                              & (~ vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                                           : (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                                              | vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                                       : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                           ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                           : 0U)));
            vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr 
                = (0xfffU & ((0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                              ? (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)
                              : ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                  ? 0x305U : ((2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                               ? 0x41U
                                               : ((0x102U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                                   ? 0x141U
                                                   : 
                                                  ((0x302U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                                    ? 0x341U
                                                    : 0U))))));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed 
                = ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)) 
                   | (6U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req 
                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7) 
                   & ((((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)) 
                        | (5U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))) 
                       | (6U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))) 
                      | (7U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))));
            vlTOPp->m_topsim__DOT__p__DOT__w_csr_we 
                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                   & (0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)));
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC 
                    = (3U == (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                       >> 0x1bU)));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_wdata 
                = (((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_success))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_write
                    : vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_write);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_we 
                = ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                   & ((((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
                        & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_success)) 
                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_write)) 
                      | (((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr)) 
                          & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_success)) 
                         & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_write))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_use_tlb)
                    ? ((7U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                        ? 0U : 1U) : 0U);
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_LR 
                    = (2U == (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                       >> 0x1bU)));
            }
            if ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO 
                    = (0x2fU == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir));
            }
            if ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_mem_addr 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_mem_addr;
            }
            vlTOPp->m_topsim__DOT__p__DOT__w_deleg 
                = ((1U >= (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                    ? (1U & ((0U != (0x80000000U & vlTOPp->m_topsim__DOT__p__DOT__cause))
                              ? ((0x1fU >= (0x1fU & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                  ? (1U & (vlTOPp->m_topsim__DOT__p__DOT__mideleg 
                                           >> (0x1fU 
                                               & vlTOPp->m_topsim__DOT__p__DOT__cause)))
                                  : 0U) : ((0x1fU >= 
                                            (0x1fU 
                                             & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                            ? (vlTOPp->m_topsim__DOT__p__DOT__medeleg 
                                               >> (0x1fU 
                                                   & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                            : 0U)))
                    : 0U);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_dividend 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in1;
            vlTOPp->m_topsim__DOT__p__DOT__w_mul_SS 
                = ((((QData)((IData)((- (IData)((1U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__w_sin1 
                                                    >> 0x1fU)))))) 
                     << 0x20U) | (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_sin1))) 
                   * (((QData)((IData)((- (IData)((1U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__w_sin2 
                                                      >> 0x1fU)))))) 
                       << 0x20U) | (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_sin2))));
            vlTOPp->m_topsim__DOT__p__DOT__w_mul_SU 
                = ((((QData)((IData)((- (IData)((1U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__w_sin1 
                                                    >> 0x1fU)))))) 
                     << 0x20U) | (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_sin1))) 
                   * (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs2)));
            vlTOPp->m_topsim__DOT__p__DOT__w_alu_b_rslt 
                = ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                    ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                        ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                               >= vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                            : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                               < vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))
                        : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? VL_GTES_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin2)
                            : VL_LTS_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin2)))
                    : ((~ ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3) 
                           >> 1U)) & ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                       ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                          != vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                       : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                          == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))));
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_qnum 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qnum;
            vlTOPp->m_topsim__DOT__p__DOT__w_mod = 
                (vlTOPp->m_topsim__DOT__p__DOT__w_data_t 
                 ^ vlTOPp->m_topsim__DOT__p__DOT__mstatus);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__p__DOT__w_alu_c_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__r_rcsr_t 
                = ((0x800U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                    ? ((0x400U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                        ? ((0x200U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                            ? ((0x100U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                ? ((0x80U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                    ? 0U : ((0x40U 
                                             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                               ? ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : vlTOPp->m_topsim__DOT__p__DOT__mhartid))
                                                    : 0U))
                                               : 0U))))
                                : 0U) : ((0x100U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                          ? 0U : ((0x80U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 0U
                                                          : (IData)(
                                                                    (vlTOPp->m_topsim__DOT__p__DOT__mtime 
                                                                     >> 0x20U)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? (IData)(
                                                                    (vlTOPp->m_topsim__DOT__p__DOT__mtime 
                                                                     >> 0x20U))
                                                          : (IData)(
                                                                    (vlTOPp->m_topsim__DOT__p__DOT__mtime 
                                                                     >> 0x20U)))))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 0U
                                                          : (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime)
                                                          : (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime)))))))))))
                        : ((0x200U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                            ? ((0x100U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                ? ((0x80U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                    ? ((0x40U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                        ? 0U : ((0x20U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : (IData)(
                                                                (vlTOPp->m_topsim__DOT__p__DOT__mtime 
                                                                 >> 0x20U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : (IData)(
                                                                (vlTOPp->m_topsim__DOT__p__DOT__mtime 
                                                                 >> 0x20U)))))))))
                                    : ((0x40U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                        ? 0U : ((0x20U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime)))))))))
                                : 0U) : 0U)) : ((0x400U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                 ? 0U
                                                 : 
                                                ((0x200U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                  ? 
                                                 ((0x100U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 
                                                    ((0x20U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 0U
                                                           : vlTOPp->m_topsim__DOT__p__DOT__mip))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__mtval
                                                           : vlTOPp->m_topsim__DOT__p__DOT__mcause)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__mepc
                                                           : vlTOPp->m_topsim__DOT__p__DOT__mscratch))))))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 0U
                                                           : vlTOPp->m_topsim__DOT__p__DOT__mcounteren)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__mtvec
                                                           : vlTOPp->m_topsim__DOT__p__DOT__mie))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__mideleg
                                                           : vlTOPp->m_topsim__DOT__p__DOT__medeleg)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 
                                                          (0x40000000U 
                                                           | vlTOPp->m_topsim__DOT__p__DOT__misa)
                                                           : 
                                                          (((3U 
                                                             == 
                                                             (0x7ffffU 
                                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t 
                                                                 >> 0xdU))) 
                                                            | (3U 
                                                               == 
                                                               (0x1ffffU 
                                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t 
                                                                   >> 0xfU))))
                                                            ? 
                                                           (0x80000000U 
                                                            | vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t)
                                                            : vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t)))))))))
                                                   : 0U)
                                                  : 
                                                 ((0x100U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 
                                                   ((0x40U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 0U
                                                           : vlTOPp->m_topsim__DOT__p__DOT__satp)))))))
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 
                                                    ((0x20U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 0U
                                                           : 
                                                          (vlTOPp->m_topsim__DOT__p__DOT__mip 
                                                           & vlTOPp->m_topsim__DOT__p__DOT__mideleg)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__stval
                                                           : vlTOPp->m_topsim__DOT__p__DOT__scause)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__sepc
                                                           : vlTOPp->m_topsim__DOT__p__DOT__sscratch))))))
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 0U
                                                           : vlTOPp->m_topsim__DOT__p__DOT__scounteren)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? vlTOPp->m_topsim__DOT__p__DOT__stvec
                                                           : 
                                                          (vlTOPp->m_topsim__DOT__p__DOT__mie 
                                                           & vlTOPp->m_topsim__DOT__p__DOT__mideleg)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                           ? 0U
                                                           : 
                                                          (((3U 
                                                             == 
                                                             (0x7ffffU 
                                                              & (vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t 
                                                                 >> 0xdU))) 
                                                            | (3U 
                                                               == 
                                                               (0x1ffffU 
                                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t 
                                                                   >> 0xfU))))
                                                            ? 
                                                           (0x80000000U 
                                                            | vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t)
                                                            : vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t)))))))))
                                                   : 0U))));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_signed 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_dividend 
                = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed) 
                    & (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                       >> 0x1fU)) ? ((IData)(1U) + 
                                     (~ vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                    : vlTOPp->m_topsim__DOT__p__DOT__r_rrs1);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_divisor 
                = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed) 
                    & (vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2 
                       >> 0x1fU)) ? ((IData)(1U) + 
                                     (~ vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))
                    : vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt 
                = (((QData)((IData)(((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed)
                                      ? ((0U == (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                          ? (IData)(
                                                    (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                     >> 0x20U))
                                          : ((1U == 
                                              (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                << 1U) 
                                               | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                              ? (IData)(
                                                        (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                         >> 0x20U))
                                              : ((2U 
                                                  == 
                                                  (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(
                                                             (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                              >> 0x20U))))
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(
                                                             (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                              >> 0x20U)))))))
                                      : (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                 >> 0x20U))))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                     << 1U) 
                                                    | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                                   ? (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt)))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                       << 1U) 
                                                      | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt)))
                                                     : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt))))
                                                  : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt)))));
            vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt 
                = ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)
                    ? vlTOPp->m_topsim__DOT__p__DOT__r_mstatus_t
                    : (((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) 
                        & (0x300U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))
                        ? ((0xfff1e644U & vlTOPp->m_topsim__DOT__p__DOT__mstatus) 
                           | (0xe19bbU & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr))
                        : (((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_we) 
                            & (0x100U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)))
                            ? ((0xfff1e644U & vlTOPp->m_topsim__DOT__p__DOT__mstatus) 
                               | (0xe19bbU & vlTOPp->m_topsim__DOT__p__DOT__w_sstatus))
                            : vlTOPp->m_topsim__DOT__p__DOT__r_mstatus_t)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata 
                = ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_wdata
                    : vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata);
            vlTOPp->m_topsim__DOT__w_busy = (1U & (
                                                   (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy) 
                                                     | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_busy)) 
                                                    | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)) 
                                                   | (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_ctrl)
                    : (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                        & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))
                        ? 2U : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_ctrl)));
            vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__p__DOT__w_alu_b_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_dividend 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_dividend;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_divisor 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_divisor;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_rslt 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                = ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                    ? (0xffffffffULL | ((QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs1)) 
                                        << 0x20U)) : 
                   (((0xffffffffU == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2) 
                     & ((4U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)) 
                        | (6U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))))
                     ? (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                     : vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt));
            vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t1 
                = ((0xffffffdfU & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt) 
                   | (0x20U & ((vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt 
                                >> (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t)) 
                               << 5U)));
            vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t1 
                = ((0xffffff7fU & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt) 
                   | (0x80U & ((vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt 
                                >> (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t)) 
                               << 7U)));
            vlTOPp->m_topsim__DOT__p__DOT__enable_interrupts 
                = ((0U != vlTOPp->m_topsim__DOT__p__DOT__pending_interrupts)
                    ? ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                        ? ((0U != (8U & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt))
                            ? (~ vlTOPp->m_topsim__DOT__p__DOT__mideleg)
                            : 0U) : ((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                                      ? ((0U != (2U 
                                                 & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt))
                                          ? ((~ vlTOPp->m_topsim__DOT__p__DOT__mideleg) 
                                             | vlTOPp->m_topsim__DOT__p__DOT__mideleg)
                                          : (~ vlTOPp->m_topsim__DOT__p__DOT__mideleg))
                                      : ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                                          ? 0xffffffffU
                                          : 0U))) : 0U);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                = ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                    ? 0U : ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                             ? vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata
                             : vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_proc_busy 
                = vlTOPp->m_topsim__DOT__w_busy;
            vlTOPp->m_topsim__DOT__p__DOT__w_busy = vlTOPp->m_topsim__DOT__w_busy;
            vlTOPp->m_topsim__DOT__w_led = (0xffffU 
                                            & (((((IData)(vlTOPp->m_topsim__DOT__w_busy) 
                                                  << 0xcU) 
                                                 | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode) 
                                                    << 8U)) 
                                                | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_disk_done) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_bbl_done) 
                                                          << 5U) 
                                                         | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_done) 
                                                            << 4U))))) 
                                               | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t 
                = ((IData)(vlTOPp->m_topsim__DOT__w_init_done)
                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl)
                    : 2U);
            vlTOPp->m_topsim__DOT__p__DOT__w_mem_addr 
                = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD) 
                    | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE))
                    ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                       + vlTOPp->m_topsim__DOT__p__DOT__r_imm)
                    : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO)
                        ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                        : 0U));
            if (vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD) {
                vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_data 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata;
                vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_enable = 1U;
            } else {
                vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_data 
                    = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                        & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC)))
                        ? vlTOPp->m_topsim__DOT__p__DOT__r_mem_rdata
                        : (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                            & (0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))
                            ? vlTOPp->m_topsim__DOT__p__DOT__r_rcsr
                            : vlTOPp->m_topsim__DOT__p__DOT__r_wb_data));
                vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_enable 
                    = ((0x37U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                        ? 1U : ((0x17U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                 ? 1U : ((0x6fU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                          ? 1U : ((0x67U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                                   ? 1U
                                                   : 
                                                  ((0x33U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                                    ? 1U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO)
                                                      ? 1U
                                                      : 
                                                     (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                                                       & (0U 
                                                          != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))
                                                       ? 1U
                                                       : 0U))))))));
            }
            if ((2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) {
                vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                    = vlTOPp->m_topsim__DOT__p__DOT__w_ir;
            }
            vlTOPp->m_topsim__DOT__w_data_addr = vlTOPp->m_topsim__DOT__p__DOT__r_mem_addr;
            vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt 
                = ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7))
                    ? ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                        ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                    ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                    : (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                               >> 0x20U)))
                                : ((0xffffffffU == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                    ? 0U : ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                             ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                             : (IData)(
                                                       (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                                        >> 0x20U)))))
                            : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                    ? 0xffffffffU : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt))
                                : ((0xffffffffU == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                    ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                    : ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                        ? 0xffffffffU
                                        : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt)))))
                        : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? (IData)((vlTOPp->m_topsim__DOT__p__DOT__r_mul_UU 
                                           >> 0x20U))
                                : (IData)((vlTOPp->m_topsim__DOT__p__DOT__r_mul_SU 
                                           >> 0x20U)))
                            : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? (IData)((vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS 
                                           >> 0x20U))
                                : (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS))))
                    : ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                        ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                   & vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                   | vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))
                            : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? ((0x20U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7))
                                    ? VL_SHIFTRS_III(32,32,5, vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin1, (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_shamt))
                                    : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                       >> (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_shamt)))
                                : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                   ^ vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)))
                        : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                            ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                   < vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                : VL_LTS_III(32,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin2))
                            : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                   << (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_shamt))
                                : ((0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7))
                                    ? (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                       - vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                    : (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                       + vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))))));
            vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t2 
                = ((0xfffffeffU & vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t1) 
                   | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t) 
                      << 8U));
            vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t2 
                = ((0xffffe7ffU & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t1) 
                   | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t) 
                      << 0xbU));
            vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask 
                = (vlTOPp->m_topsim__DOT__p__DOT__pending_interrupts 
                   & vlTOPp->m_topsim__DOT__p__DOT__enable_interrupts);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_wdata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_led 
                = vlTOPp->m_topsim__DOT__w_led;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_ctrl 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t;
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_wdata 
                = vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_data;
            vlTOPp->m_topsim__DOT__p__DOT__w_ir = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nop)
                                                    ? 0x13U
                                                    : 
                                                   ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_cinsn)
                                                     ? vlTOPp->m_topsim__DOT__p__DOT__w_ir_t
                                                     : vlTOPp->m_topsim__DOT__p__DOT__w_ir_org));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_data_addr 
                = vlTOPp->m_topsim__DOT__w_data_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_waddr 
                = (0xfffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_raddr 
                = (0xfffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_wtag 
                = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xeU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_widx 
                = (3U & (vlTOPp->m_topsim__DOT__w_data_addr 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_waddr 
                = (0xfffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_raddr 
                = (0xfffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_wtag 
                = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xeU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_widx 
                = (3U & (vlTOPp->m_topsim__DOT__w_data_addr 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__p__DOT__w_data_addr 
                = vlTOPp->m_topsim__DOT__w_data_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_rtag 
                = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xeU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_rtag 
                = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_data_addr 
                               >> 0xeU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx 
                = (3U & (vlTOPp->m_topsim__DOT__w_data_addr 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx 
                = (3U & (vlTOPp->m_topsim__DOT__w_data_addr 
                         >> 0xcU));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr
                    : ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                              | (~ (vlTOPp->m_topsim__DOT__w_satp 
                                    >> 0x1fU)))) ? vlTOPp->m_topsim__DOT__w_data_addr
                        : vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_addr));
            vlTOPp->m_topsim__DOT__mmu__DOT__v_addr 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode)
                    ? vlTOPp->m_topsim__DOT__w_insn_addr
                    : vlTOPp->m_topsim__DOT__w_data_addr);
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_rslt 
                = vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt;
            vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t3 
                = (0xfffffffdU & vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t2);
            vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t3 
                = (0xfffffff7U & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t2);
            vlTOPp->m_topsim__DOT__p__DOT__w_irq_t 
                = (vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask 
                   & ((IData)(1U) + (~ vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_wdata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_wdata;
            vlTOPp->m_topsim__DOT__p__DOT__w_op_priv 
                = ((0x73U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir)) 
                   & (0U == (7U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                   >> 0xcU))));
            vlTOPp->m_topsim__DOT__p__DOT__w_op_csr 
                = ((0x73U == (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir)) 
                   & (0U != (7U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                   >> 0xcU))));
            vlTOPp->m_topsim__DOT__p__DOT__w_core_ir 
                = vlTOPp->m_topsim__DOT__p__DOT__r_ir;
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__w_inst 
                = vlTOPp->m_topsim__DOT__p__DOT__r_ir;
            vlTOPp->m_topsim__DOT__p__DOT__w_rs1 = 
                (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                          >> 0xfU));
            vlTOPp->m_topsim__DOT__p__DOT__w_rs2 = 
                (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                          >> 0x14U));
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode 
                = (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir);
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I 
                = ((0xfffff800U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                >> 0x1fU)))) 
                                   << 0xbU)) | (0x7ffU 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                   >> 0x14U)));
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_S 
                = ((0xfffff800U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                >> 0x1fU)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                      >> 7U))));
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_B 
                = ((0xfffff000U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                >> 0x1fU)))) 
                                   << 0xcU)) | ((0x800U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                         >> 7U)))));
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_U 
                = (0xfffff000U & vlTOPp->m_topsim__DOT__p__DOT__r_ir);
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_J 
                = ((0xfff00000U & ((- (IData)((1U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                >> 0x1fU)))) 
                                   << 0x14U)) | ((0xff000U 
                                                  & vlTOPp->m_topsim__DOT__p__DOT__r_ir) 
                                                 | ((0x800U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                        >> 9U)) 
                                                    | ((0x7e0U 
                                                        & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                             >> 0x14U))))));
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_C 
                = (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                            >> 0xfU));
            vlTOPp->m_topsim__DOT__p__DOT__state = vlTOPp->m_topsim__DOT__p__DOT__w_state;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_addr 
                = (0x3fffffU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem
                                       [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx]));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_tagmatch 
                = ((0x3ffffU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem
                                        [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx] 
                                        >> 0x16U))) 
                   == vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_rtag);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_addr 
                = (0x3fffffU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem
                                       [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx]));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_tagmatch 
                = ((0x3ffffU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem
                                        [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx] 
                                        >> 0x16U))) 
                   == vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_rtag);
            vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_arg 
                = ((0x40009U == (0xfffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                             >> 0xcU)))
                    ? ((4U == (0xfU & vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qnum
                        : ((8U == (0xfU & vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr))
                            ? vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qsel
                            : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))
                    : ((0x4000aU == (0xfffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                 >> 0xcU)))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data
                        : ((0x4000bU == (0xfffffU & 
                                         (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                          >> 0xcU)))
                            ? vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data
                            : ((0x4000cU == (0xfffffU 
                                             & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                >> 0xcU)))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo
                               [vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_head]
                                : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_imag_we 
                = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                    & (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) 
                   & (9U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                     >> 0x1cU))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_virt 
                = (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                           >> 0x18U));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dev 
                = (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                           >> 0x1cU));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_offset 
                = (0x7ffffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr);
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_p_addr 
                = ((0xffc00000U & vlTOPp->m_topsim__DOT__mmu__DOT__L1_paddr) 
                   | (0x3fffffU & vlTOPp->m_topsim__DOT__mmu__DOT__v_addr));
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_p_addr 
                = ((0xfffff000U & vlTOPp->m_topsim__DOT__mmu__DOT__L0_paddr) 
                   | (0xfffU & vlTOPp->m_topsim__DOT__mmu__DOT__v_addr));
            vlTOPp->m_topsim__DOT__mmu__DOT__vpn1 = 
                (0x3ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__v_addr 
                           >> 0x16U));
            vlTOPp->m_topsim__DOT__mmu__DOT__vpn0 = 
                (0x3ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__v_addr 
                           >> 0xcU));
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rs1 
                = vlTOPp->m_topsim__DOT__p__DOT__w_rs1;
            vlTOPp->m_topsim__DOT__p__DOT__w_rrs1 = 
                ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_rs1))
                  ? 0U : vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem
                 [vlTOPp->m_topsim__DOT__p__DOT__w_rs1]);
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rs2 
                = vlTOPp->m_topsim__DOT__p__DOT__w_rs2;
            vlTOPp->m_topsim__DOT__p__DOT__w_rrs2 = 
                ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_rs2))
                  ? 0U : vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem
                 [vlTOPp->m_topsim__DOT__p__DOT__w_rs2]);
            vlTOPp->m_topsim__DOT__p__DOT__w_imm = 
                ((0x40U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                  ? ((0x20U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                      ? ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                          ? ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                              ? 0U : ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                       ? 0U : ((2U 
                                                & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                    ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_C
                                                    : 0U)
                                                : 0U)))
                          : ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                              ? ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                  ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                      ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                          ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_J
                                          : 0U) : 0U)
                                  : 0U) : ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                            ? ((2U 
                                                & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                    ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                    ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_B
                                                    : 0U)
                                                : 0U))))
                      : 0U) : ((0x20U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                ? ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                    ? ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                        ? 0U : ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_U
                                                   : 0U)
                                                  : 0U)
                                                 : 0U))
                                    : ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                        ? 0U : ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_S
                                                   : 0U)
                                                  : 0U))))
                                : ((0x10U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                    ? ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                        ? 0U : ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_U
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I
                                                   : 0U)
                                                  : 0U)))
                                    : ((8U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                        ? 0U : ((4U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I
                                                   : 0U)
                                                  : 0U))))));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_odata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_oe 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_tagmatch) 
                   & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__r_valid) 
                      >> (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx)));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_odata 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_oe 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_tagmatch) 
                   & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__r_valid) 
                      >> (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_arg 
                = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_arg;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_isdisk 
                = (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt));
            if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we 
                    = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                       & (0x4000bU == (0xfffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                   >> 0xcU))));
                vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we 
                    = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                       & (0x4000aU == (0xfffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                   >> 0xcU))));
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we 
                    = ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                         & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy))) 
                        & (4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev))) 
                       & (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt)));
                vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we 
                    = ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                         & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy))) 
                        & (4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev))) 
                       & (0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt)));
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we 
                = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy))) 
                   & ((8U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev)) 
                      | (0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev))));
            vlTOPp->m_topsim__DOT__w_wmtimecmp = ((
                                                   ((6U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev)) 
                                                    & (0x4000U 
                                                       == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)) 
                                                   & (IData)(vlTOPp->m_topsim__DOT__w_data_we))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (vlTOPp->m_topsim__DOT__w_mtimecmp 
                                                                     >> 0x20U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->m_topsim__DOT__w_data_wdata)))
                                                   : 
                                                  ((((6U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev)) 
                                                     & (0x4004U 
                                                        == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)) 
                                                    & (IData)(vlTOPp->m_topsim__DOT__w_data_we))
                                                    ? 
                                                   (((QData)((IData)(vlTOPp->m_topsim__DOT__w_data_wdata)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->m_topsim__DOT__w_mtimecmp)))
                                                    : 0ULL));
            if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_addr 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_addr 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr;
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_addr 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_offset;
                vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_addr 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__w_offset;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_addr 
                = ((0xfffff000U & (vlTOPp->m_topsim__DOT__w_satp 
                                   << 0xcU)) + (0xfffffffcU 
                                                & (vlTOPp->m_topsim__DOT__mmu__DOT__vpn1 
                                                   << 2U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_addr 
                = ((0xfffff000U & (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                   << 2U)) + (0xfffffffcU 
                                              & (vlTOPp->m_topsim__DOT__mmu__DOT__vpn0 
                                                 << 2U)));
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rdata1 
                = vlTOPp->m_topsim__DOT__p__DOT__w_rrs1;
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rdata2 
                = vlTOPp->m_topsim__DOT__p__DOT__w_rrs2;
            vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__r_imm 
                = vlTOPp->m_topsim__DOT__p__DOT__w_imm;
            vlTOPp->m_topsim__DOT__p__DOT__w_if_state 
                = ((1U & ((~ ((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                              | (2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)))) 
                          | (0xffffffffU != vlTOPp->m_topsim__DOT__w_pagefault)))
                    ? 0U : (3U & ((((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)) 
                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nalign4)) 
                                   & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))
                                   ? ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v)
                                       ? 3U : 1U) : 
                                  (((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)) 
                                    & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))
                                    ? 2U : (((2U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)) 
                                             & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))
                                             ? 3U : (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state))))));
            vlTOPp->m_topsim__DOT__p__DOT__w_regfile_we 
                = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_enable) 
                   & (9U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)));
            vlTOPp->m_topsim__DOT__p__DOT__w_com = 
                ((((((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                     | (0xffffffffU != vlTOPp->m_topsim__DOT__w_pagefault)) 
                    | ((5U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_ECALL))) 
                   & (0xaU != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) 
                  & (0xbU != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) 
                 & (0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)));
            if (((0xaU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                 & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))) {
                if (((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                     | (0U != vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask))) {
                    vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 1U;
                } else {
                    if (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SRET) 
                         | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_MRET))) {
                        vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 1U;
                    } else {
                        if (vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_MSTA) {
                            if (((0U != (0xe0000U & vlTOPp->m_topsim__DOT__p__DOT__w_mod)) 
                                 | ((0U != (0x20000U 
                                            & vlTOPp->m_topsim__DOT__p__DOT__mstatus)) 
                                    & (0U != (0x1800U 
                                              & vlTOPp->m_topsim__DOT__p__DOT__w_mod))))) {
                                vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 1U;
                            }
                        } else {
                            if (vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_SSTA) {
                                if (((0U != (0xe0000U 
                                             & vlTOPp->m_topsim__DOT__p__DOT__w_mod)) 
                                     | ((0U != (0x20000U 
                                                & vlTOPp->m_topsim__DOT__p__DOT__mstatus)) 
                                        & (0U != (0x1800U 
                                                  & vlTOPp->m_topsim__DOT__p__DOT__w_mod))))) {
                                    vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 1U;
                                }
                            } else {
                                vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 0U;
                            }
                        }
                    }
                }
            } else {
                vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 0U;
            }
            vlTOPp->m_topsim__DOT__p__DOT__w_ex1 = 
                (5U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_oe 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_oe;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_oe 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_oe;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_hit 
                = ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe)) 
                    | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_oe))) 
                   | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite) 
                      & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_oe)));
            vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_data 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_arg;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t 
                = ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_we) 
                     | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we)) 
                    | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_imag_we)) 
                   & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_wmtimecmp 
                = vlTOPp->m_topsim__DOT__w_wmtimecmp;
            vlTOPp->m_topsim__DOT__p__DOT__w_wmtimecmp 
                = vlTOPp->m_topsim__DOT__w_wmtimecmp;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr_t 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr 
                = (0xfffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_addr);
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr_t 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr 
                = (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_addr);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_waddr 
                = (((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_success))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_addr
                    : vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_addr);
            vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_we 
                = vlTOPp->m_topsim__DOT__p__DOT__w_regfile_we;
            vlTOPp->m_topsim__DOT__w_tlb_flush = vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_le 
                = vlTOPp->m_topsim__DOT__p__DOT__w_ex1;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init 
                = ((((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req) 
                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1)) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy))) 
                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_div_first));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_ctrl 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t)
                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t)
                    : 2U);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_req 
                = (((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we)) 
                   & (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq 
                = ((0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq2
                    : vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq1);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq_oe 
                = (((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we)) 
                   & ((0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
                      | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_req 
                = ((((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we)) 
                    & (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                   & (1U == vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq1
                    : ((0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq2
                        : vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq1));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq_oe 
                = (((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we)) 
                   & (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)));
            vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_pte_addr 
                = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_addr
                    : ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_addr
                        : ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                            ? vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_waddr
                            : 0U)));
            vlTOPp->m_topsim__DOT__p__DOT__w_tlb_flush 
                = vlTOPp->m_topsim__DOT__w_tlb_flush;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush 
                = vlTOPp->m_topsim__DOT__w_tlb_flush;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_init 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init;
            vlTOPp->m_topsim__DOT__p__DOT__w_ex1_busy 
                = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1) 
                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req)) 
                   & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy) 
                      | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_we 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_we;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_ctrl 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_ctrl;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl 
                = (7U & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t)
                          ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_ctrl)
                          : ((5U == vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt)
                              ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_ctrl)
                              : 0U)));
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_req 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_req;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq;
            vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oeirq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq_oe;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_req 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_req;
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq
                    : ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isdisk)
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq
                        : vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq));
            vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oeirq 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq_oe;
            vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe 
                = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq_oe) 
                    | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq_oe)) 
                   | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                = ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr
                    : (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                        & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_paddr
                        : ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                                  | (~ (vlTOPp->m_topsim__DOT__w_satp 
                                        >> 0x1fU))))
                            ? vlTOPp->m_topsim__DOT__w_data_addr
                            : (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_acs) 
                                & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_hit)))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_pte_addr
                                : vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr))));
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_flush 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_flush 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush;
            vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_flush 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_init 
                = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_init;
            vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_busy 
                = vlTOPp->m_topsim__DOT__p__DOT__w_ex1_busy;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data4 
                = (0xffU & (((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                              ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                  << 0x10U)) 
                                    | ((0xff00U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                   << 8U)) 
                                       | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))))
                              : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                                  ? ((0xffff0000U & 
                                      (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                       << 0x10U)) | 
                                     (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
                                  : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t)) 
                            >> 0x18U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data3 
                = (0xffU & (((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                              ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                  << 0x10U)) 
                                    | ((0xff00U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                   << 8U)) 
                                       | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))))
                              : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                                  ? ((0xffff0000U & 
                                      (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                       << 0x10U)) | 
                                     (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
                                  : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t)) 
                            >> 0x10U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data2 
                = (0xffU & (((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                              ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                  << 0x10U)) 
                                    | ((0xff00U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                   << 8U)) 
                                       | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))))
                              : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                                  ? ((0xffff0000U & 
                                      (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                       << 0x10U)) | 
                                     (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
                                  : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t)) 
                            >> 8U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data1 
                = (0xffU & ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                             ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                << 0x18U)) 
                                | ((0xff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                 << 0x10U)) 
                                   | ((0xff00U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                                  << 8U)) 
                                      | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))))
                             : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                                 ? ((0xffff0000U & 
                                     (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                      << 0x10U)) | 
                                    (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
                                 : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t)));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_pending_irq_nxt 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq
                    : vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq);
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_aces 
                = (((8U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                                    >> 0x1cU))) | (0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                                                       >> 0x1cU)))) 
                   | (9U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                                     >> 0x1cU))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t 
                = ((9U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                                   >> 0x1cU))) ? ((IData)(0x4000000U) 
                                                  + 
                                                  (0x3ffffffU 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr))
                    : (0x3ffffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask 
                = (vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_pending_irq_nxt 
                   & (~ vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_le 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)
                    ? 0U : ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_aces)
                             ? (1U & ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                                       ? ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_aces)) 
                                          & (0U != 
                                             (0xfU 
                                              & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                                 >> 0x1cU))))
                                       : ((1U & ((3U 
                                                  == vlTOPp->m_topsim__DOT__w_priv) 
                                                 | (~ 
                                                    (vlTOPp->m_topsim__DOT__w_satp 
                                                     >> 0x1fU))))
                                           ? ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                              | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread))
                                           : ((0U != 
                                               (3U 
                                                & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use) 
                                                   >> 1U)))
                                               ? 1U
                                               : ((
                                                   ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy) 
                                                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_hit))) 
                                                   & ((0U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                                                      | (2U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))))
                                                   ? 1U
                                                   : 0U)))))
                             : 0U));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t2 
                = ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__r_zeroaddr
                    : ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr
                        : ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                            ? vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr3
                            : ((4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                                ? vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr2
                                : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_served_irq_nxt 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq
                    : ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread)
                        ? (vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq 
                           | vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask)
                        : (vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq 
                           & (~ ((0x1fU >= (vlTOPp->m_topsim__DOT__w_data_wdata 
                                            - (IData)(1U)))
                                  ? ((IData)(1U) << 
                                     (vlTOPp->m_topsim__DOT__w_data_wdata 
                                      - (IData)(1U)))
                                  : 0U)))));
            vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_aces 
                = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev)) 
                    & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy))) 
                   & (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                       & (0U != vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask)) 
                      | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite) 
                         & (0x200004U == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset))));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_le 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_le;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_addr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t2;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_addr 
                = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t2
                    : vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_addr 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t2
                    : vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_addr 
                = (0xfffffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_addr 
                                 >> 4U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idx 
                = (0x1fffU & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_addr 
                              >> 4U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_tag 
                = (0x7fffU & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_addr 
                              >> 0x11U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_addr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_addr;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t)
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_addr
                    : ((5U == vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt)
                        ? vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_addr
                        : 0U));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idx;
            if (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we) {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[0U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[0U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[1U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[1U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[2U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[2U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[3U] 
                    = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[3U];
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[4U] 
                    = (0x8000U | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_tag));
            } else {
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[0U] = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[1U] = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[2U] = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[3U] = 0U;
                vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[4U] = 0U;
            }
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tw 
                = (0xfffffffcU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr 
                = (0xfffffff0U & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr);
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE1 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
                   & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                       | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                          & (~ (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                                >> 1U)))) | ((0U == 
                                              (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                             & (0U 
                                                == 
                                                (3U 
                                                 & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE2 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
                   & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                       | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                          & (~ (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                                >> 1U)))) | ((0U == 
                                              (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                             & (1U 
                                                == 
                                                (3U 
                                                 & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE3 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
                   & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                       | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                          & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                             >> 1U))) | ((0U == (3U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                         & (2U == (3U 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE4 
                = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
                   & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                       | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                          & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                             >> 1U))) | ((0U == (3U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                         & (3U == (3U 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_addr 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr;
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_idata[0U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[0U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_idata[1U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[1U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_idata[2U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[2U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_idata[3U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[3U];
            vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_idata[4U] 
                = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata[4U];
        }
