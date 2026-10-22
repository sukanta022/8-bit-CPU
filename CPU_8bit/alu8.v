`timescale 1ns / 1ps

module alu8 (
    input  wire [7:0] acc,
    input  wire [7:0] operand,
    input  wire [3:0] opcode,
    output reg  [7:0] result
);

    wire [7:0] add_result;

    // Reuse the 8-bit Ripple Carry Adder
    ripple_adder8 add_inst (
        .a   (acc),
        .b   (operand),
        .sum (add_result)
    );

    // Combinational ALU operations
    always @(*) begin

        case (opcode)

            4'h1: result = operand;           // LDI

            4'h2: result = add_result;        // ADD

            4'h6: result = acc ^ operand;     // XOR

            4'h7: result = ~acc;              // NOT

            4'h8: result = {acc[6:0], 1'b0}; // SHL

            default: result = acc;            // NOP

        endcase

    end

endmodule