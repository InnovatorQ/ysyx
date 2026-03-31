// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VysyxSoCFull___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6571, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VysyxSoCFull___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ysyxSoCFull.asic.lpsram.mpsram.u0.mr_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ysyxSoCFull.asic.lpsram.mpsram.u0.mr_done)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ysyxSoCFull.asic.spi_sck or posedge ysyxSoCFull.__Vcellinp__flash__ss)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ysyxSoCFull.asic.spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ysyxSoCFull.asic.spi_sck or posedge ysyxSoCFull.__Vcellinp__bitrev__ss)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge ysyxSoCFull.asic.spi_sck or posedge ysyxSoCFull.__Vcellinp__bitrev__ss)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ysyxSoCFull.asic.psram_ce_n or posedge ysyxSoCFull.asic.psram_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge ysyxSoCFull.sdram0.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge ysyxSoCFull.sdram1.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge ysyxSoCFull.sdram2.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge ysyxSoCFull.sdram3.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.LSU.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.IFU.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.EXU.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.csr.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.WBU.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.IDU.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.icache.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.WBU.rf.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ysyxSoCFull.asic.lpsram.mpsram.u0.mr_done)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ysyxSoCFull.asic.spi_sck or posedge ysyxSoCFull.__Vcellinp__flash__ss)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ysyxSoCFull.asic.spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ysyxSoCFull.asic.spi_sck or posedge ysyxSoCFull.__Vcellinp__bitrev__ss)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge ysyxSoCFull.asic.spi_sck or posedge ysyxSoCFull.__Vcellinp__bitrev__ss)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ysyxSoCFull.asic.psram_ce_n or posedge ysyxSoCFull.asic.psram_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge ysyxSoCFull.sdram0.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge ysyxSoCFull.sdram1.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge ysyxSoCFull.sdram2.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge ysyxSoCFull.sdram3.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.LSU.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.IFU.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.EXU.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.csr.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.WBU.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.IDU.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.icache.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge ysyxSoCFull.asic.cpu.cpu.WBU.rf.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->externalPins_gpio_out = 0;
    vlSelf->externalPins_gpio_in = 0;
    vlSelf->externalPins_gpio_seg_0 = 0;
    vlSelf->externalPins_gpio_seg_1 = 0;
    vlSelf->externalPins_gpio_seg_2 = 0;
    vlSelf->externalPins_gpio_seg_3 = 0;
    vlSelf->externalPins_gpio_seg_4 = 0;
    vlSelf->externalPins_gpio_seg_5 = 0;
    vlSelf->externalPins_gpio_seg_6 = 0;
    vlSelf->externalPins_gpio_seg_7 = 0;
    vlSelf->externalPins_ps2_clk = 0;
    vlSelf->externalPins_ps2_data = 0;
    vlSelf->externalPins_vga_r = 0;
    vlSelf->externalPins_vga_g = 0;
    vlSelf->externalPins_vga_b = 0;
    vlSelf->externalPins_vga_hsync = 0;
    vlSelf->externalPins_vga_vsync = 0;
    vlSelf->externalPins_vga_valid = 0;
    vlSelf->externalPins_uart_rx = 0;
    vlSelf->externalPins_uart_tx = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done = 0;
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__flash__ss = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__bitrev__ss = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_ce_n = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_sck = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    vlSelf->__Vtrigrprev__TOP__reset = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram0__clk = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram1__clk = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram2__clk = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__sdram3__clk = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__csr__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__icache__clock = 0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__clock = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 19; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
