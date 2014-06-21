`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:43 11/23/2013 
// Design Name: 
// Module Name:    ALUControl 
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
module ALUControl(Opcode, ALUOp, ALUCTLline);

input [5:0] Opcode;
input [1:0] ALUOp;
output reg [2:0] ALUCTLline;

always @ (*) begin
	if (ALUOp == 2'b00) begin
		ALUCTLline = 3'b010;
	end else if (ALUOp == 2'b01) begin
		if (Opcode[2:0] == 3'b011 || Opcode[2:0] == 3'b100) begin
		ALUCTLline = 3'b101;
		end else begin
		ALUCTLline = 3'b100;
		end
	end else if (ALUOp == 2'b10) begin // Branches
		ALUCTLline = 3'b011;
	end else begin
		ALUCTLline = Opcode[2:0];
	end

end


endmodule
