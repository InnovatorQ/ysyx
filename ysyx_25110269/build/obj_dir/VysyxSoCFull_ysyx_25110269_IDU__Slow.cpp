// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_IDU.h"

// Parameter definitions for VysyxSoCFull_ysyx_25110269_IDU
constexpr CData/*0:0*/ VysyxSoCFull_ysyx_25110269_IDU::ds_idle;
constexpr CData/*0:0*/ VysyxSoCFull_ysyx_25110269_IDU::ds_wait_ready;


void VysyxSoCFull_ysyx_25110269_IDU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_IDU* vlSelf);

VysyxSoCFull_ysyx_25110269_IDU::VysyxSoCFull_ysyx_25110269_IDU(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_IDU___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_IDU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_IDU::~VysyxSoCFull_ysyx_25110269_IDU() {
}
