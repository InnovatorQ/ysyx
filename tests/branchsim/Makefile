CXX = g++
CXXFLAGS = -O2 -std=c++11
WORK_DIR = $(shell pwd)
DST_DIR = $(WORK_DIR)/build
TARGET = $(DST_DIR)/branchsim
SOURCE = branchsim.cpp
TRACE = ../build/dtrace.bz2

$(TARGET): $(SOURCE)
	rm -f $(TARGET)
	mkdir -p $(DST_DIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

run: $(TARGET)
	$^ $(TRACE)

clean:
	rm -f $(DST_DIR)

.PHONY: clean run
