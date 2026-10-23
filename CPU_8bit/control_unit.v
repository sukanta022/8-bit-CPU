`timescale 1ns / 1ps

module control_unit (
    input  wire [3:0] opcode,
    output reg        acc_load
);

    // Assert ACC load only for the five Set 2 instructions
    always @(*) begin
        case (opcode)

            4'h1: acc_load = 1'b1;  // LDI
            4'h2: acc_load = 1'b1;  // ADD
            4'h6: acc_load = 1'b1;  // XOR
            4'h7: acc_load = 1'b1;  // NOT
            4'h8: acc_load = 1'b1;  // SHL

            default: acc_load = 1'b0;  // NOP / unsupported

        endcase
    end

endmodule