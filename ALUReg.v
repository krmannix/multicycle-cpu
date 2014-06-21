`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:16 11/23/2013 
// Design Name: 
// Module Name:    ALUReg 
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
module ALUReg(ALUResult, ALUOut, clk, reset);

input clk, reset;
input [31:0] ALUResult;
output reg [31:0] ALUOut;

always @ (posedge clk or posedge reset) begin
	if (reset) begin
	ALUOut = 0;
	end else begin
	ALUOut = ALUResult;
	end
end


endmodule
