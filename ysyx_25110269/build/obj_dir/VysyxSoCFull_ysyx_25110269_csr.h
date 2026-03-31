// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_25110269_CSR_H_
#define VERILATED_VYSYXSOCFULL_YSYX_25110269_CSR_H_  // guard

#include "verilated.h"

class VysyxSoCFull__Syms;

class VysyxSoCFull_ysyx_25110269_csr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ecall,0,0);
    VL_IN8(mret,0,0);
    VL_IN8(csr_wen,0,0);
    VL_IN16(rd_addr,11,0);
    VL_IN16(wr_addr,11,0);
    VL_IN(ds_pc,31,0);
    VL_OUT(rd_data,31,0);
    VL_IN(wr_data,31,0);
    VL_OUT(csr_mepc,31,0);
    VL_OUT(csr_mtvec,31,0);
    IData/*31:0*/ csr_mcycle;
    IData/*31:0*/ csr_mcycle_h;
    IData/*31:0*/ csr_mvendorid;
    IData/*31:0*/ csr_marchid;
    IData/*31:0*/ csr_mstatus;
    IData/*31:0*/ csr_mcause;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr SData/*11:0*/ MCYCLE = 0x0b00U;
    static constexpr SData/*11:0*/ MCYCLE_H = 0x0b80U;
    static constexpr SData/*11:0*/ MVENDORID = 0x0f11U;
    static constexpr SData/*11:0*/ MARCHID = 0x0f12U;
    static constexpr SData/*11:0*/ MEPC = 0x0341U;
    static constexpr SData/*11:0*/ MCAUSE = 0x0342U;
    static constexpr SData/*11:0*/ MSTATUS = 0x0300U;
    static constexpr SData/*11:0*/ MTVEC = 0x0305U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyx_25110269_csr(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyx_25110269_csr();
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_25110269_csr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
