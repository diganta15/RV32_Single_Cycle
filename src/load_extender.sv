module load_extender(
    input  logic [31:0] ReadData, // Full word from memory
    input  logic [1:0]  ByteOffset, // Address[1:0]
    input  logic [2:0]  funct3,     // LB, LH, LW, LBU, LHU
    output logic [31:0] FinalData
);
    logic [7:0]  byte_val;
    logic [15:0] half_val;

    always @(*) begin
        // 1. Extract the Byte
        case(ByteOffset)
            2'b00: byte_val = ReadData[7:0];
            2'b01: byte_val = ReadData[15:8];
            2'b10: byte_val = ReadData[23:16];
            2'b11: byte_val = ReadData[31:24];
        endcase

        // 2. Extract the Halfword
        case(ByteOffset[1])
            1'b0: half_val = ReadData[15:0];
            1'b1: half_val = ReadData[31:16];
        endcase

        // 3. Select and Extend based on funct3
        case(funct3)
            3'b000: FinalData = {{24{byte_val[7]}}, byte_val};       // LB
            3'b001: FinalData = {{16{half_val[15]}}, half_val};      // LH
            3'b010: FinalData = ReadData;                            // LW
            3'b100: FinalData = {24'b0, byte_val};                   // LBU
            3'b101: FinalData = {16'b0, half_val};                   // LHU
            default: FinalData = ReadData;
        endcase
    end
endmodule