// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyxSoCFull.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___ctor_var_reset(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ctor_var_reset\n"); );
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
    vlSelf->__PVT___dio_wire = 0;
    vlSelf->__PVT___dq_wire = 0;
    vlSelf->__Vcellinp__flash__ss = 0;
    vlSelf->__Vcellinp__bitrev__ss = 0;
    vlSelf->_dq_wire__strong__out8 = 0;
    vlSelf->_dq_wire__strong__out9 = 0;
    vlSelf->_dq_wire__strong__out10 = 0;
    vlSelf->_dq_wire__strong__out11 = 0;
    vlSelf->__PVT__flash__DOT__state = 0;
    vlSelf->__PVT__flash__DOT__counter = 0;
    vlSelf->__PVT__flash__DOT__cmd = 0;
    vlSelf->__PVT__flash__DOT__addr = 0;
    vlSelf->__PVT__flash__DOT__data = 0;
    vlSelf->__PVT__flash__DOT__rdata = 0;
    vlSelf->__PVT__flash__DOT__data_bswap = 0;
    vlSelf->__PVT__bitrev__DOT__bit_cnt = 0;
    vlSelf->__PVT__bitrev__DOT__rx_done = 0;
    vlSelf->__PVT__bitrev__DOT__rx_shift_reg = 0;
    vlSelf->__PVT__bitrev__DOT__tx_shift_reg = 0;
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->__PVT__psram__DOT__memory[__Vi0] = 0;
    }
    vlSelf->__PVT__psram__DOT__state = 0;
    vlSelf->__PVT__psram__DOT__dio_r = 0;
    vlSelf->__PVT__psram__DOT__mode = 0;
    vlSelf->__PVT__psram__DOT__cmd_reg = 0;
    vlSelf->__PVT__psram__DOT__addr_reg = 0;
    vlSelf->__PVT__psram__DOT__bit_count = 0;
    vlSelf->__PVT__psram__DOT__dio_oe = 0;
    vlSelf->__PVT__psram__DOT__dio_out = 0;
    vlSelf->__PVT__psram__DOT__qpi_mode = 0;
    vlSelf->__Vdly__flash__DOT__state = 0;
    vlSelf->__Vdly__flash__DOT__counter = 0;
    vlSelf->__Vdly__flash__DOT__cmd = 0;
    vlSelf->__Vdly__flash__DOT__addr = 0;
    vlSelf->__Vdly__flash__DOT__data = 0;
    vlSelf->__Vdly__bitrev__DOT__bit_cnt = 0;
    vlSelf->__Vdly__bitrev__DOT__rx_shift_reg = 0;
    vlSelf->__Vdly__bitrev__DOT__tx_shift_reg = 0;
}
