`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:56 11/23/2013 
// Design Name: 
// Module Name:    BreakUpInstr 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module BreakUpInstr(WriteMemAddress, PCAddress, Areg, Instr31to26, Instr25to21, Instr20to16, Instr15to0, MemRegOut, MemWrite, IRWrite, clk, reset);

input clk, reset, MemWrite, IRWrite;
input [31:0] WriteMemAddress, PCAddress, Areg;
output reg [31:0] MemRegOut;
wire [31:0] DMemData, Instruction;
output reg [4:0] Instr25to21, Instr20to16; 
output reg [5:0] Instr31to26; 
output reg [15:0] Instr15to0;

DMem dynamicMemory(Areg, DMemData, WriteMemAddress, MemWrite, clk);
IMem instrMemory(PCAddress, Instruction);

always @ (posedge clk or posedge reset) begin
if (IRWrite) begin
MemRegOut = DMemData;
Instr31to26 = Instruction[31:26];
Instr25to21 = Instruction[25:21];
Instr20to16 = Instruction[20:16];
Instr15to0 = Instruction[15:0];
end else begin
Instr31to26 = Instr31to26;
Instr25to21 = Instr25to21;
Instr20to16 = Instr20to16;
Instr15to0 = Instr15to0;
end
end

endmodule
