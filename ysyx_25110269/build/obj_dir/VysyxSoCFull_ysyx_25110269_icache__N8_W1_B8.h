// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_ICACHE__N8_W1_B8_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_ICACHE__N8_W1_B8_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rvalid,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(i_arvalid,0,0);
    VL_OUT8(i_arlen,7,0);
    VL_OUT8(i_arsize,2,0);
    VL_IN8(i_arready,0,0);
    VL_OUT8(i_arburst,1,0);
    VL_IN8(i_rvalid,0,0);
    VL_IN8(i_rresp,1,0);
    VL_OUT8(i_rready,0,0);
    VL_IN8(i_rlast,0,0);
    VL_IN8(cache_flush,0,0);
    CData/*7:0*/ w_ptr;
    CData/*2:0*/ set_index;
    CData/*2:0*/ offset;
    CData/*0:0*/ uncache_addr;
    CData/*0:0*/ hit;
    CData/*1:0*/ state;
    CData/*0:0*/ access_start;
    VL_IN(raddr,31,0);
    VL_OUT(rdata,31,0);
    VL_OUT(i_araddr,31,0);
    VL_IN(i_rdata,31,0);
    IData/*25:0*/ tag;
    IData/*31:0*/ o_rdata;
    IData/*31:0*/ i_rdata_r;
    IData/*31:0*/ miss_cnt;
    IData/*31:0*/ hit_cnt;
    IData/*31:0*/ penalty_cnt;
    IData/*31:0*/ i;
    VlUnpacked<QData/*63:0*/, 8> icache;
    VlUnpacked<CData/*0:0*/, 8> valid_array;
    VlUnpacked<IData/*25:0*/, 8> tag_array;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ NUM_SETS = 8U;
    static constexpr IData/*31:0*/ WAYS = 1U;
    static constexpr IData/*31:0*/ BLOCK_SIZE = 8U;
    static constexpr IData/*31:0*/ SET_BITS = 3U;
    static constexpr IData/*31:0*/ OFFSET_BITS = 3U;
    static constexpr IData/*31:0*/ TAG_BITS = 0x0000001aU;
    static constexpr IData/*31:0*/ WAY_BITS = 0U;
    static constexpr IData/*31:0*/ BLOCK_WORD = 1U;
    static constexpr IData/*31:0*/ NUM_BLOCKS = 8U;
    static constexpr IData/*31:0*/ IDLE = 0U;
    static constexpr IData/*31:0*/ MISS = 1U;
    static constexpr IData/*31:0*/ REFILL = 2U;
    static constexpr IData/*31:0*/ BURST_FIN = 3U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
