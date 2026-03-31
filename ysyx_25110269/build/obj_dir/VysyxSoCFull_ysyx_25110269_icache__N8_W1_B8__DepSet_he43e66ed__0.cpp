// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h214b0c8a__0;
    __VdfgTmp_h214b0c8a__0 = 0;
    // Body
    vlSelf->offset = (7U & vlSelf->raddr);
    vlSelf->tag = (vlSelf->raddr >> 6U);
    vlSelf->set_index = (7U & (vlSelf->raddr >> 3U));
    vlSelf->uncache_addr = (0xfU == (vlSelf->raddr 
                                     >> 0x18U));
    if ((0U == ((IData)(vlSelf->offset) >> 2U))) {
        vlSelf->o_rdata = (IData)(vlSelf->icache[vlSelf->set_index]);
    } else if ((1U == ((IData)(vlSelf->offset) >> 2U))) {
        vlSelf->o_rdata = (IData)((vlSelf->icache[vlSelf->set_index] 
                                   >> 0x20U));
    }
    vlSelf->hit = (vlSelf->valid_array[vlSelf->set_index] 
                   & ((vlSelf->tag_array[vlSelf->set_index] 
                       == vlSelf->tag) & ((0U == (IData)(vlSelf->state)) 
                                          & ((~ (IData)(vlSelf->uncache_addr)) 
                                             & (IData)(vlSelf->rvalid)))));
    if (vlSelf->uncache_addr) {
        vlSelf->i_arlen = 0U;
        vlSelf->i_araddr = vlSelf->raddr;
        vlSelf->rdata = vlSelf->i_rdata;
        __VdfgTmp_h214b0c8a__0 = (0U == (IData)(vlSelf->state));
    } else {
        vlSelf->i_arlen = 1U;
        vlSelf->i_araddr = (0xfffffff8U & vlSelf->raddr);
        vlSelf->rdata = ((IData)(vlSelf->hit) ? vlSelf->o_rdata
                          : (((0U == ((IData)(vlSelf->offset) 
                                      >> 2U)) & (0U 
                                                 != (IData)(vlSelf->i_arlen)))
                              ? vlSelf->i_rdata_r : vlSelf->i_rdata));
        __VdfgTmp_h214b0c8a__0 = 0U;
    }
    vlSelf->i_rready = ((2U == (IData)(vlSelf->state)) 
                        | (IData)(__VdfgTmp_h214b0c8a__0));
    vlSelf->i_arvalid = ((1U == (IData)(vlSelf->state)) 
                         | ((IData)(__VdfgTmp_h214b0c8a__0) 
                            & (IData)(vlSelf->rvalid)));
    vlSelf->valid = (((IData)(vlSelf->i_rvalid) & ((IData)(vlSelf->i_rready) 
                                                   & (IData)(vlSelf->i_rlast))) 
                     | ((IData)(vlSelf->rvalid) & (IData)(vlSelf->hit)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0\n"); );
    // Body
    vlSelf->offset = (7U & vlSelf->raddr);
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__icache__v0;
    __Vdlyvdim0__icache__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__icache__v0;
    __Vdlyvlsb__icache__v0 = 0;
    IData/*31:0*/ __Vdlyvval__icache__v0;
    __Vdlyvval__icache__v0 = 0;
    CData/*0:0*/ __Vdlyvset__icache__v0;
    __Vdlyvset__icache__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__icache__v1;
    __Vdlyvdim0__icache__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__icache__v1;
    __Vdlyvlsb__icache__v1 = 0;
    IData/*31:0*/ __Vdlyvval__icache__v1;
    __Vdlyvval__icache__v1 = 0;
    CData/*0:0*/ __Vdlyvset__icache__v1;
    __Vdlyvset__icache__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__tag_array__v0;
    __Vdlyvdim0__tag_array__v0 = 0;
    IData/*25:0*/ __Vdlyvval__tag_array__v0;
    __Vdlyvval__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tag_array__v0;
    __Vdlyvset__tag_array__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__valid_array__v0;
    __Vdlyvdim0__valid_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v0;
    __Vdlyvset__valid_array__v0 = 0;
    CData/*1:0*/ __Vdly__state;
    __Vdly__state = 0;
    IData/*31:0*/ __Vdly__miss_cnt;
    __Vdly__miss_cnt = 0;
    IData/*31:0*/ __Vdly__hit_cnt;
    __Vdly__hit_cnt = 0;
    CData/*7:0*/ __Vdly__w_ptr;
    __Vdly__w_ptr = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v1;
    __Vdlyvset__valid_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v2;
    __Vdlyvset__valid_array__v2 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v3;
    __Vdlyvset__valid_array__v3 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v4;
    __Vdlyvset__valid_array__v4 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v5;
    __Vdlyvset__valid_array__v5 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v6;
    __Vdlyvset__valid_array__v6 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v7;
    __Vdlyvset__valid_array__v7 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v8;
    __Vdlyvset__valid_array__v8 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v9;
    __Vdlyvset__valid_array__v9 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v10;
    __Vdlyvset__valid_array__v10 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v11;
    __Vdlyvset__valid_array__v11 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v12;
    __Vdlyvset__valid_array__v12 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v13;
    __Vdlyvset__valid_array__v13 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v14;
    __Vdlyvset__valid_array__v14 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v15;
    __Vdlyvset__valid_array__v15 = 0;
    CData/*0:0*/ __Vdlyvset__valid_array__v16;
    __Vdlyvset__valid_array__v16 = 0;
    IData/*31:0*/ __Vdly__penalty_cnt;
    __Vdly__penalty_cnt = 0;
    // Body
    __Vdlyvset__valid_array__v0 = 0U;
    __Vdlyvset__tag_array__v0 = 0U;
    __Vdlyvset__icache__v0 = 0U;
    __Vdlyvset__icache__v1 = 0U;
    __Vdly__w_ptr = vlSelf->w_ptr;
    __Vdly__hit_cnt = vlSelf->hit_cnt;
    __Vdly__miss_cnt = vlSelf->miss_cnt;
    __Vdly__penalty_cnt = vlSelf->penalty_cnt;
    __Vdlyvset__valid_array__v1 = 0U;
    __Vdlyvset__valid_array__v2 = 0U;
    __Vdlyvset__valid_array__v3 = 0U;
    __Vdlyvset__valid_array__v4 = 0U;
    __Vdlyvset__valid_array__v5 = 0U;
    __Vdlyvset__valid_array__v6 = 0U;
    __Vdlyvset__valid_array__v7 = 0U;
    __Vdlyvset__valid_array__v8 = 0U;
    __Vdlyvset__valid_array__v9 = 0U;
    __Vdlyvset__valid_array__v10 = 0U;
    __Vdlyvset__valid_array__v11 = 0U;
    __Vdlyvset__valid_array__v12 = 0U;
    __Vdlyvset__valid_array__v13 = 0U;
    __Vdlyvset__valid_array__v14 = 0U;
    __Vdlyvset__valid_array__v15 = 0U;
    __Vdlyvset__valid_array__v16 = 0U;
    __Vdly__state = vlSelf->state;
    if (((((2U == (IData)(vlSelf->state)) & (IData)(vlSelf->i_rvalid)) 
          & (IData)(vlSelf->i_rready)) & (~ (IData)(vlSelf->uncache_addr)))) {
        if (((IData)(vlSelf->w_ptr) == (IData)(vlSelf->i_arlen))) {
            __Vdlyvset__valid_array__v0 = 1U;
            __Vdlyvdim0__valid_array__v0 = vlSelf->set_index;
            __Vdlyvval__tag_array__v0 = vlSelf->tag;
            __Vdlyvset__tag_array__v0 = 1U;
            __Vdlyvdim0__tag_array__v0 = vlSelf->set_index;
        }
        if ((0U == (IData)(vlSelf->w_ptr))) {
            __Vdlyvval__icache__v0 = vlSelf->i_rdata;
            __Vdlyvset__icache__v0 = 1U;
            __Vdlyvlsb__icache__v0 = 0U;
            __Vdlyvdim0__icache__v0 = vlSelf->set_index;
            vlSelf->i_rdata_r = vlSelf->i_rdata;
        } else if ((1U == (IData)(vlSelf->w_ptr))) {
            __Vdlyvval__icache__v1 = vlSelf->i_rdata;
            __Vdlyvset__icache__v1 = 1U;
            __Vdlyvlsb__icache__v1 = 0x20U;
            __Vdlyvdim0__icache__v1 = vlSelf->set_index;
        }
    }
    if (vlSelf->reset) {
        __Vdly__penalty_cnt = 0U;
        vlSelf->i = 1U;
        __Vdly__state = 0U;
        __Vdly__miss_cnt = 0U;
        __Vdly__hit_cnt = 0U;
        vlSelf->access_start = 0U;
        __Vdly__w_ptr = 0U;
        __Vdlyvset__valid_array__v1 = 1U;
        vlSelf->i = 2U;
        __Vdlyvset__valid_array__v2 = 1U;
        vlSelf->i = 3U;
        __Vdlyvset__valid_array__v3 = 1U;
        vlSelf->i = 4U;
        __Vdlyvset__valid_array__v4 = 1U;
        vlSelf->i = 5U;
        __Vdlyvset__valid_array__v5 = 1U;
        vlSelf->i = 6U;
        __Vdlyvset__valid_array__v6 = 1U;
        vlSelf->i = 7U;
        __Vdlyvset__valid_array__v7 = 1U;
        vlSelf->i = 8U;
        __Vdlyvset__valid_array__v8 = 1U;
    } else {
        if (vlSelf->access_start) {
            __Vdly__penalty_cnt = ((IData)(1U) + vlSelf->penalty_cnt);
        }
        if ((0U == (IData)(vlSelf->state))) {
            if (vlSelf->rvalid) {
                if (vlSelf->hit) {
                    if ((1U & (~ (IData)(vlSelf->uncache_addr)))) {
                        __Vdly__hit_cnt = ((IData)(1U) 
                                           + vlSelf->hit_cnt);
                    }
                    __Vdly__state = 0U;
                } else {
                    __Vdly__state = 1U;
                    if ((1U & (~ (IData)(vlSelf->uncache_addr)))) {
                        __Vdly__miss_cnt = ((IData)(1U) 
                                            + vlSelf->miss_cnt);
                        vlSelf->access_start = 1U;
                        __Vdly__w_ptr = 0U;
                    }
                }
            }
            if (vlSelf->cache_flush) {
                vlSelf->i = 1U;
                __Vdlyvset__valid_array__v9 = 1U;
                vlSelf->i = 2U;
                __Vdlyvset__valid_array__v10 = 1U;
                vlSelf->i = 3U;
                __Vdlyvset__valid_array__v11 = 1U;
                vlSelf->i = 4U;
                __Vdlyvset__valid_array__v12 = 1U;
                vlSelf->i = 5U;
                __Vdlyvset__valid_array__v13 = 1U;
                vlSelf->i = 6U;
                __Vdlyvset__valid_array__v14 = 1U;
                vlSelf->i = 7U;
                __Vdlyvset__valid_array__v15 = 1U;
                vlSelf->i = 8U;
                __Vdlyvset__valid_array__v16 = 1U;
            }
        } else if ((1U == (IData)(vlSelf->state))) {
            if (((IData)(vlSelf->i_arready) & (IData)(vlSelf->i_arvalid))) {
                __Vdly__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->state))) {
            if (((IData)(vlSelf->i_rvalid) & (IData)(vlSelf->i_rready))) {
                if ((1U & (~ (IData)(vlSelf->uncache_addr)))) {
                    __Vdly__w_ptr = (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelf->w_ptr)));
                }
                if (vlSelf->i_rlast) {
                    vlSelf->access_start = 0U;
                    __Vdly__state = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelf->state))) {
            __Vdly__state = 0U;
        }
    }
    vlSelf->penalty_cnt = __Vdly__penalty_cnt;
    vlSelf->miss_cnt = __Vdly__miss_cnt;
    vlSelf->hit_cnt = __Vdly__hit_cnt;
    vlSelf->w_ptr = __Vdly__w_ptr;
    if (__Vdlyvset__icache__v0) {
        vlSelf->icache[__Vdlyvdim0__icache__v0] = (
                                                   ((~ 
                                                     (0xffffffffULL 
                                                      << (IData)(__Vdlyvlsb__icache__v0))) 
                                                    & vlSelf->icache
                                                    [__Vdlyvdim0__icache__v0]) 
                                                   | ((QData)((IData)(__Vdlyvval__icache__v0)) 
                                                      << (IData)(__Vdlyvlsb__icache__v0)));
    }
    if (__Vdlyvset__icache__v1) {
        vlSelf->icache[__Vdlyvdim0__icache__v1] = (
                                                   ((~ 
                                                     (0xffffffffULL 
                                                      << (IData)(__Vdlyvlsb__icache__v1))) 
                                                    & vlSelf->icache
                                                    [__Vdlyvdim0__icache__v1]) 
                                                   | ((QData)((IData)(__Vdlyvval__icache__v1)) 
                                                      << (IData)(__Vdlyvlsb__icache__v1)));
    }
    if (__Vdlyvset__valid_array__v9) {
        vlSelf->icache[0U] = 0ULL;
    }
    if (__Vdlyvset__valid_array__v10) {
        vlSelf->icache[1U] = 0ULL;
    }
    if (__Vdlyvset__valid_array__v11) {
        vlSelf->icache[2U] = 0ULL;
    }
    if (__Vdlyvset__valid_array__v12) {
        vlSelf->icache[3U] = 0ULL;
    }
    if (__Vdlyvset__valid_array__v13) {
        vlSelf->icache[4U] = 0ULL;
    }
    if (__Vdlyvset__valid_array__v14) {
        vlSelf->icache[5U] = 0ULL;
    }
    if (__Vdlyvset__valid_array__v0) {
        vlSelf->valid_array[__Vdlyvdim0__valid_array__v0] = 1U;
    }
    if (__Vdlyvset__valid_array__v1) {
        vlSelf->valid_array[0U] = 0U;
    }
    if (__Vdlyvset__valid_array__v2) {
        vlSelf->valid_array[1U] = 0U;
    }
    if (__Vdlyvset__valid_array__v3) {
        vlSelf->valid_array[2U] = 0U;
    }
    if (__Vdlyvset__valid_array__v4) {
        vlSelf->valid_array[3U] = 0U;
    }
    if (__Vdlyvset__valid_array__v5) {
        vlSelf->valid_array[4U] = 0U;
    }
    if (__Vdlyvset__valid_array__v6) {
        vlSelf->valid_array[5U] = 0U;
    }
    if (__Vdlyvset__valid_array__v7) {
        vlSelf->valid_array[6U] = 0U;
    }
    if (__Vdlyvset__valid_array__v8) {
        vlSelf->valid_array[7U] = 0U;
    }
    if (__Vdlyvset__valid_array__v9) {
        vlSelf->valid_array[0U] = 0U;
    }
    if (__Vdlyvset__valid_array__v10) {
        vlSelf->valid_array[1U] = 0U;
    }
    if (__Vdlyvset__valid_array__v11) {
        vlSelf->valid_array[2U] = 0U;
    }
    if (__Vdlyvset__valid_array__v12) {
        vlSelf->valid_array[3U] = 0U;
    }
    if (__Vdlyvset__valid_array__v13) {
        vlSelf->valid_array[4U] = 0U;
    }
    if (__Vdlyvset__valid_array__v14) {
        vlSelf->valid_array[5U] = 0U;
    }
    if (__Vdlyvset__valid_array__v15) {
        vlSelf->icache[6U] = 0ULL;
        vlSelf->valid_array[6U] = 0U;
    }
    if (__Vdlyvset__tag_array__v0) {
        vlSelf->tag_array[__Vdlyvdim0__tag_array__v0] 
            = __Vdlyvval__tag_array__v0;
    }
    if (__Vdlyvset__valid_array__v1) {
        vlSelf->tag_array[0U] = 0U;
    }
    if (__Vdlyvset__valid_array__v2) {
        vlSelf->tag_array[1U] = 0U;
    }
    if (__Vdlyvset__valid_array__v3) {
        vlSelf->tag_array[2U] = 0U;
    }
    if (__Vdlyvset__valid_array__v4) {
        vlSelf->tag_array[3U] = 0U;
    }
    if (__Vdlyvset__valid_array__v5) {
        vlSelf->tag_array[4U] = 0U;
    }
    if (__Vdlyvset__valid_array__v6) {
        vlSelf->tag_array[5U] = 0U;
    }
    if (__Vdlyvset__valid_array__v7) {
        vlSelf->tag_array[6U] = 0U;
    }
    if (__Vdlyvset__valid_array__v8) {
        vlSelf->tag_array[7U] = 0U;
    }
    if (__Vdlyvset__valid_array__v9) {
        vlSelf->tag_array[0U] = 0U;
    }
    if (__Vdlyvset__valid_array__v10) {
        vlSelf->tag_array[1U] = 0U;
    }
    if (__Vdlyvset__valid_array__v11) {
        vlSelf->tag_array[2U] = 0U;
    }
    if (__Vdlyvset__valid_array__v12) {
        vlSelf->tag_array[3U] = 0U;
    }
    if (__Vdlyvset__valid_array__v13) {
        vlSelf->tag_array[4U] = 0U;
    }
    if (__Vdlyvset__valid_array__v14) {
        vlSelf->tag_array[5U] = 0U;
    }
    if (__Vdlyvset__valid_array__v15) {
        vlSelf->tag_array[6U] = 0U;
    }
    if (__Vdlyvset__valid_array__v16) {
        vlSelf->icache[7U] = 0ULL;
        vlSelf->valid_array[7U] = 0U;
        vlSelf->tag_array[7U] = 0U;
    }
    vlSelf->state = __Vdly__state;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__2(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__icache__2\n"); );
    // Body
    vlSelf->tag = (vlSelf->raddr >> 6U);
    vlSelf->set_index = (7U & (vlSelf->raddr >> 3U));
    vlSelf->uncache_addr = (0xfU == (vlSelf->raddr 
                                     >> 0x18U));
    if (vlSelf->uncache_addr) {
        vlSelf->i_arlen = 0U;
        vlSelf->i_araddr = vlSelf->raddr;
    } else {
        vlSelf->i_arlen = 1U;
        vlSelf->i_araddr = (0xfffffff8U & vlSelf->raddr);
    }
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h214b0c8a__0;
    __VdfgTmp_h214b0c8a__0 = 0;
    // Body
    if ((0U == ((IData)(vlSelf->offset) >> 2U))) {
        vlSelf->o_rdata = (IData)(vlSelf->icache[vlSelf->set_index]);
    } else if ((1U == ((IData)(vlSelf->offset) >> 2U))) {
        vlSelf->o_rdata = (IData)((vlSelf->icache[vlSelf->set_index] 
                                   >> 0x20U));
    }
    vlSelf->hit = (vlSelf->valid_array[vlSelf->set_index] 
                   & ((vlSelf->tag_array[vlSelf->set_index] 
                       == vlSelf->tag) & ((0U == (IData)(vlSelf->state)) 
                                          & ((~ (IData)(vlSelf->uncache_addr)) 
                                             & (IData)(vlSelf->rvalid)))));
    __VdfgTmp_h214b0c8a__0 = ((0U == (IData)(vlSelf->state)) 
                              & (IData)(vlSelf->uncache_addr));
    vlSelf->i_rready = ((2U == (IData)(vlSelf->state)) 
                        | (IData)(__VdfgTmp_h214b0c8a__0));
    vlSelf->i_arvalid = ((1U == (IData)(vlSelf->state)) 
                         | ((IData)(__VdfgTmp_h214b0c8a__0) 
                            & (IData)(vlSelf->rvalid)));
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__icache__1\n"); );
    // Body
    vlSelf->rdata = ((IData)(vlSelf->uncache_addr) ? vlSelf->i_rdata
                      : ((IData)(vlSelf->hit) ? vlSelf->o_rdata
                          : (((0U == ((IData)(vlSelf->offset) 
                                      >> 2U)) & (0U 
                                                 != (IData)(vlSelf->i_arlen)))
                              ? vlSelf->i_rdata_r : vlSelf->i_rdata)));
    vlSelf->valid = (((IData)(vlSelf->i_rvalid) & ((IData)(vlSelf->i_rready) 
                                                   & (IData)(vlSelf->i_rlast))) 
                     | ((IData)(vlSelf->rvalid) & (IData)(vlSelf->hit)));
}
