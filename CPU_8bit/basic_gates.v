`timescale 1ns / 1ps

module basic_gates(
    input  wire a,
    input  wire b,
    output wire and_out,
    output wire or_out,
    output wire xor_out,
    output wire not_out
);

    // Gate-level implementation
    and g1(and_out, a, b);
    or  g2(or_out,  a, b);
    xor g3(xor_out, a, b);
    not g4(not_out, a);

endmodule
