module main_decoder(
    input  definitions_pkg::opcode_t opcode,
    output logic [1:0] ResultSrc,
    output logic       MemWrite,
    output logic       ALUSrc,
    output logic [2:0] ImmSrc,
    output logic       RegWrite,
    output logic [1:0] SrcA,       // <--- NEW SIGNAL
    output logic       Branch,
    output logic       Jump
);
    import definitions_pkg::*;

    // Expanded to 12 bits to hold SrcA
    logic [11:0] controls; 

    assign {RegWrite, ImmSrc, ALUSrc, MemWrite, ResultSrc, Branch, Jump, SrcA} = controls;

    always_comb begin
        case(opcode)          
            //                       RegW_Imm_ALU_Mem_Res_Br_J_SrcA
            OPC_OP:     controls = 12'b1_xxx_0_0_00_0_0_00; // SrcA = Reg
            OPC_OP_IMM: controls = 12'b1_000_1_0_00_0_0_00; // SrcA = Reg
            OPC_LOAD:   controls = 12'b1_000_1_0_01_0_0_00; // SrcA = Reg
            OPC_STORE:  controls = 12'b0_001_1_1_xx_0_0_00; // SrcA = Reg
            OPC_BRANCH: controls = 12'b0_010_0_0_xx_1_0_00; // SrcA = Reg
            OPC_JAL:    controls = 12'b1_011_x_0_10_0_1_xx; // SrcA = Don't Care (PC+4 handled in WB)
            
            // The Special Cases
            OPC_LUI:    controls = 12'b1_100_1_0_00_0_0_10; // SrcA = 0 (Constant)
            OPC_AUIPC:  controls = 12'b1_100_1_0_00_0_0_01; // SrcA = PC
            
            OPC_JALR:   controls = 12'b1_000_1_0_10_0_1_00; // SrcA = Reg
            default:    controls = 12'b0_000_0_0_00_0_0_00;
        endcase
    end
endmodule