`timescale 1ns / 1ps

module program_rom (
    input  wire [3:0]  address,
    output wire [11:0] instruction
);

    // 16 locations, each 12 bits wide
    reg [11:0] rom [0:15];

    // Initialize ROM with Appendix B Set 2 program
    initial begin

        rom[0]  = 12'h155;    // LDI 0x55
        rom[1]  = 12'h6FF;    // XOR 0xFF
        rom[2]  = 12'h700;    // NOT
        rom[3]  = 12'h800;    // SHL
        rom[4]  = 12'h256;    // ADD 0x56
        rom[5]  = 12'h681;    // XOR 0x81
        rom[6]  = 12'h800;    // SHL

        // Unused addresses contain NOP
        rom[7]  = 12'h000;
        rom[8]  = 12'h000;
        rom[9]  = 12'h000;
        rom[10] = 12'h000;
        rom[11] = 12'h000;
        rom[12] = 12'h000;
        rom[13] = 12'h000;
        rom[14] = 12'h000;
        rom[15] = 12'h000;

    end

    // Combinational ROM read
    assign instruction = rom[address];

endmodule