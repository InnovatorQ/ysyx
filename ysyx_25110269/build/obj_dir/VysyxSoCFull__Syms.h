// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCFULL__SYMS_H_
#define VERILATED_VYSYXSOCFULL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VysyxSoCFull.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_sdram.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_ysyx_25110269.h"
#include "VysyxSoCFull_ysyx_25110269_LSU.h"
#include "VysyxSoCFull_ysyx_25110269_IFU.h"
#include "VysyxSoCFull_ysyx_25110269_EXU.h"
#include "VysyxSoCFull_ysyx_25110269_csr.h"
#include "VysyxSoCFull_ysyx_25110269_WBU.h"
#include "VysyxSoCFull_ysyx_25110269_IDU.h"
#include "VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8.h"
#include "VysyxSoCFull_ysyx_25110269_regfile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VysyxSoCFull__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VysyxSoCFull* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VysyxSoCFull___024root         TOP;
    VysyxSoCFull___024unit         TOP____024unit;
    VysyxSoCFull_ysyxSoCFull       TOP__ysyxSoCFull;
    VysyxSoCFull_ysyxSoCASIC       TOP__ysyxSoCFull__asic;
    VysyxSoCFull_CPU               TOP__ysyxSoCFull__asic__cpu;
    VysyxSoCFull_ysyx_25110269     TOP__ysyxSoCFull__asic__cpu__cpu;
    VysyxSoCFull_ysyx_25110269_EXU TOP__ysyxSoCFull__asic__cpu__cpu__EXU;
    VysyxSoCFull_ysyx_25110269_IDU TOP__ysyxSoCFull__asic__cpu__cpu__IDU;
    VysyxSoCFull_ysyx_25110269_IFU TOP__ysyxSoCFull__asic__cpu__cpu__IFU;
    VysyxSoCFull_ysyx_25110269_LSU TOP__ysyxSoCFull__asic__cpu__cpu__LSU;
    VysyxSoCFull_ysyx_25110269_WBU TOP__ysyxSoCFull__asic__cpu__cpu__WBU;
    VysyxSoCFull_ysyx_25110269_regfile TOP__ysyxSoCFull__asic__cpu__cpu__WBU__rf;
    VysyxSoCFull_ysyx_25110269_csr TOP__ysyxSoCFull__asic__cpu__cpu__csr;
    VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8 TOP__ysyxSoCFull__asic__cpu__cpu__icache;
    VysyxSoCFull_sdram             TOP__ysyxSoCFull__sdram0;
    VysyxSoCFull_sdram             TOP__ysyxSoCFull__sdram1;
    VysyxSoCFull_sdram             TOP__ysyxSoCFull__sdram2;
    VysyxSoCFull_sdram             TOP__ysyxSoCFull__sdram3;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__EXU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IDU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__IFU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__LSU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__WBU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__WBU__rf;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__csr;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__icache;
    VerilatedScope __Vscope_ysyxSoCFull__asic__lmrom;
    VerilatedScope __Vscope_ysyxSoCFull__flash;
    VerilatedScope __Vscope_ysyxSoCFull__flash__flash_cmd_i;
    VerilatedScope __Vscope_ysyxSoCFull__sdram0;
    VerilatedScope __Vscope_ysyxSoCFull__sdram1;
    VerilatedScope __Vscope_ysyxSoCFull__sdram2;
    VerilatedScope __Vscope_ysyxSoCFull__sdram3;

    // CONSTRUCTORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp);
    ~VysyxSoCFull__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
