// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0(VysyxSoCFull_sdram* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0(VysyxSoCFull_ysyx_25110269_csr* vlSelf);
void VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0(VysyxSoCFull_ysyx_25110269_regfile* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__1(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__2(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__1(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
void VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__3(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram0));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram1));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram2));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram3));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IFU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
        VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
        VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr));
        VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
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
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck))) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__flash__ss) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__flash__ss))));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck)));
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck))) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__bitrev__ss))));
    vlSelf->__VactTriggered.at(4U) = (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck)) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull.__Vcellinp__bitrev__ss) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__bitrev__ss))));
    vlSelf->__VactTriggered.at(5U) = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_ce_n) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_ce_n))) 
                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_sck) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_sck))));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(7U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__VactTriggered.at(8U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram0__clk)));
    vlSelf->__VactTriggered.at(9U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram1__clk)));
    vlSelf->__VactTriggered.at(0xaU) = ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.clk) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram2__clk)));
    vlSelf->__VactTriggered.at(0xbU) = ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.clk) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram3__clk)));
    vlSelf->__VactTriggered.at(0xcU) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clock) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__clock)));
    vlSelf->__VactTriggered.at(0xdU) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU.clock) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__clock)));
    vlSelf->__VactTriggered.at(0xeU) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU.clock) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__clock)));
    vlSelf->__VactTriggered.at(0xfU) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU.clock) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__clock)));
    vlSelf->__VactTriggered.at(0x10U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr.clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__csr__clock)));
    vlSelf->__VactTriggered.at(0x11U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU.clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__clock)));
    vlSelf->__VactTriggered.at(0x12U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU.clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__clock)));
    vlSelf->__VactTriggered.at(0x13U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache.clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__icache__clock)));
    vlSelf->__VactTriggered.at(0x14U) = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__clock)));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
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
    vlSelf->externalPins_vga_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
    vlSelf->externalPins_vga_b = (0xffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data);
    vlSelf->externalPins_vga_g = (0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                           >> 8U));
    vlSelf->externalPins_vga_r = (0xffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data 
                                           >> 0x10U));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
}

void VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269_EXU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0(VysyxSoCFull_ysyx_25110269_EXU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0(VysyxSoCFull_sdram* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_csr___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0(VysyxSoCFull_ysyx_25110269_csr* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__6(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269_regfile___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0(VysyxSoCFull_ysyx_25110269_regfile* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__7(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__12(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_CPU___nba_comb__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__2(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__12(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__13(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__6(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__7(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__8(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__9(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269_WBU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__10(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__11(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__12(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__6(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__13(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__7(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__14(VysyxSoCFull_ysyx_25110269* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__2(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__8(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__9(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__16(VysyxSoCFull_ysyx_25110269* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VysyxSoCFull_ysyx_25110269_IFU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VysyxSoCFull_ysyx_25110269_EXU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram0));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram1));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram2));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram3));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VysyxSoCFull_ysyx_25110269_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VysyxSoCFull_ysyx_25110269_csr___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7((&vlSymsp->TOP__ysyxSoCFull));
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram0));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram1));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram2));
        VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0((&vlSymsp->TOP__ysyxSoCFull__sdram3));
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VysyxSoCFull_ysyx_25110269_IDU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__6((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VysyxSoCFull_ysyx_25110269_regfile___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf));
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__10((&vlSymsp->TOP__ysyxSoCFull));
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__7((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(0xdU))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0xdU) | vlSelf->__VnbaTriggered.at(0xfU))) {
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__11((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__12((&vlSymsp->TOP__ysyxSoCFull));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        VysyxSoCFull_CPU___nba_comb__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (((((vlSelf->__VnbaTriggered.at(7U) | vlSelf->__VnbaTriggered.at(8U)) 
           | vlSelf->__VnbaTriggered.at(9U)) | vlSelf->__VnbaTriggered.at(0xaU)) 
         | vlSelf->__VnbaTriggered.at(0xbU))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x12U))) {
        VysyxSoCFull_ysyx_25110269_csr___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__csr__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__csr));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
    }
    if ((vlSelf->__VnbaTriggered.at(0x12U) | vlSelf->__VnbaTriggered.at(0x14U))) {
        VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf));
        VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VysyxSoCFull_ysyx_25110269___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__12((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((vlSelf->__VnbaTriggered.at(0xcU) | vlSelf->__VnbaTriggered.at(0xdU))) {
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__4((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__13((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(0xdU))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(6U)) 
         | vlSelf->__VnbaTriggered.at(7U))) {
        VysyxSoCFull_ysyxSoCASIC___act_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(0xdU))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        VysyxSoCFull_ysyx_25110269_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__5((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
    }
    if (((vlSelf->__VnbaTriggered.at(5U) | vlSelf->__VnbaTriggered.at(6U)) 
         | vlSelf->__VnbaTriggered.at(7U))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
    }
    if (((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(0xcU))) {
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__6((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((vlSelf->__VnbaTriggered.at(0xeU) | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__7((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((vlSelf->__VnbaTriggered.at(0xcU) | vlSelf->__VnbaTriggered.at(0xeU))) {
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__8((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (((vlSelf->__VnbaTriggered.at(0xcU) | vlSelf->__VnbaTriggered.at(0xdU)) 
         | vlSelf->__VnbaTriggered.at(0xeU))) {
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__9((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
          | vlSelf->__VnbaTriggered.at(0xdU)) | vlSelf->__VnbaTriggered.at(0x11U))) {
        VysyxSoCFull_ysyx_25110269_WBU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU));
    }
    if (((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
             | vlSelf->__VnbaTriggered.at(0xdU)) | vlSelf->__VnbaTriggered.at(0xfU)) 
           | vlSelf->__VnbaTriggered.at(0x11U)) | vlSelf->__VnbaTriggered.at(0x12U)) 
         | vlSelf->__VnbaTriggered.at(0x14U))) {
        VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__10((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_EXU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__EXU));
        VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
    }
    if (((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
           | vlSelf->__VnbaTriggered.at(0xcU)) | vlSelf->__VnbaTriggered.at(0xeU)) 
         | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__icache));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__11((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((((vlSelf->__VnbaTriggered.at(0xcU) | vlSelf->__VnbaTriggered.at(0xdU)) 
          | vlSelf->__VnbaTriggered.at(0xeU)) | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__12((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__6((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
            | vlSelf->__VnbaTriggered.at(0xcU)) | vlSelf->__VnbaTriggered.at(0xdU)) 
          | vlSelf->__VnbaTriggered.at(0xeU)) | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__13((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__7((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
              | vlSelf->__VnbaTriggered.at(0xdU)) | vlSelf->__VnbaTriggered.at(0xfU)) 
            | vlSelf->__VnbaTriggered.at(0x10U)) | vlSelf->__VnbaTriggered.at(0x11U)) 
          | vlSelf->__VnbaTriggered.at(0x12U)) | vlSelf->__VnbaTriggered.at(0x14U))) {
        VysyxSoCFull_ysyx_25110269_IDU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__14((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (((((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
               | vlSelf->__VnbaTriggered.at(0xdU)) 
              | vlSelf->__VnbaTriggered.at(0xeU)) | vlSelf->__VnbaTriggered.at(0xfU)) 
            | vlSelf->__VnbaTriggered.at(0x10U)) | vlSelf->__VnbaTriggered.at(0x11U)) 
          | vlSelf->__VnbaTriggered.at(0x12U)) | vlSelf->__VnbaTriggered.at(0x14U))) {
        VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
    }
    if ((((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
              | vlSelf->__VnbaTriggered.at(0xdU)) | vlSelf->__VnbaTriggered.at(0xeU)) 
            | vlSelf->__VnbaTriggered.at(0xfU)) | vlSelf->__VnbaTriggered.at(0x11U)) 
          | vlSelf->__VnbaTriggered.at(0x12U)) | vlSelf->__VnbaTriggered.at(0x14U))) {
        VysyxSoCFull_ysyx_25110269_IFU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU));
        VysyxSoCFull_ysyx_25110269___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyx_25110269_IDU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU));
    }
    if (((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(0xcU)) 
           | vlSelf->__VnbaTriggered.at(0xdU)) | vlSelf->__VnbaTriggered.at(0xeU)) 
         | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__8((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
            | vlSelf->__VnbaTriggered.at(0xcU)) | vlSelf->__VnbaTriggered.at(0xdU)) 
          | vlSelf->__VnbaTriggered.at(0xeU)) | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__9((&vlSymsp->TOP__ysyxSoCFull__asic));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25110269___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__16((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if (((((((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
             | vlSelf->__VnbaTriggered.at(0xcU)) | vlSelf->__VnbaTriggered.at(0xdU)) 
           | vlSelf->__VnbaTriggered.at(0xeU)) | vlSelf->__VnbaTriggered.at(0xfU)) 
         | vlSelf->__VnbaTriggered.at(0x13U))) {
        VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU));
    }
}
