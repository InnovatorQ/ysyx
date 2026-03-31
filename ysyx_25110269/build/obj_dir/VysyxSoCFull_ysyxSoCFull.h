// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull_ysyxSoCASIC;
class VysyxSoCFull_sdram;


class VysyxSoCFull_ysyxSoCFull final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyxSoCASIC* asic;
    VysyxSoCFull_sdram* sdram0;
    VysyxSoCFull_sdram* sdram1;
    VysyxSoCFull_sdram* sdram2;
    VysyxSoCFull_sdram* sdram3;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__flash__ss;
    CData/*0:0*/ __Vcellinp__bitrev__ss;
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(externalPins_gpio_seg_0,7,0);
    VL_OUT8(externalPins_gpio_seg_1,7,0);
    VL_OUT8(externalPins_gpio_seg_2,7,0);
    VL_OUT8(externalPins_gpio_seg_3,7,0);
    VL_OUT8(externalPins_gpio_seg_4,7,0);
    VL_OUT8(externalPins_gpio_seg_5,7,0);
    VL_OUT8(externalPins_gpio_seg_6,7,0);
    VL_OUT8(externalPins_gpio_seg_7,7,0);
    VL_IN8(externalPins_ps2_clk,0,0);
    VL_IN8(externalPins_ps2_data,0,0);
    VL_OUT8(externalPins_vga_r,7,0);
    VL_OUT8(externalPins_vga_g,7,0);
    VL_OUT8(externalPins_vga_b,7,0);
    VL_OUT8(externalPins_vga_hsync,0,0);
    VL_OUT8(externalPins_vga_vsync,0,0);
    VL_OUT8(externalPins_vga_valid,0,0);
    VL_IN8(externalPins_uart_rx,0,0);
    VL_OUT8(externalPins_uart_tx,0,0);
    CData/*3:0*/ __PVT___dio_wire;
    CData/*2:0*/ __PVT__flash__DOT__state;
    CData/*7:0*/ __PVT__flash__DOT__counter;
    CData/*7:0*/ __PVT__flash__DOT__cmd;
    CData/*2:0*/ __PVT__bitrev__DOT__bit_cnt;
    CData/*0:0*/ __PVT__bitrev__DOT__rx_done;
    CData/*7:0*/ __PVT__bitrev__DOT__rx_shift_reg;
    CData/*7:0*/ __PVT__bitrev__DOT__tx_shift_reg;
    CData/*2:0*/ __PVT__psram__DOT__state;
    CData/*3:0*/ __PVT__psram__DOT__dio_r;
    CData/*7:0*/ __PVT__psram__DOT__mode;
    CData/*7:0*/ __PVT__psram__DOT__cmd_reg;
    CData/*7:0*/ __PVT__psram__DOT__bit_count;
    CData/*0:0*/ __PVT__psram__DOT__dio_oe;
    CData/*3:0*/ __PVT__psram__DOT__dio_out;
    CData/*0:0*/ __PVT__psram__DOT__qpi_mode;
    CData/*2:0*/ __Vdly__flash__DOT__state;
    CData/*7:0*/ __Vdly__flash__DOT__counter;
    CData/*7:0*/ __Vdly__flash__DOT__cmd;
    CData/*2:0*/ __Vdly__bitrev__DOT__bit_cnt;
    CData/*7:0*/ __Vdly__bitrev__DOT__rx_shift_reg;
    CData/*7:0*/ __Vdly__bitrev__DOT__tx_shift_reg;
    VL_OUT16(externalPins_gpio_out,15,0);
    VL_IN16(externalPins_gpio_in,15,0);
    IData/*31:0*/ __PVT___dq_wire;
    IData/*31:0*/ _dq_wire__strong__out8;
    IData/*31:0*/ _dq_wire__strong__out9;
    IData/*31:0*/ _dq_wire__strong__out10;
    IData/*31:0*/ _dq_wire__strong__out11;
    IData/*23:0*/ __PVT__flash__DOT__addr;
    IData/*31:0*/ __PVT__flash__DOT__data;
    IData/*31:0*/ __PVT__flash__DOT__rdata;
    IData/*31:0*/ __PVT__flash__DOT__data_bswap;
    IData/*23:0*/ __PVT__psram__DOT__addr_reg;
    IData/*23:0*/ __Vdly__flash__DOT__addr;
    IData/*31:0*/ __Vdly__flash__DOT__data;
    VlUnpacked<CData/*7:0*/, 16777216> __PVT__psram__DOT__memory;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyxSoCFull(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyxSoCFull();
    VL_UNCOPYABLE(VysyxSoCFull_ysyxSoCFull);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
