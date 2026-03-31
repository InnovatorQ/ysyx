// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_IFU.h"

// Parameter definitions for VysyxSoCFull_ysyx_25110269_IFU
constexpr CData/*1:0*/ VysyxSoCFull_ysyx_25110269_IFU::fs_idle;
constexpr CData/*1:0*/ VysyxSoCFull_ysyx_25110269_IFU::fs_wait_ready;
constexpr CData/*1:0*/ VysyxSoCFull_ysyx_25110269_IFU::fs_addr_ready;
constexpr CData/*1:0*/ VysyxSoCFull_ysyx_25110269_IFU::fs_data_ready;


void VysyxSoCFull_ysyx_25110269_IFU___ctor_var_reset(VysyxSoCFull_ysyx_25110269_IFU* vlSelf);

VysyxSoCFull_ysyx_25110269_IFU::VysyxSoCFull_ysyx_25110269_IFU(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_IFU___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_IFU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_IFU::~VysyxSoCFull_ysyx_25110269_IFU() {
}
