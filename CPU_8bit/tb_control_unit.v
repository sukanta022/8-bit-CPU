`timescale 1ns / 1ps

module tb_control_unit;

    // Input signal
    reg [3:0] opcode;

    // Output signal
    wire acc_load;

    // Testbench variables
    reg expected_load;
    integer errors;
    integer i;

    // DUT: Design Under Test
    control_unit uut (
        .opcode   (opcode),
        .acc_load (acc_load)
    );

    // Task to check Control Unit output
    task check;
        input [3:0] test_opcode;
        input       test_expected;

        begin
            opcode        = test_opcode;
            expected_load = test_expected;

            #10;

            if (acc_load !== expected_load) begin

                $display("FAIL: OPCODE=%h LOAD=%b EXPECTED=%b",
                         opcode, acc_load, expected_load);

                errors = errors + 1;

            end
            else begin

                $display("PASS: OPCODE=%h LOAD=%b",
                         opcode, acc_load);

            end
        end
    endtask

    // Main test sequence
    initial begin

        opcode        = 4'h0;
        expected_load = 1'b0;
        errors        = 0;

        $display("========================================");
        $display("        CONTROL UNIT TESTBENCH");
        $display("========================================");

        // Test all 16 possible opcodes
        for (i = 0; i < 16; i = i + 1) begin

            case (i)

                1, 2, 6, 7, 8: begin
                    check(i, 1'b1);
                end

                default: begin
                    check(i, 1'b0);
                end

            endcase

        end

        $display("========================================");

        if (errors == 0) begin

            $display("ALL CONTROL UNIT TESTS PASSED!");

        end
        else begin

            $display("FAILED: %0d test(s)", errors);

        end

        $display("========================================");

        $finish;

    end

endmodule