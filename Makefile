# ============================================================================
# RISC-V Single Cycle Core Makefile
# ============================================================================

# --- Tools ---
IVERILOG = iverilog
VVP      = vvp
GTKWAVE  = gtkwave

# --- Flags ---
# -g2012 : Enable SystemVerilog 2012 standard
# -Wall  : Enable all warnings
# -I src : Include path for source files
FLAGS    = -g2012 -Wall -I src

# --- Directories ---
SRC_DIR = src
TB_DIR  = tb

# --- Files ---
# 1. Package MUST be compiled first.
PKG     = $(SRC_DIR)/definitions_pkg.sv

# 2. Find all source files in src/, excluding the package to avoid duplicates
#    We look for both .sv and .v files (since you have top.v)
SRCS    = $(filter-out $(PKG), $(wildcard $(SRC_DIR)/*.sv $(SRC_DIR)/*.v))

# 3. Testbench - Default to tb_top.sv, but you can override it
#    Example: make TB=tb/alu_tb.sv
TB      ?= $(TB_DIR)/tb_top.sv

# --- Outputs ---
OUT     = riscv_sim.out
VCD     = cpu_wave.vcd

# ============================================================================
# Targets
# ============================================================================

.PHONY: all run wave clean help

# Default target: Compile and Run
all: run

# Compile the processor and testbench
$(OUT): $(PKG) $(SRCS) $(TB)
	@echo "----------------------------------------"
	@echo "Compiling SystemVerilog files..."
	@echo "----------------------------------------"
	$(IVERILOG) $(FLAGS) -o $(OUT) $(PKG) $(SRCS) $(TB)

# Run the simulation
run: $(OUT)
	@echo "----------------------------------------"
	@echo "Running Simulation..."
	@echo "----------------------------------------"
	$(VVP) $(OUT)

# Open Waveforms in GTKWave
wave: $(VCD)
	@echo "Opening Waveforms..."
	$(GTKWAVE) $(VCD)

# Check if VCD exists before opening (helper for 'wave' target)
$(VCD): run

# Clean up generated files
clean:
	@echo "Cleaning up..."
	rm -f $(OUT) $(VCD) *.vcd

# Help command
help:
	@echo "Usage:"
	@echo "  make        : Compile and run the full processor simulation (tb_top.sv)"
	@echo "  make wave   : Run simulation and open GTKWave"
	@echo "  make clean  : Remove output files"
	@echo "  make TB=tb/alu_tb.sv : Run a specific testbench (e.g., just the ALU)"