`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:22 11/23/2013 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(PCWriteCond, BranchOut, PCWrite, mux6out, PCAddress, OpCode, clk, reset);

input [31:0] mux6out;
input PCWriteCond, BranchOut, PCWrite, clk, reset;
output reg [31:0] PCAddress;
output reg [5:0] OpCode;
wire and1out, or1out;
wire [31:0] Instruction;

and (and1out, BranchOut, PCWriteCond);
or (or1out, and1out, PCWrite);
IMem instrMemory(PCAddress, Instruction);

initial begin
PCAddress = 0;
end

always @ (Instruction)
OpCode = Instruction[31:26];


always @ (posedge clk or posedge reset) begin
	if (reset) begin
		PCAddress = 0;
	end else begin
		if (or1out == 1'b1) begin
			PCAddress = mux6out;
		end else begin
			PCAddress = PCAddress;
		end
	end
	
end


endmodule
