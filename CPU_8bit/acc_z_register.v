`timescale 1ns / 1ps

module acc_z_register (
    input  wire       clk,
    input  wire       reset,
    input  wire       load,
    input  wire [7:0] data_in,
    output reg  [7:0] acc,
    output reg        z
);


    // Synchronous active-high reset has highest priority.
    // Z is updated only when a new value is written to ACC.
    always @(posedge clk) begin
        if (reset) begin
            acc <= 8'h00;
            z   <= 1'b1;
        end
        else if (load) begin
            acc <= data_in;
            z   <= (data_in == 8'h00);
        end
        // With load = 0, ACC and Z retain their previous values.
    end

endmodule