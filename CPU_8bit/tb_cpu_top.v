`timescale 1ns / 1ps

module tb_cpu_top;

    // DUT input signals
    reg clk;
    reg reset;

    // DUT output signals
    wire [7:0] q;
    wire       z;
    wire [3:0] pc;

    // Testbench variables
    integer errors;


    // DUT: Design Under Test
    cpu_top uut (
        .clk   (clk),
        .reset (reset),
        .q     (q),
        .z     (z),
        .pc    (pc)
    );

    // Clock generation: 10 ns period
    always #5 clk = ~clk;

    // Task to verify CPU outputs
    task check;
        input [3:0] expected_pc;
        input [7:0] expected_acc;
        input       expected_z;

        begin
            if ((pc !== expected_pc) ||
                (q  !== expected_acc) ||
                (z  !== expected_z)) begin

                $display("FAIL: TIME=%0t PC=%h ACC=%h Z=%b EXPECTED_PC=%h EXPECTED_ACC=%h EXPECTED_Z=%b",
                         $time, pc, q, z,
                         expected_pc, expected_acc, expected_z);

                errors = errors + 1;

            end
            else begin

                $display("PASS: TIME=%0t PC=%h ACC=%h Z=%b",
                         $time, pc, q, z);

            end
        end
    endtask

    // Task to execute one instruction
    task step;
        input [3:0] expected_pc;
        input [7:0] expected_acc;
        input       expected_z;

        begin
            @(posedge clk);
            #1;

            check(expected_pc, expected_acc, expected_z);
        end
    endtask

    // Main test sequence
    initial begin

        clk    = 1'b0;
        reset  = 1'b1;
        errors = 0;

        $display("========================================");
        $display("       SET 2 CPU TESTBENCH");
        $display("========================================");

        // Cycle 0: Synchronous active-high reset
        @(posedge clk);
        #1;
        check(4'h0, 8'h00, 1'b1);

        // Release reset at falling edge
        @(negedge clk);
        reset = 1'b0;

        // Cycle 1: LDI 0x55
        step(4'h1, 8'h55, 1'b0);

        // Cycle 2: XOR 0xFF
        step(4'h2, 8'hAA, 1'b0);

        // Cycle 3: NOT ACC
        step(4'h3, 8'h55, 1'b0);

        // Cycle 4: SHL ACC
        step(4'h4, 8'hAA, 1'b0);

        // Cycle 5: ADD 0x56
        step(4'h5, 8'h00, 1'b1);

        // Cycle 6: XOR 0x81
        step(4'h6, 8'h81, 1'b0);

        // Cycle 7: SHL ACC
        step(4'h7, 8'h02, 1'b0);

        $display("========================================");

        if (errors == 0) begin

            $display("ALL SET 2 CPU TESTS PASSED!");

        end
        else begin

            $display("FAILED: %0d test(s)", errors);

        end

        $display("========================================");

        $finish;

    end

endmodule