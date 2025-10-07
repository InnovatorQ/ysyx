MODULE_NAME = top
VERILATOR_FLAGS = -Wall --cc --exe --build -j 0 --trace
CPP_SRC = sim_main.cpp
VERILOG_SRC = top.v
EXECUTABLE = obj_dir/V$(MODULE_NAME)
all:
	@echo "Write this Makefile by your self."

sim: $(EXECUTABLE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	./$(EXECUTABLE)

$(EXECUTABLE): $(VERILOG_SRC) $(CPP_SRC)
	verilator $(VERILATOR_FLAGS) $(CPP_SRC) $(VERILOG_SRC)

waves: waveform.fst
	gtkwave waveform.fst
include ../Makefile
