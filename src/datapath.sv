module datapath(
    input  logic        clk, rst,
    input  logic [1:0]  ResultSrc,
    input  logic        PCSrc, 
    input  logic        JalrSel, 
    input  logic        ALUSrc,
    input  logic        RegWrite,
    input  logic [2:0]  ImmSrc,
    input  logic [4:0]  ALUControl, 
    input  logic [1:0]  SrcA_Control,
   
    
    input  logic [31:0] Instr,       
    input  logic [31:0] ReadData,    

    output logic        Zero,
    output logic [31:0] PC,
    output logic [31:0] ALUResult,
    output logic [31:0] WriteData    
);
    logic [31:0] PCNext, PCPlus4, PCTarget;
    logic [31:0] ImmExt;
    logic [31:0] SrcA, SrcB;          
    logic [31:0] Result;              
    logic [31:0] RD1;          
    logic [31:0] BranchTarget;     
    logic [31:0] ReadDataExtended; // New signal

    flopr #(32) pcreg(clk, rst, PCNext, PC);
    adder       pcadd4(PC, 32'd4, PCPlus4);
    adder       pcaddbranch(PC, ImmExt, BranchTarget); 
    
    // Mux between Branch Target (PC+Imm) and JALR Target (Rs1+Imm)
    assign PCTarget = (JalrSel) ? ALUResult : BranchTarget;

    // Mux between NextPC (PC+4) and Target (Jump/Branch)
    mux2 #(32)  pcmux(PCPlus4, PCTarget, PCSrc, PCNext);

    regfile     rf(
        .clk(clk), 
        .we3(RegWrite), 
        .a1(Instr[19:15]), 
        .a2(Instr[24:20]), 
        .a3(Instr[11:7]), 
        .wd3(Result), 
        .rd1(RD1), 
        .rd2(WriteData)
    );

    extend      ext(Instr[31:7], ImmSrc, ImmExt);
    
    // ALU Input Muxes
    mux3 #(32)  srcamux(RD1, PC, 32'd0, SrcA_Control, SrcA);
    mux2 #(32)  srcbmux(WriteData, ImmExt, ALUSrc, SrcB);
    
    alu alu(
        .alu_op(ALUControl),
        .SrcA(SrcA),
        .SrcB(SrcB),
        .ZeroFlag(Zero),
        .ALUResult(ALUResult)
    );

    load_extender ld_ext (
        .ReadData  (ReadData),
        .ByteOffset(ALUResult[1:0]), // The Address LSBs
        .funct3    (Instr[14:12]),   // The Load Type
        .FinalData (ReadDataExtended)
    );
    
    // Result Mux (ALU, Mem, or PC+4)
   mux3 #(32) resultmux(ALUResult, ReadDataExtended, PCPlus4, ResultSrc, Result);
endmodule
