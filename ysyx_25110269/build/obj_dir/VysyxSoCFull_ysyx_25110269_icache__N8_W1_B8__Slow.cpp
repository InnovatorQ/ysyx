// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8.h"

// Parameter definitions for VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::NUM_SETS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::WAYS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::BLOCK_SIZE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::SET_BITS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::OFFSET_BITS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::TAG_BITS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::WAY_BITS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::BLOCK_WORD;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::NUM_BLOCKS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::IDLE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::MISS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::REFILL;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::BURST_FIN;


void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ctor_var_reset(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8* vlSelf);

VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8::~VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8() {
}
