CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall
CPSD ?= 
WORK_DIR = $(shell pwd)
DST_DIR ?= $(WORK_DIR)/build
TARGETS = $(DST_DIR)/itrace_compress $(DST_DIR)/dtrace_compress

# itrace_compress
$(DST_DIR)/itrace_compress: $(WORK_DIR)/itrace_compress.cpp | $(DST_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

# dtrace_compress
$(DST_DIR)/dtrace_compress: $(WORK_DIR)/dtrace_compress.cpp | $(DST_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

all: $(TARGETS)

itrace_compress: $(DST_DIR)/itrace_compress
	$(DST_DIR)/itrace_compress $(DST_DIR)/$(CPSD)
	bzip2 -f $(DST_DIR)/$(CPSD)
dtrace_compress: $(DST_DIR)/dtrace_compress
	$(DST_DIR)/dtrace_compress $(DST_DIR)/$(CPSD)
	bzip2 -f $(DST_DIR)/$(CPSD)
test: 
	./cachesim/cache_benchmark.sh

clean:
	rm -rf $(DST_DIR)

.PHONY: clean itrace_compress dtrace_compress all test
