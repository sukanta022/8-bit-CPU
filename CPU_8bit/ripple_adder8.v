`timescale 1ns / 1ps

module ripple_adder8 (
    input  wire [7:0] a,
    input  wire [7:0] b,
    output wire [7:0] sum
);

    // Carry signals between Full Adders
    wire [8:0] carry;

    // Initial carry-in is zero
    assign carry[0] = 1'b0;

    // Bit 0
    full_adder FA0 (
        .a(a[0]),
        .b(b[0]),
        .cin(carry[0]),
        .sum(sum[0]),
        .cout(carry[1])
    );

    // Bit 1
    full_adder FA1 (
        .a(a[1]),
        .b(b[1]),
        .cin(carry[1]),
        .sum(sum[1]),
        .cout(carry[2])
    );

    // Bit 2
    full_adder FA2 (
        .a(a[2]),
        .b(b[2]),
        .cin(carry[2]),
        .sum(sum[2]),
        .cout(carry[3])
    );

    // Bit 3
    full_adder FA3 (
        .a(a[3]),
        .b(b[3]),
        .cin(carry[3]),
        .sum(sum[3]),
        .cout(carry[4])
    );

    // Bit 4
    full_adder FA4 (
        .a(a[4]),
        .b(b[4]),
        .cin(carry[4]),
        .sum(sum[4]),
        .cout(carry[5])
    );

    // Bit 5
    full_adder FA5 (
        .a(a[5]),
        .b(b[5]),
        .cin(carry[5]),
        .sum(sum[5]),
        .cout(carry[6])
    );

    // Bit 6
    full_adder FA6 (
        .a(a[6]),
        .b(b[6]),
        .cin(carry[6]),
        .sum(sum[6]),
        .cout(carry[7])
    );

    // Bit 7
    full_adder FA7 (
        .a(a[7]),
        .b(b[7]),
        .cin(carry[7]),
        .sum(sum[7]),
        .cout(carry[8])
    );
    // carry[8] is discarded (8-bit result)

endmodule