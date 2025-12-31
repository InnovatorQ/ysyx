TOPNAME = top
VERILATOR = verilator
NPC_HOME = $(shell pwd)

-include $(NPC_HOME)/include/config/auto.conf
include $(NPC_HOME)/scripts/config.mk
# 去除引号的函数
remove_quote = $(patsubst "%",%,$(1))

# Capstone反汇编库配置
LIBCAPSTONE = ../nemu/tools/capstone/repo/libcapstone.so.5

# NEMU difftest库配置
NEMU_SO = ../nemu/build/riscv32-nemu-interpreter-so

CFLAGS_CONFIG = 
CFLAGS_CONFIG += $(if $(CONFIG_DIFFTEST),-DCONFIG_DIFFTEST,)
CFLAGS_CONFIG += $(if $(CONFIG_ITRACE),-DCONFIG_ITRACE,)
CFLAGS_CONFIG += $(if $(CONFIG_MTRACE),-DCONFIG_MTRACE,)
CFLAGS_CONFIG += $(if $(CONFIG_FTRACE),-DCONFIG_FTRACE,)
CFLAGS_CONFIG += $(if $(CONFIG_DEVICE),-DCONFIG_DEVICE,)


OPT_LEVEL := -O2
ifeq ($(CONFIG_OPT_O0),y)
OPT_LEVEL := -O0
endif
ifeq ($(CONFIG_OPT_O3),y)
OPT_LEVEL := -O3
endif

DST_DIR ?= $(shell pwd)/build

VERILATOR_CFLAGS += -MMD --build -cc \
		    $(OPT_LEVEL) --x-assign fast --x-initial fast --noassert \
		    -Wno-UNOPTFLAT -LDFLAGS "-lreadline -ldl" \
		    -CFLAGS "-I$(abspath ./include) -I$(abspath ../nemu/tools/capstone/repo/include) $(CFLAGS_CONFIG) -DDST_DIR=\\\"$(DST_DIR)\\\""

# Add trace if enabled
VERILATOR_CFLAGS += $(if $(CONFIG_WAVE),--trace-fst,)

OBJ_DIR = $(DST_DIR)/obj_dir
BIN = $(DST_DIR)/$(TOPNAME)
SIM_BIN = $(DST_DIR)/wave.fst
default: $(BIN)

$(shell mkdir -p $(DST_DIR))

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v") $(shell find $(abspath ./vsrc) -name "*.sv")
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")

# 构建目标依赖Capstone库和NEMU库
$(BIN): $(VSRCS) $(CSRCS) $(LIBCAPSTONE) $(NEMU_SO)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
		-I$(abspath ./vsrc) -I$(abspath ./include) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# 如果Capstone库不存在，则构建它
$(LIBCAPSTONE):
	$(MAKE) -C ../nemu/tools/capstone

# 如果NEMU库不存在，则构建它
$(NEMU_SO):
	$(MAKE) -C ../nemu 

run: $(BIN)
	@$^  --log=$(DST_DIR)/npc-log.txt -b $(if $(CONFIG_DIFFTEST),--diff=$(NEMU_SO),) --elf=$(ELF_TAR) $(OBJ_TAR) 

$(SIM_BIN): $(BIN)
	@$^  --log=$(DST_DIR)/npc-log.txt $(if $(CONFIG_DIFFTEST),--diff=$(NEMU_SO),) --elf=$(ELF_TAR) $(OBJ_TAR)

sim: $(SIM_BIN)
	@gtkwave $(SIM_BIN)

clean:
	rm -rf $(DST_DIR)

.PHONY: default clean run sim menuconfig
