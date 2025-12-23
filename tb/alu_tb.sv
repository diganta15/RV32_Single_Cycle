module tb_top();
    logic clk;
    logic reset;
    logic [31:0] WriteData, DataAdr;
    logic MemWrite;
    logic Ecall, Ebreak;

    top dut (
        .clk(clk),
        .reset(reset),
        .WriteData(WriteData),
        .DataAdr(DataAdr),
        .MemWrite(MemWrite),
        .Ecall(Ecall),
        .Ebreak(Ebreak)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        // Output file
        $dumpfile("cpu_wave.vcd");
        $dumpvars(0, tb_top);

        reset = 1; #22; reset = 0;
        
        // Wait for ECALL
        wait(Ecall == 1);
        
        $display("----------------------------------------");
        $display("ECALL detected at time %0t. Simulation Succeeded!", $time);
        $display("----------------------------------------");
        $finish;
    end
endmodulemodule tb_top();
    logic clk;
    logic reset;
    logic [31:0] WriteData, DataAdr;
    logic MemWrite;
    logic Ecall, Ebreak;

    top dut (
        .clk(clk),
        .reset(reset),
        .WriteData(WriteData),
        .DataAdr(DataAdr),
        .MemWrite(MemWrite),
        .Ecall(Ecall),
        .Ebreak(Ebreak)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        // Output file
        $dumpfile("cpu_wave.vcd");
        $dumpvars(0, tb_top);

        reset = 1; #22; reset = 0;
        
        // Wait for ECALL
        wait(Ecall == 1);
        
        $display("----------------------------------------");
        $display("ECALL detected at time %0t. Simulation Succeeded!", $time);
        $display("----------------------------------------");
        $finish;
    end
endmodule