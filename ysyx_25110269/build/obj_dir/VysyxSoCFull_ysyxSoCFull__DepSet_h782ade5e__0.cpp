// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__sdram0.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSymsp->TOP__ysyxSoCFull__sdram1.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSymsp->TOP__ysyxSoCFull__sdram2.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSymsp->TOP__ysyxSoCFull__sdram3.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSelf->_dq_wire__strong__out8 = ((0xffff0000U 
                                       & vlSelf->_dq_wire__strong__out8) 
                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en)
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out)
                                           : 0U) & 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en)
                                           ? 0xffffU
                                           : 0U)));
    vlSelf->_dq_wire__strong__out9 = ((0xffffU & vlSelf->_dq_wire__strong__out9) 
                                      | ((((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out)
                                            : 0U) & 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en)
                                            ? 0xffffU
                                            : 0U)) 
                                         << 0x10U));
    vlSelf->_dq_wire__strong__out10 = ((0xffff0000U 
                                        & vlSelf->_dq_wire__strong__out10) 
                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out)
                                            : 0U) & 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en)
                                            ? 0xffffU
                                            : 0U)));
    vlSelf->_dq_wire__strong__out11 = ((0xffffU & vlSelf->_dq_wire__strong__out11) 
                                       | ((((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en)
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out)
                                             : 0U) 
                                           & ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en)
                                               ? 0xffffU
                                               : 0U)) 
                                          << 0x10U));
    vlSelf->__PVT___dq_wire = (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                   ? 0U : 0xffffffffU) 
                                 & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                       ? 0U : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : 0xffffffffU)) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                        ? 0U : 0xffffffffU))) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                    ? 0U : 0xffffffffU)) 
                               | ((vlSelf->_dq_wire__strong__out8 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en)
                                       ? 0xffffU : 0U)) 
                                  | ((vlSelf->_dq_wire__strong__out9 
                                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en)
                                           ? 0xffffU
                                           : 0U) << 0x10U)) 
                                     | ((vlSelf->_dq_wire__strong__out10 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en)
                                             ? 0xffffU
                                             : 0U)) 
                                        | (vlSelf->_dq_wire__strong__out11 
                                           & (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en)
                                                ? 0xffffU
                                                : 0U) 
                                              << 0x10U))))));
    vlSymsp->TOP__ysyxSoCFull__sdram0.dq = (0xffffU 
                                            & vlSelf->__PVT___dq_wire);
    vlSymsp->TOP__ysyxSoCFull__sdram1.dq = (vlSelf->__PVT___dq_wire 
                                            >> 0x10U);
    vlSymsp->TOP__ysyxSoCFull__sdram2.dq = (0xffffU 
                                            & vlSelf->__PVT___dq_wire);
    vlSymsp->TOP__ysyxSoCFull__sdram3.dq = (vlSelf->__PVT___dq_wire 
                                            >> 0x10U);
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0\n"); );
    // Body
    vlSelf->__Vdly__bitrev__DOT__bit_cnt = vlSelf->__PVT__bitrev__DOT__bit_cnt;
    vlSelf->__Vdly__bitrev__DOT__rx_shift_reg = vlSelf->__PVT__bitrev__DOT__rx_shift_reg;
    vlSelf->__Vdly__bitrev__DOT__rx_shift_reg = ((IData)(vlSelf->__Vcellinp__bitrev__ss)
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi) 
                                                   << 7U) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelf->__PVT__bitrev__DOT__rx_shift_reg) 
                                                        >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1\n"); );
    // Body
    vlSelf->__Vdly__flash__DOT__counter = vlSelf->__PVT__flash__DOT__counter;
    vlSelf->__Vdly__flash__DOT__cmd = vlSelf->__PVT__flash__DOT__cmd;
    vlSelf->__Vdly__flash__DOT__state = vlSelf->__PVT__flash__DOT__state;
    vlSelf->__Vdly__flash__DOT__data = vlSelf->__PVT__flash__DOT__data;
    vlSelf->__Vdly__flash__DOT__addr = vlSelf->__PVT__flash__DOT__addr;
    if (vlSelf->__Vcellinp__flash__ss) {
        vlSelf->__Vdly__flash__DOT__counter = 0U;
        vlSelf->__Vdly__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__flash__DOT__state))) {
        vlSelf->__Vdly__flash__DOT__counter = (0xffU 
                                               & ((7U 
                                                   > (IData)(vlSelf->__PVT__flash__DOT__counter))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__flash__DOT__counter))
                                                   : 0U));
        vlSelf->__Vdly__flash__DOT__cmd = ((0xfeU & 
                                            ((IData)(vlSelf->__PVT__flash__DOT__cmd) 
                                             << 1U)) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
    } else {
        vlSelf->__Vdly__flash__DOT__counter = (0xffU 
                                               & ((1U 
                                                   == (IData)(vlSelf->__PVT__flash__DOT__state))
                                                   ? 
                                                  ((0x17U 
                                                    > (IData)(vlSelf->__PVT__flash__DOT__counter))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__flash__DOT__counter))
                                                    : 0U)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__flash__DOT__counter))));
    }
    if (vlSelf->__Vcellinp__flash__ss) {
        vlSelf->__Vdly__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__flash__DOT__state))) {
        vlSelf->__Vdly__flash__DOT__state = ((7U == (IData)(vlSelf->__PVT__flash__DOT__counter))
                                              ? 1U : (IData)(vlSelf->__PVT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->__PVT__flash__DOT__state))) {
        vlSelf->__Vdly__flash__DOT__state = ((3U != (IData)(vlSelf->__PVT__flash__DOT__cmd))
                                              ? 3U : 
                                             ((0x17U 
                                               == (IData)(vlSelf->__PVT__flash__DOT__counter))
                                               ? 2U
                                               : (IData)(vlSelf->__PVT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->__PVT__flash__DOT__state)))) {
        vlSelf->__Vdly__flash__DOT__state = vlSelf->__PVT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->__PVT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelf->__Vdly__flash__DOT__state = vlSelf->__PVT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->__Vcellinp__flash__ss) {
        vlSelf->__Vdly__flash__DOT__data = 0U;
        vlSelf->__Vdly__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelf->__PVT__flash__DOT__state))) {
            vlSelf->__Vdly__flash__DOT__data = (((0U 
                                                  == (IData)(vlSelf->__PVT__flash__DOT__counter))
                                                  ? vlSelf->__PVT__flash__DOT__data_bswap
                                                  : vlSelf->__PVT__flash__DOT__data) 
                                                << 1U);
        }
        if (((1U == (IData)(vlSelf->__PVT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->__PVT__flash__DOT__counter)))) {
            vlSelf->__Vdly__flash__DOT__addr = ((0xfffffeU 
                                                 & (vlSelf->__PVT__flash__DOT__addr 
                                                    << 1U)) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3\n"); );
    // Body
    vlSelf->_dq_wire__strong__out8 = ((0xffff0000U 
                                       & vlSelf->_dq_wire__strong__out8) 
                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en)
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out)
                                           : 0U) & 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en)
                                           ? 0xffffU
                                           : 0U)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4\n"); );
    // Body
    vlSelf->_dq_wire__strong__out9 = ((0xffffU & vlSelf->_dq_wire__strong__out9) 
                                      | ((((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out)
                                            : 0U) & 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en)
                                            ? 0xffffU
                                            : 0U)) 
                                         << 0x10U));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5\n"); );
    // Body
    vlSelf->_dq_wire__strong__out10 = ((0xffff0000U 
                                        & vlSelf->_dq_wire__strong__out10) 
                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out)
                                            : 0U) & 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en)
                                            ? 0xffffU
                                            : 0U)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6\n"); );
    // Body
    vlSelf->_dq_wire__strong__out11 = ((0xffffU & vlSelf->_dq_wire__strong__out11) 
                                       | ((((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en)
                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out)
                                             : 0U) 
                                           & ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en)
                                               ? 0xffffU
                                               : 0U)) 
                                          << 0x10U));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7\n"); );
    // Init
    CData/*2:0*/ __Vdly__psram__DOT__state;
    __Vdly__psram__DOT__state = 0;
    CData/*7:0*/ __Vdly__psram__DOT__bit_count;
    __Vdly__psram__DOT__bit_count = 0;
    CData/*3:0*/ __Vdly__psram__DOT__dio_r;
    __Vdly__psram__DOT__dio_r = 0;
    CData/*7:0*/ __Vdly__psram__DOT__mode;
    __Vdly__psram__DOT__mode = 0;
    IData/*23:0*/ __Vdlyvdim0__psram__DOT__memory__v0;
    __Vdlyvdim0__psram__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__psram__DOT__memory__v0;
    __Vdlyvval__psram__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__psram__DOT__memory__v0;
    __Vdlyvset__psram__DOT__memory__v0 = 0;
    IData/*23:0*/ __Vdlyvdim0__psram__DOT__memory__v1;
    __Vdlyvdim0__psram__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__psram__DOT__memory__v1;
    __Vdlyvval__psram__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__psram__DOT__memory__v1;
    __Vdlyvset__psram__DOT__memory__v1 = 0;
    IData/*23:0*/ __Vdlyvdim0__psram__DOT__memory__v2;
    __Vdlyvdim0__psram__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__psram__DOT__memory__v2;
    __Vdlyvval__psram__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__psram__DOT__memory__v2;
    __Vdlyvset__psram__DOT__memory__v2 = 0;
    IData/*23:0*/ __Vdlyvdim0__psram__DOT__memory__v3;
    __Vdlyvdim0__psram__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__psram__DOT__memory__v3;
    __Vdlyvval__psram__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__psram__DOT__memory__v3;
    __Vdlyvset__psram__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdly__psram__DOT__cmd_reg;
    __Vdly__psram__DOT__cmd_reg = 0;
    // Body
    __Vdly__psram__DOT__cmd_reg = vlSelf->__PVT__psram__DOT__cmd_reg;
    __Vdly__psram__DOT__mode = vlSelf->__PVT__psram__DOT__mode;
    __Vdly__psram__DOT__dio_r = vlSelf->__PVT__psram__DOT__dio_r;
    __Vdly__psram__DOT__bit_count = vlSelf->__PVT__psram__DOT__bit_count;
    __Vdly__psram__DOT__state = vlSelf->__PVT__psram__DOT__state;
    __Vdlyvset__psram__DOT__memory__v0 = 0U;
    __Vdlyvset__psram__DOT__memory__v1 = 0U;
    __Vdlyvset__psram__DOT__memory__v2 = 0U;
    __Vdlyvset__psram__DOT__memory__v3 = 0U;
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__psram_ce_n) {
        __Vdly__psram__DOT__state = 0U;
        __Vdly__psram__DOT__bit_count = 0U;
        vlSelf->__PVT__psram__DOT__dio_oe = 0U;
        __Vdly__psram__DOT__dio_r = 0U;
        __Vdly__psram__DOT__mode = 0U;
    } else if ((4U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
        if ((2U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
            if ((1U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
                __Vdly__psram__DOT__state = 1U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
            __Vdly__psram__DOT__bit_count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
            if ((1U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdlyvval__psram__DOT__memory__v0 
                    = (((IData)(vlSelf->__PVT__psram__DOT__dio_r) 
                        << 4U) | (IData)(vlSelf->__PVT___dio_wire));
                __Vdlyvset__psram__DOT__memory__v0 = 1U;
                __Vdlyvdim0__psram__DOT__memory__v0 
                    = vlSelf->__PVT__psram__DOT__addr_reg;
            } else if ((3U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdlyvval__psram__DOT__memory__v1 
                    = (((IData)(vlSelf->__PVT__psram__DOT__dio_r) 
                        << 4U) | (IData)(vlSelf->__PVT___dio_wire));
                __Vdlyvset__psram__DOT__memory__v1 = 1U;
                __Vdlyvdim0__psram__DOT__memory__v1 
                    = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__psram__DOT__addr_reg));
            } else if ((5U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdlyvval__psram__DOT__memory__v2 
                    = (((IData)(vlSelf->__PVT__psram__DOT__dio_r) 
                        << 4U) | (IData)(vlSelf->__PVT___dio_wire));
                __Vdlyvset__psram__DOT__memory__v2 = 1U;
                __Vdlyvdim0__psram__DOT__memory__v2 
                    = (0xffffffU & ((IData)(2U) + vlSelf->__PVT__psram__DOT__addr_reg));
            } else if ((7U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdlyvval__psram__DOT__memory__v3 
                    = (((IData)(vlSelf->__PVT__psram__DOT__dio_r) 
                        << 4U) | (IData)(vlSelf->__PVT___dio_wire));
                __Vdlyvset__psram__DOT__memory__v3 = 1U;
                __Vdlyvdim0__psram__DOT__memory__v3 
                    = (0xffffffU & ((IData)(3U) + vlSelf->__PVT__psram__DOT__addr_reg));
            }
            if ((7U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdly__psram__DOT__state = 0U;
                __Vdly__psram__DOT__bit_count = 0U;
            }
            __Vdly__psram__DOT__dio_r = vlSelf->__PVT___dio_wire;
        } else {
            __Vdly__psram__DOT__bit_count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
            if (((((((((0U == (IData)(vlSelf->__PVT__psram__DOT__bit_count)) 
                       | (1U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) 
                      | (2U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) 
                     | (3U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) 
                    | (4U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) 
                   | (5U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) 
                  | (6U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) 
                 | (7U == (IData)(vlSelf->__PVT__psram__DOT__bit_count)))) {
                vlSelf->__PVT__psram__DOT__dio_out 
                    = (0xfU & ((0U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                ? (vlSelf->__PVT__psram__DOT__memory
                                   [vlSelf->__PVT__psram__DOT__addr_reg] 
                                   >> 4U) : ((1U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                              ? vlSelf->__PVT__psram__DOT__memory
                                             [vlSelf->__PVT__psram__DOT__addr_reg]
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                                  ? 
                                                 (vlSelf->__PVT__psram__DOT__memory
                                                  [
                                                  (0xffffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->__PVT__psram__DOT__addr_reg))] 
                                                  >> 4U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                                   ? 
                                                  vlSelf->__PVT__psram__DOT__memory
                                                  [
                                                  (0xffffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->__PVT__psram__DOT__addr_reg))]
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                                    ? 
                                                   (vlSelf->__PVT__psram__DOT__memory
                                                    [
                                                    (0xffffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->__PVT__psram__DOT__addr_reg))] 
                                                    >> 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                                     ? 
                                                    vlSelf->__PVT__psram__DOT__memory
                                                    [
                                                    (0xffffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->__PVT__psram__DOT__addr_reg))]
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__psram__DOT__bit_count))
                                                      ? 
                                                     (vlSelf->__PVT__psram__DOT__memory
                                                      [
                                                      (0xffffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->__PVT__psram__DOT__addr_reg))] 
                                                      >> 4U)
                                                      : 
                                                     vlSelf->__PVT__psram__DOT__memory
                                                     [
                                                     (0xffffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->__PVT__psram__DOT__addr_reg))]))))))));
            }
            if ((7U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdly__psram__DOT__state = 0U;
                __Vdly__psram__DOT__bit_count = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
            __Vdly__psram__DOT__bit_count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
            if ((5U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdly__psram__DOT__state = 4U;
                vlSelf->__PVT__psram__DOT__dio_oe = 1U;
                __Vdly__psram__DOT__bit_count = 0U;
            }
        } else {
            vlSelf->__PVT__psram__DOT__addr_reg = (
                                                   (0xfffff0U 
                                                    & (vlSelf->__PVT__psram__DOT__addr_reg 
                                                       << 4U)) 
                                                   | (IData)(vlSelf->__PVT___dio_wire));
            __Vdly__psram__DOT__bit_count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
            if ((5U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                __Vdly__psram__DOT__state = ((0xebU 
                                              == (IData)(vlSelf->__PVT__psram__DOT__cmd_reg))
                                              ? 3U : 
                                             ((0x38U 
                                               == (IData)(vlSelf->__PVT__psram__DOT__cmd_reg))
                                               ? 5U
                                               : 0U));
                __Vdly__psram__DOT__bit_count = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__psram__DOT__state))) {
        if ((0x35U == (IData)(vlSelf->__PVT__psram__DOT__mode))) {
            __Vdly__psram__DOT__cmd_reg = ((0xf0U & 
                                            ((IData)(vlSelf->__PVT__psram__DOT__cmd_reg) 
                                             << 4U)) 
                                           | (IData)(vlSelf->__PVT___dio_wire));
            __Vdly__psram__DOT__bit_count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
            if ((1U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                vlSelf->__PVT__psram__DOT__addr_reg = 0U;
                __Vdly__psram__DOT__state = 2U;
                __Vdly__psram__DOT__bit_count = 0U;
            }
        } else {
            __Vdly__psram__DOT__cmd_reg = ((0xfeU & 
                                            ((IData)(vlSelf->__PVT__psram__DOT__cmd_reg) 
                                             << 1U)) 
                                           | (1U & (IData)(vlSelf->__PVT___dio_wire)));
            __Vdly__psram__DOT__bit_count = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
            if ((7U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
                vlSelf->__PVT__psram__DOT__addr_reg = 0U;
                __Vdly__psram__DOT__state = 2U;
                __Vdly__psram__DOT__bit_count = 0U;
            }
        }
    } else {
        __Vdly__psram__DOT__mode = ((0xfeU & ((IData)(vlSelf->__PVT__psram__DOT__mode) 
                                              << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT___dio_wire)));
        __Vdly__psram__DOT__bit_count = (0xffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__psram__DOT__bit_count)));
        if ((7U == (IData)(vlSelf->__PVT__psram__DOT__bit_count))) {
            __Vdly__psram__DOT__state = 7U;
            __Vdly__psram__DOT__bit_count = 0U;
        }
    }
    vlSelf->__PVT__psram__DOT__state = __Vdly__psram__DOT__state;
    vlSelf->__PVT__psram__DOT__bit_count = __Vdly__psram__DOT__bit_count;
    vlSelf->__PVT__psram__DOT__dio_r = __Vdly__psram__DOT__dio_r;
    vlSelf->__PVT__psram__DOT__mode = __Vdly__psram__DOT__mode;
    vlSelf->__PVT__psram__DOT__cmd_reg = __Vdly__psram__DOT__cmd_reg;
    if (__Vdlyvset__psram__DOT__memory__v0) {
        vlSelf->__PVT__psram__DOT__memory[__Vdlyvdim0__psram__DOT__memory__v0] 
            = __Vdlyvval__psram__DOT__memory__v0;
    }
    if (__Vdlyvset__psram__DOT__memory__v1) {
        vlSelf->__PVT__psram__DOT__memory[__Vdlyvdim0__psram__DOT__memory__v1] 
            = __Vdlyvval__psram__DOT__memory__v1;
    }
    if (__Vdlyvset__psram__DOT__memory__v2) {
        vlSelf->__PVT__psram__DOT__memory[__Vdlyvdim0__psram__DOT__memory__v2] 
            = __Vdlyvval__psram__DOT__memory__v2;
    }
    if (__Vdlyvset__psram__DOT__memory__v3) {
        vlSelf->__PVT__psram__DOT__memory[__Vdlyvdim0__psram__DOT__memory__v3] 
            = __Vdlyvval__psram__DOT__memory__v3;
    }
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__8\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__sdram0.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram1.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram2.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram3.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram0.dqm = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
    vlSymsp->TOP__ysyxSoCFull__sdram1.dqm = (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram2.dqm = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
    vlSymsp->TOP__ysyxSoCFull__sdram3.dqm = (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram0.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram1.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram2.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram3.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram0.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram1.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram2.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram3.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram0.we = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSymsp->TOP__ysyxSoCFull__sdram0.cas = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 1U));
    vlSymsp->TOP__ysyxSoCFull__sdram0.ras = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram1.we = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSymsp->TOP__ysyxSoCFull__sdram1.cas = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 1U));
    vlSymsp->TOP__ysyxSoCFull__sdram1.ras = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram2.we = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSymsp->TOP__ysyxSoCFull__sdram2.cas = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 1U));
    vlSymsp->TOP__ysyxSoCFull__sdram2.ras = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram3.we = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSymsp->TOP__ysyxSoCFull__sdram3.cas = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 1U));
    vlSymsp->TOP__ysyxSoCFull__sdram3.ras = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram0.cs = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs));
    vlSymsp->TOP__ysyxSoCFull__sdram1.cs = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs));
    vlSymsp->TOP__ysyxSoCFull__sdram2.cs = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs) 
                                                  >> 1U));
    vlSymsp->TOP__ysyxSoCFull__sdram3.cs = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs) 
                                                  >> 1U));
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__9\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    // Body
    if (((1U == (IData)(vlSelf->__PVT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->__PVT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->__PVT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0xfffffeU 
                                                                             & (vlSelf->__PVT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi)), __Vtask_flash_read__0__data);
            vlSelf->__PVT__flash__DOT__rdata = __Vtask_flash_read__0__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->__PVT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/qzx/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    vlSelf->__PVT__flash__DOT__data_bswap = ((vlSelf->__PVT__flash__DOT__rdata 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (vlSelf->__PVT__flash__DOT__rdata 
                                                    << 8U)) 
                                                | ((0xff00U 
                                                    & (vlSelf->__PVT__flash__DOT__rdata 
                                                       >> 8U)) 
                                                   | (vlSelf->__PVT__flash__DOT__rdata 
                                                      >> 0x18U))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0\n"); );
    // Body
    vlSelf->__PVT___dq_wire = (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                   ? 0U : 0xffffffffU) 
                                 & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                       ? 0U : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : 0xffffffffU)) 
                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                        ? 0U : 0xffffffffU))) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                    ? 0U : 0xffffffffU)) 
                               | ((vlSelf->_dq_wire__strong__out8 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram0.data_out_en)
                                       ? 0xffffU : 0U)) 
                                  | ((vlSelf->_dq_wire__strong__out9 
                                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram1.data_out_en)
                                           ? 0xffffU
                                           : 0U) << 0x10U)) 
                                     | ((vlSelf->_dq_wire__strong__out10 
                                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__sdram2.data_out_en)
                                             ? 0xffffU
                                             : 0U)) 
                                        | (vlSelf->_dq_wire__strong__out11 
                                           & (((IData)(vlSymsp->TOP__ysyxSoCFull__sdram3.data_out_en)
                                                ? 0xffffU
                                                : 0U) 
                                              << 0x10U))))));
    vlSymsp->TOP__ysyxSoCFull__sdram0.dq = (0xffffU 
                                            & vlSelf->__PVT___dq_wire);
    vlSymsp->TOP__ysyxSoCFull__sdram1.dq = (vlSelf->__PVT___dq_wire 
                                            >> 0x10U);
    vlSymsp->TOP__ysyxSoCFull__sdram2.dq = (0xffffU 
                                            & vlSelf->__PVT___dq_wire);
    vlSymsp->TOP__ysyxSoCFull__sdram3.dq = (vlSelf->__PVT___dq_wire 
                                            >> 0x10U);
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__13(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__13\n"); );
    // Body
    vlSelf->__Vcellinp__flash__ss = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_ss));
    vlSelf->__Vcellinp__bitrev__ss = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_ss) 
                                            >> 7U));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1\n"); );
    // Body
    vlSelf->__PVT___dio_wire = ((((((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__douten))) 
                                    | (0xcU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__douten)))) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                | ((((IData)(vlSelf->__PVT__psram__DOT__dio_oe)
                                      ? (IData)(vlSelf->__PVT__psram__DOT__dio_out)
                                      : 0U) & ((IData)(vlSelf->__PVT__psram__DOT__dio_oe)
                                                ? 0xfU
                                                : 0U)) 
                                   & ((IData)(vlSelf->__PVT__psram__DOT__dio_oe)
                                       ? 0xfU : 0U)));
}
