// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_REGFILE_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_REGFILE_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(raddr1,4,0);
    VL_IN8(raddr2,4,0);
    VL_IN8(wen,0,0);
    VL_IN8(waddr,4,0);
    VL_OUT(rdata1,31,0);
    VL_OUT(rdata2,31,0);
    VL_IN(wdata,31,0);
    VlUnpacked<IData/*31:0*/, 16> regs;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_regfile(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_regfile();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
