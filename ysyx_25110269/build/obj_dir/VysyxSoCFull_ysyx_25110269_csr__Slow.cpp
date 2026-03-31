// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_csr.h"

// Parameter definitions for VysyxSoCFull_ysyx_25110269_csr
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MCYCLE;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MCYCLE_H;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MVENDORID;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MARCHID;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MEPC;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MCAUSE;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MSTATUS;
constexpr SData/*11:0*/ VysyxSoCFull_ysyx_25110269_csr::MTVEC;


void VysyxSoCFull_ysyx_25110269_csr___ctor_var_reset(VysyxSoCFull_ysyx_25110269_csr* vlSelf);

VysyxSoCFull_ysyx_25110269_csr::VysyxSoCFull_ysyx_25110269_csr(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_csr___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_csr::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_csr::~VysyxSoCFull_ysyx_25110269_csr() {
}
