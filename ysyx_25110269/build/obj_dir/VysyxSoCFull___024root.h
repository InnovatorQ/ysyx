// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL___024ROOT_H_
#define VERILATED_VYSYXSOCFULL___024ROOT_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull_ysyxSoCFull;
class VysyxSoCFull___024unit;


class VysyxSoCFull___024root final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyxSoCFull* ysyxSoCFull;
    VysyxSoCFull___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
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
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__spi_sck;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__flash__ss;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull____Vcellinp__bitrev__ss;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_ce_n;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic____PVT__psram_sck;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__sdram0__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__sdram1__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__sdram2__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__sdram3__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IFU__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__EXU__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__csr__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__IDU__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__icache__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__clock;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(externalPins_gpio_out,15,0);
    VL_IN16(externalPins_gpio_in,15,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 19> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<21> __VactTriggered;
    VlTriggerVec<21> __VnbaTriggered;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull___024root(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull___024root();
    VL_UNCOPYABLE(VysyxSoCFull___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
