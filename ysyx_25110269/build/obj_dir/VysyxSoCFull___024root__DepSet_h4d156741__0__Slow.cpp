// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    // Body
    VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic((&vlSymsp->TOP__ysyxSoCFull__asic));
    vlSelf->__Vm_traceActivity[0x12U] = 1U;
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull_CPU___eval_initial__TOP__ysyxSoCFull__asic__cpu(VysyxSoCFull_CPU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_25110269* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_LSU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__LSU(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__WBU(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__icache(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    // Body
    VysyxSoCFull_CPU___eval_initial__TOP__ysyxSoCFull__asic__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
    VysyxSoCFull_ysyx_25110269___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    VysyxSoCFull_ysyx_25110269_LSU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__LSU((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
    VysyxSoCFull_ysyx_25110269_WBU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__WBU((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
    VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__icache((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__flash__ss 
        = vlSymsp->TOP__ysyxSoCFull.__Vcellinp__flash__ss;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__bitrev__ss 
        = vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_ce_n 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_ce_n;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_sck 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_sck;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram0__clk 
        = vlSymsp->TOP__ysyxSoCFull__sdram0.clk;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram1__clk 
        = vlSymsp->TOP__ysyxSoCFull__sdram1.clk;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram2__clk 
        = vlSymsp->TOP__ysyxSoCFull__sdram2.clk;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram3__clk 
        = vlSymsp->TOP__ysyxSoCFull__sdram3.clk;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__csr__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__icache__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__clock 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.clock;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->externalPins_vga_vsync = (2U < (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt));
    vlSelf->externalPins_vga_hsync = (0x60U < (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt));
    vlSelf->externalPins_gpio_seg_7 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [7U];
    vlSelf->externalPins_gpio_seg_6 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [6U];
    vlSelf->externalPins_gpio_seg_5 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [5U];
    vlSelf->externalPins_gpio_seg_4 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [4U];
    vlSelf->externalPins_gpio_seg_3 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [3U];
    vlSelf->externalPins_gpio_seg_2 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [2U];
    vlSelf->externalPins_gpio_seg_1 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [1U];
    vlSelf->externalPins_gpio_seg_0 = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__segs
        [0U];
    vlSelf->externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__led;
}

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->externalPins_vga_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
    vlSelf->externalPins_vga_b = (0xffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data);
    vlSelf->externalPins_vga_g = (0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                           >> 8U));
    vlSelf->externalPins_vga_r = (0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                           >> 0x10U));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_CPU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0(VysyxSoCFull_sdram* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
void VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0(VysyxSoCFull_ysyx_25110269_csr* vlSelf);
void VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0(VysyxSoCFull_ysyx_25110269_regfile* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__1(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__2(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__1(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__3(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
        VysyxSoCFull_ysyx_25110269_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
        VysyxSoCFull_CPU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull___024root___stl_sequent__TOP__1(vlSelf);
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram0));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram1));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram2));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram3));
        VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
        VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr));
        VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf));
        VysyxSoCFull_ysyx_25110269___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_WBU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
        VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}
