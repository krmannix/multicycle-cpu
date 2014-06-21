`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:59:50 11/25/2013 
// Design Name: 
// Module Name:    Test_Top2 
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
module Test_Top2(clk, reset);

input clk, reset;
wire or1_out, and1_out, PCWriteCond, PCWrite, IorD, MemRead, MemWrite, MemtoReg, IRWrite, ALUSrcA, RegWrite, RegDst, BranchOut;
wire [1:0] ALUSrcB, PCSource, ALUOp;
wire [2:0] ALUCTLline;
wire [31:0] PCAddress, MemAddress, mux3out, mux5inZE, mux5inSE, ALUOut, Instruction, 
RegMemData, A, B, Areg, Breg, ALUInA, ALUInB, ALUResult, mux6out, MemData; 
wire [4:0] Instr25to21, Instr20to16, mux2out;
wire [5:0] Instr31to26;
wire [15:0] Instr15to0;

and and1(and1_out, PCWriteCond, BranchOut);
or or1(or1_out, and1_out, PCWrite);

ProgramCounter_2 PC2(or1_out, mux6out, PCAddress, clk, reset);
IMem InstructionMemory(PCAddress, Instruction);
DMem DynamicMemory(Breg, MemData, ALUOut, MemWrite, clk);

MemoryDataRegister memDataReg(MemData, RegMemData, clk, reset);




endmodule
