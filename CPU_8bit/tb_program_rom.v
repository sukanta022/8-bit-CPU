`timescale 1ns / 1ps

module tb_program_rom;

    // Input signal
    reg [3:0] address;

    // Output signal
    wire [11:0] instruction;

    // Testbench variables
    reg [11:0] expected_instruction;
    integer errors;
    integer i;

    // DUT: Design Under Test
    program_rom uut (
        .address     (address),
        .instruction (instruction)
    );

    // Task to verify ROM output
    task check;
        input [3:0]  test_address;
        input [11:0] test_expected;

        begin
            address              = test_address;
            expected_instruction = test_expected;

            #10;

            if (instruction !== expected_instruction) begin
                $display("FAIL: ADDR=%h INSTR=%h EXPECTED=%h",
                         address, instruction, expected_instruction);

                errors = errors + 1;
            end
            else begin
                $display("PASS: ADDR=%h INSTR=%h",
                         address, instruction);
            end
        end
    endtask

    // Main test sequence
    initial begin
        address              = 4'h0;
        expected_instruction = 12'h000;
        errors               = 0;

        $display("========================================");
        $display("         PROGRAM ROM TESTBENCH");
        $display("========================================");

        // Appendix B: Set 2 instruction sequence
        check(4'h0, 12'h155);    // LDI 0x55
        check(4'h1, 12'h6FF);    // XOR 0xFF
        check(4'h2, 12'h700);    // NOT
        check(4'h3, 12'h800);    // SHL
        check(4'h4, 12'h256);    // ADD 0x56
        check(4'h5, 12'h681);    // XOR 0x81
        check(4'h6, 12'h800);    // SHL

        // Verify unused addresses contain NOP
        for (i = 7; i < 16; i = i + 1) begin
            check(i, 12'h000);
        end

        $display("========================================");

        if (errors == 0) begin
            $display("ALL PROGRAM ROM TESTS PASSED!");
        end
        else begin
            $display("FAILED: %0d test(s)", errors);
        end

        $display("========================================");

        $finish;
    end

endmodule