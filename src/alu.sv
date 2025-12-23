module alu( input  logic [4:0] alu_op, 
            input  logic [31:0] SrcA,
            input  logic [31:0] SrcB,
            output logic        ZeroFlag,
            output logic [31:0] ALUResult
);
    import definitions_pkg::*;
    always @(*) begin 
        ALUResult = 0;
        case(alu_opcodes_t'(alu_op))
            ALU_ADD: ALUResult = SrcA + SrcB;
            ALU_SUB: ALUResult = SrcA - SrcB;
            ALU_AND: ALUResult = SrcA & SrcB;
            ALU_OR:  ALUResult = SrcA | SrcB;
            ALU_XOR: ALUResult = SrcA ^ SrcB;
            ALU_SLL: ALUResult = SrcA << SrcB[4:0];
            ALU_SRL: ALUResult = SrcA >> SrcB[4:0];
            ALU_SRA: ALUResult = $signed(SrcA) >>> SrcB[4:0];
            ALU_SLT: ALUResult = ($signed(SrcA) < $signed(SrcB)) ? 32'd1 : 32'd0;
            ALU_SLTU:ALUResult = (SrcA < SrcB) ? 32'd1 : 32'd0;
            default: ALUResult = 32'd0;
        endcase
    end
    assign ZeroFlag = (ALUResult == 32'd0);
endmodule