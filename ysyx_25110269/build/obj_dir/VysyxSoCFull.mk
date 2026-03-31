# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/build/ysyxSoCFull

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD \
	-O3 \
	-I/usr/include/SDL2 \
	-D_REENTRANT \
	-I/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/include \
	-I/home/qzx/ysyx/ysyx-workbench/ysyxSoC/perip/uart16550/rtl \
	-I/home/qzx/ysyx/ysyx-workbench/ysyxSoC/perip/spi/rtl \
	-I/home/qzx/ysyx/ysyx-workbench/nemu/tools/capstone/repo/include \
	-I/home/qzx/ysyx/ysyx-workbench/nvboard/usr/include \
	-I/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/vsrc \
	-DCONFIG_DIFFTEST \
	-DCONFIG_ITRACE \
	-DDST_DIR=\"/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/build\" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \
	-L/home/qzx/ysyx/ysyx-workbench/nvboard//build \
	-l:nvboard.a \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \
	-lreadline \
	-ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	cpu_exec \
	dut \
	isa \
	monitor \
	expr \
	sdb \
	watchpoint \
	sim_main \
	disasm \
	ftrace \
	log \
	timer \
	reg \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/build \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/cpu \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/cpu/difftest \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/monitor \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/monitor/sdb \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/utils \
	/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/isa/riscv32 \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/build/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu_exec.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/cpu/cpu_exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/cpu/difftest/dut.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
isa.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/cpu/difftest/isa.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/monitor/sdb/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/monitor/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/monitor/sdb/watchpoint.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_main.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/sim_main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/utils/disasm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/utils/ftrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/utils/log.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/csrc/utils/timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/isa/riscv32/reg.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/build/ysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
