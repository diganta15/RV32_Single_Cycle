module dmem(input logic clk, we,
            input logic [31:0] a, wd,
            input logic [2:0] funct3, // New Input: To know Size (Byte/Half/Word)
            output logic [31:0] rd );

    logic [31:0] RAM[0:63];
    logic [31:0] word_data;
    logic [31:0] write_val;

    // Read the full word first
    assign rd = RAM[a[31:2]];

    // Store Logic
    always_ff @(posedge clk) begin
        if(we) begin
            word_data = RAM[a[31:2]]; // Read current word
            
            // Modify specific bits based on funct3 (SB, SH, SW)
            case(funct3)
                3'b000: begin // SB (Store Byte)
                    case(a[1:0])
                        2'b00: write_val = {word_data[31:8],  wd[7:0]};
                        2'b01: write_val = {word_data[31:16], wd[7:0], word_data[7:0]};
                        2'b10: write_val = {word_data[31:24], wd[7:0], word_data[15:0]};
                        2'b11: write_val = {wd[7:0], word_data[23:0]};
                    endcase
                end
                3'b001: begin // SH (Store Halfword)
                    case(a[1]) // Alignment bit
                        1'b0: write_val = {word_data[31:16], wd[15:0]};
                        1'b1: write_val = {wd[15:0], word_data[15:0]};
                    endcase
                end
                default: write_val = wd; // SW (Store Word)
            endcase
            
            RAM[a[31:2]] <= write_val;
        end
    end
endmodule