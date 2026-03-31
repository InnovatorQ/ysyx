// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_LSU.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0\n"); );
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
    vlSelf->ms_to_ws_valid = (((IData)(vlSelf->bvalid) 
                               & (IData)(vlSelf->bready)) 
                              | (((~ (IData)(vlSelf->is_ls)) 
                                  & (1U == (IData)(vlSelf->ms_state))) 
                                 | (4U == (IData)(vlSelf->ms_state))));
    vlSelf->dep_need_stall = ((~ ((IData)(vlSelf->ms_to_ws_valid) 
                                  | (0U == (IData)(vlSelf->ms_state)))) 
                              & (0U != (IData)(vlSelf->load)));
    vlSelf->ms_to_ds_forward_bus = (((QData)((IData)(vlSelf->dep_need_stall)) 
                                     << 0x26U) | (((QData)((IData)(vlSelf->forward_data)) 
                                                   << 6U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->forward_enable) 
                                                                      << 5U) 
                                                                     | (IData)(vlSelf->dest))))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__1(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__1\n"); );
    // Body
    vlSelf->next_state = ((4U & (IData)(vlSelf->ms_state))
                           ? ((2U & (IData)(vlSelf->ms_state))
                               ? 0U : ((1U & (IData)(vlSelf->ms_state))
                                        ? (((IData)(vlSelf->bready) 
                                            & (IData)(vlSelf->bvalid))
                                            ? 3U : 5U)
                                        : ((IData)(vlSelf->es_to_ms_valid)
                                            ? 1U : 0U)))
                           : ((2U & (IData)(vlSelf->ms_state))
                               ? ((1U & (IData)(vlSelf->ms_state))
                                   ? ((IData)(vlSelf->es_to_ms_valid)
                                       ? 1U : 0U) : 
                                  (((IData)(vlSelf->rvalid) 
                                    & (IData)(vlSelf->rready))
                                    ? 4U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->ms_state))
                                                    ? 
                                                   (((IData)(vlSelf->arvalid) 
                                                     | (IData)(vlSelf->awvalid))
                                                     ? 
                                                    (((IData)(vlSelf->awready) 
                                                      & (IData)(vlSelf->awvalid))
                                                      ? 5U
                                                      : 
                                                     (((IData)(vlSelf->arready) 
                                                       & (IData)(vlSelf->arvalid))
                                                       ? 2U
                                                       : 1U))
                                                     : 
                                                    ((IData)(vlSelf->es_to_ms_valid)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((IData)(vlSelf->es_to_ms_valid)
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_hc0fb4e8f__0;
    __VdfgTmp_hc0fb4e8f__0 = 0;
    IData/*31:0*/ __Vdly__pref_cnt_l;
    __Vdly__pref_cnt_l = 0;
    IData/*31:0*/ __Vdly__pref_cnt_s;
    __Vdly__pref_cnt_s = 0;
    IData/*31:0*/ __Vdly__delay_cnt;
    __Vdly__delay_cnt = 0;
    // Body
    __Vdly__pref_cnt_l = vlSelf->pref_cnt_l;
    __Vdly__pref_cnt_s = vlSelf->pref_cnt_s;
    __Vdly__delay_cnt = vlSelf->delay_cnt;
    if (vlSelf->reset) {
        __Vdly__pref_cnt_l = 0U;
        __Vdly__pref_cnt_s = 0U;
        __Vdly__delay_cnt = 0U;
        vlSelf->ms_valid = 0U;
        vlSelf->ms_state = 0U;
        vlSelf->access_start = 0U;
    } else {
        if ((((IData)(vlSelf->access_start) | (IData)(vlSelf->arvalid)) 
             | (IData)(vlSelf->awvalid))) {
            __Vdly__delay_cnt = ((IData)(1U) + vlSelf->delay_cnt);
        }
        if (vlSelf->ms_allowin) {
            vlSelf->ms_valid = (((IData)(vlSelf->rvalid) 
                                 & (IData)(vlSelf->rready)) 
                                | (IData)(vlSelf->es_to_ms_valid));
        }
        vlSelf->ms_state = vlSelf->next_state;
        if (((IData)(vlSelf->arvalid) | (IData)(vlSelf->awvalid))) {
            vlSelf->access_start = 1U;
        }
        if (((IData)(vlSelf->rvalid) | (IData)(vlSelf->bvalid))) {
            vlSelf->access_start = 0U;
        }
    }
    if (((IData)(vlSelf->rvalid) & (IData)(vlSelf->rready))) {
        __Vdly__pref_cnt_l = ((IData)(1U) + vlSelf->pref_cnt_l);
        vlSelf->mem_rdata = vlSelf->rdata;
    }
    if (((IData)(vlSelf->bvalid) & (IData)(vlSelf->bready))) {
        __Vdly__pref_cnt_s = ((IData)(1U) + vlSelf->pref_cnt_s);
    }
    if (((IData)(vlSelf->es_to_ms_valid) & (IData)(vlSelf->ms_allowin))) {
        vlSelf->es_to_ms_bus_r[0U] = vlSelf->es_to_ms_bus[0U];
        vlSelf->es_to_ms_bus_r[1U] = vlSelf->es_to_ms_bus[1U];
        vlSelf->es_to_ms_bus_r[2U] = vlSelf->es_to_ms_bus[2U];
        vlSelf->es_to_ms_bus_r[3U] = vlSelf->es_to_ms_bus[3U];
        vlSelf->es_to_ms_bus_r[4U] = vlSelf->es_to_ms_bus[4U];
        vlSelf->es_to_ms_bus_r[5U] = vlSelf->es_to_ms_bus[5U];
    }
    vlSelf->pref_cnt_l = __Vdly__pref_cnt_l;
    vlSelf->pref_cnt_s = __Vdly__pref_cnt_s;
    vlSelf->delay_cnt = __Vdly__delay_cnt;
    vlSelf->bready = (5U == (IData)(vlSelf->ms_state));
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

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0(VysyxSoCFull_ysyx_25110269_LSU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_LSU___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__LSU__0\n"); );
    // Body
    vlSelf->ms_to_ws_valid = (((IData)(vlSelf->bvalid) 
                               & (IData)(vlSelf->bready)) 
                              | (((~ (IData)(vlSelf->is_ls)) 
                                  & (1U == (IData)(vlSelf->ms_state))) 
                                 | (4U == (IData)(vlSelf->ms_state))));
    vlSelf->dep_need_stall = ((~ ((IData)(vlSelf->ms_to_ws_valid) 
                                  | (0U == (IData)(vlSelf->ms_state)))) 
                              & (0U != (IData)(vlSelf->load)));
    vlSelf->ms_to_ds_forward_bus = (((QData)((IData)(vlSelf->dep_need_stall)) 
                                     << 0x26U) | (((QData)((IData)(vlSelf->forward_data)) 
                                                   << 6U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->forward_enable) 
                                                                      << 5U) 
                                                                     | (IData)(vlSelf->dest))))));
}
