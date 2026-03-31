// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_LSU.h"

// Parameter definitions for VysyxSoCFull_ysyx_25110269_LSU
constexpr CData/*2:0*/ VysyxSoCFull_ysyx_25110269_LSU::ms_idle;
constexpr CData/*2:0*/ VysyxSoCFull_ysyx_25110269_LSU::ms_wait_ready;
constexpr CData/*2:0*/ VysyxSoCFull_ysyx_25110269_LSU::ms_addr_ready;
constexpr CData/*2:0*/ VysyxSoCFull_ysyx_25110269_LSU::ms_wdata_ready;
constexpr CData/*2:0*/ VysyxSoCFull_ysyx_25110269_LSU::ms_rdata_ready;
constexpr CData/*2:0*/ VysyxSoCFull_ysyx_25110269_LSU::ms_wdata_wait;


void VysyxSoCFull_ysyx_25110269_LSU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_LSU* vlSelf);

VysyxSoCFull_ysyx_25110269_LSU::VysyxSoCFull_ysyx_25110269_LSU(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_LSU___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_LSU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_LSU::~VysyxSoCFull_ysyx_25110269_LSU() {
}
