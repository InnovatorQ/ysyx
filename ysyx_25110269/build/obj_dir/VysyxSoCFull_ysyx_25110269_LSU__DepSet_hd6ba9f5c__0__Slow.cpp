// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_LSU.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_LSU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__LSU(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu__LSU\n"); );
    // Body
    vlSelf->arlen = 0U;
    vlSelf->awlen = 0U;
    vlSelf->wlast = 1U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_hc0fb4e8f__0;
    __VdfgTmp_hc0fb4e8f__0 = 0;
    // Body
    vlSelf->ms_pc = ((vlSelf->es_to_ms_bus_r[5U] << 0x10U) 
                     | (vlSelf->es_to_ms_bus_r[4U] 
                        >> 0x10U));
    vlSelf->st_data = ((vlSelf->es_to_ms_bus_r[2U] 
                        << 0x10U) | (vlSelf->es_to_ms_bus_r[1U] 
                                     >> 0x10U));
    vlSelf->rf_wen = (1U & vlSelf->es_to_ms_bus_r[0U]);
    vlSelf->csr_data = ((vlSelf->es_to_ms_bus_r[1U] 
                         << 0x10U) | (vlSelf->es_to_ms_bus_r[0U] 
                                      >> 0x10U));
    vlSelf->res_from_csr = (1U & (vlSelf->es_to_ms_bus_r[0U] 
                                  >> 1U));
    vlSelf->ms_alu_result = ((vlSelf->es_to_ms_bus_r[4U] 
                              << 0x10U) | (vlSelf->es_to_ms_bus_r[3U] 
                                           >> 0x10U));
    vlSelf->load_sign = (1U & (vlSelf->es_to_ms_bus_r[0U] 
                               >> 2U));
    vlSelf->selected_halfword = (0xffffU & ((0x20000U 
                                             & vlSelf->es_to_ms_bus_r[2U])
                                             ? (vlSelf->mem_rdata 
                                                >> 0x10U)
                                             : vlSelf->mem_rdata));
    vlSelf->byte_offset = (3U & (vlSelf->es_to_ms_bus_r[2U] 
                                 >> 0x10U));
    vlSelf->bready = (5U == (IData)(vlSelf->ms_state));
    vlSelf->store = (0xfU & (vlSelf->es_to_ms_bus_r[0U] 
                             >> 3U));
    vlSelf->araddr = ((vlSelf->es_to_ms_bus_r[3U] << 0x10U) 
                      | (vlSelf->es_to_ms_bus_r[2U] 
                         >> 0x10U));
    vlSelf->dest = (0x1fU & (vlSelf->es_to_ms_bus_r[0U] 
                             >> 0xbU));
    vlSelf->load = (0xfU & (vlSelf->es_to_ms_bus_r[0U] 
                            >> 7U));
    __VdfgTmp_hc0fb4e8f__0 = ((0x1fU >= ((IData)(vlSelf->byte_offset) 
                                         << 3U)) ? 
                              (vlSelf->st_data << ((IData)(vlSelf->byte_offset) 
                                                   << 3U))
                               : 0U);
    vlSelf->selected_byte = (0xffU & ((0U == (IData)(vlSelf->byte_offset))
                                       ? vlSelf->mem_rdata
                                       : ((1U == (IData)(vlSelf->byte_offset))
                                           ? (vlSelf->mem_rdata 
                                              >> 8U)
                                           : ((2U == (IData)(vlSelf->byte_offset))
                                               ? (vlSelf->mem_rdata 
                                                  >> 0x10U)
                                               : (vlSelf->mem_rdata 
                                                  >> 0x18U)))));
    if ((0xfU == (IData)(vlSelf->store))) {
        vlSelf->wstrb = 0xfU;
        vlSelf->awsize = 2U;
        vlSelf->wdata = vlSelf->st_data;
    } else if ((3U == (IData)(vlSelf->store))) {
        vlSelf->wstrb = (0xfU & ((IData)(3U) << (IData)(vlSelf->byte_offset)));
        vlSelf->awsize = 1U;
        vlSelf->wdata = __VdfgTmp_hc0fb4e8f__0;
    } else {
        if ((1U == (IData)(vlSelf->store))) {
            vlSelf->wstrb = (0xfU & ((IData)(1U) << (IData)(vlSelf->byte_offset)));
            vlSelf->wdata = __VdfgTmp_hc0fb4e8f__0;
        } else {
            vlSelf->wstrb = (0xfU & 0U);
            vlSelf->wdata = 0U;
        }
        vlSelf->awsize = 0U;
    }
    vlSelf->mem_wen = (0U != (IData)(vlSelf->store));
    vlSelf->mem_addr = vlSelf->araddr;
    vlSelf->awaddr = vlSelf->araddr;
    vlSelf->forward_enable = ((IData)(vlSelf->rf_wen) 
                              & ((0U != (IData)(vlSelf->dest)) 
                                 & (IData)(vlSelf->ms_valid)));
    vlSelf->rready = ((0U != (IData)(vlSelf->load)) 
                      & (2U == (IData)(vlSelf->ms_state)));
    if ((0xfU == (IData)(vlSelf->load))) {
        vlSelf->arsize = 2U;
        vlSelf->load_data = vlSelf->mem_rdata;
    } else if ((3U == (IData)(vlSelf->load))) {
        vlSelf->arsize = 1U;
        vlSelf->load_data = ((IData)(vlSelf->load_sign)
                              ? (((- (IData)((1U & 
                                              ((IData)(vlSelf->selected_halfword) 
                                               >> 0xfU)))) 
                                  << 0x10U) | (IData)(vlSelf->selected_halfword))
                              : (IData)(vlSelf->selected_halfword));
    } else {
        vlSelf->arsize = 0U;
        vlSelf->load_data = ((1U == (IData)(vlSelf->load))
                              ? ((IData)(vlSelf->load_sign)
                                  ? (((- (IData)((1U 
                                                  & ((IData)(vlSelf->selected_byte) 
                                                     >> 7U)))) 
                                      << 8U) | (IData)(vlSelf->selected_byte))
                                  : (IData)(vlSelf->selected_byte))
                              : 0U);
    }
    vlSelf->arvalid = ((0U != (IData)(vlSelf->load)) 
                       & (1U == (IData)(vlSelf->ms_state)));
    vlSelf->awvalid = ((IData)(vlSelf->mem_wen) & (1U 
                                                   == (IData)(vlSelf->ms_state)));
    vlSelf->is_ls = ((0U != (IData)(vlSelf->load)) 
                     | (IData)(vlSelf->mem_wen));
    vlSelf->ms_to_ws_bus[0U] = (IData)(((0x7fffffffffcULL 
                                         & (((QData)((IData)(
                                                             vlSelf->es_to_ms_bus_r[1U])) 
                                             << 0x1bU) 
                                            | (0x7fffffffffffffcULL 
                                               & ((QData)((IData)(
                                                                  vlSelf->es_to_ms_bus_r[0U])) 
                                                  >> 5U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSelf->es_to_ms_bus_r[0U])))));
    vlSelf->ms_to_ws_bus[1U] = ((vlSelf->ms_alu_result 
                                 << 0xbU) | (IData)(
                                                    (((0x7fffffffffcULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->es_to_ms_bus_r[1U])) 
                                                           << 0x1bU) 
                                                          | (0x7fffffffffffffcULL 
                                                             & ((QData)((IData)(
                                                                                vlSelf->es_to_ms_bus_r[0U])) 
                                                                >> 5U)))) 
                                                      | (QData)((IData)(
                                                                        (3U 
                                                                         & vlSelf->es_to_ms_bus_r[0U])))) 
                                                     >> 0x20U)));
    vlSelf->ms_to_ws_bus[2U] = ((vlSelf->ms_alu_result 
                                 >> 0x15U) | (vlSelf->load_data 
                                              << 0xbU));
    vlSelf->ms_to_ws_bus[3U] = ((vlSelf->load_data 
                                 >> 0x15U) | (vlSelf->st_data 
                                              << 0xbU));
    vlSelf->ms_to_ws_bus[4U] = ((vlSelf->st_data >> 0x15U) 
                                | (vlSelf->mem_rdata 
                                   << 0xbU));
    vlSelf->ms_to_ws_bus[5U] = ((vlSelf->mem_rdata 
                                 >> 0x15U) | ((IData)(
                                                      (((QData)((IData)(vlSelf->ms_pc)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->araddr)))) 
                                              << 0xbU));
    vlSelf->ms_to_ws_bus[6U] = (((IData)((((QData)((IData)(vlSelf->ms_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->araddr)))) 
                                 >> 0x15U) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->ms_pc)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->araddr))) 
                                                       >> 0x20U)) 
                                              << 0xbU));
    vlSelf->ms_to_ws_bus[7U] = ((IData)(((((QData)((IData)(vlSelf->ms_pc)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->araddr))) 
                                         >> 0x20U)) 
                                >> 0x15U);
    vlSelf->forward_data = ((IData)(vlSelf->res_from_csr)
                             ? vlSelf->csr_data : (
                                                   (0U 
                                                    != (IData)(vlSelf->load))
                                                    ? vlSelf->load_data
                                                    : vlSelf->ms_alu_result));
    vlSelf->wvalid = vlSelf->awvalid;
    vlSelf->ms_allowin = (1U & ((0U == (IData)(vlSelf->ms_state)) 
                                | ((4U == (IData)(vlSelf->ms_state)) 
                                   | ((~ (IData)(vlSelf->is_ls)) 
                                      | (3U == (IData)(vlSelf->ms_state))))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25110269_LSU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->arvalid = 0;
    vlSelf->araddr = 0;
    vlSelf->arlen = 0;
    vlSelf->arsize = 0;
    vlSelf->arready = 0;
    vlSelf->rvalid = 0;
    vlSelf->rdata = 0;
    vlSelf->rresp = 0;
    vlSelf->rready = 0;
    vlSelf->awvalid = 0;
    vlSelf->awaddr = 0;
    vlSelf->awlen = 0;
    vlSelf->awsize = 0;
    vlSelf->awready = 0;
    vlSelf->wvalid = 0;
    vlSelf->wdata = 0;
    vlSelf->wstrb = 0;
    vlSelf->wlast = 0;
    vlSelf->wready = 0;
    vlSelf->bvalid = 0;
    vlSelf->bresp = 0;
    vlSelf->bready = 0;
    vlSelf->es_to_ms_valid = 0;
    VL_ZERO_RESET_W(176, vlSelf->es_to_ms_bus);
    vlSelf->ms_to_ws_valid = 0;
    VL_ZERO_RESET_W(235, vlSelf->ms_to_ws_bus);
    vlSelf->ms_to_ds_forward_bus = 0;
    vlSelf->ws_allowin = 0;
    vlSelf->ms_allowin = 0;
    vlSelf->ms_state = 0;
    vlSelf->next_state = 0;
    vlSelf->delay_count = 0;
    VL_ZERO_RESET_W(176, vlSelf->es_to_ms_bus_r);
    vlSelf->ms_ready_go = 0;
    vlSelf->ms_valid = 0;
    vlSelf->pref_cnt_l = 0;
    vlSelf->pref_cnt_s = 0;
    vlSelf->delay_cnt = 0;
    vlSelf->access_start = 0;
    vlSelf->ms_pc = 0;
    vlSelf->load_data = 0;
    vlSelf->ms_alu_result = 0;
    vlSelf->mem_addr = 0;
    vlSelf->st_data = 0;
    vlSelf->csr_data = 0;
    vlSelf->dest = 0;
    vlSelf->load = 0;
    vlSelf->store = 0;
    vlSelf->load_sign = 0;
    vlSelf->res_from_csr = 0;
    vlSelf->rf_wen = 0;
    vlSelf->is_ls = 0;
    vlSelf->mem_rdata = 0;
    vlSelf->mem_wen = 0;
    vlSelf->byte_offset = 0;
    vlSelf->selected_byte = 0;
    vlSelf->selected_halfword = 0;
    vlSelf->forward_data = 0;
    vlSelf->dep_need_stall = 0;
    vlSelf->forward_enable = 0;
}
