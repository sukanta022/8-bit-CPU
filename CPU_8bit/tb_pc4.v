`timescale 1ns / 1ps

module tb_pc4;

    // Input signals
    reg clk;
    reg reset;

    // Output signal
    wire [3:0] pc;

    // Testbench variables
    integer errors;
    integer i;

    // DUT: Design Under Test
    pc4 uut (
        .clk   (clk),
        .reset (reset),
        .pc    (pc)
    );

    // Clock generation: 10 ns period
    always #5 clk = ~clk;

    // Task to check Program Counter output
    task check_pc;
        input [3:0] expected_pc;

        begin
            if (pc !== expected_pc) begin
                $display("FAIL: TIME=%0t PC=%h EXPECTED=%h",
                         $time, pc, expected_pc);

                errors = errors + 1;
            end
            else begin
                $display("PASS: TIME=%0t PC=%h",
                         $time, pc);
            end
        end
    endtask

    // Main test sequence
    initial begin

        clk    = 1'b0;
        reset  = 1'b1;
        errors = 0;

        $display("========================================");
        $display("       4-BIT PC TESTBENCH");
        $display("========================================");

        // Test 1: Synchronous reset
        @(posedge clk);
        #1;
        check_pc(4'h0);

        // Release reset at falling edge
        @(negedge clk);
        reset = 1'b0;

        // Test 2: PC increment and wrap-around
        for (i = 1; i <= 16; i = i + 1) begin

            @(posedge clk);
            #1;

            check_pc(i % 16);

        end

        // Test 3: Reset while PC is zero
        @(negedge clk);
        reset = 1'b1;

        #1;
        check_pc(4'h0);

        @(posedge clk);
        #1;
        check_pc(4'h0);

        // Test 4: Resume counting
        @(negedge clk);
        reset = 1'b0;

        @(posedge clk);
        #1;
        check_pc(4'h1);

        // Test 5: Synchronous reset at nonzero PC
        @(negedge clk);
        reset = 1'b1;

        #1;
        check_pc(4'h1);

        @(posedge clk);
        #1;
        check_pc(4'h0);

        // Final test summary
        $display("========================================");

        if (errors == 0) begin
            $display("ALL 4-BIT PC TESTS PASSED!");
        end
        else begin
            $display("FAILED: %0d test(s)", errors);
        end

        $display("========================================");

        $finish;

    end

endmodule