
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:18:55 10/23/2013 
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
module Controller(OpCode, clk, reset, 
MemRead, IorD, IRWrite, PCWrite, RegDst, RegWrite, 
MemtoReg, PCWriteCond, MemWrite, ZeroExtendCTL, BranchCTL,
ALUSrcB, ALUOp, PCSource, ALUSrcA, ResultOrOut, ReadOther, BranchOutController, 
TypeOfMemAddress, ShouldClear, JALCTL, JCTL);

input [5:0] OpCode;
input clk, reset, BranchOutController;
reg [4:0] state, next_state;
reg test;
output reg [1:0] ALUSrcB, ALUOp, PCSource;
output reg ALUSrcA, MemRead, IorD, IRWrite, 
PCWrite, RegDst, RegWrite, MemtoReg, PCWriteCond, JALCTL,
MemWrite, ZeroExtendCTL, BranchCTL, ResultOrOut, ReadOther, TypeOfMemAddress, 
ShouldClear, JALCTL, JCTL;

initial begin
state = 0;
next_state = 1;
MemRead = 0;
ALUSrcA = 0;
IorD = 0;
IRWrite = 0;
ALUSrcB = 0;
ALUOp = 0;
PCWrite = 0;
PCSource = 0;	
ZeroExtendCTL = 0;
BranchCTL = 0;
MemWrite = 0;
RegWrite = 0;
PCWriteCond = 0;
MemtoReg = 0;
RegDst = 0;
ReadOther = 0;
TypeOfMemAddress = 0;
ShouldClear = 0;
JALCTL = 0;
JCTL = 0;
end

always @ (posedge clk)
state = next_state;

always @ (posedge state or posedge OpCode or posedge reset or posedge clk)
	if (reset) begin
   next_state = 1;
	MemRead = 0;
	ALUSrcA = 0;
	IorD = 0;
	IRWrite = 1;
	ALUSrcB = 0;
	ALUOp = 0;
	PCWrite = 0;
	PCSource = 0;	
	ZeroExtendCTL = 0;
	BranchCTL = 0;
	MemWrite = 0;
	RegWrite = 0;
	PCWriteCond = 0;
	MemtoReg = 0;
	RegDst = 0;
	ResultOrOut = 0;
	JALCTL = 0;
	JCTL = 0;
	end else
		case (state) 
			0: 
			begin		
				if (OpCode == 6'b000000) begin // NOOP
				MemRead = 1;
				ALUSrcA = 0;
				IorD = 0;
				IRWrite = 1;
				ALUSrcB = 1;
				ALUOp = 0;
				PCWrite = 0;
				PCSource = 0;	
				next_state = 0;
				ZeroExtendCTL = 0;
				BranchCTL = 0;
				RegWrite = 0;
				ResultOrOut = 0;
				JALCTL = 0;
				JCTL = 0;
				end else begin
				PCWrite = 0;
				MemRead = 1;
				ALUSrcA = 0;
				IorD = 0;
				IRWrite = 1;
				ALUSrcB = 1;
				ALUOp = 0;
				PCSource = 0;	
				next_state = 1;
				ZeroExtendCTL = 0;
				BranchCTL = 0;
				RegWrite = 0;
				ResultOrOut = 0;
				test = 0;
				JALCTL = 0;
				JCTL = 0;
				end
		   end
			1:
			begin
				PCWrite = 0; // Need this
				IRWrite = 1;
				ALUSrcA = 0;
				ALUSrcB = 3;
				ALUOp = 0;
			if (OpCode[5:3] == 3'b010) begin
					next_state = 6;
					ReadOther = 1;
				end else if (OpCode[5:3] == 3'b100) begin
					next_state = 8;
				end else if (OpCode[5:3] == 3'b000) begin
				if (OpCode[2:0] == 3'b010) begin // JAL
					ALUSrcA = 0;
					ALUSrcB = 1;
					JCTL = 1;
					next_state = 20;
				end else if (OpCode[2:0] == 3'b001) begin
					next_state = 9;
				end else begin
					next_state = 0;
				end
				end else if (OpCode[5:3] == 3'b110) begin
				ReadOther = 1;
					next_state = 13;
				end else if (OpCode[5:3] == 3'b111) begin
					if (OpCode[2:0] == 3'b110) begin // SW
					ReadOther = 1;
					next_state = 17;		
					end else if (OpCode[2:0] == 3'b101) begin
					ReadOther = 1;
					next_state = 18;
					end else begin
					next_state = 2;
					end
				end else begin
					next_state = 12;
				end
			end				
			2:
			begin
					ALUSrcA = 1;
					ALUOp = 1;
					ALUSrcB = 3;
			if (OpCode == 6'b111010) begin // LUI
					next_state = 11;
				end else begin
					if (OpCode == 6'b111011) begin // LWI
					next_state = 3;
					end else if (OpCode == 6'b111100) begin // SWI
					next_state = 5;
					end else if (OpCode == 6'b111001) begin // LI 
					
					next_state = 11;
					end
				end
			end
			3:
			begin
				MemRead = 1;
				IorD = 1;
				next_state = 4;
			end
			4:
			begin
				if (OpCode == 6'b111010) begin
					ZeroExtendCTL = 1;
				end else begin
					ZeroExtendCTL = 0;
				end
				RegDst = 0;
				RegWrite = 1;
				MemtoReg = 1;
				next_state = 12;
			end
			5:
				begin
				MemWrite = 1;
				IorD = 1;
				next_state = 12;			
			end
			6:
			begin
				ALUSrcA = 1;
				ALUSrcB = 0;
				ALUOp = 3;
				next_state = 7;
			end				
			7:
			begin
				RegDst = 0;
				RegWrite = 1;
				MemtoReg = 0;
				next_state = 12;	
			end				
			8:
			begin
				ALUSrcA = 1;
				ALUSrcB = 0;
				ALUOp = 2;
				PCWriteCond = 1;
				PCSource = 1;
				next_state = 15;
			end
			9:
			begin
				PCWrite = 1;
				RegWrite = 0;
				ALUSrcB = 3;
				PCSource = 0;
				next_state = 0;
				JCTL = 1;
			end
			10:
			begin
			ALUOp = 3;
			ALUSrcA = 1;
			if (OpCode[2:0] == 3'b010 || OpCode[2:0] == 3'b011) begin // ADD or SUB
				ALUSrcB = 2;
				next_state = 7;
			end else begin // OR and AND
				ALUSrcB = 3;
				ZeroExtendCTL = 0;
				next_state = 7;
			end			
			end
			11:
			begin
			if (OpCode == 6'b111010) begin // LUI
					ZeroExtendCTL = 1; // Load into upper part					
				end else begin
					ZeroExtendCTL = 0;
				end
				RegDst = 0;
				MemtoReg = 0;	
				RegWrite = 1;
				ResultOrOut = 1;
				if (OpCode == 6'b111001) begin // LI 
				ShouldClear = 1;
				end
				
				next_state = 12;			
			end
			12:
			begin
			MemRead = 1;
			ALUSrcA = 0;
			IorD = 0;
			IRWrite = 1;
			ALUSrcB = 1;
			ALUOp = 0;
			MemWrite = 0;
			PCSource = 0;	
			next_state = 0;
			ZeroExtendCTL = 0;
			BranchCTL = 0;
			RegWrite = 0;
			ResultOrOut = 0;
			ReadOther = 0;
			TypeOfMemAddress = 0;
			ShouldClear = 0;
			RegDst = 0;
			JALCTL = 0;
			JCTL = 0;
			if (BranchOutController == 1) begin
				PCWrite = 0;
				test = 1;
			end else begin
				PCWrite = 1;
			end
			end
			13:
			begin
			ALUSrcA = 1;
			ALUSrcB = 3;
			ZeroExtendCTL = 0;
			ALUOp = 3;
			
			next_state = 14;
			end
			14:
			begin
			RegWrite = 1;
			MemtoReg = 0;
			
			next_state = 12;
			end
			15: // If branch completed
			begin
			ALUSrcA = 0; 
			ALUSrcB = 2;
			ALUOp = 0;
			BranchCTL = 1;
			PCWriteCond = 1;
			PCSource = 0;
			if (BranchOutController == 1) begin
				next_state = 1;
			end else begin
				next_state = 12;
			end		
			end
			16: // For Jumps
			begin
			PCWrite = 0;
			test = 1;
			next_state = 0;
			end
			17: // For SW
			begin
			ALUSrcA = 1;
			ALUOp = 0;
			TypeOfMemAddress = 1;
			MemWrite = 1;
			next_state = 12;	
			end
			18: // For LW
			begin
			ALUSrcA = 1;
			ALUOp = 0;
			TypeOfMemAddress = 1;
			MemWrite = 0;
			MemtoReg = 1;
			next_state = 19;	
			end
			19: // For LW, store Value
			begin
			ALUSrcA = 1;
			ALUOp = 0;
			TypeOfMemAddress = 1;
			MemWrite = 0;
			MemtoReg = 1;
			RegWrite = 1;
			next_state = 12;	
			end
			20: // For JAL
			begin
			ALUSrcA = 0;
			ALUSrcB = 1;
			ALUOp = 0;
			next_state = 21;
			end
			21:
			begin
			RegDst = 0;
			JALCTL = 1;
			RegWrite = 1;
			MemtoReg = 0;
			ResultOrOut = 1;
			next_state = 9;
			end
		endcase
endmodule 



