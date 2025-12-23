module top(
    input  logic        clk, reset,
    output logic [31:0] WriteData, 
    output logic [31:0] DataAdr,    
    output logic        MemWrite,
    output logic        Ecall, 
    output logic        Ebreak,
    output logic        Fence
);
    logic [31:0] PC, Instr, ReadData;
    logic [1:0] ResultSrc;
    logic       ALUSrc, RegWrite, PCSrc, Zero, JalrSel; 
    logic [2:0] ImmSrc;
    logic [4:0] ALUControl; 
    logic [1:0] SrcA_Control; 
    
    control_unit c (
        .opcode     (Instr[6:0]), 
        .funct3     (Instr[14:12]),
        .funct7     (Instr[30]),
        .funct12    (Instr[31:20]), 
        .ZeroFlag   (Zero),
        .LessThanFlag(DataAdr[0]),
        .ResultSrc  (ResultSrc),
        .MemWrite   (MemWrite),
        .PCSrc      (PCSrc),
        .JalrSel    (JalrSel),
        .InstrEcall (Ecall),
        .InstrEbreak(Ebreak),
        .InstrFence (Fence),    
        .ALUSrc     (ALUSrc),
        .ImmSrc     (ImmSrc),
        .RegWrite   (RegWrite),
        .SrcA       (SrcA_Control), 
        .ALUControl (ALUControl)
    );

    datapath dp (
        .clk          (clk),
        .rst          (reset),
        .ResultSrc    (ResultSrc),
        .PCSrc        (PCSrc),
        .JalrSel      (JalrSel), 
        .ALUSrc       (ALUSrc),
        .RegWrite     (RegWrite),
        .ImmSrc       (ImmSrc),
        .ALUControl   (ALUControl),
        .SrcA_Control (SrcA_Control), 
        .Zero         (Zero),
        .PC           (PC),
        .Instr        (Instr),
        .ALUResult    (DataAdr),      
        .WriteData    (WriteData),    
        .ReadData     (ReadData)      
    );

    imem imem ( .a(PC), .rd(Instr) );
    dmem dmem ( 
        .clk(clk), 
        .we(MemWrite), 
        .a(DataAdr), 
        .wd(WriteData), 
        .funct3(Instr[14:12]), // NEW Connection
        .rd(ReadData) 
    );
endmodule