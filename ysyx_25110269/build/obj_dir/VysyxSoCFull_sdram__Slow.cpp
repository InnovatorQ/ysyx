// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_sdram.h"

// Parameter definitions for VysyxSoCFull_sdram
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_NOP;
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_ACTIVE;
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_READ;
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_WRITE;
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_PRECHARGE;
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_REFRESH;
constexpr CData/*3:0*/ VysyxSoCFull_sdram::CMD_LOAD_MODE;
constexpr IData/*31:0*/ VysyxSoCFull_sdram::BANK_BITS;
constexpr IData/*31:0*/ VysyxSoCFull_sdram::ROW_BITS;
constexpr IData/*31:0*/ VysyxSoCFull_sdram::COL_BITS;


void VysyxSoCFull_sdram___ctor_var_reset(VysyxSoCFull_sdram* vlSelf);

VysyxSoCFull_sdram::VysyxSoCFull_sdram(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_sdram___ctor_var_reset(this);
}

void VysyxSoCFull_sdram::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_sdram::~VysyxSoCFull_sdram() {
}
