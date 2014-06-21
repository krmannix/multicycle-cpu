`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:26 11/23/2013 
// Design Name: 
// Module Name:    BranchLogic 
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
module BranchLogic(ALUResult, OpCode, BranchCTL, BranchOut);

input BranchCTL;
input [5:0] OpCode;
input [31:0] ALUResult;
output reg BranchOut;

always @ (BranchCTL) begin
	if (BranchCTL == 1'b1) begin
		if (ALUResult == 0 && OpCode == 6'b100000) begin // BEQ
			BranchOut = 1;
		end else if (ALUResult != 0 && OpCode == 6'b100001) begin //BNE
			BranchOut = 1;
		end else if (ALUResult[31] == 1 && OpCode == 6'b100010) begin // BLE
			BranchOut = 1;
		end else if ((ALUResult[31] == 1 || ALUResult == 0) && OpCode == 6'b100011) begin // BLE
			BranchOut = 1;
		end else begin
			BranchOut = 0;
		end
	end else begin
		BranchOut = 0;
	end
end




endmodule
