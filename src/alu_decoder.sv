module alu_decoder( 
    input  logic [6:0] opcode, 
    input  logic [2:0] funct3,
    input  logic       funct7,
    output logic [4:0] ALUControl 
);
    import definitions_pkg::*;
    
    always @(*) begin
        ALUControl = ALU_ADD;
        case(opcode_t'(opcode))
            OPC_LOAD:   ALUControl = ALU_ADD;
            OPC_STORE:  ALUControl = ALU_ADD;
            OPC_LUI:    ALUControl = ALU_ADD;
            OPC_AUIPC:  ALUControl = ALU_ADD;
            OPC_JAL:    ALUControl = ALU_ADD;
            OPC_JALR:   ALUControl = ALU_ADD;
            
            OPC_BRANCH: begin
                case(funct3)
                    3'b000: ALUControl = ALU_SUB; // BEQ
                    3'b001: ALUControl = ALU_SUB; // BNE
                    3'b100: ALUControl = ALU_SLT; // BLT
                    3'b101: ALUControl = ALU_SLT; // BGE
                    3'b110: ALUControl = ALU_SLTU;// BLTU
                    3'b111: ALUControl = ALU_SLTU;// BGEU
                    default: ALUControl = ALU_SUB;
                endcase
            end

            OPC_OP: begin
                case(funct3)
                    3'b000: ALUControl = (funct7) ? ALU_SUB : ALU_ADD;
                    3'b001: ALUControl = ALU_SLL;
                    3'b010: ALUControl = ALU_SLT;
                    3'b011: ALUControl = ALU_SLTU;
                    3'b100: ALUControl = ALU_XOR;
                    3'b101: ALUControl = (funct7) ? ALU_SRA : ALU_SRL;
                    3'b110: ALUControl = ALU_OR;
                    3'b111: ALUControl = ALU_AND;
                    default:  ALUControl = ALU_ADD;
                endcase
            end

            OPC_OP_IMM: begin
                case(funct3)
                    3'b000: ALUControl = ALU_ADD;
                    3'b001: ALUControl = ALU_SLL;
                    3'b010: ALUControl = ALU_SLT;
                    3'b011: ALUControl = ALU_SLTU;
                    3'b100: ALUControl = ALU_XOR;
                    3'b101: ALUControl = (funct7) ? ALU_SRA : ALU_SRL;
                    3'b110: ALUControl = ALU_OR;
                    3'b111: ALUControl = ALU_AND;
                    default: ALUControl = ALU_ADD;
                endcase
            end
            default: ALUControl = ALU_ADD;
        endcase
    end
endmodule