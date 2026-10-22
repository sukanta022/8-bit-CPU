`timescale 1ns / 1ps

module tb_ripple_adder8;

    // Input signals
    reg [7:0] a;
    reg [7:0] b;

    // Output signal
    wire [7:0] sum;

    // Testbench variables
    reg [7:0] expected_sum;
    integer errors;

    // DUT: Design Under Test
    ripple_adder8 uut (
        .a   (a),
        .b   (b),
        .sum (sum)
    );

    // Task: Verify Ripple Carry Adder
    task check;
        input [7:0] test_a;
        input [7:0] test_b;

        begin
            a = test_a;
            b = test_b;

            #10;

            expected_sum = a + b;

            if (sum !== expected_sum) begin

                $display("FAIL: A=%h B=%h SUM=%h EXPECTED=%h",
                         a, b, sum, expected_sum);

                errors = errors + 1;

            end
            else begin

                $display("PASS: A=%h B=%h SUM=%h",
                         a, b, sum);

            end
        end
    endtask

    // Main test sequence
    initial begin

        a      = 8'h00;
        b      = 8'h00;
        errors = 0;

        $display("======================================");
        $display("     8-BIT RIPPLE ADDER TESTBENCH     ");
        $display("======================================");

        // Test Case 1: Zero addition
        check(8'h00, 8'h00);

        // Test Case 2: Simple addition
        check(8'h01, 8'h01);

        // Test Case 3: Carry propagation
        check(8'h0F, 8'h01);

        // Test Case 4: Multiple-bit addition
        check(8'h3C, 8'h0F);

        // Test Case 5: Alternating bits
        check(8'h55, 8'hAA);

        // Test Case 6: Overflow
        check(8'hFF, 8'h01);

        // Test Case 7: CPU Appendix B example
        check(8'hAA, 8'h56);

        // Test Case 8: Maximum inputs
        check(8'hFF, 8'hFF);

        $display("======================================");

        if (errors == 0) begin

            $display("ALL RIPPLE ADDER TESTS PASSED!");

        end
        else begin

            $display("FAILED: %0d test(s)", errors);

        end

        $display("======================================");

        $finish;

    end

endmodule