`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:13:18 11/23/2013 
// Design Name: 
// Module Name:    ZeroExtendBlock 
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
module ZeroExtendBlock(Imm16, Imm32, ZeroExtendCTL);

input [15:0] Imm16;
input ZeroExtendCTL;
output reg [31:0] Imm32;

always @ (*) begin
	if (ZeroExtendCTL == 1'b0) begin
		Imm32 = {16'b0000000000000000, Imm16};  // Everything else 
	end else begin
		Imm32 = {Imm16, 16'b0000000000000000};  // LUI
	end
end


endmodule
