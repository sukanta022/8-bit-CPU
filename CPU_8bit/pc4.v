`timescale 1ns / 1ps

module pc4 (
    input  wire       clk,
    input  wire       reset,
    output reg  [3:0] pc
);

    // Synchronous active-high reset
    // PC increments on every rising clock edge

    always @(posedge clk) begin

        if (reset) begin
            pc <= 4'b0000;
        end
        else begin
            pc <= pc + 4'd1;
        end

    end

endmodule