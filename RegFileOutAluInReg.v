`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:08:13 11/23/2013 
// Design Name: 
// Module Name:    RegFileOutAluInReg 
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
module RegFileOutAluInReg(A, B, Areg, Breg, clk, reset);

input clk, reset;
input [31:0] A, B;
output reg [31:0] Areg, Breg;

always @ (posedge clk or posedge reset) begin
	if (reset) begin
	Areg <= 0;
	Breg <= 0;
	end else begin
	Areg <= A;
	Breg <= B;
	end
end

endmodule
