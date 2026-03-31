// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_ysyx_25110269_regfile.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0(VysyxSoCFull_ysyx_25110269_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_25110269_regfile___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0\n"); );
    // Body
    vlSelf->rdata2 = ((0U == (IData)(vlSelf->raddr2))
                       ? 0U : vlSelf->regs[(0xfU & (IData)(vlSelf->raddr2))]);
    vlSelf->rdata1 = ((0U == (IData)(vlSelf->raddr1))
                       ? 0U : vlSelf->regs[(0xfU & (IData)(vlSelf->raddr1))]);
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25110269_regfile___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0(VysyxSoCFull_ysyx_25110269_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_ysyx_25110269_regfile___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__regs__v0;
    __Vdlyvdim0__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regs__v0;
    __Vdlyvval__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regs__v0;
    __Vdlyvset__regs__v0 = 0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    if (((IData)(vlSelf->wen) & (0U != (IData)(vlSelf->waddr)))) {
        __Vdlyvval__regs__v0 = vlSelf->wdata;
        __Vdlyvset__regs__v0 = 1U;
        __Vdlyvdim0__regs__v0 = (0xfU & (IData)(vlSelf->waddr));
    }
    if (__Vdlyvset__regs__v0) {
        vlSelf->regs[__Vdlyvdim0__regs__v0] = __Vdlyvval__regs__v0;
    }
}
