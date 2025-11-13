TOPNAME = top
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc --trace-fst \
		    -O3 --x-assign fast --x-initial fast --noassert \
		    -Wno-UNOPTFLAT

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
SIM_BIN = $(BUILD_DIR)/wave.fst
default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v") $(shell find $(abspath ./vsrc) -name "*.sv")
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")

$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		-I$(abspath ./vsrc) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

run: $(BIN)
	@$^ 

sim: $(SIM_BIN)
	@gtkwave $(SIM_BIN)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default clean run sim
