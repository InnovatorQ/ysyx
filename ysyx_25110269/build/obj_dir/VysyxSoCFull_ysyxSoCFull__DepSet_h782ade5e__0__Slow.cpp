// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__sdram0.dqm = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
    vlSymsp->TOP__ysyxSoCFull__sdram0.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram0.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram0.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram0.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSymsp->TOP__ysyxSoCFull__sdram1.dqm = (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram1.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram1.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram1.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram1.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSymsp->TOP__ysyxSoCFull__sdram2.dqm = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
    vlSymsp->TOP__ysyxSoCFull__sdram2.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram2.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram2.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram2.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
    vlSymsp->TOP__ysyxSoCFull__sdram3.dqm = (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                   >> 2U));
    vlSymsp->TOP__ysyxSoCFull__sdram3.ba = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSymsp->TOP__ysyxSoCFull__sdram3.a = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSymsp->TOP__ysyxSoCFull__sdram3.cke = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSymsp->TOP__ysyxSoCFull__sdram3.clk = (1U & (~ (IData)(vlSymsp->TOP.clock)));
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

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1\n"); );
    // Body
    vlSelf->__Vcellinp__flash__ss = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_ss));
    vlSelf->__Vcellinp__bitrev__ss = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_ss) 
                                            >> 7U));
    vlSymsp->TOP__ysyxSoCFull__sdram0.cs = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs));
    vlSymsp->TOP__ysyxSoCFull__sdram1.cs = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs));
    vlSymsp->TOP__ysyxSoCFull__sdram2.cs = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs) 
                                                  >> 1U));
    vlSymsp->TOP__ysyxSoCFull__sdram3.cs = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__sdram_cs) 
                                                  >> 1U));
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
