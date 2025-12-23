# ============================
# Tool configuration
# ============================
VERILATOR      := verilator
VERILATOR_OPTS := --sv --timing --binary -Wall



# ============================
# Directories
# ============================
SRC_DIR := src
TB_DIR  := tb
OBJ_DIR := obj_dir

# ============================
# Source files
# ============================
RTL_SRCS := \
	$(SRC_DIR)/definitions_pkg.sv \
	$(SRC_DIR)/alu.sv

TB_SRCS := \
	$(TB_DIR)/alu_tb.sv

ALL_SRCS := $(RTL_SRCS) $(TB_SRCS)

# ============================
# Top-level
# ============================
TOP := alu_tb

# ============================
# Default target
# ============================
.PHONY: all
all: run

# ============================
# Build
# ============================
.PHONY: build
build:
	$(VERILATOR) $(VERILATOR_OPTS) \
		--top-module $(TOP) \
		$(ALL_SRCS)

# ============================
# Run simulation
# ============================
.PHONY: run
run: build
	./$(OBJ_DIR)/V$(TOP)

# ============================
# Clean
# ============================
.PHONY: clean
clean:
	rm -rf $(OBJ_DIR) *.vcd
