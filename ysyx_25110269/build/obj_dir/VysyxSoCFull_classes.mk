# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VysyxSoCFull.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VysyxSoCFull \
	VysyxSoCFull___024root__DepSet_h4d156741__0 \
	VysyxSoCFull___024root__DepSet_h0188974b__0 \
	VysyxSoCFull_ysyxSoCFull__DepSet_h782ade5e__0 \
	VysyxSoCFull_ysyxSoCFull__DepSet_h0ea90e38__0 \
	VysyxSoCFull___024unit__DepSet_h308b0958__0 \
	VysyxSoCFull_ysyxSoCASIC__DepSet_hc5e3436e__0 \
	VysyxSoCFull_ysyxSoCASIC__DepSet_hc5e3436e__1 \
	VysyxSoCFull_ysyxSoCASIC__DepSet_h79727328__0 \
	VysyxSoCFull_sdram__DepSet_h2a808a58__0 \
	VysyxSoCFull_CPU__DepSet_h2121f5dc__0 \
	VysyxSoCFull_ysyx_25110269__DepSet_hfe4924aa__0 \
	VysyxSoCFull_ysyx_25110269__DepSet_h94cc5764__0 \
	VysyxSoCFull_ysyx_25110269_LSU__DepSet_hd6ba9f5c__0 \
	VysyxSoCFull_ysyx_25110269_IFU__DepSet_h76f5b33a__0 \
	VysyxSoCFull_ysyx_25110269_EXU__DepSet_h75e053af__0 \
	VysyxSoCFull_ysyx_25110269_csr__DepSet_h3395dce2__0 \
	VysyxSoCFull_ysyx_25110269_WBU__DepSet_h672aca94__0 \
	VysyxSoCFull_ysyx_25110269_WBU__DepSet_h1ba8f97e__0 \
	VysyxSoCFull_ysyx_25110269_IDU__DepSet_h198fa361__0 \
	VysyxSoCFull_ysyx_25110269_IDU__DepSet_h2d0dd32b__0 \
	VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8__DepSet_he43e66ed__0 \
	VysyxSoCFull_ysyx_25110269_regfile__DepSet_h83bbcd09__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VysyxSoCFull__ConstPool_0 \
	VysyxSoCFull___024root__Slow \
	VysyxSoCFull___024root__DepSet_h4d156741__0__Slow \
	VysyxSoCFull___024root__DepSet_h0188974b__0__Slow \
	VysyxSoCFull_ysyxSoCFull__Slow \
	VysyxSoCFull_ysyxSoCFull__DepSet_h782ade5e__0__Slow \
	VysyxSoCFull_ysyxSoCFull__DepSet_h0ea90e38__0__Slow \
	VysyxSoCFull___024unit__Slow \
	VysyxSoCFull___024unit__DepSet_h460a3d32__0__Slow \
	VysyxSoCFull_ysyxSoCASIC__Slow \
	VysyxSoCFull_ysyxSoCASIC__DepSet_hc5e3436e__0__Slow \
	VysyxSoCFull_ysyxSoCASIC__DepSet_h79727328__0__Slow \
	VysyxSoCFull_sdram__Slow \
	VysyxSoCFull_sdram__DepSet_h2a808a58__0__Slow \
	VysyxSoCFull_CPU__Slow \
	VysyxSoCFull_CPU__DepSet_hf30f4185__0__Slow \
	VysyxSoCFull_CPU__DepSet_h2121f5dc__0__Slow \
	VysyxSoCFull_ysyx_25110269__Slow \
	VysyxSoCFull_ysyx_25110269__DepSet_hfe4924aa__0__Slow \
	VysyxSoCFull_ysyx_25110269__DepSet_h94cc5764__0__Slow \
	VysyxSoCFull_ysyx_25110269_LSU__Slow \
	VysyxSoCFull_ysyx_25110269_LSU__DepSet_hd6ba9f5c__0__Slow \
	VysyxSoCFull_ysyx_25110269_IFU__Slow \
	VysyxSoCFull_ysyx_25110269_IFU__DepSet_h76f5b33a__0__Slow \
	VysyxSoCFull_ysyx_25110269_EXU__Slow \
	VysyxSoCFull_ysyx_25110269_EXU__DepSet_h75e053af__0__Slow \
	VysyxSoCFull_ysyx_25110269_csr__Slow \
	VysyxSoCFull_ysyx_25110269_csr__DepSet_h3395dce2__0__Slow \
	VysyxSoCFull_ysyx_25110269_WBU__Slow \
	VysyxSoCFull_ysyx_25110269_WBU__DepSet_h672aca94__0__Slow \
	VysyxSoCFull_ysyx_25110269_WBU__DepSet_h1ba8f97e__0__Slow \
	VysyxSoCFull_ysyx_25110269_IDU__Slow \
	VysyxSoCFull_ysyx_25110269_IDU__DepSet_h2d0dd32b__0__Slow \
	VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8__Slow \
	VysyxSoCFull_ysyx_25110269_icache__N8_W1_B8__DepSet_he43e66ed__0__Slow \
	VysyxSoCFull_ysyx_25110269_regfile__Slow \
	VysyxSoCFull_ysyx_25110269_regfile__DepSet_h83bbcd09__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VysyxSoCFull__Dpi \
	VysyxSoCFull__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VysyxSoCFull__Syms \
	VysyxSoCFull__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
