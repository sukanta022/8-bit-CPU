`timescale 1ns / 1ps

module tb_full_adder;

    reg a;
    reg b;
    reg cin;

    wire sum;
    wire cout;

    integer errors;
    reg [1:0] expected_result;

    // DUT: Design Under Test
    full_adder uut (
        .a(a),
        .b(b),
        .cin(cin),
        .sum(sum),
        .cout(cout)
    );

    // Task to check Full Adder outputs
    task check;
        input test_a;
        input test_b;
        input test_cin;

        begin
            a   = test_a;
            b   = test_b;
            cin = test_cin;

            #10;

            expected_result = {1'b0, a}
                            + {1'b0, b}
                            + {1'b0, cin};

            if ({cout, sum} !== expected_result) begin
                $display(
                    "FAIL: a=%b b=%b cin=%b sum=%b cout=%b",
                    a, b, cin, sum, cout
                );

                errors = errors + 1;
            end
            else begin
                $display(
                    "PASS: a=%b b=%b cin=%b sum=%b cout=%b",
                    a, b, cin, sum, cout
                );
            end
        end
    endtask

    // Main test sequence
    initial begin

        errors = 0;

        $display("=== Full Adder Testbench ===");

        check(1'b0, 1'b0, 1'b0);
        check(1'b0, 1'b0, 1'b1);
        check(1'b0, 1'b1, 1'b0);
        check(1'b0, 1'b1, 1'b1);

        check(1'b1, 1'b0, 1'b0);
        check(1'b1, 1'b0, 1'b1);
        check(1'b1, 1'b1, 1'b0);
        check(1'b1, 1'b1, 1'b1);

        if (errors == 0) begin
            $display("ALL FULL ADDER TESTS PASSED!");
        end
        else begin
            $display("FAILED: %0d test(s)", errors);
        end

        $finish;
    end

endmodule