// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_regfile.h"

void VysyxSoCFull_ysyx_25110269_regfile___ctor_var_reset(VysyxSoCFull_ysyx_25110269_regfile* vlSelf);

VysyxSoCFull_ysyx_25110269_regfile::VysyxSoCFull_ysyx_25110269_regfile(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_regfile___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_regfile::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_regfile::~VysyxSoCFull_ysyx_25110269_regfile() {
}
