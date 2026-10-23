`timescale 1ns / 1ps

module cpu_top (
    input  wire       clk,
    input  wire       reset,
    output wire [7:0] q,
    output wire       z,
    output wire [3:0] pc
);

    // Instruction fields and datapath connections
    wire [11:0] instruction;
    wire [3:0]  opcode;
    wire [7:0]  operand;
    wire [7:0]  alu_result;
    wire        acc_load;

    assign opcode  = instruction[11:8];
    assign operand = instruction[7:0];

    // Program Counter: increment on every rising edge
    pc4 pc_inst (
        .clk   (clk),
        .reset (reset),
        .pc    (pc)
    );

    // Program ROM: combinational instruction fetch
    program_rom rom_inst (
        .address     (pc),
        .instruction (instruction)
    );

    // Control Unit: enable ACC for supported opcodes
    control_unit control_inst (
        .opcode   (opcode),
        .acc_load (acc_load)
    );

    // ALU: compute selected 8-bit operation
    alu8 alu_inst (
        .acc     (q),
        .operand (operand),
        .opcode  (opcode),
        .result  (alu_result)
    );

    // ACC and Z: update synchronously at rising clock edge
    acc_z_register registers_inst (
        .clk     (clk),
        .reset   (reset),
        .load    (acc_load),
        .data_in (alu_result),
        .acc     (q),
        .z       (z)
    );

endmodule