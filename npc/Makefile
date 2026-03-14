TOPNAME = ysyxSoCFull
VERILATOR = verilator
ysyxSoC_HOME = $(shell pwd)
NXDC_FILES = constr/top.nxdc

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

include $(ysyxSoC_HOME)/scripts/config.mk
-include $(ysyxSoC_HOME)/include/config/auto.conf
-include $(ysyxSoC_HOME)/include/config/auto.conf.cmd
-include $(NVBOARD_HOME)/scripts/nvboard.mk

OPT_LEVEL := -O2
ifeq ($(CONFIG_OPT_O0),y)
OPT_LEVEL := -O0
endif
ifeq ($(CONFIG_OPT_O3),y)
OPT_LEVEL := -O3
endif

DST_DIR ?= $(shell pwd)/build

CXXFLAGS += -I$(abspath ./include) \
			-I$(abspath ../patch/ysyxSoC/perip/uart16550/rtl) \
			-I$(abspath ../patch/ysyxSoC/perip/spi/rtl) \
			-I$(abspath ../nemu/tools/capstone/repo/include) \
			-I$(abspath $(NVBOARD_HOME)/usr/include) \
			-I$(abspath ./vsrc)
CXXFLAGS += $(CFLAGS_CONFIG) -DDST_DIR=\\\"$(DST_DIR)\\\"

LDFLAGS += -L$(NVBOARD_HOME)/build -l:nvboard.a
LDFLAGS += -lSDL2 -lSDL2_image -lSDL2_ttf
LDFLAGS += -lreadline -ldl
VERILATOR_CFLAGS += -MMD --build -cc $(if $(CONFIG_WAVE),--trace-fst,)\
			--timescale "1ns/1ns" --no-timing  --autoflush\
		    $(OPT_LEVEL) --x-assign fast --x-initial fast --noassert -Wno-UNOPTFLAT\
			-I$(abspath ../patch/ysyxSoC/perip/uart16550/rtl) \
			-I$(abspath ../patch/ysyxSoC/perip/spi/rtl) \
			-I$(abspath ../nemu/tools/capstone/repo/include) \
			-I$(abspath ../nvboard/usr/include)\
			-I$(abspath ./vsrc) \
			$(if $(CONFIG_APB_DELAY),-DCONFIG_APB_DELAY) \
			$(if $(CONFIG_AXI_DELAY),-DCONFIG_AXI_DELAY)  
		    
OBJ_DIR = $(DST_DIR)/obj_dir
BIN = $(DST_DIR)/$(TOPNAME)
SIM_BIN = $(DST_DIR)/wave.fst
default: $(BIN)

$(shell mkdir -p $(DST_DIR))

# constraint file
SRC_AUTO_BIND = $(DST_DIR)/auto_bind.cpp
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS += $(shell find $(abspath ./vsrc) -name "*.v" -o -name "*.vh") 
VSRCS += $(shell find $(abspath ../patch/ysyxSoC/perip) -name "*.v" -type f)
VSRCS += /home/qzx/ysyx/ysyx-workbench//patch/ysyxSoC/build/ysyxSoCFull.v
# CSRCS += $(shell find $(abspath ../nvboard/src) -name "*.cpp")
CSRCS += $(shell find $(abspath ./csrc) -name "*.cpp") $(shell find $(abspath ./isa) -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# 构建目标依赖Capstone库和NEMU库
$(BIN): $(VSRCS) $(CSRCS) $(LIBCAPSTONE) $(NEMU_SO) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# 如果Capstone库不存在，则构建它
$(LIBCAPSTONE):
	$(MAKE) -C ../nemu/tools/capstone

# 如果NEMU库不存在，则构建它
$(NEMU_SO):
	$(MAKE) -C ../nemu 

yosys: 
	cd ~/yosys-sta && $(MAKE) -j8 sta
	 
run: $(BIN)
	@$^ --log=$(DST_DIR)/ysyxSoC-log.txt  $(if $(CONFIG_DIFFTEST),--diff=$(NEMU_SO),) --elf=$(ELF_TAR) $(OBJ_TAR) 

sim: $(SIM_BIN)
	@gtkwave $(SIM_BIN)

clean:
	rm -rf $(DST_DIR)

sta_clean:
	rm -rf ./result

.PHONY: default yosys clean run sim menuconfig
