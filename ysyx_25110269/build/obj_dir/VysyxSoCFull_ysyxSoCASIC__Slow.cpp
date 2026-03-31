// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

void VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(VysyxSoCFull_ysyxSoCASIC* vlSelf);

VysyxSoCFull_ysyxSoCASIC::VysyxSoCFull_ysyxSoCASIC(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCASIC::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyxSoCASIC::~VysyxSoCFull_ysyxSoCASIC() {
}
