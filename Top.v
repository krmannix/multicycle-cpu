`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:21:50 11/23/2013 
// Design Name: 
// Module Name:    Top 
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
module Top(clk, reset);

input clk, reset;
wire PCWriteCond, PCWrite, IorD, MemRead, MemWrite, MemtoReg, IRWrite, ALUSrcA, 
RegWrite, RegDst, BranchOut, ResultOrOut, ReadOther, TypeOfMemAddress, ShouldClear, JALCTL, JCTL;
wire [1:0] ALUSrcB, PCSource, ALUOp;
wire [2:0] ALUCTLline;
wire [31:0] PCAddress, mux3out, mux5inZE, mux5inSE, ALUOut, 
MemRegOut, A, B, Areg, Breg, ALUInA, ALUInB, ALUResult, mux6out, mux7out, 
WriteMemAddress, AddOneOut, JALMuxOut; 
wire [4:0] Instr25to21, Instr20to16, mux2out, mux8out, mux9out, mux_31_out;
wire [5:0] Instr31to26, OpCode;
wire [15:0] Instr15to0;

// IF
ProgramCounter PC1(PCWriteCond, BranchOut, PCWrite, mux6out, PCAddress, OpCode, clk, reset);
BreakUpInstr InstrReg(WriteMemAddress, PCAddress, Areg, Instr31to26, Instr25to21, Instr20to16, 
								Instr15to0, MemRegOut, MemWrite, IRWrite, clk, reset); // IF/ID
OneBitMux mux10(mux5inZE, ALUResult, TypeOfMemAddress, WriteMemAddress);
// ID
OneBitMux #(5) mux8(Instr25to21, Instr20to16, ReadOther, mux8out);
OneBitMux #(5) mux9(Instr20to16, Instr15to0[15:11], ReadOther, mux9out);
Controller Control(OpCode, clk, reset, MemRead, IorD, IRWrite, PCWrite, RegDst, RegWrite, 
MemtoReg, PCWriteCond, MemWrite, ZeroExtendCTL, BranchCTL, ALUSrcB, ALUOp, PCSource, ALUSrcA, 
ResultOrOut, ReadOther, BranchOut, TypeOfMemAddress, ShouldClear, JALCTL, JCTL);

OneBitMux #(5) mux_31(Instr25to21, 5'b11111, JALCTL, mux_31_out);
OneBitMux #(5) mux2(mux_31_out, Instr15to0[15:11], RegDst, mux2out);

OneBitMux mux3(mux7out, MemRegOut, MemtoReg, mux3out);
new_nbit_register_file regFile(mux3out, A, B, mux8out, mux9out, mux2out, RegWrite, clk);
RegFileOutAluInReg regReg(A, B, Areg, Breg, clk, reset); // ID/EX

// EX
ZeroExtendBlock zeroExtend(Instr15to0, mux5inZE, ZeroExtendCTL);
add_one Add0(mux5inZE, AddOneOut);
OneBitMux JALMux(mux5inZE, AddOneOut, JCTL, JALMuxOut);
SignExtendBlock signExtend(Instr15to0, mux5inSE);
OneBitMux mux4(PCAddress, Areg, ALUSrcA, ALUInA);
TwoBitMux mux5(Breg, 32'b00000000000000000000000000000001, mux5inSE, JALMuxOut, ALUSrcB, ALUInB);
ALUControl aluctl(Instr31to26, ALUOp, ALUCTLline);
ALU theALU(ALUResult, ALUInA, ALUInB, ALUCTLline, ShouldClear);
ALUReg ALUreg(ALUResult, ALUOut, clk, reset); // EX/MEM
OneBitMux mux7(ALUOut, ALUResult,ResultOrOut, mux7out);
// MEM

TwoBitMux mux6(ALUResult, ALUOut, {Instr31to26, Instr25to21, Instr20to16, Instr15to0}, 
						32'b00000000000000000000000000000000, PCSource, mux6out);
BranchLogic branches(ALUOut, Instr31to26, BranchCTL, BranchOut);

endmodule
