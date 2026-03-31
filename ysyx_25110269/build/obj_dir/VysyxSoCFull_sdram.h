// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_SDRAM_H_
#define VERILATED_VYSYXSOCFULL_SDRAM_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_sdram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(cke,0,0);
    VL_IN8(cs,0,0);
    VL_IN8(ras,0,0);
    VL_IN8(cas,0,0);
    VL_IN8(we,0,0);
    VL_IN8(ba,1,0);
    VL_IN8(dqm,1,0);
    CData/*3:0*/ cmd;
    CData/*2:0*/ cas_latency;
    CData/*2:0*/ burst_length;
    CData/*2:0*/ read_latency;
    CData/*3:0*/ in_read;
    CData/*3:0*/ bank_active;
    CData/*0:0*/ read_valid_pipe;
    CData/*0:0*/ data_out_en;
    VL_IN16(a,12,0);
    VL_IN16(dq,15,0);
    SData/*15:0*/ read_data_pipe;
    SData/*15:0*/ data_out;
    VL_OUT16(dq__out,15,0);
    VL_OUT16(dq__en,15,0);
    IData/*31:0*/ shift_reg;
    VlUnpacked<VlUnpacked<VlUnpacked<SData/*15:0*/, 512>, 8192>, 4> memory;
    VlUnpacked<SData/*12:0*/, 4> active_row;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*3:0*/ CMD_NOP = 7U;
    static constexpr CData/*3:0*/ CMD_ACTIVE = 3U;
    static constexpr CData/*3:0*/ CMD_READ = 5U;
    static constexpr CData/*3:0*/ CMD_WRITE = 4U;
    static constexpr CData/*3:0*/ CMD_PRECHARGE = 2U;
    static constexpr CData/*3:0*/ CMD_REFRESH = 1U;
    static constexpr CData/*3:0*/ CMD_LOAD_MODE = 0U;
    static constexpr IData/*31:0*/ BANK_BITS = 2U;
    static constexpr IData/*31:0*/ ROW_BITS = 0x0000000dU;
    static constexpr IData/*31:0*/ COL_BITS = 9U;

    // CONSTRUCTORS
    VysyxSoCFull_sdram(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_sdram();
    VL_UNCOPYABLE(VysyxSoCFull_sdram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
