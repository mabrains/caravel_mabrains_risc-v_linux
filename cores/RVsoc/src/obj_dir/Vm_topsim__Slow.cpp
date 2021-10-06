// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_topsim.h for the primary calling header

#include "Vm_topsim.h"
#include "Vm_topsim__Syms.h"

//==========

const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__ADDR_WIDTH(0x14U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__D_WIDTH(0x16U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__ENTRY(4U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__ADDR_WIDTH(0x14U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__D_WIDTH(0x16U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__ENTRY(4U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__ADDR_WIDTH(0x14U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__D_WIDTH(0x16U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__ENTRY(4U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__MEM_SIZE(0x8000000U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__ADDR_WIDTH(0x1cU);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__D_WIDTH(0x80U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__ENTRY(0x2000U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__WIDTH(0x90U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__ENTRY(0x2000U);
const IData Vm_topsim::var_m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__MEM_SIZE(0x8000000U);

Vm_topsim::Vm_topsim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vm_topsim__Syms* __restrict vlSymsp = __VlSymsp = new Vm_topsim__Syms(_vcontextp__, this, name());
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vm_topsim::__Vconfigure(Vm_topsim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vm_topsim::~Vm_topsim() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vm_topsim::_initial__TOP__1(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_initial__TOP__1\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<6>/*191:0*/ __Vtemp4;
    VlWide<7>/*223:0*/ __Vtemp7;
    // Body
    VL_WRITEF("Cache Size:         128 KB\n");
    vlTOPp->m_topsim__DOT__r_uart_count = 0U;
    vlTOPp->m_topsim__DOT__r_uart_cycle = 0U;
    vlTOPp->m_topsim__DOT__r_uart_data = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_wmip = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_we = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_zero_we = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_ir_org = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_if_done = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__w_core_odata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mig_clk = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mig_rst_x = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__RST_X = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__RST_X = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__RST_X = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__RST_X = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__RST_X = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__RST_X = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_flush = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__w_stall = 0U;
    vlTOPp->m_topsim__DOT__fp = VL_FOPEN_NN(std::string("log.txt")
                                            , std::string("w"));
    if (VL_UNLIKELY((0U == vlTOPp->m_topsim__DOT__fp))) {
        VL_WRITEF("File Open Error!!!!!\n");
        VL_FINISH_MT("top.v", 315, "");
    }
    vlTOPp->m_topsim__DOT__mmu__DOT__r_dtree_done = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DeviceFeaturesSel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DriverFeatures = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DriverFeaturesSel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptAcknowledge = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DeviceFeaturesSel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DriverFeatures = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DriverFeaturesSel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptAcknowledge = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_idx = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_le = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_cpc = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_rs1 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_rs2 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_atom_wdata = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_data_en = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_btnd = 0U;
    vlTOPp->m_topsim__DOT__ddr2_dqs_p = 0U;
    vlTOPp->m_topsim__DOT__ddr2_dq = 0U;
    vlTOPp->m_topsim__DOT__ddr2_dqs_n = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueNum = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_arg = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueNum = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sw = 0xfU;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_bbl_done = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_disk_done = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_funct5 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_mem_rdata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_virt_irq_oe_t = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_aces_t = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS = 0ULL;
    vlTOPp->m_topsim__DOT__p__DOT__r_mul_SU = 0ULL;
    vlTOPp->m_topsim__DOT__p__DOT__r_mul_UU = 0ULL;
    vlTOPp->m_topsim__DOT__p__DOT__mhartid = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__misa = 0x141105U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[1U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[2U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[3U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[4U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 5U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[5U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 6U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[6U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 7U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[7U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 8U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[8U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 9U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[9U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0xaU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xaU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0xbU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xbU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0xcU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xcU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xdU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0xeU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xeU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0xfU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xfU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x10U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x10U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x11U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x11U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x12U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x12U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x13U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x13U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x14U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x14U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x15U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x15U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x16U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x16U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x17U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x17U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x18U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x18U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x19U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x19U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x1aU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x1aU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x1bU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x1bU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x1cU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x1cU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x1dU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x1dU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x1eU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x1eU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x1fU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0x1fU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0x20U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[0xbU] = 0x81000000U;
    vlTOPp->m_topsim__DOT__p__DOT__mscratch = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mepc = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mcause = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mtval = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mcounteren = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__sscratch = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__sepc = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__scause = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__stval = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__scounteren = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[1U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[2U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[3U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[4U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 5U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[5U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 6U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[6U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 7U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[7U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 8U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[8U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 9U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[9U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0xaU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xaU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0xbU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xbU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0xcU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xcU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0xdU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xdU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0xeU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xeU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0xfU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xfU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x10U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x10U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x11U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x11U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x12U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x12U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x13U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x13U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x14U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x14U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x15U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x15U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x16U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x16U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x17U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x17U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x18U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x18U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x19U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x19U] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x1aU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x1aU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x1bU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x1bU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x1cU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x1cU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x1dU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x1dU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x1eU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x1eU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x1fU;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0x1fU] = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__i = 0x20U;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem[0xbU] = 0x81000000U;
    vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_dram_data = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qnum = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qsel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_pending_irq_t = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_served_irq_t = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct7 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_addr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[0U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[1U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[2U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[3U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_ctrl = 3U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_tag = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_SRET = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_MRET = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_MSTA = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_SSTA = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_div_first = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_data_data = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_virt = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_odata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_clint_odata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_dev = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_priv_t = 3U;
    vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7 = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_addr2 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_data_wdata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs2 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_mstatus_t = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__r_rdata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__rdata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_irqmask = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_irqmask = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_en = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_pte_addr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_acs = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_init_stage = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_data_ctrl = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_ir16 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_if_irl = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__r_valid = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__r_valid = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem[0U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem[1U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem[2U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem[3U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem[0U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem[1U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem[2U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem[3U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem[0U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem[1U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem[2U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem[3U] = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__p__DOT__r_data_we = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[0U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[1U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[2U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata[3U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_addr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_mic_addr = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__satp = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_insn_addr = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_tlb_req = 0U;
    vlTOPp->m_topsim__DOT__r_uart_busy = 0U;
    vlTOPp->m_topsim__DOT__r_finish = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__MagicValue = 0x74726976U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Version = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DeviceID = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__VendorID = 0xffffU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__DeviceFeatures = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueNumMax = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__ConfigGeneration = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__MagicValue = 0x74726976U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Version = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DeviceID = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__VendorID = 0xffffU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__DeviceFeatures = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueNumMax = 4U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__ConfigGeneration = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_done = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_key_we = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_key_data = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_jmp_pc = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_tkn = 0U;
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x6d616765U;
    __Vtemp1[2U] = 0x756369U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF("Load a micro contoroller's program: ucimage.hex\n");
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Status = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueSel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Status = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit = 0ULL;
    vlTOPp->m_topsim__DOT__p__DOT__pending_tval = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__e_icount = 1ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_tail = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[1U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[2U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[3U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[4U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 5U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[5U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 6U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[6U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 7U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[7U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 8U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[8U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 9U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[9U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0xaU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0xaU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0xbU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0xbU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0xcU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0xcU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0xdU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0xeU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0xeU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0xfU;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0xfU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0x10U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0x10U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0x11U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__Queue[0x11U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__i = 0x12U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[1U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 2U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[2U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 3U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[3U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 4U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[4U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 5U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[5U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 6U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[6U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 7U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[7U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 8U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[8U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 9U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[9U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0xaU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0xaU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0xbU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0xbU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0xcU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0xcU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0xdU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0xeU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0xeU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0xfU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0xfU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x10U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x10U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x11U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x11U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x12U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x12U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x13U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x13U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x14U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x14U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x15U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x15U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x16U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x16U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x17U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x17U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x18U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x18U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x19U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x19U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x1aU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x1aU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x1bU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x1bU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x1cU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x1cU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x1dU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x1dU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x1eU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x1eU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x1fU;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x1fU] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x20U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x20U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x21U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x21U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x22U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x22U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x23U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__Queue[0x23U] = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__i = 0x24U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x2000U, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i)) {
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem[(0x1fffU 
                                                                                & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i)][0U] = 0U;
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem[(0x1fffU 
                                                                                & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i)][1U] = 0U;
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem[(0x1fffU 
                                                                                & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i)][2U] = 0U;
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem[(0x1fffU 
                                                                                & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i)][3U] = 0U;
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem[(0x1fffU 
                                                                                & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i)][4U] = 0U;
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i 
            = ((IData)(1U) + vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i);
    }
    vlTOPp->m_topsim__DOT__uartdata = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_checksum = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rd = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_rd = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_divisor = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_zero_done = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__medeleg = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_head = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mtimecmp = 1ULL;
    vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_ECALL = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2 = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr2 = 0x4000000U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_initaddr3 = 0x1000000U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_zeroaddr = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mideleg = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_count = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_en = 1U;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[0U] = 0x72U;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[1U] = 0x6fU;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[2U] = 0x6fU;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[3U] = 0x74U;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[4U] = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[5U] = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[6U] = 0x74U;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[7U] = 0x6fU;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[8U] = 0x70U;
    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo[9U] = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_tail = 0xaU;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_cnts = 0xaU;
    vlTOPp->m_topsim__DOT__p__DOT__mie = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state = 5U;
    vlTOPp->m_topsim__DOT__p__DOT__mip = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_if_state = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mstatus = 0U;
    vlTOPp->m_topsim__DOT__w_finish = 0U;
    vlTOPp->m_topsim__DOT__r_cnt = 0U;
    vlTOPp->m_topsim__DOT__imemaddr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tohost = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ir = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_tkn = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_jmp_pc = 0U;
    VL_WRITEF("Load image file: ../binary/init_disk.txt\n");
    __Vtemp4[0U] = 0x2e747874U;
    __Vtemp4[1U] = 0x6469736bU;
    __Vtemp4[2U] = 0x6e69745fU;
    __Vtemp4[3U] = 0x72792f69U;
    __Vtemp4[4U] = 0x62696e61U;
    __Vtemp4[5U] = 0x2e2e2fU;
    VL_READMEM_N(true, 8, 67108864, 0, VL_CVT_PACK_STR_NW(6, __Vtemp4)
                 ,  &(vlTOPp->m_topsim__DOT__mem_disk)
                 , 0, ~0ULL);
    vlTOPp->m_topsim__DOT__j = 0x4000000U;
    vlTOPp->m_topsim__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x4000000U, vlTOPp->m_topsim__DOT__i)) {
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem[(0x7ffffffU 
                                                                        & vlTOPp->m_topsim__DOT__j)] 
            = vlTOPp->m_topsim__DOT__mem_disk[(0x3ffffffU 
                                               & vlTOPp->m_topsim__DOT__i)];
        vlTOPp->m_topsim__DOT__j = ((IData)(1U) + vlTOPp->m_topsim__DOT__j);
        vlTOPp->m_topsim__DOT__i = ((IData)(1U) + vlTOPp->m_topsim__DOT__i);
    }
    VL_WRITEF("Running  ../binary/init_kernel.txt\n");
    __Vtemp7[0U] = 0x2e747874U;
    __Vtemp7[1U] = 0x726e656cU;
    __Vtemp7[2U] = 0x745f6b65U;
    __Vtemp7[3U] = 0x2f696e69U;
    __Vtemp7[4U] = 0x6e617279U;
    __Vtemp7[5U] = 0x2e2f6269U;
    __Vtemp7[6U] = 0x2eU;
    VL_READMEM_N(true, 8, 67108864, 0, VL_CVT_PACK_STR_NW(7, __Vtemp7)
                 ,  &(vlTOPp->m_topsim__DOT__mem_bbl)
                 , 0, ~0ULL);
    vlTOPp->m_topsim__DOT__j = 0U;
    vlTOPp->m_topsim__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x4000000U, vlTOPp->m_topsim__DOT__i)) {
        vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem[(0x7ffffffU 
                                                                        & vlTOPp->m_topsim__DOT__j)] 
            = vlTOPp->m_topsim__DOT__mem_bbl[(0x3ffffffU 
                                              & vlTOPp->m_topsim__DOT__i)];
        vlTOPp->m_topsim__DOT__j = ((IData)(1U) + vlTOPp->m_topsim__DOT__j);
        vlTOPp->m_topsim__DOT__i = ((IData)(1U) + vlTOPp->m_topsim__DOT__i);
    }
    VL_WRITEF("-------------------------------------------------------------------\n");
    vlTOPp->m_topsim__DOT__uartwe = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata = 0ULL;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mtvec = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__stvec = 0U;
    vlTOPp->m_topsim__DOT__w_halt = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_imm = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__pending_exception = 0xffffffffU;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__waitcnt = 0xdU;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_rec_done = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__load_res = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__reserved = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_cinsn = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_funct7 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__irq_num = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_imm = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_opcode = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_rcsr = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__pc = 0x80000000U;
    vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_funct12 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__mtime = 1ULL;
    vlTOPp->m_topsim__DOT__p__DOT__r_funct3 = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__priv = 3U;
    vlTOPp->m_topsim__DOT__p__DOT__r_rcsr_t = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_LR = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_wb_data = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_mem_addr = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__r_ir = 0U;
    vlTOPp->m_topsim__DOT__p__DOT__state = 0U;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_btn 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_btnd;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dqs_p = vlTOPp->m_topsim__DOT__ddr2_dqs_p;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dq = vlTOPp->m_topsim__DOT__ddr2_dq;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dqs_n = vlTOPp->m_topsim__DOT__ddr2_dqs_n;
    vlTOPp->m_topsim__DOT__w_init_done = (5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_rec_done = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_rec_done;
}

void Vm_topsim::_settle__TOP__2(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_settle__TOP__2\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<4>/*127:0*/ __Vtemp11;
    // Body
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_addr = vlTOPp->m_topsim__DOT__ddr2_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_ba = vlTOPp->m_topsim__DOT__ddr2_ba;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_ras_n = vlTOPp->m_topsim__DOT__ddr2_ras_n;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_cas_n = vlTOPp->m_topsim__DOT__ddr2_cas_n;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_we_n = vlTOPp->m_topsim__DOT__ddr2_we_n;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_ck_p = vlTOPp->m_topsim__DOT__ddr2_ck_p;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_ck_n = vlTOPp->m_topsim__DOT__ddr2_ck_n;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_cke = vlTOPp->m_topsim__DOT__ddr2_cke;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_cs_n = vlTOPp->m_topsim__DOT__ddr2_cs_n;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dm = vlTOPp->m_topsim__DOT__ddr2_dm;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_odt = vlTOPp->m_topsim__DOT__ddr2_odt;
    vlTOPp->m_topsim__DOT__RST_X = vlTOPp->RST_X;
    vlTOPp->m_topsim__DOT__CLK = vlTOPp->CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__r_odata1 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__r_odata2 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2;
    vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__TXD 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd;
    vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__READY 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_busy 
        = (1U & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready)));
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_ready 
        = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready;
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
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt;
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__TXD = vlTOPp->m_topsim__DOT__init_txd;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_txd 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_data 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__ADDR 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__DATA 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__WE 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__DONE 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done;
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__READY 
        = vlTOPp->m_topsim__DOT__tx_ready;
    vlTOPp->m_topsim__DOT__w_rxd = vlTOPp->m_topsim__DOT__init_txd;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__DATA 
        = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__EN 
        = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN) 
                                                 & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_done));
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_btn 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_btnd;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dqs_p = vlTOPp->m_topsim__DOT__ddr2_dqs_p;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dq = vlTOPp->m_topsim__DOT__ddr2_dq;
    vlTOPp->m_topsim__DOT__mmu__DOT__ddr2_dqs_n = vlTOPp->m_topsim__DOT__ddr2_dqs_n;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qnum = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__QueueNum;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_funct5 
        = vlTOPp->m_topsim__DOT__p__DOT__r_funct5;
    vlTOPp->m_topsim__DOT__w_plic_we = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_virt_irq_oe_t) 
                                        | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_aces_t));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_SS 
        = vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_SU 
        = vlTOPp->m_topsim__DOT__p__DOT__r_mul_SU;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_UU 
        = vlTOPp->m_topsim__DOT__p__DOT__r_mul_UU;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata = 
        (0x3ffffcU & (vlTOPp->m_topsim__DOT__mmu__DOT__physical_addr 
                      >> 0xaU));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask_nxt 
        = (vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_pending_irq_t 
           & (~ vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_served_irq_t));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[0U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[0U];
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[1U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[1U];
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[2U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[2U];
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata[3U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata[3U];
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_funct7 
        = vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7;
    vlTOPp->m_topsim__DOT__w_data_wdata = vlTOPp->m_topsim__DOT__p__DOT__r_data_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs2;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data = vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__r_rdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data = vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__rdata;
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
    vlTOPp->m_topsim__DOT__w_data_ctrl = vlTOPp->m_topsim__DOT__p__DOT__r_data_ctrl;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_funct3 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_funct3 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3;
    vlTOPp->m_topsim__DOT__w_data_we = vlTOPp->m_topsim__DOT__p__DOT__r_data_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_mic_addr;
    vlTOPp->m_topsim__DOT__w_satp = vlTOPp->m_topsim__DOT__p__DOT__satp;
    vlTOPp->m_topsim__DOT__w_insn_addr = vlTOPp->m_topsim__DOT__p__DOT__r_insn_addr;
    vlTOPp->m_topsim__DOT__w_tlb_req = (3U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_tlb_req));
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__DATA = vlTOPp->m_topsim__DOT__uartdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_checksum = vlTOPp->m_topsim__DOT__mmu__DOT__r_checksum;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__rd 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rd;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__rd = vlTOPp->m_topsim__DOT__p__DOT__r_rd;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_differ 
        = (0x1ffffffffULL & ((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                              >> 0x1fU) - (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_divisor))));
    vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__WE 
        = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we;
    vlTOPp->m_topsim__DOT__w_uart_we = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__UartTx0__DOT__DATA 
        = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data;
    vlTOPp->m_topsim__DOT__w_uart_data = vlTOPp->m_topsim__DOT__mmu__DOT__r_uart_data;
    vlTOPp->m_topsim__DOT__w_mtimecmp = vlTOPp->m_topsim__DOT__p__DOT__mtimecmp;
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
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy 
        = (0x20U > (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_count));
    vlTOPp->m_topsim__DOT__w_init_done = (5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state));
    vlTOPp->m_topsim__DOT__w_mip = vlTOPp->m_topsim__DOT__p__DOT__mip;
    vlTOPp->m_topsim__DOT__p__DOT__pending_interrupts 
        = (vlTOPp->m_topsim__DOT__p__DOT__mip & vlTOPp->m_topsim__DOT__p__DOT__mie);
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall 
        = (0U != vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt);
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_paddr = (0xfffff000U 
                                                 & (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                    << 2U));
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_acs = ((0U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                                                  | ((2U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                                                     | (5U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))));
    VL_SHIFTR_WWI(128,128,7, __Vtemp11, vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata, 
                  (0x78U & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr 
                            << 3U)));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t 
        = __Vtemp11[0U];
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_paddr = (0xfffff000U 
                                                 & (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                    << 2U));
    vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t = (0xde133U 
                                                  & (0x6000U 
                                                     | vlTOPp->m_topsim__DOT__p__DOT__mstatus));
    vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t = (0x6000U 
                                                  | vlTOPp->m_topsim__DOT__p__DOT__mstatus);
    vlTOPp->m_topsim__DOT__w_mstatus = vlTOPp->m_topsim__DOT__p__DOT__mstatus;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_finish = vlTOPp->m_topsim__DOT__w_finish;
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__WE = vlTOPp->m_topsim__DOT__uartwe;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__w_data 
        = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_addr 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_pc;
    vlTOPp->m_topsim__DOT__p__DOT__r_halt = vlTOPp->m_topsim__DOT__w_halt;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_in1 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_in1 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin1 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin1 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_we 
        = ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
            ? 1U : ((0x37U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                     ? 1U : ((0x17U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                              ? 1U : ((0x6fU == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                       ? 1U : ((0x67U 
                                                == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
                                                ? 1U
                                                : (
                                                   (0x33U 
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
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__RST_X 
        = (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode));
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_mode 
        = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_mode 
        = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_busy = ((0U 
                                                   != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                                                   ? 1U
                                                   : 0U);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_rec_done = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_rec_done;
    vlTOPp->m_topsim__DOT__p__DOT__w_sstatus = ((0xfff21eccU 
                                                 & vlTOPp->m_topsim__DOT__p__DOT__mstatus) 
                                                | (0xde133U 
                                                   & vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we 
        = ((0x23U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)) 
           & (2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)));
    vlTOPp->m_topsim__DOT__p__DOT__cause = ((0xffffffffU 
                                             != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)
                                             ? vlTOPp->m_topsim__DOT__p__DOT__pending_exception
                                             : (0x80000000U 
                                                | vlTOPp->m_topsim__DOT__p__DOT__irq_num));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_imm 
        = vlTOPp->m_topsim__DOT__p__DOT__r_imm;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_rcsr 
        = vlTOPp->m_topsim__DOT__p__DOT__r_rcsr;
    vlTOPp->m_topsim__DOT__p__DOT__w_vadr1 = (0xfffffffcU 
                                              & vlTOPp->m_topsim__DOT__p__DOT__pc);
    vlTOPp->m_topsim__DOT__p__DOT__w_vadr2 = ((IData)(2U) 
                                              + vlTOPp->m_topsim__DOT__p__DOT__pc);
    vlTOPp->m_topsim__DOT__p__DOT__w_core_pc = vlTOPp->m_topsim__DOT__p__DOT__pc;
    vlTOPp->m_topsim__DOT__p__DOT__w_nalign4 = (7U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__pc 
                                                    >> 1U)));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_in1 
        = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_rrs1 
        = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__p__DOT__w_mul_UU = ((QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs1)) 
                                               * (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs2)));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in1 
        = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__p__DOT__w_sin1 = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1 
        = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin1 
        = vlTOPp->m_topsim__DOT__p__DOT__r_rrs1;
    vlTOPp->m_topsim__DOT__w_mtime = vlTOPp->m_topsim__DOT__p__DOT__mtime;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_funct3 
        = vlTOPp->m_topsim__DOT__p__DOT__r_funct3;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_funct3 
        = vlTOPp->m_topsim__DOT__p__DOT__r_funct3;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__w_funct3 
        = vlTOPp->m_topsim__DOT__p__DOT__r_funct3;
    vlTOPp->m_topsim__DOT__p__DOT__w_alu_c_rslt = (
                                                   (4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                      ? 
                                                     (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                                                      & (~ vlTOPp->m_topsim__DOT__p__DOT__r_imm))
                                                      : 
                                                     (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                                                      | vlTOPp->m_topsim__DOT__p__DOT__r_imm))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                      ? vlTOPp->m_topsim__DOT__p__DOT__r_imm
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                      ? 
                                                     (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                                                      & (~ vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                                                      : 
                                                     (vlTOPp->m_topsim__DOT__p__DOT__r_rcsr 
                                                      | vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                      ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                                      : 0U)));
    vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr = (0xfffU 
                                                 & ((0U 
                                                     != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                     ? (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                                      ? 0x305U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                                       ? 0x41U
                                                       : 
                                                      ((0x102U 
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
    vlTOPp->m_topsim__DOT__p__DOT__w_csr_we = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                                               & (0U 
                                                  != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)));
    vlTOPp->m_topsim__DOT__w_priv = vlTOPp->m_topsim__DOT__p__DOT__priv;
    vlTOPp->m_topsim__DOT__p__DOT__w_mem_addr = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD) 
                                                  | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_STORE))
                                                  ? 
                                                 (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                  + vlTOPp->m_topsim__DOT__p__DOT__r_imm)
                                                  : 
                                                 ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO)
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                                   : 0U));
    vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_enable = 
        ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD)
          ? 1U : ((0x37U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                   ? 1U : ((0x17U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                            ? 1U : ((0x6fU == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                     ? 1U : ((0x67U 
                                              == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                              ? 1U : 
                                             ((0x33U 
                                               == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_opcode))
                                               ? 1U
                                               : ((0x13U 
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
                                                     : 0U)))))))));
    vlTOPp->m_topsim__DOT__w_data_addr = vlTOPp->m_topsim__DOT__p__DOT__r_mem_addr;
    vlTOPp->m_topsim__DOT__p__DOT__w_op_priv = ((0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->m_topsim__DOT__p__DOT__r_ir)) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                       >> 0xcU))));
    vlTOPp->m_topsim__DOT__p__DOT__w_op_csr = ((0x73U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->m_topsim__DOT__p__DOT__r_ir)) 
                                               & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                      >> 0xcU))));
    vlTOPp->m_topsim__DOT__p__DOT__w_core_ir = vlTOPp->m_topsim__DOT__p__DOT__r_ir;
    vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__w_inst 
        = vlTOPp->m_topsim__DOT__p__DOT__r_ir;
    vlTOPp->m_topsim__DOT__p__DOT__w_rs1 = (0x1fU & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                             >> 0xfU));
    vlTOPp->m_topsim__DOT__p__DOT__w_rs2 = (0x1fU & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                             >> 0x14U));
    vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode 
        = (0x7fU & vlTOPp->m_topsim__DOT__p__DOT__r_ir);
    vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I 
        = ((0xfffff800U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                             >> 0x1fU)))) 
                           << 0xbU)) | (0x7ffU & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                  >> 0x14U)));
    vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_S 
        = ((0xfffff800U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                             >> 0x1fU)))) 
                           << 0xbU)) | ((0x7e0U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                            >> 7U))));
    vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_B 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
                                             >> 0x1fU)))) 
                           << 0xcU)) | ((0x800U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
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
        = ((0xfff00000U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__r_ir 
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
    vlTOPp->m_topsim__DOT__p__DOT__w_ex1 = (5U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state));
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__RST_X = vlTOPp->m_topsim__DOT__RST_X;
    vlTOPp->m_topsim__DOT__UartTx_init__DOT__CLK = vlTOPp->m_topsim__DOT__CLK;
    vlTOPp->m_topsim__DOT__p__DOT__CLK = vlTOPp->m_topsim__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__CLK = vlTOPp->m_topsim__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_txd 
        = vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_txd;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 
        = (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t 
           >> ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_addr2) 
               << 3U));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_rxd = vlTOPp->m_topsim__DOT__w_rxd;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__KEY_DATA 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_key_data 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__KEY_WE 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_key_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_qnum 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qnum;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_we = vlTOPp->m_topsim__DOT__w_plic_we;
    vlTOPp->m_topsim__DOT__p__DOT__w_plic_we = vlTOPp->m_topsim__DOT__w_plic_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_idata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_idata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_idata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_wdata;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_data_wdata = vlTOPp->m_topsim__DOT__w_data_wdata;
    vlTOPp->m_topsim__DOT__p__DOT__w_data_wdata = vlTOPp->m_topsim__DOT__w_data_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_wdata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata = 
        ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata
          : vlTOPp->m_topsim__DOT__w_data_wdata);
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_odata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_odata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_init_stage = vlTOPp->m_topsim__DOT__w_init_stage;
    vlTOPp->m_topsim__DOT__p__DOT__w_init_stage = vlTOPp->m_topsim__DOT__w_init_stage;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_data_ctrl = vlTOPp->m_topsim__DOT__w_data_ctrl;
    vlTOPp->m_topsim__DOT__p__DOT__w_data_ctrl = vlTOPp->m_topsim__DOT__w_data_ctrl;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_ctrl 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t 
        = ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
            ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                               << 0x18U)) | ((0xff0000U 
                                              & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata))))
            : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata))
                : vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_wdata));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_data_we = vlTOPp->m_topsim__DOT__w_data_we;
    vlTOPp->m_topsim__DOT__p__DOT__w_data_we = vlTOPp->m_topsim__DOT__w_data_we;
    vlTOPp->m_topsim__DOT__w_clint_we = ((6U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev)) 
                                         & (IData)(vlTOPp->m_topsim__DOT__w_data_we));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_addr 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_addr2 
        = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                     >> 2U));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sb 
        = (0xfU & ((IData)(1U) << (3U & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr)));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sh 
        = (0xfU & ((IData)(3U) << (2U & vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_satp = vlTOPp->m_topsim__DOT__w_satp;
    vlTOPp->m_topsim__DOT__p__DOT__w_satp = vlTOPp->m_topsim__DOT__w_satp;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_addr = vlTOPp->m_topsim__DOT__w_insn_addr;
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
    vlTOPp->m_topsim__DOT__p__DOT__w_insn_addr = vlTOPp->m_topsim__DOT__w_insn_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_rtag 
        = (0x3ffffU & (vlTOPp->m_topsim__DOT__w_insn_addr 
                       >> 0xeU));
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx 
        = (3U & (vlTOPp->m_topsim__DOT__w_insn_addr 
                 >> 0xcU));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_req = vlTOPp->m_topsim__DOT__w_tlb_req;
    vlTOPp->m_topsim__DOT__p__DOT__w_tlb_req = vlTOPp->m_topsim__DOT__w_tlb_req;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_isread = (0U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__w_tlb_req));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite = (1U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__w_tlb_req));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode = (2U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__w_tlb_req));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_uart_we = vlTOPp->m_topsim__DOT__w_uart_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_uart_data = vlTOPp->m_topsim__DOT__w_uart_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mtimecmp = vlTOPp->m_topsim__DOT__w_mtimecmp;
    vlTOPp->m_topsim__DOT__p__DOT__w_mtimecmp = vlTOPp->m_topsim__DOT__w_mtimecmp;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_divisor 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in2;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_busy 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_init_done = vlTOPp->m_topsim__DOT__w_init_done;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_init_done = vlTOPp->m_topsim__DOT__w_init_done;
    vlTOPp->m_topsim__DOT__CORE_RST_X = ((IData)(vlTOPp->RST_X) 
                                         & (IData)(vlTOPp->m_topsim__DOT__w_init_done));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mip = vlTOPp->m_topsim__DOT__w_mip;
    vlTOPp->m_topsim__DOT__p__DOT__w_mip = vlTOPp->m_topsim__DOT__w_mip;
    vlTOPp->m_topsim__DOT__w_wmip = ((0U != vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask_nxt)
                                      ? (0xa00U | vlTOPp->m_topsim__DOT__w_mip)
                                      : (0xfffff5ffU 
                                         & vlTOPp->m_topsim__DOT__w_mip));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_stall 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we 
        = ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)) 
           & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy = 
        ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall) 
         | (0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata = 
        ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl)))
          ? ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl))
              ? (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)
              : ((0xffffff00U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t 
                                                   >> 7U)))) 
                                 << 8U)) | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)))
          : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl)))
              ? ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl))
                  ? (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)
                  : ((0xffff0000U & ((- (IData)((1U 
                                                 & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (0xffffU 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t)))
              : vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mstatus = vlTOPp->m_topsim__DOT__w_mstatus;
    vlTOPp->m_topsim__DOT__p__DOT__w_mstatus = vlTOPp->m_topsim__DOT__w_mstatus;
    if ((0x80000U & vlTOPp->m_topsim__DOT__w_mstatus)) {
        vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr = (7U 
                                                   & ((vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                       >> 1U) 
                                                      | (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                         >> 3U)));
        vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr = (7U 
                                                   & ((vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                       >> 1U) 
                                                      | (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                         >> 3U)));
    } else {
        vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr = (7U 
                                                   & (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                      >> 1U));
        vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr = (7U 
                                                   & (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                      >> 1U));
    }
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_addr1 
        = (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_addr 
                     >> 2U));
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
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_rec_done 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_rec_done;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_rec_done 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_rec_done;
    vlTOPp->m_topsim__DOT__w_txd = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_rec_done)
                                     ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_debug_txd)
                                     : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_txd));
    vlTOPp->m_topsim__DOT__p__DOT__w_data_t = ((0x300U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct12))
                                                ? vlTOPp->m_topsim__DOT__p__DOT__r_wb_data_csr
                                                : vlTOPp->m_topsim__DOT__p__DOT__w_sstatus);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_aces = ((0U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))
                                                   ? 2U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)) 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we))
                                                    ? 1U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state)) 
                                                     & (3U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode)))
                                                     ? 0U
                                                     : 3U)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_we = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we) 
                                                & (0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                                       >> 0x1cU))));
    vlTOPp->m_topsim__DOT__p__DOT__w_deleg = ((1U >= (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                                               ? (1U 
                                                  & ((0U 
                                                      != 
                                                      (0x80000000U 
                                                       & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                                      ? 
                                                     ((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                                       ? 
                                                      (1U 
                                                       & (vlTOPp->m_topsim__DOT__p__DOT__mideleg 
                                                          >> 
                                                          (0x1fU 
                                                           & vlTOPp->m_topsim__DOT__p__DOT__cause)))
                                                       : 0U)
                                                      : 
                                                     ((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                                       ? 
                                                      (vlTOPp->m_topsim__DOT__p__DOT__medeleg 
                                                       >> 
                                                       (0x1fU 
                                                        & vlTOPp->m_topsim__DOT__p__DOT__cause))
                                                       : 0U)))
                                               : 0U);
    vlTOPp->m_topsim__DOT__p__DOT__w_usestate = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nalign4) 
                                                 & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v)));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_dividend 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in1;
    vlTOPp->m_topsim__DOT__p__DOT__w_mul_SS = ((((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->m_topsim__DOT__p__DOT__w_sin1 
                                                                                >> 0x1fU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_sin1))) 
                                               * (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (vlTOPp->m_topsim__DOT__p__DOT__w_sin2 
                                                                                >> 0x1fU)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_sin2))));
    vlTOPp->m_topsim__DOT__p__DOT__w_mul_SU = ((((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->m_topsim__DOT__p__DOT__w_sin1 
                                                                                >> 0x1fU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_sin1))) 
                                               * (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs2)));
    vlTOPp->m_topsim__DOT__p__DOT__w_alu_b_rslt = (
                                                   (4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                      ? 
                                                     (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                      >= vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                                      : 
                                                     (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                      < vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                      ? 
                                                     VL_GTES_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin2)
                                                      : 
                                                     VL_LTS_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin2)))
                                                    : 
                                                   ((~ 
                                                     ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3) 
                                                      >> 1U)) 
                                                    & ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                                                        ? 
                                                       (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                        != vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                                        : 
                                                       (vlTOPp->m_topsim__DOT__p__DOT__r_rrs1 
                                                        == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mtime = vlTOPp->m_topsim__DOT__w_mtime;
    vlTOPp->m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_mtime 
        = (IData)((vlTOPp->m_topsim__DOT__w_mtime >> 0U));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_mtime 
        = (IData)((vlTOPp->m_topsim__DOT__w_mtime >> 0U));
    vlTOPp->m_topsim__DOT__p__DOT__w_mtime = vlTOPp->m_topsim__DOT__w_mtime;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req = ((
                                                   (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_en) 
                                                     & (0x4d3f640ULL 
                                                        < vlTOPp->m_topsim__DOT__w_mtime)) 
                                                    & (0ULL 
                                                       == 
                                                       (0x3ffffULL 
                                                        & vlTOPp->m_topsim__DOT__w_mtime))) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) 
                                                  & (IData)(vlTOPp->m_topsim__DOT__w_init_stage));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_C__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__p__DOT__w_alu_c_rslt;
    vlTOPp->m_topsim__DOT__p__DOT__r_rcsr_t = ((0x800U 
                                                & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                ? (
                                                   (0x400U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                    ? 
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
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                          ? 
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
                                                              : vlTOPp->m_topsim__DOT__p__DOT__mhartid))
                                                            : 0U))
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                      ? 0U
                                                      : 
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
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_csr_addr))
                                                     ? 
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
                                                              ? 0U
                                                              : (IData)(vlTOPp->m_topsim__DOT__p__DOT__mtime)))))))))
                                                      : 0U)
                                                     : 0U))
                                                : (
                                                   (0x400U 
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
               >> 0x1fU)) ? ((IData)(1U) + (~ vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
            : vlTOPp->m_topsim__DOT__p__DOT__r_rrs1);
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_divisor 
        = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed) 
            & (vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2 
               >> 0x1fU)) ? ((IData)(1U) + (~ vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2))
            : vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2);
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt 
        = (((QData)((IData)(((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed)
                              ? ((0U == (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                          << 1U) | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                  ? (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                             >> 0x20U))
                                  : ((1U == (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                              << 1U) 
                                             | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                      ? (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                 >> 0x20U))
                                      : ((2U == (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                          ? ((IData)(1U) 
                                             + (~ (IData)(
                                                          (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                           >> 0x20U))))
                                          : ((IData)(1U) 
                                             + (~ (IData)(
                                                          (vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                                           >> 0x20U)))))))
                              : (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed)
                                          ? ((0U == 
                                              (((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend) 
                                                << 1U) 
                                               | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor)))
                                              ? (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt)
                                              : ((1U 
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
    vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt = 
        ((0xffffffffU != vlTOPp->m_topsim__DOT__p__DOT__pending_exception)
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_priv = vlTOPp->m_topsim__DOT__w_priv;
    vlTOPp->m_topsim__DOT__p__DOT__w_priv = vlTOPp->m_topsim__DOT__w_priv;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_ctrl = (
                                                   (0U 
                                                    != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                                                    ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)
                                                    : 
                                                   ((1U 
                                                     & ((3U 
                                                         == vlTOPp->m_topsim__DOT__w_priv) 
                                                        | (~ 
                                                           (vlTOPp->m_topsim__DOT__w_satp 
                                                            >> 0x1fU))))
                                                     ? (IData)(vlTOPp->m_topsim__DOT__w_data_ctrl)
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use)))
                                                      ? (IData)(vlTOPp->m_topsim__DOT__w_data_ctrl)
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                                       ? 2U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                                        ? 2U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                                         ? 2U
                                                         : (IData)(vlTOPp->m_topsim__DOT__w_data_ctrl)))))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_paddr = 
        ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                | (~ (vlTOPp->m_topsim__DOT__w_satp 
                      >> 0x1fU)))) ? vlTOPp->m_topsim__DOT__w_insn_addr
          : vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_addr);
    vlTOPp->m_topsim__DOT__p__DOT__w_regfile_we = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_enable) 
                                                   & (9U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_data_addr = vlTOPp->m_topsim__DOT__w_data_addr;
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
    vlTOPp->m_topsim__DOT__p__DOT__w_data_addr = vlTOPp->m_topsim__DOT__w_data_addr;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr = 
        ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr
          : ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                    | (~ (vlTOPp->m_topsim__DOT__w_satp 
                          >> 0x1fU)))) ? vlTOPp->m_topsim__DOT__w_data_addr
              : vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_addr));
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rs1 
        = vlTOPp->m_topsim__DOT__p__DOT__w_rs1;
    vlTOPp->m_topsim__DOT__p__DOT__w_rrs1 = ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_rs1))
                                              ? 0U : 
                                             vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem
                                             [vlTOPp->m_topsim__DOT__p__DOT__w_rs1]);
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rs2 
        = vlTOPp->m_topsim__DOT__p__DOT__w_rs2;
    vlTOPp->m_topsim__DOT__p__DOT__w_rrs2 = ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_rs2))
                                              ? 0U : 
                                             vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__mem
                                             [vlTOPp->m_topsim__DOT__p__DOT__w_rs2]);
    vlTOPp->m_topsim__DOT__p__DOT__w_imm = ((0x40U 
                                             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                             ? ((0x20U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                      ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_C
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                      ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_J
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                      ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                      ? vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_B
                                                      : 0U)
                                                     : 0U))))
                                                 : 0U)
                                             : ((0x20U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
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
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
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
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
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
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
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
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_le 
        = vlTOPp->m_topsim__DOT__p__DOT__w_ex1;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init 
        = ((((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req) 
             & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1)) 
            & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy))) 
           & (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_div_first));
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
        = ((0xfffff800U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                             >> 0x1fU)))) 
                           << 0xbU)) | (0x7ffU & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                  >> 0x14U)));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_S 
        = ((0xfffff800U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                             >> 0x1fU)))) 
                           << 0xbU)) | ((0x7e0U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                            >> 7U))));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_B 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
                                             >> 0x1fU)))) 
                           << 0xcU)) | ((0x800U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
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
        = ((0xfff00000U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_ir 
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
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lbu 
        = (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2);
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lhu 
        = (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2);
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lb 
        = ((0xffffff00U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 
                                             >> 7U)))) 
                           << 8U)) | (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lh 
        = ((0xffff0000U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 
                                             >> 0xfU)))) 
                           << 0x10U)) | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2));
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__RXD 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_rxd;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[0U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[0U];
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[1U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[1U];
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[2U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[2U];
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata[3U] 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata[3U];
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_idata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_idata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qsel = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qsel = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_idata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_clint_we = vlTOPp->m_topsim__DOT__w_clint_we;
    vlTOPp->m_topsim__DOT__p__DOT__w_clint_we = vlTOPp->m_topsim__DOT__w_clint_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_addr 
        = (0x3fffffU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem
                               [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx]));
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_tagmatch 
        = ((0x3ffffU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem
                                [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx] 
                                >> 0x16U))) == vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_rtag);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_we 
        = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
            & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail))) 
           & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_we 
        = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
            & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail))) 
           & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite));
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_write = 
        (0x40U | (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                  | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite)
                      ? 0x80U : 0U)));
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_write = 
        (0x40U | (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                  | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite)
                      ? 0x80U : 0U)));
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_write = (1U 
                                                 & ((~ 
                                                     (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                      >> 6U)) 
                                                    | ((~ 
                                                        (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                         >> 7U)) 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))));
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_write = (1U 
                                                 & ((~ 
                                                     (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                      >> 6U)) 
                                                    | ((~ 
                                                        (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                         >> 7U)) 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we 
        = (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
            & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail))) 
           & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode));
    vlTOPp->m_topsim__DOT__w_pagefault = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__page_walk_fail)
                                           ? ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode)
                                               ? 0xcU
                                               : ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread)
                                                   ? 0xdU
                                                   : 0xfU))
                                           : 0xffffffffU);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_use_tlb = ((
                                                   (0U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                                                   & (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                                       | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread)) 
                                                      | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite))) 
                                                  & (~ 
                                                     ((3U 
                                                       == vlTOPp->m_topsim__DOT__w_priv) 
                                                      | (~ 
                                                         (vlTOPp->m_topsim__DOT__w_satp 
                                                          >> 0x1fU)))));
    vlTOPp->m_topsim__DOT__mmu__DOT__v_addr = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode)
                                                ? vlTOPp->m_topsim__DOT__w_insn_addr
                                                : vlTOPp->m_topsim__DOT__w_data_addr);
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_busy 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_busy;
    vlTOPp->m_topsim__DOT__p__DOT__RST_X = vlTOPp->m_topsim__DOT__CORE_RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_wmip = vlTOPp->m_topsim__DOT__w_wmip;
    vlTOPp->m_topsim__DOT__p__DOT__w_wmip = vlTOPp->m_topsim__DOT__w_wmip;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_stall 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_stall 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_w 
        = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_we) 
            & (0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_state))) 
           & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe 
        = ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we) 
             & (0U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                               >> 0x1cU)))) & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)))
            ? (0xfU & ((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                        ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sw)
                        : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_ctrl)))
                            ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sh)
                            : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sb))))
            : 0U);
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata;
    vlTOPp->m_topsim__DOT__mmu__DOT__r_data_data = 
        ((6U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__r_clint_odata
          : ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev))
              ? vlTOPp->m_topsim__DOT__mmu__DOT__r_plic_odata
              : ((4U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev))
                  ? ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_virt))
                      ? vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data
                      : vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data)
                  : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata)));
    vlTOPp->m_topsim__DOT__w_insn_data = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata;
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_success = (1U 
                                                   & (~ 
                                                      (((((2U 
                                                           == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr)) 
                                                          | (6U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr))) 
                                                         | ((1U 
                                                             == vlTOPp->m_topsim__DOT__w_priv) 
                                                            & ((vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                                >> 4U) 
                                                               & (~ 
                                                                  (vlTOPp->m_topsim__DOT__w_mstatus 
                                                                   >> 0x12U))))) 
                                                        | ((0U 
                                                            == vlTOPp->m_topsim__DOT__w_priv) 
                                                           & (~ 
                                                              (vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte 
                                                               >> 4U)))) 
                                                       | (~ 
                                                          ((2U 
                                                            >= (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)) 
                                                           & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr) 
                                                              >> (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)))))));
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_success = (1U 
                                                   & (~ 
                                                      (((((2U 
                                                           == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
                                                          | (6U 
                                                             == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr))) 
                                                         | ((1U 
                                                             == vlTOPp->m_topsim__DOT__w_priv) 
                                                            & ((vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                                >> 4U) 
                                                               & (~ 
                                                                  (vlTOPp->m_topsim__DOT__w_mstatus 
                                                                   >> 0x12U))))) 
                                                        | ((0U 
                                                            == vlTOPp->m_topsim__DOT__w_priv) 
                                                           & (~ 
                                                              (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                                                               >> 4U)))) 
                                                       | (~ 
                                                          ((2U 
                                                            >= (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)) 
                                                           & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr) 
                                                              >> (IData)(vlTOPp->m_topsim__DOT__w_tlb_req)))))));
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_txd = vlTOPp->m_topsim__DOT__w_txd;
    vlTOPp->m_topsim__DOT__p__DOT__w_mod = (vlTOPp->m_topsim__DOT__p__DOT__w_data_t 
                                            ^ vlTOPp->m_topsim__DOT__p__DOT__mstatus);
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_req 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_aces;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_mmuwe 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we = ((0U 
                                                  != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                                                  ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_we)
                                                  : (IData)(vlTOPp->m_topsim__DOT__w_data_we));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_B__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__p__DOT__w_alu_b_rslt;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_keyreq 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qnum = 
        ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req)
          ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__QueueNum
          : vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata);
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_dividend 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_dividend;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_divisor 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_divisor;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_rslt 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
        = ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
            ? (0xffffffffULL | ((QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs1)) 
                                << 0x20U)) : (((0xffffffffU 
                                                == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2) 
                                               & ((4U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)) 
                                                  | (6U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))))
                                               ? (QData)((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_rrs1))
                                               : vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt));
    vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t1 = (
                                                   (0xffffffdfU 
                                                    & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt) 
                                                   | (0x20U 
                                                      & ((vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt 
                                                          >> (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t)) 
                                                         << 5U)));
    vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t1 = (
                                                   (0xffffff7fU 
                                                    & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt) 
                                                   | (0x80U 
                                                      & ((vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt 
                                                          >> (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t)) 
                                                         << 7U)));
    vlTOPp->m_topsim__DOT__p__DOT__enable_interrupts 
        = ((0U != vlTOPp->m_topsim__DOT__p__DOT__pending_interrupts)
            ? ((3U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                ? ((0U != (8U & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt))
                    ? (~ vlTOPp->m_topsim__DOT__p__DOT__mideleg)
                    : 0U) : ((1U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                              ? ((0U != (2U & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_nxt))
                                  ? ((~ vlTOPp->m_topsim__DOT__p__DOT__mideleg) 
                                     | vlTOPp->m_topsim__DOT__p__DOT__mideleg)
                                  : (~ vlTOPp->m_topsim__DOT__p__DOT__mideleg))
                              : ((0U == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t))
                                  ? 0xffffffffU : 0U)))
            : 0U);
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_we 
        = vlTOPp->m_topsim__DOT__p__DOT__w_regfile_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_addr 
        = (0x3fffffU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem
                               [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx]));
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_tagmatch 
        = ((0x3ffffU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem
                                [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx] 
                                >> 0x16U))) == vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_rtag);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_addr 
        = (0x3fffffU & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem
                               [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx]));
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_tagmatch 
        = ((0x3ffffU & (IData)((vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem
                                [vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx] 
                                >> 0x16U))) == vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_rtag);
    vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_arg = ((0x40009U 
                                                  == 
                                                  (0xfffffU 
                                                   & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((4U 
                                                   == 
                                                   (0xfU 
                                                    & vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qnum
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0xfU 
                                                     & vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr))
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_qsel
                                                    : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)))
                                                  : 
                                                 ((0x4000aU 
                                                   == 
                                                   (0xfffffU 
                                                    & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                       >> 0xcU)))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_data
                                                   : 
                                                  ((0x4000bU 
                                                    == 
                                                    (0xfffffU 
                                                     & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                        >> 0xcU)))
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_data
                                                    : 
                                                   ((0x4000cU 
                                                     == 
                                                     (0xfffffU 
                                                      & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                         >> 0xcU)))
                                                     ? 
                                                    vlTOPp->m_topsim__DOT__mmu__DOT__cons_fifo
                                                    [vlTOPp->m_topsim__DOT__mmu__DOT__r_consf_head]
                                                     : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_odata))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_virt = (0xfU 
                                               & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                  >> 0x18U));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dev = (0xfU 
                                              & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                 >> 0x1cU));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_offset = (0x7ffffffU 
                                                 & vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr);
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rdata1 
        = vlTOPp->m_topsim__DOT__p__DOT__w_rrs1;
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_rdata2 
        = vlTOPp->m_topsim__DOT__p__DOT__w_rrs2;
    vlTOPp->m_topsim__DOT__p__DOT__imm_gen0__DOT__r_imm 
        = vlTOPp->m_topsim__DOT__p__DOT__w_imm;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_init 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init;
    vlTOPp->m_topsim__DOT__p__DOT__w_ex1_busy = (((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_ex1) 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req)) 
                                                 & ((IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy) 
                                                    | (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init)));
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
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_le 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_le;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_clr 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_clr;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwe 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_clr) 
           | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we));
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
                                 ? 0U : ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                          ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                              ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_C
                                              : 0U)
                                          : 0U))) : 
                   ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                     ? ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                         ? ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                             ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                 ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_J
                                 : 0U) : 0U) : 0U) : 
                    ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                      ? ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                          ? ((1U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                              ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I
                              : 0U) : 0U) : ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                  ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_B
                                                  : 0U)
                                              : 0U))))
                : 0U) : ((0x20U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                          ? ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                              ? ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                           ? ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_U
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                  ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_S
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                              ? ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                           ? ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                   ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I
                                                     : 0U)
                                                    : 0U))))));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_lcm_data 
        = ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl)))
            ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lb
            : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl)))
                ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lh
                : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2));
    vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__RXD 
        = vlTOPp->m_topsim__DOT__mmu__DOT__ploader__DOT__RXD;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_qsel 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qsel;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_qsel 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_qsel;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_odata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_tagmatch) 
           & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid) 
              >> (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx)));
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_pagefault = vlTOPp->m_topsim__DOT__w_pagefault;
    vlTOPp->m_topsim__DOT__p__DOT__w_pagefault = vlTOPp->m_topsim__DOT__w_pagefault;
    vlTOPp->m_topsim__DOT__p__DOT__w_com = ((((((0xffffffffU 
                                                 != vlTOPp->m_topsim__DOT__p__DOT__pending_exception) 
                                                | (0xffffffffU 
                                                   != vlTOPp->m_topsim__DOT__w_pagefault)) 
                                               | ((5U 
                                                   == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                  & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_ECALL))) 
                                              & (0xaU 
                                                 != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) 
                                             & (0xbU 
                                                != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state))) 
                                            & (0U != (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_use_tlb)
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                                                     ? 0U
                                                     : 1U)
                                                    : 0U);
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_p_addr = ((0xffc00000U 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__L1_paddr) 
                                                  | (0x3fffffU 
                                                     & vlTOPp->m_topsim__DOT__mmu__DOT__v_addr));
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_p_addr = ((0xfffff000U 
                                                   & vlTOPp->m_topsim__DOT__mmu__DOT__L0_paddr) 
                                                  | (0xfffU 
                                                     & vlTOPp->m_topsim__DOT__mmu__DOT__v_addr));
    vlTOPp->m_topsim__DOT__mmu__DOT__vpn1 = (0x3ffU 
                                             & (vlTOPp->m_topsim__DOT__mmu__DOT__v_addr 
                                                >> 0x16U));
    vlTOPp->m_topsim__DOT__mmu__DOT__vpn0 = (0x3ffU 
                                             & (vlTOPp->m_topsim__DOT__mmu__DOT__v_addr 
                                                >> 0xcU));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__p__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_w;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe;
    vlTOPp->m_topsim__DOT__w_data_data = vlTOPp->m_topsim__DOT__mmu__DOT__r_data_data;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_data = vlTOPp->m_topsim__DOT__w_insn_data;
    vlTOPp->m_topsim__DOT__p__DOT__w_insn_data = vlTOPp->m_topsim__DOT__w_insn_data;
    vlTOPp->m_topsim__DOT__p__DOT__w_ir_org = ((3U 
                                                == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state))
                                                ? ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v)
                                                    ? 
                                                   ((0xffff0000U 
                                                     & (vlTOPp->m_topsim__DOT__w_insn_data 
                                                        << 0x10U)) 
                                                    | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16))
                                                    : 
                                                   ((0xffff0000U 
                                                     & (vlTOPp->m_topsim__DOT__w_insn_data 
                                                        << 0x10U)) 
                                                    | (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_irl)))
                                                : vlTOPp->m_topsim__DOT__w_insn_data);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_wdata = 
        (((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
          & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_success))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_write
          : vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_write);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_we = ((5U 
                                                  == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state)) 
                                                 & ((((0U 
                                                       != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
                                                      & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_success)) 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_write)) 
                                                    | (((0U 
                                                         != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_xwr)) 
                                                        & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_success)) 
                                                       & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L0_write))));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_b_rslt;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_imag_we = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                                                   & (0U 
                                                      != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) 
                                                  & (9U 
                                                     == 
                                                     (0xfU 
                                                      & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                                         >> 0x1cU))));
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_qnum 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_qnum;
    vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt = 
        ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_alu_f7))
          ? ((4U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
              ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                  ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                      ? ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                          ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                          : (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                     >> 0x20U))) : 
                     ((0xffffffffU == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                       ? 0U : ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                                ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                                : (IData)((vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt 
                                           >> 0x20U)))))
                  : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                      ? ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                          ? 0xffffffffU : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt))
                      : ((0xffffffffU == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                          ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs1
                          : ((0U == vlTOPp->m_topsim__DOT__p__DOT__r_alu_in2)
                              ? 0xffffffffU : (IData)(vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt)))))
              : ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                  ? ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                      ? (IData)((vlTOPp->m_topsim__DOT__p__DOT__r_mul_UU 
                                 >> 0x20U)) : (IData)(
                                                      (vlTOPp->m_topsim__DOT__p__DOT__r_mul_SU 
                                                       >> 0x20U)))
                  : ((1U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3))
                      ? (IData)((vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS 
                                 >> 0x20U)) : (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_mul_SS))))
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
    vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t2 = (
                                                   (0xfffffeffU 
                                                    & vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t1) 
                                                   | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t) 
                                                      << 8U));
    vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t2 = (
                                                   (0xffffe7ffU 
                                                    & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t1) 
                                                   | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_priv_t) 
                                                      << 0xbU));
    vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask 
        = (vlTOPp->m_topsim__DOT__p__DOT__pending_interrupts 
           & vlTOPp->m_topsim__DOT__p__DOT__enable_interrupts);
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_arg = vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_arg;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_isdisk = (0U 
                                                 != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt));
    vlTOPp->m_topsim__DOT__w_wmtimecmp = ((((6U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev)) 
                                            & (0x4000U 
                                               == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)) 
                                           & (IData)(vlTOPp->m_topsim__DOT__w_data_we))
                                           ? (((QData)((IData)(
                                                               (vlTOPp->m_topsim__DOT__w_mtimecmp 
                                                                >> 0x20U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->m_topsim__DOT__w_data_wdata)))
                                           : ((((6U 
                                                 == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_dev)) 
                                                & (0x4004U 
                                                   == vlTOPp->m_topsim__DOT__mmu__DOT__w_offset)) 
                                               & (IData)(vlTOPp->m_topsim__DOT__w_data_we))
                                               ? (((QData)((IData)(vlTOPp->m_topsim__DOT__w_data_wdata)) 
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
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_init 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_init;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__w_busy 
        = vlTOPp->m_topsim__DOT__p__DOT__w_ex1_busy;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__CLK 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__CLK 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__CLK;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwe;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rdata1 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs1;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rdata2 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs2;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__r_imm 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_imm;
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mem_rdata 
        = ((0U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                           >> 0x1cU))) ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_lcm_data
            : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_dram_data);
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_oe 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe;
    vlTOPp->m_topsim__DOT__w_busy = (1U & ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy) 
                                             | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_busy)) 
                                            | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)) 
                                           | (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tx_ready))));
    if ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))) {
        vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl 
            = vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_ctrl;
        vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we 
            = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
               & (0x4000bU == (0xfffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                           >> 0xcU))));
        vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we 
            = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
               & (0x4000aU == (0xfffffU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr 
                                           >> 0xcU))));
    } else {
        vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl 
            = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))
                ? 2U : (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_ctrl));
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_we) 
                                                   & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy))) 
                                                  & ((8U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev)) 
                                                     | (0U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev))));
    vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_addr = 
        ((0xfffff000U & (vlTOPp->m_topsim__DOT__w_satp 
                         << 0xcU)) + (0xfffffffcU & 
                                      (vlTOPp->m_topsim__DOT__mmu__DOT__vpn1 
                                       << 2U)));
    vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_addr = 
        ((0xfffff000U & (vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte 
                         << 2U)) + (0xfffffffcU & (vlTOPp->m_topsim__DOT__mmu__DOT__vpn0 
                                                   << 2U)));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__RST_X;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_data_data = vlTOPp->m_topsim__DOT__w_data_data;
    vlTOPp->m_topsim__DOT__p__DOT__w_data_data = vlTOPp->m_topsim__DOT__w_data_data;
    vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata = vlTOPp->m_topsim__DOT__w_data_data;
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
                                          >> 7U)) | 
                                (4U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
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
                                    | (4U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
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
        = ((0xfffff800U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xcU)))) 
                           << 0xbU)) | ((0x400U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
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
        = ((0xffffff00U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xcU)))) 
                           << 8U)) | ((0xc0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                << 1U)) 
                                      | ((0x20U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                         | ((0x18U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 7U)) 
                                            | (6U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 2U))))));
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm3 
        = ((0xffffffe0U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xcU)))) 
                           << 5U)) | (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 2U)));
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm4 
        = ((0xfffffe00U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xcU)))) 
                           << 9U)) | ((0x180U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 4U)) 
                                      | ((0x40U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
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
                                 | (0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 2U))));
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 
        = ((0xc0U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                     << 4U)) | ((0x20U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                          >> 7U)) | 
                                (0x1cU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
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
        = ((0xffffffe0U & ((- (IData)((1U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xcU)))) 
                           << 5U)) | (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 2U)));
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_nzuimm 
        = ((0x20U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                     >> 7U)) | (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         >> 2U)));
    vlTOPp->m_topsim__DOT__p__DOT__w_cinsn = (3U != 
                                              (3U & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata = 
        ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_wdata
          : vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata);
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__p__DOT__w_alu_im_rslt;
    vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t3 = (0xfffffffdU 
                                                   & vlTOPp->m_topsim__DOT__p__DOT__w_sstatus_t2);
    vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t3 = (0xfffffff7U 
                                                   & vlTOPp->m_topsim__DOT__p__DOT__w_mstatus_t2);
    vlTOPp->m_topsim__DOT__p__DOT__w_irq_t = (vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask 
                                              & ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->m_topsim__DOT__p__DOT__w_interrupt_mask)));
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_oe 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_oe;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_oe 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_oe;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_hit = ((
                                                   ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe)) 
                                                   | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread) 
                                                      & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_r_oe))) 
                                                  | ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iswrite) 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_data_w_oe)));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_data 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_arg;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_wmtimecmp = vlTOPp->m_topsim__DOT__w_wmtimecmp;
    vlTOPp->m_topsim__DOT__p__DOT__w_wmtimecmp = vlTOPp->m_topsim__DOT__w_wmtimecmp;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr_t 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr 
        = (0xfffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_addr);
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr_t 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_addr;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr 
        = (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_addr);
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_d 
        = ((3U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode))
            ? vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_mem_rdata
            : vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_proc_busy = vlTOPp->m_topsim__DOT__w_busy;
    vlTOPp->m_topsim__DOT__p__DOT__w_busy = vlTOPp->m_topsim__DOT__w_busy;
    vlTOPp->m_topsim__DOT__w_led = (0xffffU & (((((IData)(vlTOPp->m_topsim__DOT__w_busy) 
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
    vlTOPp->m_topsim__DOT__p__DOT__w_if_state = ((1U 
                                                  & ((~ 
                                                      ((1U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)) 
                                                       | (2U 
                                                          == (IData)(vlTOPp->m_topsim__DOT__p__DOT__state)))) 
                                                     | (0xffffffffU 
                                                        != vlTOPp->m_topsim__DOT__w_pagefault)))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((((0U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)) 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nalign4)) 
                                                      & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))
                                                      ? 
                                                     ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_ir16_v)
                                                       ? 3U
                                                       : 1U)
                                                      : 
                                                     (((1U 
                                                        == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)) 
                                                       & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))
                                                       ? 2U
                                                       : 
                                                      (((2U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state)) 
                                                        & (~ (IData)(vlTOPp->m_topsim__DOT__w_busy)))
                                                        ? 3U
                                                        : (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_if_state))))));
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
                         | ((0U != (0x20000U & vlTOPp->m_topsim__DOT__p__DOT__mstatus)) 
                            & (0U != (0x1800U & vlTOPp->m_topsim__DOT__p__DOT__w_mod))))) {
                        vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush = 1U;
                    }
                } else {
                    if (vlTOPp->m_topsim__DOT__p__DOT__r_op_CSR_SSTA) {
                        if (((0U != (0xe0000U & vlTOPp->m_topsim__DOT__p__DOT__w_mod)) 
                             | ((0U != (0x20000U & vlTOPp->m_topsim__DOT__p__DOT__mstatus)) 
                                & (0U != (0x1800U & vlTOPp->m_topsim__DOT__p__DOT__w_mod))))) {
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t 
        = ((IData)(vlTOPp->m_topsim__DOT__w_init_done)
            ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl)
            : 2U);
    vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t = 
        ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_we) 
           | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we)) 
          | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_imag_we)) 
         & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_waddr = 
        (((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_xwr)) 
          & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__L1_success))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_addr
          : vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_addr);
    vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__RST_X 
        = vlTOPp->m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__RST_X;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_in2 
        = vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata;
    vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2 
        = vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata;
    vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_data = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_LOAD)
                                                   ? vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata
                                                   : 
                                                  (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO) 
                                                    & (~ (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_AMO_SC)))
                                                    ? vlTOPp->m_topsim__DOT__p__DOT__r_mem_rdata
                                                    : 
                                                   (((IData)(vlTOPp->m_topsim__DOT__p__DOT__r_op_SYS) 
                                                     & (0U 
                                                        != (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct3)))
                                                     ? vlTOPp->m_topsim__DOT__p__DOT__r_rcsr
                                                     : vlTOPp->m_topsim__DOT__p__DOT__r_wb_data)));
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_shamt 
        = (0x1fU & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm);
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_shamt 
        = (0x1fU & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_nzuimm);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
        = ((1U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
            ? 0U : ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_init_state))
                     ? vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata
                     : vlTOPp->m_topsim__DOT__mmu__DOT__w_pl_init_data));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_req = (
                                                   ((0U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                                                    & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we)) 
                                                   & (0x50U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq = (
                                                   (0x64U 
                                                    == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq2
                                                    : vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq1);
    vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq_oe 
        = (((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
            & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_we)) 
           & ((0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr)) 
              | (0x50U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__disk__DOT__w_addr))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_req = (
                                                   (((0U 
                                                      == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
                                                     & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we)) 
                                                    & (0x50U 
                                                       == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))) 
                                                   & (1U 
                                                      == vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_wdata));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req)
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq1
                                                    : 
                                                   ((0x64U 
                                                     == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr))
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq2
                                                     : vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oirq1));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq_oe 
        = (((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode)) 
            & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_we)) 
           & (0x64U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_addr)));
    vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_wdata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_d;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_led = vlTOPp->m_topsim__DOT__w_led;
    vlTOPp->m_topsim__DOT__w_tlb_flush = vlTOPp->m_topsim__DOT__p__DOT__r_tlb_flush;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_ctrl 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_we 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t;
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_ctrl 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t)
            ? (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_ctrl_t)
            : 2U);
    vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_pte_addr 
        = ((0U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
            ? vlTOPp->m_topsim__DOT__mmu__DOT__L1_pte_addr
            : ((2U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                ? vlTOPp->m_topsim__DOT__mmu__DOT__L0_pte_addr
                : ((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_pw_state))
                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_pte_waddr
                    : 0U)));
    vlTOPp->m_topsim__DOT__p__DOT__w_alu_a_rslt = (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       ((vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                         > vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)
                                                         ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                         : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       ((vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                         < vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)
                                                         ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                         : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       (VL_GTS_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2)
                                                         ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                         : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       (VL_LTS_III(1,32,32, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin1, vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2)
                                                         ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                         : vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                        & vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                        | vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                        ^ vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->m_topsim__DOT__p__DOT__r_funct5))
                                                        ? vlTOPp->m_topsim__DOT__p__DOT__r_rrs2
                                                        : 
                                                       (vlTOPp->m_topsim__DOT__p__DOT__r_rrs2 
                                                        + vlTOPp->m_topsim__DOT__p__DOT__w_mem_rdata))))));
    vlTOPp->m_topsim__DOT__p__DOT__regs__DOT__w_wdata 
        = vlTOPp->m_topsim__DOT__p__DOT__w_wb_r_data;
    if (((((((((0U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                 << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 0xdU)))) 
               | (1U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                   << 3U)) | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))) 
              | (2U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                  << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))) 
             | (3U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                 << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                  >> 0xdU))))) 
            | (5U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 >> 0xdU))))) 
           | (6U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                               << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) 
          | (7U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                              << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))) 
         | (8U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                             << 3U)) | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                              >> 0xdU)))))) {
        vlTOPp->m_topsim__DOT__p__DOT__w_ir_t = ((0U 
                                                  == 
                                                  ((0x18U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         >> 0xdU))))
                                                  ? 
                                                 (0x10013U 
                                                  | ((0xfff00000U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_nzuimm 
                                                         << 0x14U)) 
                                                     | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd) 
                                                        << 7U)))
                                                  : 
                                                 ((1U 
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
                                     << 3U)) | (7U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU)))) 
                   | (0xaU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU))))) 
                  | (0xbU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                        << 3U)) | (7U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                      >> 0xdU))))) 
                 | (0xdU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                       << 3U)) | (7U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     >> 0xdU))))) 
                | (0xeU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      << 3U)) | (7U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                    >> 0xdU))))) 
               | (0xfU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                     << 3U)) | (7U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   >> 0xdU))))) 
              | (0xcU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                    << 3U)) | (7U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) 
             | (0x10U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                    << 3U)) | (7U & 
                                               (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU)))))) {
            vlTOPp->m_topsim__DOT__p__DOT__w_ir_t = 
                ((9U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                   << 3U)) | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))
                  ? (0xefU | ((0x80000000U & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                              << 0xbU)) 
                              | ((0x7fe00000U & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                                 << 0x14U)) 
                                 | ((0x100000U & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 
                                                  << 9U)) 
                                    | (0xff000U & vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1)))))
                  : ((0xaU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU)))) ? 
                     (0x13U | ((0xfff00000U & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm3 
                                               << 0x14U)) 
                               | (0xf80U & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org)))
                      : ((0xbU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU))))
                          ? ((2U == (0x1fU & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                              >> 7U)))
                              ? (0x10113U | (0xfff00000U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm4 
                                                << 0x14U)))
                              : (0x37U | ((0xfffff000U 
                                           & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm 
                                              << 0xcU)) 
                                          | (0xf80U 
                                             & vlTOPp->m_topsim__DOT__p__DOT__w_ir_org))))
                          : ((0xdU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                       | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))
                              ? (0x6fU | ((0x80000000U 
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
                              : ((0xeU == ((0x18U & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                           | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))
                                  ? (0x63U | ((0x80000000U 
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
                                  : ((0xfU == ((0x18U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     >> 0xdU))))
                                      ? (0x1063U | 
                                         ((0x80000000U 
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
                                      : ((0xcU == (
                                                   (0x18U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         >> 0xdU))))
                                          ? ((2U & (IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct1))
                                              ? ((1U 
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
                                              : ((1U 
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
                                          : (0x1013U 
                                             | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_shamt) 
                                                 << 0x14U) 
                                                | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                    << 0xfU) 
                                                   | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                                      << 7U)))))))))));
        } else {
            if (((((((((0x11U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                  | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                           >> 0xdU)))) 
                       | (0x12U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                              << 3U)) 
                                    | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             >> 0xdU))))) 
                      | (0x13U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU))))) 
                     | (0x15U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                  | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                           >> 0xdU))))) 
                    | (0x16U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                           << 3U)) 
                                 | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                          >> 0xdU))))) 
                   | (0x17U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                          << 3U)) | 
                                (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                       >> 0xdU))))) 
                  | (0x14U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU))))) 
                 | (0x18U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                        << 3U)) | (7U 
                                                   & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                      >> 0xdU)))))) {
                vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                    = ((0x11U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            << 3U)) 
                                  | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                           >> 0xdU))))
                        ? (0x13007U | ((0xfff00000U 
                                        & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm1 
                                           << 0x14U)) 
                                       | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                          << 7U))) : 
                       ((0x12U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU))))
                         ? (0x12003U | ((0xfff00000U 
                                         & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 
                                            << 0x14U)) 
                                        | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                           << 7U)))
                         : ((0x13U == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                       | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))
                             ? (0x12007U | ((0xfff00000U 
                                             & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 
                                                << 0x14U)) 
                                            | ((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd) 
                                               << 7U)))
                             : ((0x15U == ((0x18U & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                           | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))
                                 ? (0x13027U | ((0xfe000000U 
                                                 & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm3 
                                                    << 0x14U)) 
                                                | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                    << 0x14U) 
                                                   | (0xf80U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm3 
                                                         << 7U)))))
                                 : ((0x16U == ((0x18U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     >> 0xdU))))
                                     ? (0x12023U | 
                                        ((0xfe000000U 
                                          & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                             << 0x14U)) 
                                         | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                             << 0x14U) 
                                            | (0xf80U 
                                               & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                  << 7U)))))
                                     : ((0x17U == (
                                                   (0x18U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         >> 0xdU))))
                                         ? (0x12027U 
                                            | ((0xfe000000U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                   << 0x14U)) 
                                               | (((IData)(vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2) 
                                                   << 0x14U) 
                                                  | (0xf80U 
                                                     & (vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 
                                                        << 7U)))))
                                         : ((0x14U 
                                             == ((0x18U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       >> 0xdU))))
                                             ? ((0U 
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
                                         << 3U)) | 
                               (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                      >> 0xdU))))) {
                    vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                        = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                } else {
                    if ((0x1aU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                   | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                            >> 0xdU))))) {
                        vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                            = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                    } else {
                        if ((0x1bU == ((0x18U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                 << 3U)) 
                                       | (7U & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                >> 0xdU))))) {
                            vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                        } else {
                            if ((0x1cU == ((0x18U & 
                                            (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                             << 3U)) 
                                           | (7U & 
                                              (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                               >> 0xdU))))) {
                                vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                    = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                            } else {
                                if ((0x1dU == ((0x18U 
                                                & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                   << 3U)) 
                                               | (7U 
                                                  & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                     >> 0xdU))))) {
                                    vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                        = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                } else {
                                    if ((0x1eU == (
                                                   (0x18U 
                                                    & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlTOPp->m_topsim__DOT__p__DOT__w_ir_org 
                                                         >> 0xdU))))) {
                                        vlTOPp->m_topsim__DOT__p__DOT__w_ir_t 
                                            = vlTOPp->m_topsim__DOT__p__DOT__w_ir_org;
                                    } else {
                                        if ((0x1fU 
                                             == ((0x18U 
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
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_wdata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req)
                                                    ? vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq
                                                    : 
                                                   ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isdisk)
                                                     ? vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq
                                                     : vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq));
    vlTOPp->m_topsim__DOT__mmu__DOT__console__DOT__w_oeirq 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq_oe;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe 
        = (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_cons_irq_oe) 
            | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_disk_irq_oe)) 
           | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_key_req));
    vlTOPp->m_topsim__DOT__p__DOT__w_tlb_flush = vlTOPp->m_topsim__DOT__w_tlb_flush;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush = vlTOPp->m_topsim__DOT__w_tlb_flush;
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
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr = 
        ((0U != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
          ? vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr
          : (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
              & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy)))
              ? vlTOPp->m_topsim__DOT__mmu__DOT__w_insn_paddr
              : ((1U & ((3U == vlTOPp->m_topsim__DOT__w_priv) 
                        | (~ (vlTOPp->m_topsim__DOT__w_satp 
                              >> 0x1fU)))) ? vlTOPp->m_topsim__DOT__w_data_addr
                  : (((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_acs) 
                      & (~ (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_hit)))
                      ? vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_pte_addr
                      : vlTOPp->m_topsim__DOT__mmu__DOT__w_mem_paddr))));
    vlTOPp->m_topsim__DOT__p__DOT__ALU_A__DOT__r_rslt 
        = vlTOPp->m_topsim__DOT__p__DOT__w_alu_a_rslt;
    vlTOPp->m_topsim__DOT__p__DOT__decomp0__DOT__r_iw 
        = vlTOPp->m_topsim__DOT__p__DOT__w_ir_t;
    vlTOPp->m_topsim__DOT__p__DOT__w_nop = (((0x53U 
                                              == (0x7fU 
                                                  & vlTOPp->m_topsim__DOT__p__DOT__w_ir_t)) 
                                             | (7U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->m_topsim__DOT__p__DOT__w_ir_t))) 
                                            | (0x27U 
                                               == (0x7fU 
                                                   & vlTOPp->m_topsim__DOT__p__DOT__w_ir_t)));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_wdata 
        = vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__w_wdata;
    vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_pending_irq_nxt 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq_oe)
            ? vlTOPp->m_topsim__DOT__mmu__DOT__w_virt_irq
            : vlTOPp->m_topsim__DOT__mmu__DOT__plic_pending_irq);
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_flush 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_flush 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush;
    vlTOPp->m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_flush 
        = vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_flush;
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
                          ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                             << 0x10U)) 
                             | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
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
                          ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                             << 0x10U)) 
                             | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
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
                          ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                             << 0x10U)) 
                             | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
                          : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t)) 
                    >> 8U));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data1 
        = (0xffU & ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                     ? ((0xff000000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                        << 0x18U)) 
                        | ((0xff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                         << 0x10U)) 
                           | ((0xff00U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                          << 8U)) | 
                              (0xffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))))
                     : ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl)))
                         ? ((0xffff0000U & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t 
                                            << 0x10U)) 
                            | (0xffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t))
                         : vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_wdata_t)));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_aces = 
        (((8U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                          >> 0x1cU))) | (0U == (0xfU 
                                                & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                                                   >> 0x1cU)))) 
         | (9U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                           >> 0x1cU))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr_t 
        = ((9U == (0xfU & (vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr 
                           >> 0x1cU))) ? ((IData)(0x4000000U) 
                                          + (0x3ffffffU 
                                             & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr))
            : (0x3ffffffU & vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_addr));
    vlTOPp->m_topsim__DOT__p__DOT__w_ir = ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_nop)
                                            ? 0x13U
                                            : ((IData)(vlTOPp->m_topsim__DOT__p__DOT__w_cinsn)
                                                ? vlTOPp->m_topsim__DOT__p__DOT__w_ir_t
                                                : vlTOPp->m_topsim__DOT__p__DOT__w_ir_org));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_mask = 
        (vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_pending_irq_nxt 
         & (~ vlTOPp->m_topsim__DOT__mmu__DOT__plic_served_irq));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_le = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_busy)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_aces)
                                                    ? 
                                                   (1U 
                                                    & ((0U 
                                                        != (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_mc_mode))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_aces)) 
                                                        & (0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlTOPp->m_topsim__DOT__mmu__DOT__w_mc_addr 
                                                               >> 0x1cU))))
                                                        : 
                                                       ((1U 
                                                         & ((3U 
                                                             == vlTOPp->m_topsim__DOT__w_priv) 
                                                            | (~ 
                                                               (vlTOPp->m_topsim__DOT__w_satp 
                                                                >> 0x1fU))))
                                                         ? 
                                                        ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_iscode) 
                                                         | (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_isread))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__r_tlb_use) 
                                                              >> 1U)))
                                                          ? 1U
                                                          : 
                                                         ((((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_tlb_busy) 
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
                          ? ((IData)(1U) << (vlTOPp->m_topsim__DOT__w_data_wdata 
                                             - (IData)(1U)))
                          : 0U)))));
    vlTOPp->m_topsim__DOT__mmu__DOT__w_plic_aces = 
        (((5U == (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dev)) 
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
                        >> 1U)))) | ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                     & (0U == (3U & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE2 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
           & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
               | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                  & (~ (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                        >> 1U)))) | ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                     & (1U == (3U & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE3 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
           & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
               | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                  & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                     >> 1U))) | ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                 & (2U == (3U & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
    vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE4 
        = ((IData)(vlTOPp->m_topsim__DOT__mmu__DOT__w_dram_we_t) 
           & (((2U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
               | ((1U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                  & (vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr 
                     >> 1U))) | ((0U == (3U & (IData)(vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl))) 
                                 & (3U == (3U & vlTOPp->m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr)))));
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

void Vm_topsim::_eval_initial(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_eval_initial\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

void Vm_topsim::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::final\n"); );
    // Variables
    Vm_topsim__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vm_topsim::_eval_settle(Vm_topsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_eval_settle\n"); );
    Vm_topsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vm_topsim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_topsim::_ctor_var_reset\n"); );
    // Body
    CLK = 0;
    RST_X = 0;
    m_topsim__DOT__CLK = 0;
    m_topsim__DOT__RST_X = 0;
    m_topsim__DOT__w_halt = 0;
    m_topsim__DOT__w_finish = 0;
    m_topsim__DOT__w_insn_data = 0;
    m_topsim__DOT__w_insn_addr = 0;
    m_topsim__DOT__w_data_data = 0;
    m_topsim__DOT__w_data_wdata = 0;
    m_topsim__DOT__w_data_addr = 0;
    m_topsim__DOT__w_data_we = 0;
    m_topsim__DOT__w_data_ctrl = 0;
    m_topsim__DOT__w_priv = 0;
    m_topsim__DOT__w_satp = 0;
    m_topsim__DOT__w_mstatus = 0;
    m_topsim__DOT__w_mtime = 0;
    m_topsim__DOT__w_mtimecmp = 0;
    m_topsim__DOT__w_wmtimecmp = 0;
    m_topsim__DOT__w_clint_we = 0;
    m_topsim__DOT__w_mip = 0;
    m_topsim__DOT__w_wmip = 0;
    m_topsim__DOT__w_plic_we = 0;
    m_topsim__DOT__w_busy = 0;
    m_topsim__DOT__w_pagefault = 0;
    m_topsim__DOT__w_tlb_req = 0;
    m_topsim__DOT__w_tlb_flush = 0;
    m_topsim__DOT__w_txd = 0;
    m_topsim__DOT__w_rxd = 0;
    m_topsim__DOT__w_init_done = 0;
    m_topsim__DOT__w_init_stage = 0;
    m_topsim__DOT__CORE_RST_X = 0;
    m_topsim__DOT__ddr2_dq = 0;
    m_topsim__DOT__ddr2_dqs_n = 0;
    m_topsim__DOT__ddr2_dqs_p = 0;
    m_topsim__DOT__ddr2_addr = 0;
    m_topsim__DOT__ddr2_ba = 0;
    m_topsim__DOT__ddr2_ras_n = 0;
    m_topsim__DOT__ddr2_cas_n = 0;
    m_topsim__DOT__ddr2_we_n = 0;
    m_topsim__DOT__ddr2_ck_p = 0;
    m_topsim__DOT__ddr2_ck_n = 0;
    m_topsim__DOT__ddr2_cke = 0;
    m_topsim__DOT__ddr2_cs_n = 0;
    m_topsim__DOT__ddr2_dm = 0;
    m_topsim__DOT__ddr2_odt = 0;
    m_topsim__DOT__w_uart_data = 0;
    m_topsim__DOT__w_uart_we = 0;
    m_topsim__DOT__w_led = 0;
    m_topsim__DOT__r_uart_busy = 0;
    m_topsim__DOT__r_uart_count = 0;
    m_topsim__DOT__r_uart_cycle = 0;
    m_topsim__DOT__r_uart_data = 0;
    m_topsim__DOT__r_finish = 0;
    m_topsim__DOT__i = 0;
    m_topsim__DOT__j = 0;
    for (int __Vi0=0; __Vi0<67108864; ++__Vi0) {
        m_topsim__DOT__mem_bbl[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        m_topsim__DOT__mem_mc[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<67108864; ++__Vi0) {
        m_topsim__DOT__mem_disk[__Vi0] = 0;
    }
    m_topsim__DOT__fp = 0;
    m_topsim__DOT__r_cnt = 0;
    m_topsim__DOT__init_txd = 0;
    m_topsim__DOT__tx_ready = 0;
    m_topsim__DOT__uartdata = 0;
    m_topsim__DOT__uartwe = 0;
    m_topsim__DOT__imemaddr = 0;
    m_topsim__DOT__mmu__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__w_insn_addr = 0;
    m_topsim__DOT__mmu__DOT__w_data_addr = 0;
    m_topsim__DOT__mmu__DOT__w_data_wdata = 0;
    m_topsim__DOT__mmu__DOT__w_data_we = 0;
    m_topsim__DOT__mmu__DOT__w_data_ctrl = 0;
    m_topsim__DOT__mmu__DOT__w_insn_data = 0;
    m_topsim__DOT__mmu__DOT__w_data_data = 0;
    m_topsim__DOT__mmu__DOT__r_finish = 0;
    m_topsim__DOT__mmu__DOT__w_priv = 0;
    m_topsim__DOT__mmu__DOT__w_satp = 0;
    m_topsim__DOT__mmu__DOT__w_mstatus = 0;
    m_topsim__DOT__mmu__DOT__w_mtime = 0;
    m_topsim__DOT__mmu__DOT__w_mtimecmp = 0;
    m_topsim__DOT__mmu__DOT__w_wmtimecmp = 0;
    m_topsim__DOT__mmu__DOT__w_clint_we = 0;
    m_topsim__DOT__mmu__DOT__w_mip = 0;
    m_topsim__DOT__mmu__DOT__w_wmip = 0;
    m_topsim__DOT__mmu__DOT__w_plic_we = 0;
    m_topsim__DOT__mmu__DOT__w_proc_busy = 0;
    m_topsim__DOT__mmu__DOT__w_pagefault = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_req = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_flush = 0;
    m_topsim__DOT__mmu__DOT__w_txd = 0;
    m_topsim__DOT__mmu__DOT__w_rxd = 0;
    m_topsim__DOT__mmu__DOT__w_init_done = 0;
    m_topsim__DOT__mmu__DOT__mig_clk = 0;
    m_topsim__DOT__mmu__DOT__mig_rst_x = 0;
    m_topsim__DOT__mmu__DOT__ddr2_dq = 0;
    m_topsim__DOT__mmu__DOT__ddr2_dqs_n = 0;
    m_topsim__DOT__mmu__DOT__ddr2_dqs_p = 0;
    m_topsim__DOT__mmu__DOT__ddr2_addr = 0;
    m_topsim__DOT__mmu__DOT__ddr2_ba = 0;
    m_topsim__DOT__mmu__DOT__ddr2_ras_n = 0;
    m_topsim__DOT__mmu__DOT__ddr2_cas_n = 0;
    m_topsim__DOT__mmu__DOT__ddr2_we_n = 0;
    m_topsim__DOT__mmu__DOT__ddr2_ck_p = 0;
    m_topsim__DOT__mmu__DOT__ddr2_ck_n = 0;
    m_topsim__DOT__mmu__DOT__ddr2_cke = 0;
    m_topsim__DOT__mmu__DOT__ddr2_cs_n = 0;
    m_topsim__DOT__mmu__DOT__ddr2_dm = 0;
    m_topsim__DOT__mmu__DOT__ddr2_odt = 0;
    m_topsim__DOT__mmu__DOT__o_clk = 0;
    m_topsim__DOT__mmu__DOT__o_rst_x = 0;
    m_topsim__DOT__mmu__DOT__w_uart_data = 0;
    m_topsim__DOT__mmu__DOT__w_uart_we = 0;
    m_topsim__DOT__mmu__DOT__w_led = 0;
    m_topsim__DOT__mmu__DOT__w_init_stage = 0;
    m_topsim__DOT__mmu__DOT__w_checksum = 0;
    m_topsim__DOT__mmu__DOT__w_debug_btnd = 0;
    m_topsim__DOT__mmu__DOT__physical_addr = 0;
    m_topsim__DOT__mmu__DOT__page_walk_fail = 0;
    m_topsim__DOT__mmu__DOT__r_pw_state = 0;
    m_topsim__DOT__mmu__DOT__L1_pte = 0;
    m_topsim__DOT__mmu__DOT__L0_pte = 0;
    m_topsim__DOT__mmu__DOT__r_dev = 0;
    m_topsim__DOT__mmu__DOT__r_virt = 0;
    m_topsim__DOT__mmu__DOT__r_tohost = 0;
    m_topsim__DOT__mmu__DOT__plic_served_irq = 0;
    m_topsim__DOT__mmu__DOT__plic_pending_irq = 0;
    m_topsim__DOT__mmu__DOT__r_plic_odata = 0;
    m_topsim__DOT__mmu__DOT__r_clint_odata = 0;
    m_topsim__DOT__mmu__DOT__r_mc_mode = 0;
    m_topsim__DOT__mmu__DOT__r_mc_qnum = 0;
    m_topsim__DOT__mmu__DOT__r_mc_qsel = 0;
    m_topsim__DOT__mmu__DOT__r_mc_done = 0;
    m_topsim__DOT__mmu__DOT__r_consf_head = 0;
    m_topsim__DOT__mmu__DOT__r_consf_tail = 0;
    m_topsim__DOT__mmu__DOT__r_consf_cnts = 0;
    m_topsim__DOT__mmu__DOT__r_consf_en = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__cons_fifo[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__w_dram_odata = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_busy = 0;
    m_topsim__DOT__mmu__DOT__w_dram_busy = 0;
    m_topsim__DOT__mmu__DOT__w_mc_addr = 0;
    m_topsim__DOT__mmu__DOT__w_mc_wdata = 0;
    m_topsim__DOT__mmu__DOT__w_mc_we = 0;
    m_topsim__DOT__mmu__DOT__w_mc_ctrl = 0;
    m_topsim__DOT__mmu__DOT__w_mc_aces = 0;
    m_topsim__DOT__mmu__DOT__w_mem_wdata = 0;
    m_topsim__DOT__mmu__DOT__w_mem_we = 0;
    m_topsim__DOT__mmu__DOT__w_iscode = 0;
    m_topsim__DOT__mmu__DOT__w_isread = 0;
    m_topsim__DOT__mmu__DOT__w_iswrite = 0;
    m_topsim__DOT__mmu__DOT__v_addr = 0;
    m_topsim__DOT__mmu__DOT__vpn1 = 0;
    m_topsim__DOT__mmu__DOT__L1_pte_addr = 0;
    m_topsim__DOT__mmu__DOT__L1_xwr = 0;
    m_topsim__DOT__mmu__DOT__L1_paddr = 0;
    m_topsim__DOT__mmu__DOT__L1_p_addr = 0;
    m_topsim__DOT__mmu__DOT__L1_write = 0;
    m_topsim__DOT__mmu__DOT__L1_success = 0;
    m_topsim__DOT__mmu__DOT__vpn0 = 0;
    m_topsim__DOT__mmu__DOT__L0_pte_addr = 0;
    m_topsim__DOT__mmu__DOT__L0_xwr = 0;
    m_topsim__DOT__mmu__DOT__L0_paddr = 0;
    m_topsim__DOT__mmu__DOT__L0_p_addr = 0;
    m_topsim__DOT__mmu__DOT__L0_write = 0;
    m_topsim__DOT__mmu__DOT__L0_success = 0;
    m_topsim__DOT__mmu__DOT__L1_pte_write = 0;
    m_topsim__DOT__mmu__DOT__L0_pte_write = 0;
    m_topsim__DOT__mmu__DOT__w_pte_we = 0;
    m_topsim__DOT__mmu__DOT__w_pte_waddr = 0;
    m_topsim__DOT__mmu__DOT__w_pte_wdata = 0;
    m_topsim__DOT__mmu__DOT__r_tlb_addr = 0;
    m_topsim__DOT__mmu__DOT__r_tlb_use = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_inst_r_addr = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_data_r_addr = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_data_w_addr = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_inst_r_oe = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_data_r_oe = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_data_w_oe = 0;
    m_topsim__DOT__mmu__DOT__w_use_tlb = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_hit = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_inst_r_we = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_data_r_we = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_data_w_we = 0;
    m_topsim__DOT__mmu__DOT__w_tlb_wdata = 0;
    m_topsim__DOT__mmu__DOT__r_tlb_pte_addr = 0;
    m_topsim__DOT__mmu__DOT__r_tlb_acs = 0;
    m_topsim__DOT__mmu__DOT__w_insn_paddr = 0;
    m_topsim__DOT__mmu__DOT__w_mem_paddr = 0;
    m_topsim__DOT__mmu__DOT__w_mem_ctrl = 0;
    m_topsim__DOT__mmu__DOT__w_dev = 0;
    m_topsim__DOT__mmu__DOT__w_virt = 0;
    m_topsim__DOT__mmu__DOT__w_offset = 0;
    m_topsim__DOT__mmu__DOT__w_dram_wdata = 0;
    m_topsim__DOT__mmu__DOT__w_dram_we = 0;
    m_topsim__DOT__mmu__DOT__w_dram_addr = 0;
    m_topsim__DOT__mmu__DOT__w_dram_ctrl = 0;
    m_topsim__DOT__mmu__DOT__w_dram_aces = 0;
    m_topsim__DOT__mmu__DOT__w_dram_le = 0;
    m_topsim__DOT__mmu__DOT__w_cons_we = 0;
    m_topsim__DOT__mmu__DOT__w_cons_data = 0;
    m_topsim__DOT__mmu__DOT__w_cons_addr = 0;
    m_topsim__DOT__mmu__DOT__w_cons_req = 0;
    m_topsim__DOT__mmu__DOT__w_cons_qnum = 0;
    m_topsim__DOT__mmu__DOT__w_cons_qsel = 0;
    m_topsim__DOT__mmu__DOT__w_disk_we = 0;
    m_topsim__DOT__mmu__DOT__w_disk_data = 0;
    m_topsim__DOT__mmu__DOT__w_disk_addr = 0;
    m_topsim__DOT__mmu__DOT__w_disk_req = 0;
    m_topsim__DOT__mmu__DOT__w_disk_qnum = 0;
    m_topsim__DOT__mmu__DOT__w_disk_qsel = 0;
    m_topsim__DOT__mmu__DOT__w_imag_we = 0;
    m_topsim__DOT__mmu__DOT__r_data_data = 0;
    m_topsim__DOT__mmu__DOT__w_key_we = 0;
    m_topsim__DOT__mmu__DOT__w_key_data = 0;
    m_topsim__DOT__mmu__DOT__w_key_req = 0;
    m_topsim__DOT__mmu__DOT__r_key_we = 0;
    m_topsim__DOT__mmu__DOT__r_key_data = 0;
    m_topsim__DOT__mmu__DOT__r_mc_arg = 0;
    m_topsim__DOT__mmu__DOT__w_mc_arg = 0;
    m_topsim__DOT__mmu__DOT__w_cons_irq = 0;
    m_topsim__DOT__mmu__DOT__w_disk_irq = 0;
    m_topsim__DOT__mmu__DOT__w_cons_irq_oe = 0;
    m_topsim__DOT__mmu__DOT__w_disk_irq_oe = 0;
    m_topsim__DOT__mmu__DOT__w_isdisk = 0;
    m_topsim__DOT__mmu__DOT__w_virt_irq = 0;
    m_topsim__DOT__mmu__DOT__w_virt_irq_oe = 0;
    m_topsim__DOT__mmu__DOT__w_plic_pending_irq_nxt = 0;
    m_topsim__DOT__mmu__DOT__w_plic_mask = 0;
    m_topsim__DOT__mmu__DOT__w_plic_served_irq_nxt = 0;
    m_topsim__DOT__mmu__DOT__w_plic_aces = 0;
    m_topsim__DOT__mmu__DOT__r_wmip = 0;
    m_topsim__DOT__mmu__DOT__r_plic_we = 0;
    m_topsim__DOT__mmu__DOT__r_plic_pending_irq_t = 0;
    m_topsim__DOT__mmu__DOT__r_plic_served_irq_t = 0;
    m_topsim__DOT__mmu__DOT__r_virt_irq_oe_t = 0;
    m_topsim__DOT__mmu__DOT__r_plic_aces_t = 0;
    m_topsim__DOT__mmu__DOT__w_plic_mask_nxt = 0;
    m_topsim__DOT__mmu__DOT__w_mc_busy = 0;
    m_topsim__DOT__mmu__DOT__w_tx_ready = 0;
    m_topsim__DOT__mmu__DOT__r_uart_we = 0;
    m_topsim__DOT__mmu__DOT__r_uart_data = 0;
    m_topsim__DOT__mmu__DOT__w_cons_txd = 0;
    m_topsim__DOT__mmu__DOT__w_pl_init_addr = 0;
    m_topsim__DOT__mmu__DOT__w_pl_init_data = 0;
    m_topsim__DOT__mmu__DOT__w_pl_init_we = 0;
    m_topsim__DOT__mmu__DOT__w_pl_init_done = 0;
    m_topsim__DOT__mmu__DOT__r_checksum = 0;
    m_topsim__DOT__mmu__DOT__w_debug_txd = 0;
    m_topsim__DOT__mmu__DOT__w_rec_done = 0;
    m_topsim__DOT__mmu__DOT__r_bbl_done = 0;
    m_topsim__DOT__mmu__DOT__r_disk_done = 0;
    m_topsim__DOT__mmu__DOT__r_dtree_done = 0;
    m_topsim__DOT__mmu__DOT__r_initaddr = 0;
    m_topsim__DOT__mmu__DOT__r_initaddr2 = 0;
    m_topsim__DOT__mmu__DOT__r_initaddr3 = 0;
    m_topsim__DOT__mmu__DOT__w_zero_we = 0;
    m_topsim__DOT__mmu__DOT__r_zero_we = 0;
    m_topsim__DOT__mmu__DOT__r_zero_done = 0;
    m_topsim__DOT__mmu__DOT__r_zeroaddr = 0;
    m_topsim__DOT__mmu__DOT__r_init_state = 0;
    m_topsim__DOT__mmu__DOT__calib_done = 0;
    m_topsim__DOT__mmu__DOT__w_dram_addr_t = 0;
    m_topsim__DOT__mmu__DOT__w_dram_addr_t2 = 0;
    m_topsim__DOT__mmu__DOT__w_dram_wdata_t = 0;
    m_topsim__DOT__mmu__DOT__w_dram_we_t = 0;
    m_topsim__DOT__mmu__DOT__w_dram_ctrl_t = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_flush = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_waddr = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_raddr = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_idata = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_odata = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_oe = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__r_valid = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__mem[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_ridx = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_rtag = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_tagmatch = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_widx = 0;
    m_topsim__DOT__mmu__DOT__TLB_inst_r__DOT__w_wtag = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_flush = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_waddr = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_raddr = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_idata = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_odata = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_oe = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__r_valid = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__mem[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_ridx = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_rtag = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_tagmatch = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_widx = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_r__DOT__w_wtag = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_flush = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_waddr = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_raddr = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_idata = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_odata = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_oe = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__r_valid = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__mem[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_ridx = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_rtag = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_tagmatch = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_widx = 0;
    m_topsim__DOT__mmu__DOT__TLB_data_w__DOT__w_wtag = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_stall = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_addr = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_data = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_wdata = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_mmuwe = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_ctrl = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_req = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_pc = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_state = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_ir = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_opcode = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_funct3 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_funct7 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_rd = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_imm = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_rrs2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_rslt = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_dram_data = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mem_rdata = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_d = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_we = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_ir = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_op = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_rd = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_rs1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_rs2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_funct3 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_funct7 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_funct12 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_imm = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_rrs2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_reg_w = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_mic_addr = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_i_rslt = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_b_rslt = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_alu_fn7 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_in2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_jmp_pc = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_tkn = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_lcm_data = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_addr = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_insn_data = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_ctrl = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__r_addr2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_wdata_t = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_t2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lb = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lbu = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lh = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_odata2_lhu = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sb = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sh = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_we_sw = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__w_mic_lcmwe = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__w_inst = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__r_imm = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__opcode = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_I = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_S = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_B = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_U = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_J = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__imm_gen0__DOT__imm_C = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rs1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rs2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rdata1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_rdata2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__rd = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__w_wdata = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__mem[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__mc__DOT__regs__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_in1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_in2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_funct3 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_funct7 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__r_rslt = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_sin2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_I__DOT__w_shamt = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_in1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_in2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_funct3 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__r_rslt = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__ALU_B__DOT__w_sin2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_addr1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_addr2 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__w_idata = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__r_odata1 = 0;
    m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__r_odata2 = 0;
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__mc__DOT__lm_mc__DOT__mem[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__console__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_addr_t = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_idata = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_iirq = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_odata = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_oirq = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_oeirq = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_mode = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_req = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_qnum = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_qsel = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_keyreq = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_addr = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__MagicValue = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__Version = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__DeviceID = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__VendorID = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__DeviceFeatures = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__QueueNumMax = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__ConfigGeneration = 0;
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__console__DOT__Config[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__console__DOT__DeviceFeaturesSel = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__DriverFeatures = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__DriverFeaturesSel = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__InterruptStatus = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__InterruptAcknowledge = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__Status = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__QueueSel = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__QueueNum = 0;
    for (int __Vi0=0; __Vi0<18; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__console__DOT__Queue[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__console__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__r_rdata = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_irqmask = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_oirq1 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT__w_oirq2 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound2 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound3 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound4 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound5 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound6 = 0;
    m_topsim__DOT__mmu__DOT__console__DOT____Vlvbound7 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_addr_t = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_idata = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_iirq = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_odata = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_oeirq = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_mode = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_req = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_qnum = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_qsel = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_addr = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__MagicValue = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__Version = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__DeviceID = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__VendorID = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__DeviceFeatures = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__QueueNumMax = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__ConfigGeneration = 0;
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__disk__DOT__Config[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__disk__DOT__DeviceFeaturesSel = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__DriverFeatures = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__DriverFeaturesSel = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__InterruptStatus = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__InterruptAcknowledge = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__Status = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__QueueSel = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__QueueNum = 0;
    for (int __Vi0=0; __Vi0<36; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__disk__DOT__Queue[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__disk__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__rdata = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_irqmask = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq1 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT__w_oirq2 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound2 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound3 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound4 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound5 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound6 = 0;
    m_topsim__DOT__mmu__DOT__disk__DOT____Vlvbound7 = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__WE = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__DATA = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__TXD = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__READY = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__cmd = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__waitnum = 0;
    m_topsim__DOT__mmu__DOT__UartTx0__DOT__cnt = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__RXD = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__ADDR = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__DATA = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__WE = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__DONE = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__KEY_WE = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__KEY_DATA = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__waddr = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__SER_EN = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__SER_DATA = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__RXD = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__DATA = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__EN = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start = 0;
    m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__waitcnt = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_btn = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_txd = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_key_we = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_key_data = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_mtime = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_rec_done = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff[__Vi0] = 0;
    }
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartwe = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_uartdata = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_rec_done = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_tx_ready = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__w_busy = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__w_data = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_txd = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_ready = 0;
    VL_ZERO_RESET_W(185, m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cmd);
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_waitnum = 0;
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_cnt = 0;
    VL_ZERO_RESET_W(184, m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_dataout);
    m_topsim__DOT__mmu__DOT__debug_KEY__DOT__UartTx0__DOT__r_we = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_addr = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_le = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_wdata = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_ctrl = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_stall = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_mtime = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__r_cache_state = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__r_addr = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__r_ctrl = 0;
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__r_odata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__e_test = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__e_data = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__e_cnt = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__e_hit = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_stall = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_le = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_ctrl = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_addr = 0;
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__w_dram_odata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_oe = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_clr = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_we = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_addr = 0;
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_idata);
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__w_cache_odata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__w_odata_t = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__RST_X = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_flush = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_clr = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_addr = 0;
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idata);
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_odata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_oe = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_idx = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__r_tag = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_idx = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_tag = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwe = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_maddr = 0;
    VL_ZERO_RESET_W(144, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mwdata);
    VL_ZERO_RESET_W(144, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_modata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mvalid = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_midx = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mtag = 0;
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__w_mdata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_addr = 0;
    VL_ZERO_RESET_W(144, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__w_idata);
    VL_ZERO_RESET_W(144, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__r_odata);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        VL_ZERO_RESET_W(144, m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__mem[__Vi0]);
    }
    m_topsim__DOT__mmu__DOT__idbmem__DOT__cache__DOT__mem__DOT__i = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__CLK = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_addr = 0;
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_odata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_we = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_le = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_wdata = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_ctrl = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_stall = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_ctrl = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_addr = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_cnt = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_le = 0;
    for (int __Vi0=0; __Vi0<134217728; ++__Vi0) {
        m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__mem[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(128, m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__r_odata);
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_mctrl = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data1 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data2 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data3 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_data4 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__o_data1 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__o_data2 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__o_data3 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__o_data4 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE1 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE2 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE3 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__WE4 = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tw = 0;
    m_topsim__DOT__mmu__DOT__idbmem__DOT__idbmem__DOT__w_maddr_tr = 0;
    m_topsim__DOT__p__DOT__CLK = 0;
    m_topsim__DOT__p__DOT__RST_X = 0;
    m_topsim__DOT__p__DOT__w_stall = 0;
    m_topsim__DOT__p__DOT__w_insn_data = 0;
    m_topsim__DOT__p__DOT__w_data_data = 0;
    m_topsim__DOT__p__DOT__w_wmtimecmp = 0;
    m_topsim__DOT__p__DOT__w_clint_we = 0;
    m_topsim__DOT__p__DOT__w_wmip = 0;
    m_topsim__DOT__p__DOT__w_plic_we = 0;
    m_topsim__DOT__p__DOT__w_busy = 0;
    m_topsim__DOT__p__DOT__w_pagefault = 0;
    m_topsim__DOT__p__DOT__r_halt = 0;
    m_topsim__DOT__p__DOT__w_core_odata = 0;
    m_topsim__DOT__p__DOT__w_data_wdata = 0;
    m_topsim__DOT__p__DOT__w_insn_addr = 0;
    m_topsim__DOT__p__DOT__w_data_ctrl = 0;
    m_topsim__DOT__p__DOT__w_data_addr = 0;
    m_topsim__DOT__p__DOT__w_mtime = 0;
    m_topsim__DOT__p__DOT__w_mtimecmp = 0;
    m_topsim__DOT__p__DOT__w_priv = 0;
    m_topsim__DOT__p__DOT__w_satp = 0;
    m_topsim__DOT__p__DOT__w_mstatus = 0;
    m_topsim__DOT__p__DOT__w_mip = 0;
    m_topsim__DOT__p__DOT__w_core_pc = 0;
    m_topsim__DOT__p__DOT__w_core_ir = 0;
    m_topsim__DOT__p__DOT__w_init_stage = 0;
    m_topsim__DOT__p__DOT__w_tlb_req = 0;
    m_topsim__DOT__p__DOT__w_data_we = 0;
    m_topsim__DOT__p__DOT__w_tlb_flush = 0;
    m_topsim__DOT__p__DOT__state = 0;
    m_topsim__DOT__p__DOT__pc = 0;
    m_topsim__DOT__p__DOT__mstatus = 0;
    m_topsim__DOT__p__DOT__mtvec = 0;
    m_topsim__DOT__p__DOT__mscratch = 0;
    m_topsim__DOT__p__DOT__mepc = 0;
    m_topsim__DOT__p__DOT__mcause = 0;
    m_topsim__DOT__p__DOT__mtval = 0;
    m_topsim__DOT__p__DOT__mhartid = 0;
    m_topsim__DOT__p__DOT__misa = 0;
    m_topsim__DOT__p__DOT__mie = 0;
    m_topsim__DOT__p__DOT__mip = 0;
    m_topsim__DOT__p__DOT__medeleg = 0;
    m_topsim__DOT__p__DOT__mideleg = 0;
    m_topsim__DOT__p__DOT__mcounteren = 0;
    m_topsim__DOT__p__DOT__stvec = 0;
    m_topsim__DOT__p__DOT__sscratch = 0;
    m_topsim__DOT__p__DOT__sepc = 0;
    m_topsim__DOT__p__DOT__scause = 0;
    m_topsim__DOT__p__DOT__stval = 0;
    m_topsim__DOT__p__DOT__satp = 0;
    m_topsim__DOT__p__DOT__scounteren = 0;
    m_topsim__DOT__p__DOT__load_res = 0;
    m_topsim__DOT__p__DOT__reserved = 0;
    m_topsim__DOT__p__DOT__priv = 0;
    m_topsim__DOT__p__DOT__mtime = 0;
    m_topsim__DOT__p__DOT__mtimecmp = 0;
    m_topsim__DOT__p__DOT__pending_tval = 0;
    m_topsim__DOT__p__DOT__pending_exception = 0;
    m_topsim__DOT__p__DOT__r_cpc = 0;
    m_topsim__DOT__p__DOT__r_ir_org = 0;
    m_topsim__DOT__p__DOT__r_cinsn = 0;
    m_topsim__DOT__p__DOT__r_ir = 0;
    m_topsim__DOT__p__DOT__r_ir16 = 0;
    m_topsim__DOT__p__DOT__r_ir16_v = 0;
    m_topsim__DOT__p__DOT__r_opcode = 0;
    m_topsim__DOT__p__DOT__r_rd = 0;
    m_topsim__DOT__p__DOT__r_rs1 = 0;
    m_topsim__DOT__p__DOT__r_rs2 = 0;
    m_topsim__DOT__p__DOT__r_funct3 = 0;
    m_topsim__DOT__p__DOT__r_funct5 = 0;
    m_topsim__DOT__p__DOT__r_funct7 = 0;
    m_topsim__DOT__p__DOT__r_funct12 = 0;
    m_topsim__DOT__p__DOT__r_imm = 0;
    m_topsim__DOT__p__DOT__r_op_AMO_SC = 0;
    m_topsim__DOT__p__DOT__r_op_AMO_LR = 0;
    m_topsim__DOT__p__DOT__r_op_LOAD = 0;
    m_topsim__DOT__p__DOT__r_op_STORE = 0;
    m_topsim__DOT__p__DOT__r_op_AMO = 0;
    m_topsim__DOT__p__DOT__r_op_SYS = 0;
    m_topsim__DOT__p__DOT__r_op_ECALL = 0;
    m_topsim__DOT__p__DOT__r_op_SRET = 0;
    m_topsim__DOT__p__DOT__r_op_MRET = 0;
    m_topsim__DOT__p__DOT__r_op_CSR_MSTA = 0;
    m_topsim__DOT__p__DOT__r_op_CSR_SSTA = 0;
    m_topsim__DOT__p__DOT__r_rrs1 = 0;
    m_topsim__DOT__p__DOT__r_rrs2 = 0;
    m_topsim__DOT__p__DOT__r_rcsr = 0;
    m_topsim__DOT__p__DOT__r_alu_in2 = 0;
    m_topsim__DOT__p__DOT__r_alu_f7 = 0;
    m_topsim__DOT__p__DOT__r_tkn = 0;
    m_topsim__DOT__p__DOT__r_jmp_pc = 0;
    m_topsim__DOT__p__DOT__r_mem_addr = 0;
    m_topsim__DOT__p__DOT__r_wb_data = 0;
    m_topsim__DOT__p__DOT__r_wb_data_csr = 0;
    m_topsim__DOT__p__DOT__r_mem_rdata = 0;
    m_topsim__DOT__p__DOT__r_atom_wdata = 0;
    m_topsim__DOT__p__DOT__e_icount = 0;
    m_topsim__DOT__p__DOT__r_if_done = 0;
    m_topsim__DOT__p__DOT__r_if_irl = 0;
    m_topsim__DOT__p__DOT__r_rcsr_t = 0;
    m_topsim__DOT__p__DOT__irq_num = 0;
    m_topsim__DOT__p__DOT__r_if_state = 0;
    m_topsim__DOT__p__DOT__w_wb_r_data = 0;
    m_topsim__DOT__p__DOT__w_wb_r_enable = 0;
    m_topsim__DOT__p__DOT__w_interrupt_mask = 0;
    m_topsim__DOT__p__DOT__w_irq_t = 0;
    m_topsim__DOT__p__DOT__w_state = 0;
    m_topsim__DOT__p__DOT__r_init_stage = 0;
    m_topsim__DOT__p__DOT__w_vadr1 = 0;
    m_topsim__DOT__p__DOT__w_vadr2 = 0;
    m_topsim__DOT__p__DOT__w_nalign4 = 0;
    m_topsim__DOT__p__DOT__w_usestate = 0;
    m_topsim__DOT__p__DOT__w_if_state = 0;
    m_topsim__DOT__p__DOT__r_insn_addr = 0;
    m_topsim__DOT__p__DOT__w_ir_org = 0;
    m_topsim__DOT__p__DOT__w_cinsn = 0;
    m_topsim__DOT__p__DOT__w_ir_t = 0;
    m_topsim__DOT__p__DOT__w_nop = 0;
    m_topsim__DOT__p__DOT__w_ir = 0;
    m_topsim__DOT__p__DOT__w_imm = 0;
    m_topsim__DOT__p__DOT__w_rs1 = 0;
    m_topsim__DOT__p__DOT__w_rs2 = 0;
    m_topsim__DOT__p__DOT__w_rrs1 = 0;
    m_topsim__DOT__p__DOT__w_rrs2 = 0;
    m_topsim__DOT__p__DOT__w_regfile_we = 0;
    m_topsim__DOT__p__DOT__w_op_priv = 0;
    m_topsim__DOT__p__DOT__w_op_csr = 0;
    m_topsim__DOT__p__DOT__w_sin1 = 0;
    m_topsim__DOT__p__DOT__w_sin2 = 0;
    m_topsim__DOT__p__DOT__w_mul_SS = 0;
    m_topsim__DOT__p__DOT__w_mul_SU = 0;
    m_topsim__DOT__p__DOT__w_mul_UU = 0;
    m_topsim__DOT__p__DOT__w_mem_addr = 0;
    m_topsim__DOT__p__DOT__r_mul_SS = 0;
    m_topsim__DOT__p__DOT__r_mul_SU = 0;
    m_topsim__DOT__p__DOT__r_mul_UU = 0;
    m_topsim__DOT__p__DOT__w_alu_im_rslt = 0;
    m_topsim__DOT__p__DOT__w_alu_b_rslt = 0;
    m_topsim__DOT__p__DOT__w_alu_c_rslt = 0;
    m_topsim__DOT__p__DOT__w_ex1 = 0;
    m_topsim__DOT__p__DOT__w_ex1_busy = 0;
    m_topsim__DOT__p__DOT__r_data_ctrl = 0;
    m_topsim__DOT__p__DOT__w_mem_rdata = 0;
    m_topsim__DOT__p__DOT__w_alu_a_rslt = 0;
    m_topsim__DOT__p__DOT__r_data_wdata = 0;
    m_topsim__DOT__p__DOT__r_mstatus_t = 0;
    m_topsim__DOT__p__DOT__r_priv_t = 0;
    m_topsim__DOT__p__DOT__w_mstatus_nxt = 0;
    m_topsim__DOT__p__DOT__pending_interrupts = 0;
    m_topsim__DOT__p__DOT__enable_interrupts = 0;
    m_topsim__DOT__p__DOT__cause = 0;
    m_topsim__DOT__p__DOT__w_deleg = 0;
    m_topsim__DOT__p__DOT__w_csr_addr = 0;
    m_topsim__DOT__p__DOT__w_sstatus_t = 0;
    m_topsim__DOT__p__DOT__w_mstatus_t = 0;
    m_topsim__DOT__p__DOT__w_csr_we = 0;
    m_topsim__DOT__p__DOT__w_sstatus = 0;
    m_topsim__DOT__p__DOT__w_sstatus_t1 = 0;
    m_topsim__DOT__p__DOT__w_sstatus_t2 = 0;
    m_topsim__DOT__p__DOT__w_sstatus_t3 = 0;
    m_topsim__DOT__p__DOT__w_mstatus_t1 = 0;
    m_topsim__DOT__p__DOT__w_mstatus_t2 = 0;
    m_topsim__DOT__p__DOT__w_mstatus_t3 = 0;
    m_topsim__DOT__p__DOT__r_tlb_flush = 0;
    m_topsim__DOT__p__DOT__w_data_t = 0;
    m_topsim__DOT__p__DOT__w_mod = 0;
    m_topsim__DOT__p__DOT__w_com = 0;
    m_topsim__DOT__p__DOT__r_com = 0;
    m_topsim__DOT__p__DOT__w_d_we_t = 0;
    m_topsim__DOT__p__DOT__w_d_en_t = 0;
    m_topsim__DOT__p__DOT__r_data_we = 0;
    m_topsim__DOT__p__DOT__r_data_en = 0;
    m_topsim__DOT__p__DOT__r_tlb_req = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_ic = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__r_iw = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs1 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rs2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_rd = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm1 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_uimm2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c0_nzuimm = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct1 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_funct2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs1 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rs2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_rd = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_nzimm = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_shamt = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm1 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm3 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c1_imm4 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rs2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_rd = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm1 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm2 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm3 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_uimm4 = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_nzuimm = 0;
    m_topsim__DOT__p__DOT__decomp0__DOT__w_c2_shamt = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__w_inst = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__r_imm = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__opcode = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_I = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_S = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_B = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_U = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_J = 0;
    m_topsim__DOT__p__DOT__imm_gen0__DOT__imm_C = 0;
    m_topsim__DOT__p__DOT__regs__DOT__CLK = 0;
    m_topsim__DOT__p__DOT__regs__DOT__w_rs1 = 0;
    m_topsim__DOT__p__DOT__regs__DOT__w_rs2 = 0;
    m_topsim__DOT__p__DOT__regs__DOT__w_rdata1 = 0;
    m_topsim__DOT__p__DOT__regs__DOT__w_rdata2 = 0;
    m_topsim__DOT__p__DOT__regs__DOT__w_we = 0;
    m_topsim__DOT__p__DOT__regs__DOT__rd = 0;
    m_topsim__DOT__p__DOT__regs__DOT__w_wdata = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        m_topsim__DOT__p__DOT__regs__DOT__mem[__Vi0] = 0;
    }
    m_topsim__DOT__p__DOT__regs__DOT__i = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__CLK = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__RST_X = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_le = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in1 = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_in2 = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_funct3 = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_funct7 = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__r_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_busy = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_SS = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_SU = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_mul_UU = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__r_div_first = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin1 = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_sin2 = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_shamt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_busy = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_divunit_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_req = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_init = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_signed = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__w_div_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__CLK = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__RST_X = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_init = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_signed = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_dividend = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_divisor = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_busy = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_dividend = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_sign_divisor = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_dividend = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_divisor = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__w_uint_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__CLK = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__RST_X = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_init = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_dividend = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_divisor = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_busy = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_divisor = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__r_count = 0;
    m_topsim__DOT__p__DOT__ALU_IM__DOT__divunit__DOT__divcore__DOT__w_differ = 0;
    m_topsim__DOT__p__DOT__ALU_B__DOT__w_in1 = 0;
    m_topsim__DOT__p__DOT__ALU_B__DOT__w_in2 = 0;
    m_topsim__DOT__p__DOT__ALU_B__DOT__w_funct3 = 0;
    m_topsim__DOT__p__DOT__ALU_B__DOT__r_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin1 = 0;
    m_topsim__DOT__p__DOT__ALU_B__DOT__w_sin2 = 0;
    m_topsim__DOT__p__DOT__ALU_C__DOT__w_rcsr = 0;
    m_topsim__DOT__p__DOT__ALU_C__DOT__w_rrs1 = 0;
    m_topsim__DOT__p__DOT__ALU_C__DOT__w_imm = 0;
    m_topsim__DOT__p__DOT__ALU_C__DOT__w_funct3 = 0;
    m_topsim__DOT__p__DOT__ALU_C__DOT__r_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_A__DOT__w_in1 = 0;
    m_topsim__DOT__p__DOT__ALU_A__DOT__w_in2 = 0;
    m_topsim__DOT__p__DOT__ALU_A__DOT__w_funct5 = 0;
    m_topsim__DOT__p__DOT__ALU_A__DOT__r_rslt = 0;
    m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin1 = 0;
    m_topsim__DOT__p__DOT__ALU_A__DOT__w_sin2 = 0;
    m_topsim__DOT__UartTx_init__DOT__CLK = 0;
    m_topsim__DOT__UartTx_init__DOT__RST_X = 0;
    m_topsim__DOT__UartTx_init__DOT__WE = 0;
    m_topsim__DOT__UartTx_init__DOT__DATA = 0;
    m_topsim__DOT__UartTx_init__DOT__TXD = 0;
    m_topsim__DOT__UartTx_init__DOT__READY = 0;
    m_topsim__DOT__UartTx_init__DOT__cmd = 0;
    m_topsim__DOT__UartTx_init__DOT__waitnum = 0;
    m_topsim__DOT__UartTx_init__DOT__cnt = 0;
    __Vdly__m_topsim__DOT__r_cnt = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__r_mc_mode = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__r_tohost = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_state = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__mc__DOT__r_pc = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__waddr = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__cnt_start = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__ploader__DOT__serc__DOT__stage = 0;
    __Vdlyvdim0__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 = 0;
    __Vdlyvval__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 = 0;
    __Vdlyvset__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__buff__v0 = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_waddr = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_raddr = 0;
    __Vdly__m_topsim__DOT__mmu__DOT__debug_KEY__DOT__r_state = 0;
    __Vdly__m_topsim__DOT__p__DOT__r_wb_data = 0;
    __Vdly__m_topsim__DOT__p__DOT__pc = 0;
    __Vdly__m_topsim__DOT__p__DOT__mtime = 0;
    __Vdly__m_topsim__DOT__p__DOT__priv = 0;
    __Vdly__m_topsim__DOT__tx_ready = 0;
}
