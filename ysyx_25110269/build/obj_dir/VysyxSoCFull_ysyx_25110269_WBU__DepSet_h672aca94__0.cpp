// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_WBU.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0\n"); );
    // Body
    vlSelf->debug_mem_addr = ((vlSelf->ms_to_ws_bus_r[6U] 
                               << 0x15U) | (vlSelf->ms_to_ws_bus_r[5U] 
                                            >> 0xbU));
    vlSelf->ws_pc = ((vlSelf->ms_to_ws_bus_r[7U] << 0x15U) 
                     | (vlSelf->ms_to_ws_bus_r[6U] 
                        >> 0xbU));
    vlSelf->debug_mem_rdata = ((vlSelf->ms_to_ws_bus_r[5U] 
                                << 0x15U) | (vlSelf->ms_to_ws_bus_r[4U] 
                                             >> 0xbU));
    vlSelf->debug_mem_wdata = ((vlSelf->ms_to_ws_bus_r[4U] 
                                << 0x15U) | (vlSelf->ms_to_ws_bus_r[3U] 
                                             >> 0xbU));
    if (vlSelf->ws_state) {
        if (vlSelf->ws_state) {
            vlSelf->inst_finish = 1U;
        }
    } else {
        vlSelf->inst_finish = 0U;
    }
    vlSelf->rf_wen = (1U & vlSelf->ms_to_ws_bus_r[0U]);
    vlSelf->load = (0xfU & (vlSelf->ms_to_ws_bus_r[0U] 
                            >> 2U));
    vlSelf->res_from_csr = (1U & (vlSelf->ms_to_ws_bus_r[0U] 
                                  >> 1U));
    vlSelf->csr_data = ((vlSelf->ms_to_ws_bus_r[1U] 
                         << 0x15U) | (vlSelf->ms_to_ws_bus_r[0U] 
                                      >> 0xbU));
    vlSelf->alu_result = ((vlSelf->ms_to_ws_bus_r[2U] 
                           << 0x15U) | (vlSelf->ms_to_ws_bus_r[1U] 
                                        >> 0xbU));
    vlSelf->load_data = ((vlSelf->ms_to_ws_bus_r[3U] 
                          << 0x15U) | (vlSelf->ms_to_ws_bus_r[2U] 
                                       >> 0xbU));
    vlSelf->dest = (0x1fU & (vlSelf->ms_to_ws_bus_r[0U] 
                             >> 6U));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.wen 
        = vlSelf->rf_wen;
    vlSelf->wb_data = ((0U == (IData)(vlSelf->load))
                        ? ((IData)(vlSelf->res_from_csr)
                            ? vlSelf->csr_data : vlSelf->alu_result)
                        : vlSelf->load_data);
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.waddr 
        = vlSelf->dest;
    vlSelf->ws_to_ds_forward_enable = ((IData)(vlSelf->rf_wen) 
                                       & ((0U != (IData)(vlSelf->dest)) 
                                          & (IData)(vlSelf->ws_valid)));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.wdata 
        = vlSelf->wb_data;
    vlSelf->ws_to_ds_forward_data = vlSelf->wb_data;
    vlSelf->ws_to_ds_forward_bus = (((QData)((IData)(vlSelf->wb_data)) 
                                     << 6U) | (QData)((IData)(
                                                              (((IData)(vlSelf->ws_to_ds_forward_enable) 
                                                                << 5U) 
                                                               | (IData)(vlSelf->dest)))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.clock 
        = vlSelf->clock;
    vlSelf->next_state = ((IData)(vlSelf->ws_state)
                           ? ((IData)(vlSelf->ws_state) 
                              & (IData)(vlSelf->ms_to_ws_valid))
                           : (IData)(vlSelf->ms_to_ws_valid));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr2 
        = vlSelf->rs2;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr1 
        = vlSelf->rs1;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2\n"); );
    // Body
    vlSelf->rf2_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.rdata2;
    vlSelf->rf1_data = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.rdata1;
}

void VysyxSoCFull___024unit____Vdpiimwrap_skip_ref_TOP____024unit();

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__0\n"); );
    // Body
    if (vlSelf->inst_finish) {
        if (((0x2000000U <= vlSelf->debug_mem_addr) 
             & (0x2010000U > vlSelf->debug_mem_addr))) {
            VysyxSoCFull___024unit____Vdpiimwrap_skip_ref_TOP____024unit();
        }
        if (((0x10000000U <= vlSelf->debug_mem_addr) 
             & (0x10000032U > vlSelf->debug_mem_addr))) {
            VysyxSoCFull___024unit____Vdpiimwrap_skip_ref_TOP____024unit();
        }
    }
    vlSelf->ws_state = ((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->next_state));
    vlSelf->ws_valid = ((~ (IData)(vlSelf->reset)) 
                        & (IData)(vlSelf->ms_to_ws_valid));
    if (((IData)(vlSelf->ms_to_ws_valid) & (IData)(vlSelf->ws_allowin))) {
        vlSelf->ms_to_ws_bus_r[0U] = vlSelf->ms_to_ws_bus[0U];
        vlSelf->ms_to_ws_bus_r[1U] = vlSelf->ms_to_ws_bus[1U];
        vlSelf->ms_to_ws_bus_r[2U] = vlSelf->ms_to_ws_bus[2U];
        vlSelf->ms_to_ws_bus_r[3U] = vlSelf->ms_to_ws_bus[3U];
        vlSelf->ms_to_ws_bus_r[4U] = vlSelf->ms_to_ws_bus[4U];
        vlSelf->ms_to_ws_bus_r[5U] = vlSelf->ms_to_ws_bus[5U];
        vlSelf->ms_to_ws_bus_r[6U] = vlSelf->ms_to_ws_bus[6U];
        vlSelf->ms_to_ws_bus_r[7U] = vlSelf->ms_to_ws_bus[7U];
    }
    if (vlSelf->ws_state) {
        if (vlSelf->ws_state) {
            vlSelf->inst_finish = 1U;
        }
    } else {
        vlSelf->inst_finish = 0U;
    }
    vlSelf->debug_mem_addr = ((vlSelf->ms_to_ws_bus_r[6U] 
                               << 0x15U) | (vlSelf->ms_to_ws_bus_r[5U] 
                                            >> 0xbU));
    vlSelf->ws_pc = ((vlSelf->ms_to_ws_bus_r[7U] << 0x15U) 
                     | (vlSelf->ms_to_ws_bus_r[6U] 
                        >> 0xbU));
    vlSelf->debug_mem_rdata = ((vlSelf->ms_to_ws_bus_r[5U] 
                                << 0x15U) | (vlSelf->ms_to_ws_bus_r[4U] 
                                             >> 0xbU));
    vlSelf->debug_mem_wdata = ((vlSelf->ms_to_ws_bus_r[4U] 
                                << 0x15U) | (vlSelf->ms_to_ws_bus_r[3U] 
                                             >> 0xbU));
    vlSelf->rf_wen = (1U & vlSelf->ms_to_ws_bus_r[0U]);
    vlSelf->load = (0xfU & (vlSelf->ms_to_ws_bus_r[0U] 
                            >> 2U));
    vlSelf->res_from_csr = (1U & (vlSelf->ms_to_ws_bus_r[0U] 
                                  >> 1U));
    vlSelf->csr_data = ((vlSelf->ms_to_ws_bus_r[1U] 
                         << 0x15U) | (vlSelf->ms_to_ws_bus_r[0U] 
                                      >> 0xbU));
    vlSelf->alu_result = ((vlSelf->ms_to_ws_bus_r[2U] 
                           << 0x15U) | (vlSelf->ms_to_ws_bus_r[1U] 
                                        >> 0xbU));
    vlSelf->load_data = ((vlSelf->ms_to_ws_bus_r[3U] 
                          << 0x15U) | (vlSelf->ms_to_ws_bus_r[2U] 
                                       >> 0xbU));
    vlSelf->dest = (0x1fU & (vlSelf->ms_to_ws_bus_r[0U] 
                             >> 6U));
    vlSelf->wb_data = ((0U == (IData)(vlSelf->load))
                        ? ((IData)(vlSelf->res_from_csr)
                            ? vlSelf->csr_data : vlSelf->alu_result)
                        : vlSelf->load_data);
    vlSelf->ws_to_ds_forward_enable = ((IData)(vlSelf->rf_wen) 
                                       & ((0U != (IData)(vlSelf->dest)) 
                                          & (IData)(vlSelf->ws_valid)));
    vlSelf->ws_to_ds_forward_data = vlSelf->wb_data;
    vlSelf->ws_to_ds_forward_bus = (((QData)((IData)(vlSelf->wb_data)) 
                                     << 6U) | (QData)((IData)(
                                                              (((IData)(vlSelf->ws_to_ds_forward_enable) 
                                                                << 5U) 
                                                               | (IData)(vlSelf->dest)))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__1\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr2 
        = vlSelf->rs2;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.raddr1 
        = vlSelf->rs1;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2(VysyxSoCFull_ysyx_25110269_WBU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_WBU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__2\n"); );
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.wen 
        = vlSelf->rf_wen;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.waddr 
        = vlSelf->dest;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf.wdata 
        = vlSelf->wb_data;
}
