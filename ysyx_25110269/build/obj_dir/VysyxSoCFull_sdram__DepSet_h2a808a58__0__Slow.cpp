// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_sdram.h"

VL_ATTR_COLD void VysyxSoCFull_sdram___ctor_var_reset(VysyxSoCFull_sdram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_sdram___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->cke = 0;
    vlSelf->cs = 0;
    vlSelf->ras = 0;
    vlSelf->cas = 0;
    vlSelf->we = 0;
    vlSelf->a = 0;
    vlSelf->ba = 0;
    vlSelf->dqm = 0;
    vlSelf->dq = 0;
    vlSelf->cmd = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 512; ++__Vi2) {
                vlSelf->memory[__Vi0][__Vi1][__Vi2] = 0;
            }
        }
    }
    vlSelf->cas_latency = 0;
    vlSelf->burst_length = 0;
    vlSelf->read_latency = 0;
    vlSelf->in_read = 0;
    vlSelf->bank_active = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->active_row[__Vi0] = 0;
    }
    vlSelf->read_data_pipe = 0;
    vlSelf->read_valid_pipe = 0;
    vlSelf->shift_reg = 0;
    vlSelf->data_out_en = 0;
    vlSelf->data_out = 0;
    vlSelf->dq__out = 0;
    vlSelf->dq__en = 0;
}
