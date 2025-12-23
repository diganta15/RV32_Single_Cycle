package definitions_pkg;
    // Enum definitions used internally for readability
    typedef enum logic [6:0] {
        OPC_LUI     = 7'b0110111,
        OPC_AUIPC   = 7'b0010111,
        OPC_JAL     = 7'b1101111,
        OPC_JALR    = 7'b1100111,
        OPC_BRANCH  = 7'b1100011,
        OPC_LOAD    = 7'b0000011,
        OPC_STORE   = 7'b0100011,
        OPC_OP_IMM  = 7'b0010011,
        OPC_OP      = 7'b0110011,
        OPC_FENCE   = 7'b0001111, // FENCE
        OPC_SYSTEM  = 7'b1110011  // ECALL, EBREAK
    } opcode_t;
    
    typedef enum logic[4:0] { 
        ALU_ADD = 5'd0, 
        ALU_SUB = 5'd1, 
        ALU_AND = 5'd2, 
        ALU_OR  = 5'd3, 
        ALU_XOR = 5'd4,   
        ALU_SLL = 5'd5, 
        ALU_SRL = 5'd6, 
        ALU_SRA = 5'd7, 
        ALU_SLT = 5'd8, 
        ALU_SLTU= 5'd9                
     } alu_opcodes_t;
endpackage