module main_decoder(
    input  logic [6:0] opcode, 
    output logic [1:0] ResultSrc,
    output logic       MemWrite,
    output logic       ALUSrc,
    output logic [2:0] ImmSrc,
    output logic       RegWrite,
    output logic [1:0] SrcA,     
    output logic       Branch,
    output logic       Jump
);
    import definitions_pkg::*;
    logic [11:0] controls; 
    assign {RegWrite, ImmSrc, ALUSrc, MemWrite, ResultSrc, Branch, Jump, SrcA} = controls;

    always @(*) begin
        case(opcode_t'(opcode))          
            OPC_OP:     controls = 12'b1_xxx_0_0_00_0_0_00; 
            OPC_OP_IMM: controls = 12'b1_000_1_0_00_0_0_00; 
            OPC_LOAD:   controls = 12'b1_000_1_0_01_0_0_00; 
            OPC_STORE:  controls = 12'b0_001_1_1_xx_0_0_00; 
            OPC_BRANCH: controls = 12'b0_010_0_0_xx_1_0_00; 
            OPC_JAL:    controls = 12'b1_011_x_0_10_0_1_xx; 
            OPC_LUI:    controls = 12'b1_100_1_0_00_0_0_10; 
            OPC_AUIPC:  controls = 12'b1_100_1_0_00_0_0_01; 
            OPC_JALR:   controls = 12'b1_000_1_0_10_0_1_00; 
            
            // FENCE: Treated as NOP (no state change)
            OPC_FENCE:  controls = 12'b0_000_0_0_00_0_0_00;
            // SYSTEM: Treated as NOP (no state change), external signals handle event
            OPC_SYSTEM: controls = 12'b0_000_0_0_00_0_0_00; 
            
            default:    controls = 12'b0_000_0_0_00_0_0_00;
        endcase
    end
endmodule