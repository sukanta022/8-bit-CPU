`timescale 1ns / 1ps

module tb_alu8;

    // Inputs to DUT
    reg  [7:0] acc;
    reg  [7:0] operand;
    reg  [3:0] opcode;

    // Output from DUT
    wire [7:0] result;

    // Testbench variables
    reg [7:0] expected_result;
    integer errors;

    // Device Under Test (DUT)
    alu8 uut (
        .acc     (acc),
        .operand (operand),
        .opcode  (opcode),
        .result  (result)
    );

    // Apply inputs and verify output
    task check;
        input [3:0] test_opcode;
        input [7:0] test_acc;
        input [7:0] test_operand;
        input [7:0] test_expected;

        begin
            opcode          = test_opcode;
            acc             = test_acc;
            operand         = test_operand;
            expected_result = test_expected;

            #10;

            if (result !== expected_result) begin
                $display("FAIL: OP=%h ACC=%h IMM=%h RESULT=%h EXPECTED=%h",
                         opcode, acc, operand, result, expected_result);

                errors = errors + 1;
            end
            else begin
                $display("PASS: OP=%h ACC=%h IMM=%h RESULT=%h",
                         opcode, acc, operand, result);
            end
        end
    endtask

    // Main test sequence
    initial begin
        acc             = 8'h00;
        operand         = 8'h00;
        opcode          = 4'h0;
        expected_result = 8'h00;
        errors          = 0;

        $display("========================================");
        $display("         8-BIT ALU TESTBENCH");
        $display("========================================");

        // Appendix B: Set 2 instruction sequence
        check(4'h1, 8'h00, 8'h55, 8'h55);   // LDI 0x55
        check(4'h6, 8'h55, 8'hFF, 8'hAA);   // XOR 0xFF
        check(4'h7, 8'hAA, 8'h00, 8'h55);   // NOT
        check(4'h8, 8'h55, 8'h00, 8'hAA);   // SHL
        check(4'h2, 8'hAA, 8'h56, 8'h00);   // ADD: carry discarded
        check(4'h6, 8'h00, 8'h81, 8'h81);   // XOR 0x81
        check(4'h8, 8'h81, 8'h00, 8'h02);   // SHL: MSB discarded

        // Additional test cases
        check(4'h2, 8'h3C, 8'h0F, 8'h4B);   // Normal ADD
        check(4'h7, 8'hFF, 8'h00, 8'h00);   // NOT all ones
        check(4'h8, 8'h80, 8'h00, 8'h00);   // SHL overflow
        check(4'h0, 8'hA5, 8'hFF, 8'hA5);   // NOP
        check(4'h3, 8'h5A, 8'h01, 8'h5A);   // Unsupported opcode

        $display("========================================");

        if (errors == 0) begin
            $display("ALL 8-BIT ALU TESTS PASSED!");
        end
        else begin
            $display("FAILED: %0d test(s)", errors);
        end

        $display("========================================");
        $finish;
    end

endmodule