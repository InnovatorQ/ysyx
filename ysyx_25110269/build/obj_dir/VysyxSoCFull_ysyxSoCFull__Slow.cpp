// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

void VysyxSoCFull_ysyxSoCFull___ctor_var_reset(VysyxSoCFull_ysyxSoCFull* vlSelf);

VysyxSoCFull_ysyxSoCFull::VysyxSoCFull_ysyxSoCFull(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyxSoCFull___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCFull::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyxSoCFull::~VysyxSoCFull_ysyxSoCFull() {
}
