`timescale 1ns / 1ps

module tb_basic_gates;

    reg a, b;

    wire and_out;
    wire or_out;
    wire xor_out;
    wire not_out;
	 
	 
    // DUT: Design Under Test
    basic_gates uut (
        .a(a),
        .b(b),
        .and_out(and_out),
        .or_out(or_out),
        .xor_out(xor_out),
        .not_out(not_out)
    );

    // Task to check gate outputs
    task check;
        input test_a, test_b;

        begin
            a = test_a;
            b = test_b;

            #10;
				
            if (
                and_out !== (a & b) ||
                or_out  !== (a | b) ||
                xor_out !== (a ^ b) ||
                not_out !== (~a)
            ) begin
                $display("FAIL: A=%b B=%b", a, b);
                $finish;
            end
				else begin
                $display(
                    "PASS: A=%b B=%b AND=%b OR=%b XOR=%b NOT=%b",
                    a, b, and_out, or_out, xor_out, not_out
                );
            end
        end
    endtask

    // Main test sequence
    initial begin
        $display("Basic Gates Testbench");

        check(1'b0, 1'b0);
        check(1'b0, 1'b1);
        check(1'b1, 1'b0);
        check(1'b1, 1'b1);

        $display("All Basic Gate Tests Passed!");

        $finish;
    end

endmodule