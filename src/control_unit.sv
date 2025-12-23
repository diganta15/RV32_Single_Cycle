module control_unit(
    input  logic [6:0] opcode, 
    input  logic [2:0] funct3,
    input  logic       funct7,
    input  logic [11:0] funct12, // Input for ECALL/EBREAK
    input  logic       ZeroFlag,
    input  logic       LessThanFlag, 
    
    output logic [1:0] ResultSrc,
    output logic       MemWrite,
    output logic       ALUSrc,
    output logic [2:0] ImmSrc,
    output logic       RegWrite,
    output logic [1:0] SrcA,
    output logic       PCSrc,
    output logic       JalrSel, 
    output logic       InstrEcall,
    output logic       InstrEbreak,
    output logic       InstrFence,
    output logic [4:0] ALUControl 
);
    import definitions_pkg::*;
    logic Branch, Jump;
    logic BranchTaken; 

    assign JalrSel = (opcode_t'(opcode) == OPC_JALR); 

    // System instruction decoding
    logic IsSystem;
    assign IsSystem = (opcode_t'(opcode) == OPC_SYSTEM) && (funct3 == 3'b000);
    
    assign InstrEcall  = IsSystem && (funct12 == 12'h000);
    assign InstrEbreak = IsSystem && (funct12 == 12'h001);
    
    // Fence decoding
    assign InstrFence = (opcode_t'(opcode) == OPC_FENCE);

    main_decoder md (
        .opcode     (opcode),
        .ResultSrc  (ResultSrc),
        .MemWrite   (MemWrite),
        .ALUSrc     (ALUSrc),
        .ImmSrc     (ImmSrc),
        .RegWrite   (RegWrite),
        .SrcA       (SrcA),
        .Branch     (Branch),
        .Jump       (Jump)
    );

    alu_decoder ad (
        .opcode     (opcode),
        .funct3     (funct3),
        .funct7     (funct7),
        .ALUControl (ALUControl)
    );

    always @(*) begin
        case(funct3)
            3'b000: BranchTaken = ZeroFlag;        
            3'b001: BranchTaken = !ZeroFlag;       
            3'b100: BranchTaken = LessThanFlag;    
            3'b101: BranchTaken = !LessThanFlag;   
            3'b110: BranchTaken = LessThanFlag;    
            3'b111: BranchTaken = !LessThanFlag;   
            default: BranchTaken = 1'b0;
        endcase
    end
    assign PCSrc = Jump | (Branch & BranchTaken);
endmodule