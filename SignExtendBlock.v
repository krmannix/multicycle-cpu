`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:30 11/23/2013 
// Design Name: 
// Module Name:    SignExtendBlock 
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
module SignExtendBlock(Imm16, Imm32);

input [15:0] Imm16;
output reg [31:0] Imm32;

always @ (*) begin
if (Imm16[15] == 1'b1) begin
Imm32 = {16'b1111111111111111, Imm16};
end else begin
Imm32 = {16'b0000000000000000, Imm16};
end
end

endmodule
