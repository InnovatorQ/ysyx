TOPNAME = top
VERILATOR = verilator

# Capstone反汇编库配置
LIBCAPSTONE = ../nemu/tools/capstone/repo/libcapstone.so.5

# NEMU difftest库配置
NEMU_SO = ../nemu/build/riscv32-nemu-interpreter-so

VERILATOR_CFLAGS += -MMD --build -cc --trace-fst \
		    -O3 --x-assign fast --x-initial fast --noassert \
		    -Wno-UNOPTFLAT -LDFLAGS "-lreadline -ldl" \
		    -CFLAGS "-I$(abspath ./include) -I$(abspath ../nemu/tools/capstone/repo/include) -DCONFIG_DIFFTEST"

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
MEM_DST = ./ROM
OBJ_TAR = $(MEM_DST)/sum.hex
BIN = $(BUILD_DIR)/$(TOPNAME)
SIM_BIN = $(BUILD_DIR)/wave.fst
default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

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
	@$^ -b --log=$(BUILD_DIR)/npc-log.txt  --elf=$(ELF_TAR) $(OBJ_TAR) 

run-batch: $(BIN)
	@$^ -b --log=$(BUILD_DIR)/npc-log.txt $(OBJ_TAR)

sim: $(SIM_BIN)
	@gtkwave $(SIM_BIN)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default clean run run-batch sim
