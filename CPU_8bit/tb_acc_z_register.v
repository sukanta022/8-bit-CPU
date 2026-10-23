`timescale 1ns / 1ps

module tb_acc_z_register;

    // DUT input signals
    reg        clk;
    reg        reset;
    reg        load;
    reg  [7:0] data_in;

    // DUT output signals
    wire [7:0] acc;
    wire       z;

    // Testbench variables
    integer errors;

    // DUT: Design Under Test
    acc_z_register uut (
        .clk     (clk),
        .reset   (reset),
        .load    (load),
        .data_in (data_in),
        .acc     (acc),
        .z       (z)
    );

    // Clock generation: 10 ns period
    always #5 clk = ~clk;

   // Check ACC and Zero Flag against expected values
    task check;
        input [7:0] expected_acc;
        input       expected_z;

        begin
            if ((acc !== expected_acc) || (z !== expected_z)) begin
                $display("FAIL: TIME=%0t ACC=%h Z=%b EXPECTED_ACC=%h EXPECTED_Z=%b",
                         $time, acc, z, expected_acc, expected_z);
                errors = errors + 1;
            end
            else begin
                $display("PASS: TIME=%0t ACC=%h Z=%b",
                         $time, acc, z);
            end
        end
    endtask

    // Apply inputs at falling edge and verify after rising edge
    task step;
        input       test_reset;
        input       test_load;
        input [7:0] test_data;
        input [7:0] expected_acc;
        input       expected_z;

        begin
            @(negedge clk);
            reset   = test_reset;
            load    = test_load;
            data_in = test_data;

            @(posedge clk);
            #1;
            check(expected_acc, expected_z);
        end
    endtask

    // Main test sequence
    initial begin
        clk     = 1'b0;
        reset   = 1'b1;
        load    = 1'b0;
        data_in = 8'hFF;
        errors  = 0;

        $display("========================================");
        $display("      ACC AND Z REGISTER TESTBENCH");
        $display("========================================");

        // Test 1: Synchronous active-high reset
        @(posedge clk);
        #1;
        check(8'h00, 1'b1);

        // Test 2: Load nonzero value and clear Z
        step(1'b0, 1'b1, 8'h55, 8'h55, 1'b0);

        // Test 3: Hold ACC and Z even when data_in changes
        step(1'b0, 1'b0, 8'h00, 8'h55, 1'b0);

        // Test 4: Load zero and set Z
        step(1'b0, 1'b1, 8'h00, 8'h00, 1'b1);

        // Test 5: Hold zero ACC and asserted Z
        step(1'b0, 1'b0, 8'hAA, 8'h00, 1'b1);

        // Test 6: Load nonzero value and clear Z again
        step(1'b0, 1'b1, 8'hAA, 8'hAA, 1'b0);

        // Test 7: Synchronous reset does not act before clock edge
        @(negedge clk);
        reset   = 1'b1;
        load    = 1'b1;
        data_in = 8'hFF;

       #1;
        check(8'hAA, 1'b0);

        // Test 8: Reset has priority over load at rising edge
        @(posedge clk);
        #1;
        check(8'h00, 1'b1);

        // Test 9: Hold reset values when load is disabled
        step(1'b0, 1'b0, 8'h77, 8'h00, 1'b1);

        // Test 10: Resume loading after reset
        step(1'b0, 1'b1, 8'h02, 8'h02, 1'b0);

        $display("========================================");

        if (errors == 0) begin
            $display("ALL ACC AND Z REGISTER TESTS PASSED!");
        end
        else begin
            $display("FAILED: %0d test(s)", errors);
        end

        $display("========================================");
        $finish;
    end

endmodule