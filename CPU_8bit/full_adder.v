`timescale 1ns / 1ps

module full_adder (
    input  wire a,
    input  wire b,
    input  wire cin,

    output wire sum,
    output wire cout
);

    // Internal wires
    wire xor_ab;
    wire and_ab;
    wire and_cin;

    // Sum = A XOR B XOR Cin
    xor g1(xor_ab, a, b);
    xor g2(sum, xor_ab, cin);

    // Cout = (A AND B) OR (Cin AND (A XOR B))
    and g3(and_ab, a, b);
    and g4(and_cin, xor_ab, cin);
    or  g5(cout, and_ab, and_cin);

endmodule