// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_WBU.h"

// Parameter definitions for VysyxSoCFull_ysyx_25110269_WBU
constexpr CData/*0:0*/ VysyxSoCFull_ysyx_25110269_WBU::ws_idle;
constexpr CData/*0:0*/ VysyxSoCFull_ysyx_25110269_WBU::ws_wait_ready;


void VysyxSoCFull_ysyx_25110269_WBU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_WBU* vlSelf);

VysyxSoCFull_ysyx_25110269_WBU::VysyxSoCFull_ysyx_25110269_WBU(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_WBU___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_WBU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_WBU::~VysyxSoCFull_ysyx_25110269_WBU() {
}
